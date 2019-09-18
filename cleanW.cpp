#include "cleanW.h"
#include "ui_cleanw.h"

// 初始化全局TCP类
carUdp *mycarudp;

cleanW::cleanW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cleanW)
{
    ui->setupUi(this);

    //  初始化窗口
    init();
}

cleanW::~cleanW()
{
    delete ui;
}

// 初始化窗口
void cleanW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    // 初始化地图图片
    m_pix.load(":/new/prefix1/image/map/map.png");
    // pix.load(":/new/prefix1/image/map/map.pgm");
    // 初始化地图图片的原始尺寸
    m_originSize.setX(m_pix.width());
    m_originSize.setY(m_pix.height());
    // 初始化地图图片的实时尺寸
    m_currImgSize.setX(m_originSize.x());
    m_currImgSize.setY(m_originSize.y());
    // 初始化地图图片的绘制原点
    m_imgPaintOrigin.setX(-(m_originSize.x()-WINDOW_WIDTH) / 2);
    m_imgPaintOrigin.setY(-(m_originSize.y()-WINDOW_HEIGHT) / 2);
    // 初始化放大缩小次数
    m_addLessCount = 0;

    // 设置摇杆大圆圆心位置
    m_smallCir_xy.setX(904);
    m_smallCir_xy.setY(648);
    // 设置小圆圆心位置，与大圆相同
    m_bigCir_xy=m_smallCir_xy;
    // 鼠标在摇杆大圆内时按下的标志位初始化
    m_bigCirPressFlag=false;

    // 去除Qlabel的边框
    ui->schedule_label->setAttribute(Qt::WA_TranslucentBackground);
    ui->eleVal_label->setAttribute(Qt::WA_TranslucentBackground);
    ui->waterVal_label->setAttribute(Qt::WA_TranslucentBackground);
    ui->timeVal_label->setAttribute(Qt::WA_TranslucentBackground);

    // label事件过滤设置
    ui->ele_label->installEventFilter(this);
    ui->schedule_label->installEventFilter(this);
    ui->water_label->installEventFilter(this);

    // 创建全局TCP类
    mycarudp=new carUdp(this);
    // 初始化电池数据
    mycarudp->setPoweValue(QPoint(2,5), ui->eleVal_label);
    // 初始化进度数据
    mycarudp->setScheduleValue(QPoint(13,13), ui->scheVal_label);
    // 初始化水量数据
    mycarudp->setWaterValue(QPoint(5,0), ui->waterVal_label);
    // 连接mycartcp信号槽
    connect(mycarudp, SIGNAL(doProseSendData(int,int,int)), this, SLOT(doProssReciveData(int,int,int)));
}

// 用事件过滤器拦截进度、电量、水量label中的QEvent::Paint事件 （主窗口最开始创建了cleanW对象，则一开始会调用该函数）
bool cleanW::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->ele_label && event->type()==QEvent::Paint)
    {
        mycarudp->paintPower(ui->ele_label);
    }

    if(watched==ui->schedule_label && event->type()==QEvent::Paint)
    {
        mycarudp->paintSchedule(ui->schedule_label);
    }

    if(watched==ui->water_label && event->type()==QEvent::Paint)
    {
        mycarudp->paintWater(ui->water_label);
    }

    return QWidget::eventFilter(watched, event);
}

// 绘图事件：绘制地图、摇杆中的大圆和小圆
void cleanW::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    // 绘图画笔
    QPainter painter(this);
    // 抗锯齿
    painter.setRenderHint(QPainter::Antialiasing, true);
    // 消锯齿
    painter.setRenderHints(QPainter::SmoothPixmapTransform);

    // 绘制地图图片（绘制原点可以是窗口负坐标，即窗口左上角未显示区域）
    painter.drawPixmap(m_imgPaintOrigin.x(), m_imgPaintOrigin.y(), m_currImgSize.x(), m_currImgSize.y(), m_pix);

    // 绘制摇杆中的大圆
    QPixmap bigCircle_Pixmap;
    bigCircle_Pixmap.load(":/new/prefix1/image/cleanimag/max.png");
    painter.drawPixmap(m_smallCir_xy.x()-BIG_CIRCLE_RADIUS, m_smallCir_xy.y()-BIG_CIRCLE_RADIUS, \
                       BIG_CIRCLE_RADIUS*2, BIG_CIRCLE_RADIUS*2, bigCircle_Pixmap);

    // 绘制摇杆中的小圆
    QPixmap smallCircle_Pixmap;
    smallCircle_Pixmap.load(":/new/prefix1/image/cleanimag/min.png");
    painter.drawPixmap(m_bigCir_xy.x()-SMALL_CIRCLE_RADIUS, m_bigCir_xy.y()-SMALL_CIRCLE_RADIUS, \
                       SMALL_CIRCLE_RADIUS*2, SMALL_CIRCLE_RADIUS*2, smallCircle_Pixmap);
}

// 鼠标移动事件：实现摇杆功能、绘制地图相关
void cleanW::mouseMoveEvent(QMouseEvent *e)
{
    QPoint mousexy; // 鼠标点击坐标
    QByteArray xy;
    xy.resize(2);
    int x;
    int y;
    mousexy = e->pos();
    // qDebug() <<"鼠标移动事件-坐标： " <<mouse_xy;

    if(m_bigCirPressFlag) // MousePressFlag为true，说明鼠标点击在了大圆内，才进行计算
    {
        // 小圆圆心出了大圆则在大圆上90-25=65  65*65=4225
        if((pow((mousexy.x()-m_smallCir_xy.x()),2) + pow((mousexy.y()-m_smallCir_xy.y()),2)) > 8100)
        {
            x = int( 90*cos(atan2(abs(mousexy.y()-m_smallCir_xy.y()), abs(mousexy.x()-m_smallCir_xy.x()))) );
            y = int( 90*sin(atan2(abs(mousexy.y()-m_smallCir_xy.y()), abs(mousexy.x()-m_smallCir_xy.x()))) );

            // 第一象限
            if(mousexy.x()>m_smallCir_xy.x() && mousexy.y()>m_smallCir_xy.y())
            {
                m_bigCir_xy.setX(x + m_smallCir_xy.x());
                m_bigCir_xy.setY(y + m_smallCir_xy.y());
            }
            // 第二象限
            else if(mousexy.x()<m_smallCir_xy.x() && mousexy.y()>m_smallCir_xy.y())
            {
                m_bigCir_xy.setX(-x + m_smallCir_xy.x());
                m_bigCir_xy.setY(y + m_smallCir_xy.y());
                x = -x;
            }
            // 第三象限
            else if(mousexy.x()<m_smallCir_xy.x() && mousexy.y()<m_smallCir_xy.y())
            {
                m_bigCir_xy.setX(-x + m_smallCir_xy.x());
                m_bigCir_xy.setY(-y + m_smallCir_xy.y());
                x = -x;
                y = -y;
            }
            // 第四象限
            else if(mousexy.x()>m_smallCir_xy.x()&&mousexy.y()<m_smallCir_xy.y())
            {
                m_bigCir_xy.setX(x + m_smallCir_xy.x());
                m_bigCir_xy.setY(-y + m_smallCir_xy.y());
                y = -y;
            }
        }
        else
        {
            m_bigCir_xy = mousexy;
            x = mousexy.x()-m_smallCir_xy.x();
            y = mousexy.y()-m_smallCir_xy.y();
        }
        xy[0] = char( x );
        xy[1] = char( y );
        // hex发送
        mycarudp->udpSend(xy);
        qDebug() <<x <<y;
        this->update();
    }
    else
    {
        // 鼠标(单次)移动坐标 = 图片移动距离 = 移动中的连续鼠标坐标减去移动前按下的仅一次鼠标坐标
        QPoint MouseMovePoint;
        MouseMovePoint.setX(mousexy.x() - m_mapRemov_Old.x());
        MouseMovePoint.setY(mousexy.y() - m_mapRemov_Old.y());

        // 地图图片绘制原点坐标
        int xImgOrigin = m_imgPaintOrigin.x() + MouseMovePoint.x();
        int yImgOrigin = m_imgPaintOrigin.y() + MouseMovePoint.y();

        // 当地图图片左上角坐标在(-(pow(2,AddLessCount)-1)*width,-(pow(2,AddLessCount)-1)*height))与(0,0)之间才可拖动图片
        if((xImgOrigin>=-(pow(2,m_addLessCount)-1)*m_originSize.x() && yImgOrigin>=-(pow(2,m_addLessCount)-1)*m_originSize.y()) \
                && (xImgOrigin<=0 && yImgOrigin<=0) )
        {
            // 地图图片绘制坐标随图片移动
            m_imgPaintOrigin.setX(xImgOrigin);
            m_imgPaintOrigin.setY(yImgOrigin);

            this->update();
        }
    }

    m_mapRemov_Old = mousexy;
}

// 鼠标释放事件：释放鼠标，则MousePressFlag复位，重新绘图使小圆（摇杆）回到原处
void cleanW::mouseReleaseEvent(QMouseEvent *e)
{
    Q_UNUSED(e);

    // 释放鼠标，则BigCirPressFlag复位
    m_bigCirPressFlag = false;
    // 小圆圆心设置为初始值,即大圆圆心值
    m_bigCir_xy.setX(m_smallCir_xy.x());
    m_bigCir_xy.setY(m_smallCir_xy.y());

    this->update(); // 更新绘图事件后，重新绘图使小圆（摇杆）回到原处
}

// 鼠标按下事件：获取摇杆所在的实时坐标
void cleanW::mousePressEvent(QMouseEvent *e)
{
    QPoint mouse_xy = e->pos(); // 获取鼠标点击坐标

    // 鼠标点击在大圆内，才设置BigCirPressFlag
    if((pow((mouse_xy.x()-m_smallCir_xy.x()),2) + pow((mouse_xy.y()-m_smallCir_xy.y()),2)) <= 8100) // 判断鼠标是否点击在大圆内
    {
       m_bigCirPressFlag = true;
    }
    else
    {
       m_mapRemov_Old = mouse_xy;
    }
}

/*--------------------slots-----------------------------------*/

// 返回主界面按钮-点击槽函数
void cleanW::on_returnMainButton_clicked()
{
    emit doProseShowMainw();
    this->hide();
}

// 放大背景图按钮-点击槽函数
void cleanW::on_addBoardButton_clicked()
{
    // 只允许放大3次
    if(m_addLessCount < 3)
    {
        // 放大缩小次数加一
        m_addLessCount++;

        // 设置地图图片的绘制原点
        m_imgPaintOrigin.setX(int(-(m_originSize.x() * pow(2,m_addLessCount) - WINDOW_WIDTH) / 2));
        m_imgPaintOrigin.setY(int(-(m_originSize.y() * pow(2,m_addLessCount) - WINDOW_HEIGHT) / 2));
        // 设置地图图片的绘制长宽
        m_currImgSize.setX(m_currImgSize.x() * 2);
        m_currImgSize.setY(m_currImgSize.y() * 2);

        this->update();
    }
}

// 缩小背景图按钮-点击槽函数
void cleanW::on_lessBoardButton_clicked()
{
    // 图片若小于等于MAP_WIDTH*MAP_HEIGHT，则说明是原尺存没有放大，不可以缩小，否则可以正常缩小
    if(m_currImgSize.x()>m_originSize.x() && m_currImgSize.y()>m_originSize.y())
    {
        // 放大缩小次数减一
        m_addLessCount--;

        // 设置图片绘制原点
        m_imgPaintOrigin.setX(int(-(m_originSize.x() * pow(2,m_addLessCount) - WINDOW_WIDTH) / 2));
        m_imgPaintOrigin.setY(int(-(m_originSize.y() * pow(2,m_addLessCount) - WINDOW_HEIGHT) / 2));
        // 设置图片绘制长宽
        m_currImgSize.setX(m_currImgSize.x() / 2);
        m_currImgSize.setY(m_currImgSize.y() / 2);

        this->update();
    }
}

// 复位背景图按钮-点击槽函数
void cleanW::on_resetBoardButton_clicked()
{
    // 设置地图图片的绘制原点
    m_imgPaintOrigin.setX(int(-(m_originSize.x() * pow(2,0) - WINDOW_WIDTH) / 2));
    m_imgPaintOrigin.setY(int(-(m_originSize.y() * pow(2,0) - WINDOW_HEIGHT) / 2));
    // 设置地图图片的绘制长宽
    m_currImgSize.setX(m_originSize.x());
    m_currImgSize.setY(m_originSize.y());

    // 放大缩小次数清零
    m_addLessCount = 0;

    this->update();
}

// 开始清理按钮-点击槽函数
void cleanW::on_startButton_clicked()
{
    if(ui->startButton->styleSheet() == "border-image: url(:/new/prefix1/image/cleanimag/start.png);")
    {
        ui->startButton->setStyleSheet("border-image: url(:/new/prefix1/image/cleanimag/stop.png);");
    }
    else
    {
        ui->startButton->setStyleSheet("border-image: url(:/new/prefix1/image/cleanimag/start.png);");
    }
}

// 锁屏按钮-点击槽函数
void cleanW::on_lockButton_clicked()
{
    // 创建锁屏窗口对象，并显示该窗口，
    LockScreenW *myLockWindow = new LockScreenW(this);
    myLockWindow->show();
}

// 接收并刷新设置进度、电量、水量值
void cleanW::doProssReciveData(int scheduldata, int powerdata, int waterdata)
{
    // set电池数据
    mycarudp->setPoweValue(QPoint(2,5), ui->eleVal_label, powerdata);
    // set进度数据
    mycarudp->setScheduleValue(QPoint(13,13), ui->scheVal_label, scheduldata);
    // set水量数据
    mycarudp->setWaterValue(QPoint(5,0), ui->waterVal_label, waterdata);

    this->update();
}
