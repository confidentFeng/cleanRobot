#include "chargingPileSetW.h"
#include "ui_chargingPileSetW.h"

ChargingPileSetW::ChargingPileSetW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChargingPileSetW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

ChargingPileSetW::~ChargingPileSetW()
{
    delete ui;
}

// 初始化窗口
void ChargingPileSetW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    // 初始化地图图片
    // pix.load(":/new/prefix1/image/map/map.png");
    m_pix.load(":/new/prefix1/image/map/map.pgm");
    // 初始化地图图片的原始尺寸
    m_originSize.setX(m_pix.width());
    m_originSize.setY(m_pix.height());
    // 初始化地图图片的实时尺寸
    m_currImgSize.setX(m_originSize.x());
    m_currImgSize.setY(m_originSize.y());
    // 初始化地图图片的绘制原点
    m_imgPaintOrigin.setX(-(m_originSize.x()-WINDOW_WIDTH)/2);
    m_imgPaintOrigin.setY(-(m_originSize.y()-WINDOW_HEIGHT)/2);

    // 初始化中心点坐标
    m_centPoint_xy.setX(WINDOW_WIDTH/2);
    m_centPoint_xy.setY(WINDOW_HEIGHT/2);
    // 初始化鼠标全部移动坐标
    m_mouseAllMove_x = 0;
    m_mouseAllMove_y = 0;
    // 初始化放大缩小次数
    m_addLessCount = 0;

    // 初始化预设点设置相关定时器：防止鼠标移动前的鼠标按下，错误更新预设点绘制坐标
    m_timer = new QTimer(this);
    connect(m_timer, SIGNAL(timeout()), this,SLOT(doProssTimerOut()), Qt::UniqueConnection);

    // 设置摇杆大圆圆心位置
    m_bigCir_xy.setX(904);
    m_bigCir_xy.setY(648);
    // 小圆圆心位置初始化
    m_smallCir_xy = m_bigCir_xy;
    // 鼠标在摇杆大圆内时按下的标志位初始化
    m_bigCirPressFlag = false;

    m_pointMouseMove.setX(0);
    m_pointMouseMove.setY(0);

    ui->xLabel->setText((QString::number(m_preSetPoint_xy.x())));
    ui->yLabel->setText((QString::number(m_preSetPoint_xy.y())));

    this->update();
}

// --------------------------------摇杆控件-----------------------------------------------------------

// 绘图事件：绘制摇杆大小圆、预设点
void ChargingPileSetW::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);// 抗锯齿
    painter.setRenderHints(QPainter::SmoothPixmapTransform);// 消锯齿

    // 绘制地图图片（绘制原点可以是窗口负坐标，即窗口左上角未显示区域）
    painter.drawPixmap(m_imgPaintOrigin.x(), m_imgPaintOrigin.y(), m_currImgSize.x(), m_currImgSize.y(), m_pix);

    // 绘制设定点
    QPen pen;
    QPixmap pixPoint;
    pixPoint.load(":/new/prefix1/image/showmodeimag/point.png");
    if(!(m_preSetPoint_xy.x()==0 && m_preSetPoint_xy.y()==0)) // 不允许在原点(0,0)上画点
    {
        // 绘制设定点（设定点图片大小为44*44，绘制起点是图片的左上角坐标）
        painter.drawPixmap(m_preSetPoint_xy.x()-pixPoint.width()/2, m_preSetPoint_xy.y()-pixPoint.height(),
                           pixPoint.width(), pixPoint.height(), pixPoint);
    }

    // 画大圆 摇杆
    QPixmap pixmax;
    pixmax.load(":/new/prefix1/image/cleanimag/max.png");
    painter.drawPixmap(m_bigCir_xy.x()-90, m_bigCir_xy.y()-90, 180, 180, pixmax);
    // 画小圆 摇杆
    QPixmap pixmin;
    pixmin.load(":/new/prefix1/image/cleanimag/min.png");
    painter.drawPixmap(m_smallCir_xy.x()-30, m_smallCir_xy.y()-30, 60, 60, pixmin);

    ui->xLabel->setText(QString::number(m_preSetPoint_xy.x()));
    ui->yLabel->setText(QString::number(m_preSetPoint_xy.y()));
}

// 鼠标移动事件：实现摇杆功能
void ChargingPileSetW::mouseMoveEvent(QMouseEvent *e)
{
    QPoint mousexy;
    QByteArray xy;
    xy.resize(2);
    int x,y;
    mousexy = e->pos();
    // 鼠标点击在了大圆内
    if(m_bigCirPressFlag)
    {
        // 小圆圆心出了大圆则在大圆上90-25=65  65*65=4225
        if((pow((mousexy.x()-m_bigCir_xy.x()), 2) + pow((mousexy.y()-m_bigCir_xy.y()), 2)) > 8100)
        {
            x=static_cast<int>(90*cos(atan2(abs(mousexy.y()-m_bigCir_xy.y()), abs(mousexy.x()-m_bigCir_xy.x()))) ) ;
            y=static_cast<int>(90*sin(atan2(abs(mousexy.y()-m_bigCir_xy.y()), abs(mousexy.x()-m_bigCir_xy.x()))) );

            // 第一象限
            if(mousexy.x()>m_bigCir_xy.x() && mousexy.y()>m_bigCir_xy.y())
            {
                m_smallCir_xy.setX(x + m_bigCir_xy.x());
                m_smallCir_xy.setY(y + m_bigCir_xy.y());
            }
            // 第二象限
            else if(mousexy.x()<m_bigCir_xy.x() && mousexy.y()>m_bigCir_xy.y())
            {
                m_smallCir_xy.setX(-x + m_bigCir_xy.x());
                m_smallCir_xy.setY(y + m_bigCir_xy.y());
                x = -x;
            }
            // 第三象限
            else if(mousexy.x()<m_bigCir_xy.x() && mousexy.y()<m_bigCir_xy.y())
            {
                m_smallCir_xy.setX(-x + m_bigCir_xy.x());
                m_smallCir_xy.setY(-y + m_bigCir_xy.y());
                x = -x;
                y = -y;
            }
            // 第四象限
            else if(mousexy.x()>m_bigCir_xy.x() && mousexy.y()<m_bigCir_xy.y())
            {
                m_smallCir_xy.setX(x + m_bigCir_xy.x());
                m_smallCir_xy.setY(-y + m_bigCir_xy.y());
                y = -y;
            }
        }
        else
        {
            m_smallCir_xy = mousexy;
            x = mousexy.x() - m_bigCir_xy.x();
            y = mousexy.y() - m_bigCir_xy.y();
        }
        xy[0] = static_cast<char>(x);
        xy[1] = static_cast<char>(y);
        // hex发送
        // mycartcp->TCPSend(xy);
        qDebug() <<x <<y;
        this->update();
    }
    else
    {
        // 鼠标(单次)移动坐标 = 图片移动距离 = 移动中的连续鼠标坐标减去移动前按下的仅一次鼠标坐标
        QPoint MouseMovePoint;
        MouseMovePoint.setX(mousexy.x() - m_mapRemovOld.x());
        MouseMovePoint.setY(mousexy.y() - m_mapRemovOld.y());

        // 地图图片绘制原点坐标
        int xImgOrigin = m_imgPaintOrigin.x() + MouseMovePoint.x();
        int yImgOrigin = m_imgPaintOrigin.y() + MouseMovePoint.y();

        // 当地图图片左上角坐标在(-(pow(2,AddLessCount)-1)*width,-(pow(2,AddLessCount)-1)*height))与(0,0)之间才可拖动图片
        if((xImgOrigin>=-(pow(2,m_addLessCount)-1)*m_originSize.x() && yImgOrigin>=-(pow(2,m_addLessCount)-1)*m_originSize.y()) \
                && (xImgOrigin<=0 && yImgOrigin<=0) )
        {
            // 获得鼠标全部移动坐标
            m_mouseAllMove_x += MouseMovePoint.x();
            m_mouseAllMove_y += MouseMovePoint.y();

            // 地图图片绘制坐标随图片移动
            m_imgPaintOrigin.setX(xImgOrigin);
            m_imgPaintOrigin.setY(yImgOrigin);

            // 维持地图图片中心点坐标
            m_centPoint_xy.setX(m_centPoint_xy.x() + MouseMovePoint.x());
            m_centPoint_xy.setY(m_centPoint_xy.y() + MouseMovePoint.y());
            // 预设点绘制坐标随图片移动
            m_preSetPoint_xy.setX(m_preSetPoint_xy.x() + MouseMovePoint.x());
            m_preSetPoint_xy.setY(m_preSetPoint_xy.y() + MouseMovePoint.y());

            this->update();
        }
    }

    // 移动了
    m_timer->stop();

    m_mapRemovOld = mousexy;
}

// 鼠标按下事件：获取摇杆所在的实时坐标
void ChargingPileSetW::mousePressEvent(QMouseEvent *e)
{
    QPoint mousexy;
    mousexy = e->pos();

    if((pow((mousexy.x()-m_bigCir_xy.x()),2) + pow((mousexy.y()-m_bigCir_xy.y()),2)) <= 8100)
    {
       m_bigCirPressFlag = true;
    }
    else
    {
       // 若鼠标点击在了ui->setGroupBox范围内，则返回，避免在这范围内绘制预设点
       if((mousexy.x()>0 && mousexy.x()<270) && (mousexy.y()>180 && mousexy.y()<480))
         return;

       m_mapRemovOld = mousexy;

       // 鼠标按下后打开定时器，500ms后超时绘制预设点
       m_timer->start(500);
       m_mousePress_xy = mousexy;
    }
}

 // 鼠标释放事件：释放鼠标，则MousePressFlag复位，且小圆圆心设置为初始值
void ChargingPileSetW::mouseReleaseEvent(QMouseEvent *e)
{
    Q_UNUSED(e);

    m_bigCirPressFlag = false;
    m_smallCir_xy.setX(m_bigCir_xy.x());
    m_smallCir_xy.setY(m_bigCir_xy.y());

    this->update();
}

// -------------------------slots-----------------------------------

// 设当前点按钮-点击槽函数
void ChargingPileSetW::on_setCurrPointButton_clicked()
{
    ui->setCurrPointButton->setStyleSheet("border-image: url(:/new/prefix1/image/chargingpilesetimag/keyboard.png);"
                                         "color: rgb(255, 255, 255);"
                                         "background-color:transparent;");

    ui->manualSetButton->setStyleSheet("color: rgb(0, 210, 255);"
                                       "background-color:transparent;");

    // 加减隐藏
    ui->addxButton->hide();
    ui->addyButton->hide();
    ui->lessxButton->hide();
    ui->lessyButton->hide();
}

// 手动调节按钮-点击槽函数
void ChargingPileSetW::on_manualSetButton_clicked()
{
    ui->setCurrPointButton->setStyleSheet("color: rgb(0, 210, 255);"
                                       "background-color:transparent;");

    ui->manualSetButton->setStyleSheet("border-image: url(:/new/prefix1/image/chargingpilesetimag/keyboard.png);"
                                         "color: rgb(255, 255, 255);"
                                         "background-color:transparent;");
     // 加减显示
    ui->addxButton->show();
    ui->addyButton->show();
    ui->lessxButton->show();
    ui->lessyButton->show();
}

// 放大地图按钮-点击槽函数
void ChargingPileSetW::on_addBoardButton_clicked()
{ 
    // 只允许放大3次
    if(m_addLessCount < 3)
    {
        // 放大缩小次数加一
        m_addLessCount++;

        // 设置地图图片的绘制原点
        m_imgPaintOrigin.setX(int(-(m_originSize.x() * pow(2,m_addLessCount) - WINDOW_WIDTH)/2));
        m_imgPaintOrigin.setY(int(-(m_originSize.y() * pow(2,m_addLessCount) - WINDOW_HEIGHT)/2));
        // 设置地图图片的绘制长宽
        m_currImgSize.setX(m_currImgSize.x() * 2);
        m_currImgSize.setY(m_currImgSize.y() * 2);

        // 在放大缩小前，使中心点、预设点和设置点绘制坐标，还原成鼠标移动前的大小
        m_centPoint_xy.setX(m_centPoint_xy.x() - m_mouseAllMove_x);
        m_centPoint_xy.setY(m_centPoint_xy.y() - m_mouseAllMove_y);
        m_preSetPoint_xy.setX(m_preSetPoint_xy.x() - m_mouseAllMove_x);
        m_preSetPoint_xy.setY(m_preSetPoint_xy.y() - m_mouseAllMove_y);
        // 清零鼠标全部移动坐标
        m_mouseAllMove_x = 0;
        m_mouseAllMove_y = 0;
        // 使预设点坐标在放大时位置不改变（放大缩小后，预设点要求相对地图位置不变）
        m_preSetPoint_xy.setX(m_preSetPoint_xy.x()*2 - m_centPoint_xy.x());
        m_preSetPoint_xy.setY(m_preSetPoint_xy.y()*2 - m_centPoint_xy.y());

        this->update();
    }
}

// 缩小地图按钮-点击槽函数
void ChargingPileSetW::on_lessBoardButton_clicked()
{
    // 图片若小于等于MAP_WIDTH*MAP_HEIGHT，则说明是原尺存没有放大，不可以缩小，否则可以正常缩小
    if(m_currImgSize.x()>m_originSize.x() && m_currImgSize.y()>m_originSize.y())
    {
        // 放大缩小次数减一
        m_addLessCount--;

        // 设置图片绘制原点
        m_imgPaintOrigin.setX( int(-(m_originSize.x() * pow(2,m_addLessCount) - WINDOW_WIDTH)/2) );
        m_imgPaintOrigin.setY( int(-(m_originSize.y() * pow(2,m_addLessCount) - WINDOW_HEIGHT)/2) );
        // 设置图片绘制长宽
        m_currImgSize.setX(m_currImgSize.x() / 2);
        m_currImgSize.setY(m_currImgSize.y() / 2);

        // 在放大缩小前，使中心点、预设点和设置点绘制坐标，还原成鼠标移动前的大小
        m_centPoint_xy.setX(m_centPoint_xy.x() - m_mouseAllMove_x);
        m_centPoint_xy.setY(m_centPoint_xy.y() - m_mouseAllMove_y);
        m_preSetPoint_xy.setX(m_preSetPoint_xy.x() - m_mouseAllMove_x);
        m_preSetPoint_xy.setY(m_preSetPoint_xy.y() - m_mouseAllMove_y);
        // 清零鼠标全部移动坐标
        m_mouseAllMove_x = 0;
        m_mouseAllMove_y = 0;
        // 使预设点坐标在缩小时位置不改变
        m_preSetPoint_xy.setX((m_preSetPoint_xy.x()+m_centPoint_xy.x())/2);
        m_preSetPoint_xy.setY((m_preSetPoint_xy.y()+m_centPoint_xy.y())/2);

        this->update();
    }
}

// 复位地图按钮-点击槽函数
void ChargingPileSetW::on_resetBoardButton_clicked()
{
    // 设置地图图片的绘制原点
    m_imgPaintOrigin.setX( int(-(m_originSize.x() * pow(2,0) - WINDOW_WIDTH)/2) );
    m_imgPaintOrigin.setY( int(-(m_originSize.y() * pow(2,0) - WINDOW_HEIGHT)/2) );
    // 设置地图图片的绘制长宽
    m_currImgSize.setX(m_originSize.x());
    m_currImgSize.setY(m_originSize.y());

    // 在复位前，使预设点和设置点绘制坐标，还原成鼠标移动前的大小
    m_preSetPoint_xy.setX(m_preSetPoint_xy.x() - m_mouseAllMove_x);
    m_preSetPoint_xy.setY(m_preSetPoint_xy.y() - m_mouseAllMove_y);
    // 清零鼠标全部移动坐标
    m_mouseAllMove_x = 0;
    m_mouseAllMove_y = 0;
    // 复位中心点坐标
    m_centPoint_xy.setX(WINDOW_WIDTH / 2);
    m_centPoint_xy.setY(WINDOW_HEIGHT / 2);
    // 逐次缩小,使预设点不变
    for(int j=0; j<m_addLessCount; j++)
    {
        // 使预设点坐标在复位时位置不改变（有问题，无效）
        m_preSetPoint_xy.setX((m_preSetPoint_xy.x() + m_centPoint_xy.x())/2);
        m_preSetPoint_xy.setY((m_preSetPoint_xy.y() + m_centPoint_xy.y())/2);
    }

    // 放大缩小次数清零
    m_addLessCount = 0;

    this->update();
}

// 增加x轴值按钮-点击槽函数
void ChargingPileSetW::on_addxButton_clicked()
{
    // 若超出窗口区域，则返回
    if((m_preSetPoint_xy.x()+1) > WINDOW_WIDTH)
        return;

    m_preSetPoint_xy.setX(m_preSetPoint_xy.x() + 1);
    this->update();
}

// 减少x轴值按钮-点击槽函数
void ChargingPileSetW::on_lessxButton_clicked()
{
    // 若超出窗口区域，则返回
    if((m_preSetPoint_xy.x()-1) < 0)
        return;

    m_preSetPoint_xy.setX(m_preSetPoint_xy.x() - 1);
    this->update();
}

// 增加y轴值按钮-点击槽函数
void ChargingPileSetW::on_addyButton_clicked()
{
    // 若超出窗口区域，则返回
    if((m_preSetPoint_xy.y()+1) > WINDOW_HEIGHT)
        return;

    m_preSetPoint_xy.setY(m_preSetPoint_xy.y() + 1);
    this->update();
}

// 减少y轴值按钮-点击槽函数
void ChargingPileSetW::on_lessyButton_clicked()
{
    // 若超出窗口区域，则返回
    if((m_preSetPoint_xy.y()-1) < 0)
        return;

    m_preSetPoint_xy.setY(m_preSetPoint_xy.y() - 1);
    this->update();
}

// 超时函数
void ChargingPileSetW::doProssTimerOut()
{
    // 防止重复进入
    m_timer->stop();

    // 超时后将当前鼠标按下坐标，赋给预设点绘制坐标
    m_preSetPoint_xy = m_mousePress_xy;

    // 更新绘图事件，绘制预设点
    this->update();
}

// 返回更多窗口按钮-点击槽函数
void ChargingPileSetW::on_returnMoreButton_clicked()
{
    // 复位窗口
    on_resetBoardButton_clicked();
    emit doProseShowspecificpoint();
    this->close();
}

// 更改窗口标题标签的文本
void ChargingPileSetW::doProssReChangeTheMainText(QString str)
{
    ui->titleLabel->setText(str);
    // 进入窗口赋值点
    if(str=="充电桩位置设置")
    {
        m_preSetPoint_xy = m_pointCharging;
    }
    else if(str=="排水点位置设置")
    {
        m_preSetPoint_xy = m_pointLessWater;
    }
    else
    {
        m_preSetPoint_xy = m_pointAddWater;
    }
}

// 确定按钮-点击槽函数
void ChargingPileSetW::on_okButton_clicked()
{
    // 初始化提示弹出对话框
    WarningW *tipDialog = new WarningW(this);

    // UDP通信失败，弹窗提示用户
    tipDialog->setTitle2Info("已完成", "已成功设置位置!");
    tipDialog->show();

    // 确定则更新特殊值，点击弹框确认返回上级页面
    if(ui->titleLabel->text() == "充电桩位置设置")
    {
        m_pointCharging = m_preSetPoint_xy;
    }
    else if(ui->titleLabel->text() == "排水点位置设置")
    {
        m_pointLessWater = m_preSetPoint_xy;
    }
    else
    {
       m_pointAddWater = m_preSetPoint_xy;
    }

    // 复位窗口
    on_resetBoardButton_clicked();
}

// 取消按钮-点击槽函数
void ChargingPileSetW::on_cancelButton_clicked()
{
    // 初始化提示弹出对话框
    PromptW *warnDialog = new PromptW(this);

    // UDP通信失败，弹窗提示用户
    warnDialog->setTitle21Info("提示","若取消操作将不保存设置!","");
    warnDialog->show();

    // 取消则不保存记录
}
