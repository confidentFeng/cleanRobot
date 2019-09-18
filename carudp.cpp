#include "carudp.h"
#include "ui_carudp.h"

carUdp::carUdp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::carUdp)
{
    ui->setupUi(this);
    init();
}

carUdp::~carUdp()
{
    delete ui;
}

// 初始化函数
void carUdp::init()
{
    m_sendCount = 0; // 初始化重发命令帧次数
    m_receSuccessFlag = false; // 初始化接收数据成功标志位

    // 扫描IPV4的主机地址
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    for (int i = 0; i < ipAddressesList.size(); ++i)
    {
        if (ipAddressesList.at(i) != QHostAddress::LocalHost && ipAddressesList.at(i).toIPv4Address())
        {
            m_ipAddress = ipAddressesList.at(i).toString();
            qDebug()<<m_ipAddress;
            break;
        }
    }
    if (m_ipAddress.isEmpty())
    {
        qDebug()<<QString::fromUtf8("主机没有网络");
    }

    // 连接HOST
    m_Socket=new QUdpSocket(this);
    connect(m_Socket,SIGNAL(readyRead()),SLOT(doProssUdpread()));

    // 连接服务器(port:8001) Qt
    m_Socket->bind(8001,QUdpSocket::ShareAddress);

    // 创建定时器
    m_timer=new QTimer(this);
    // 创建Query定时器
    m_timerToSendQueryCmd=new QTimer(this);
    // 定时信号连接-接受超时
    connect(m_timer, SIGNAL(timeout()), this, SLOT(doProssTimeout()));
    // Query定时信号连接-接受超时
    connect(m_timerToSendQueryCmd, SIGNAL(timeout()), this, SLOT(doProssTimeoutToSendQueryCmd()));
    // 5s读取一次数据
    m_timerToSendQueryCmd->start(5000);

    // TCPSendQueryCmd(); // 开机时就查询一次数据
}

// -----------------------------function------------------------------------
// UDP发送数据
void carUdp::udpSend(QByteArray data)
{
    QHostAddress serverip;

    serverip.setAddress(m_ipAddress);// 这是人为指定ip地址的方法
    m_Socket->writeDatagram(data,serverip,8002);// 向ROS source端口(8002)写数据

    serverip.setAddress(m_ipAddress);// 这是人为指定ip地址的方法
    m_Socket->writeDatagram(data,serverip,8000);// 向Qt source端口(8000)写数据
    m_timer->start(100);
}

// 发送控制命令：cmd为命令，char为数据（true发送且应答成功，false则应答失败）
bool carUdp::udpSendConCmd(qint16 cmd, char data,char data1)
{
    if(cmd==BRUSH_SPEED_SET_CMD)// 滚刷速度是2个数据位
    {
        m_sendData.resize(CON_FRAME_LENGTH+1);
        m_sendData.clear();
        m_sendData[0] = static_cast<char>(CON_QUERY_FRAME_HEAD);
        m_sendData[1] = static_cast<char>(CON_QUERY_FRAME_HEAD);
        m_sendData[2] = CON_QUERY_FRAME_INDEX;
        m_sendData[3] = CON_FRAME_LENGTH+1;
        m_sendData[4] = CON_QUERY_CMD_COUNT;
        m_sendData[5] = static_cast<char>((cmd & 0xff00) >> 8);
        m_sendData[6] = static_cast<char>((cmd & 0x00ff));
        m_sendData[7] = CON_DATA_LENGTH+1;
        m_sendData[8] = data;
        m_sendData[9] = data1;
        qint16 checkSum = 0; // 校验和
        for(int i=0;i<m_sendData.size();i++)
        {
            checkSum += static_cast<unsigned char>(m_sendData[i]);
        }
        m_sendData[10] = static_cast<char>((checkSum & 0xff00) >> 8);
        m_sendData[11] = static_cast<char>((checkSum & 0x00ff));
    }
    else  // 其它的是一个数据位
    {
        m_sendData.resize(CON_FRAME_LENGTH);
        m_sendData.clear();
        m_sendData[0] = static_cast<char>(CON_QUERY_FRAME_HEAD);
        m_sendData[1] = static_cast<char>(CON_QUERY_FRAME_HEAD);
        m_sendData[2] = CON_QUERY_FRAME_INDEX;
        m_sendData[3] = CON_FRAME_LENGTH;
        m_sendData[4] = CON_QUERY_CMD_COUNT;
        m_sendData[5] = static_cast<char>((cmd & 0xff00) >> 8);
        m_sendData[6] = static_cast<char>((cmd & 0x00ff));
        m_sendData[7] = CON_DATA_LENGTH;
        m_sendData[8] = data;
        qint16 checkSum = 0; // 校验和
        for(int i=0;i<m_sendData.size();i++)
        {
            checkSum += static_cast<unsigned char>(m_sendData[i]);
        }
        m_sendData[9] = static_cast<char>((checkSum & 0xff00) >> 8);
        m_sendData[10] = static_cast<char>((checkSum & 0x00ff));
    }

    // 发送帧
    udpSend(m_sendData);

    // 打开定时器开始计时，防止超时
    // timer->start(100);

     // 延不阻塞300ms
    return delayMsec(500);
}

// 发送地图导航点坐标数据
bool carUdp::udpSendMapxy(qint16 cmd, int data1,int data2)
{
    if(cmd==MAP_XY_SEND_CMD)// map是4个数据位
    {
        m_sendData.resize(CON_FRAME_LENGTH+3);
        m_sendData.clear();
        m_sendData[0] = static_cast<char>(CON_QUERY_FRAME_HEAD);
        m_sendData[1] = static_cast<char>(CON_QUERY_FRAME_HEAD);
        m_sendData[2] = CON_QUERY_FRAME_INDEX;
        m_sendData[3] = CON_FRAME_LENGTH+3;
        m_sendData[4] = CON_QUERY_CMD_COUNT;
        m_sendData[5] = static_cast<char>((cmd & 0xff00) >> 8);
        m_sendData[6] = static_cast<char>((cmd & 0x00ff));
        m_sendData[7] = CON_DATA_LENGTH+3;
        m_sendData[8] = static_cast<char>((data1 & 0xff00) >> 8);
        m_sendData[9] = static_cast<char>((data1 & 0x00ff));
        m_sendData[10] = static_cast<char>((data2 & 0xff00) >> 8);
        m_sendData[11] = static_cast<char>((data2 & 0x00ff));
        qint16 checkSum = 0; // 校验和
        for(int i=0;i<m_sendData.size();i++)
        {
            checkSum += static_cast<unsigned char>(m_sendData[i]);
        }
        m_sendData[12] = static_cast<char>((checkSum & 0xff00) >> 8);
        m_sendData[13] = static_cast<char>((checkSum & 0x00ff));
    }

    // 发送帧
    udpSend(m_sendData);

    // 打开定时器开始计时，防止超时
    // timer->start(100);

     // 非阻塞延时500ms
    return delayMsec(500);
}

// 发送查询指令(true发送且应答成功，false则应答失败)
bool carUdp::udpSendQueryCmd()
{
    m_sendData.resize(14);
    m_sendData.clear();
    m_sendData[0] = static_cast<char>(CON_QUERY_FRAME_HEAD);
    m_sendData[1] = static_cast<char>(CON_QUERY_FRAME_HEAD);
    m_sendData[2] = CON_QUERY_FRAME_INDEX;
    m_sendData[3] = QUERY_FRAME_LEGHTH;
    m_sendData[4] = CON_QUERY_CMD_COUNT;
    m_sendData[5] = QUERY_CMD;
    m_sendData[6] = QUERY_CMD;
    m_sendData[7] = QUERY_DATA_LENGTH;
    m_sendData[8] = static_cast<char>((QUERY_DATA_PRRP & 0xff00) >> 8);
    m_sendData[9] = static_cast<char>((QUERY_DATA_PRRP & 0x00ff));
    m_sendData[10] = static_cast<char>((QUERY_DATA_NEXT & 0xff00) >> 8);
    m_sendData[11] = static_cast<char>((QUERY_DATA_NEXT & 0x00ff));
    qint16 checkSum = 0; // 校验和
    for(int i=0;i<m_sendData.size();i++)
    {
        checkSum += static_cast<unsigned char>(m_sendData[i]);
    }
    m_sendData[12] = static_cast<char>((checkSum & 0xff00) >> 8);
    m_sendData[13] = static_cast<char>((checkSum & 0x00ff));

    // 发送帧
    udpSend(m_sendData);

    // 打开定时器开始计时，防止超时
    // timer->start(300);

    // 延时不阻塞300ms
    return delayMsec(800);
}

void carUdp::udpRecived()
{
    qDebug()<<"recived";
}

// 超时处理
void carUdp::doProssTimeout()
{
    if(m_sendCount < 3)
    {
        m_timer->stop();

        // 超时重发命令帧
        // TCPSend(sendData);
        // qDebug()<<"---timeout---";
        m_sendCount++;
    }
    else
    {
        // tanchuang
        m_timer->stop();
        m_sendCount = 0;
        // sendData.clear();
    }
}

// 5S钟查询一次数据
void carUdp::doProssTimeoutToSendQueryCmd()
{

    /*if(TCPSendQueryCmd())
    {
        // qDebug()<<"get data sucess!";
    }
    else
    {
        // qDebug()<<"get data false!";
    }*/
}


// 非阻塞延时(true接收应发成功,fals接收应答失败)
bool carUdp::delayMsec(int msec)
{
    // 接收标志清除
    m_receSuccessFlag = false;

    QTime dieTime = QTime::currentTime().addMSecs(msec);
    // 计时小于延时，且没接收正确
    while( QTime::currentTime() < dieTime && m_receSuccessFlag == false)

    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);

    if(m_receSuccessFlag == false)
    {
        // qDebug()<<"reciver:False";
        return false;
    }
    else
    {
        // qDebug()<<"reciver:True";
        return true;
    }

}

// UDP接收数据
void carUdp::doProssUdpread()
{
    qDebug() << "doProssUcpread()" << endl;

    while(m_Socket->hasPendingDatagrams())
    {
        QByteArray data;

        data.resize(static_cast<int>(m_Socket->pendingDatagramSize()));
        g_recviveDat.resize(static_cast<int>(m_Socket->pendingDatagramSize()));

        // 过滤异常接受（下位机未发送数据过来，也触发了该槽函数）
        m_Socket->readDatagram(data.data(),data.size());
        if(data.size() == 0)
            break;


        if(data.size() == 11)
        {
            int i;
            for(i=0;i<m_sendData.size();i++)
            {
                // qDebug() << static_cast<uint8_t>(data[i]) << endl;
                if(data[i] != m_sendData[i])
                    break;
            }
            if(i==m_sendData.size())
            {
                m_timer->stop(); // 计时器关闭
                m_receSuccessFlag = true;

                m_sendCount=0;
            }
        }
        // query
        else if(data.size() == 21)
        {
             // 判断预期帧长度与实际帧长度是否相等，相等则认为接受数据正确
             // if( (QUERY_FRAME_LEGHTH + sendData[11] - sendData[9]) == data.size())
             if(static_cast<uint8_t>(data[3])==21)
             {
                m_timer->stop(); // 计时器关闭
                m_receSuccessFlag = true;

                m_sendCount=0;


                g_recviveDat = data;
                //
                m_powerValue=g_recviveDat[RECV_DATA_BASE+5];

                //
                m_waterValue=g_recviveDat[RECV_DATA_BASE+6]&0x03;
                switch(m_waterValue)
                {
                    case 1:
                    {
                         m_waterValue=20;
                         break;
                    }
                    case 2:
                    {
                         m_waterValue=80;

                         break;
                    }
                default: m_waterValue=100;m_scheduleValue=1;;break;
                }
                // send signal
                emit doProseSendData(m_powerValue,m_waterValue,m_scheduleValue);
                qDebug()<<"power:"<<m_powerValue<<m_waterValue;

            }
             else
                 m_receSuccessFlag = false;
        }
        else
            m_receSuccessFlag = false;

        // qDebug()<<"receSuccess_flag = " << receSuccess_flag;
    }
}

// ----------------------电池控件------------------------------------------
// 设置电池电量
void carUdp::setPoweValue(QPoint m_vXY,QLabel *label,int value)
{
    // 设置电量值 (去掉圆角矩形的长宽2*2)
    m_powerValue = value * (POWERWITH-2*2)/100;
    // 窗口位置
    m_powerIcon_XY=m_vXY;
    // 显示电池数字电量
    label->setText(QString::number(value).append("%"));

    this->update(); // 更新绘图
}
// 绘制电池电量
void carUdp::paintPower(QWidget *parent)
{
    QPainter paint(parent);
    if(m_powerValue>=(POWERWITH-2*2)*0.2)// 若电量大于等于20% (0.2=20%)
    {
        // 画笔颜色为黑色，绘制圆角矩形(长宽为2*2)
        paint.setPen(Qt::black);
        paint.drawRoundedRect(m_powerIcon_XY.x(),m_powerIcon_XY.y(), POWERWITH, POWERHIGH, 2, 2);
        // 画刷设置为绿色
        paint.setBrush(Qt::green);
    }
    else// 若电量小于20%
    {
        // 画笔颜色为红色，绘制圆角矩形
        paint.setPen(Qt::red);
        paint.drawRoundedRect(m_powerIcon_XY.x(),m_powerIcon_XY.y(), POWERWITH, POWERHIGH, 2, 2);
        // 画刷设置为红色
        paint.setBrush(Qt::red);
    }

    // 画刷绘制矩形，来表示电量 (原型：drawRect(int x, int y, int w, int h))
    // paint.drawRect(PowerIcon_XY.x()+POWERWITH,PowerIcon_XY.y()+2*2, 1, POWERHIGH-4*2);
    if(m_powerValue!=0) // 电池为0则不画里面
    {
        paint.drawRect(m_powerIcon_XY.x()+2,m_powerIcon_XY.y()+ 2,m_powerValue, POWERHIGH-2*2);
    }
}

// ----------------------进度控件------------------------------------------
// 设置进度
void carUdp::setScheduleValue( QPoint m_vXY, QLabel *label,int value)
{
    m_scheduleIcon_XY=m_vXY;
    m_scheduleValue=value;
    label->setText(QString::number(m_scheduleValue).append("%"));
    this->update();
}
// 绘制进度
void carUdp::paintSchedule(QWidget *parent)
{
    QPainter paint(parent);
    paint.setRenderHint(QPainter::Antialiasing, true);
    QPen pen;
    pen.setWidth(2);
    pen.setStyle(Qt::SolidLine);
    pen.setColor(Qt::black);

    paint.setPen(pen);
    paint.drawEllipse(m_scheduleIcon_XY,12,12);

    QRect rectangle(4,4, 18, 18);
    int startAngle = 90 * 16;
    int spanAngle = static_cast<int>((360-3.6*m_scheduleValue) * 16);

    // 用刷子
    paint.setBrush(Qt::black);
    // 电量为100时不画里面的扇形
    if(m_scheduleValue!=100)
    {
        paint.drawPie(rectangle, startAngle, spanAngle);
    }
}

// --------------------------水量控件---------------------------------------------------
// 设置水量
void carUdp::setWaterValue(QPoint m_vXY,QLabel *label,int value)
{
    m_waterIcon_XY=m_vXY;
    m_waterValue=value;
    label->setText(QString::number(m_waterValue).append("%"));
    this->update();
}
// 绘制水量
void carUdp::paintWater(QWidget *parent)
{
    QPainter paint(parent);
    QPixmap  pix;

    if(m_waterValue >= 20) // 水量小于20%
        pix.load(":/new/prefix1/image/cleanimag/water.png");
    else
        pix.load(":/new/prefix1/image/cleanimag/water1.png");

    paint.drawPixmap(m_waterIcon_XY.x(),m_waterIcon_XY.y(),pix);
}



