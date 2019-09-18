#include "showModeW.h"
#include "ui_showmodeddd.h"

ShowModeW::ShowModeW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowModeW)
{
    ui->setupUi(this);
    init();
}

ShowModeW::~ShowModeW()
{
    delete ui;
}

// 初始化窗口
void ShowModeW::init()
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

    // 初始化中心点坐标
    m_centPoint_xy.setX(WINDOW_WIDTH / 2);
    m_centPoint_xy.setY(WINDOW_HEIGHT / 2);
    // 初始化鼠标全部移动坐标
    m_mouseAllMove_x = 0;
    m_mouseAllMove_y = 0;
    // 初始化放大缩小次数
    m_addLessCount = 0;

    // 初始化预设点设置相关定时器：防止鼠标移动前的鼠标按下，错误更新预设点绘制坐标
    m_timer = new QTimer(this);
    connect(m_timer, SIGNAL(timeout()), this, SLOT(doProssTimerOut()), Qt::UniqueConnection);

    // 巡航点GroupBox
    ui->cruiseGroupBox->setGeometry(20, 176, 296, 386);
    ui->cruiseGroupBox->hide();
    // 间隔GroupBox
    ui->gapGroupBox->setGeometry(20, 176, 260, 250);
    ui->gapGroupBox->hide();
    // 重调整GroupBox
    ui->setGroupBox->setGeometry(20, 176, 206, 206);
    ui->setGroupBox->hide();
    // 设置滑动效果
    ui->listWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    QScroller::grabGesture(ui->listWidget, QScroller::LeftMouseButtonGesture);

    // 设置摇杆大圆圆心位置
    m_bigCir_xy.setX(904);
    m_bigCir_xy.setY(648);
    // 小圆圆心位置初始化
    m_smallCir_xy = m_bigCir_xy;
    // 鼠标在摇杆大圆内时按下的标志位初始化
    m_bigCirPressFlag = false;

    this->update();
}

// 绘图事件：绘制地图、摇杆中的大圆和小圆、预设点、设置点和点连线
void ShowModeW::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform); // 抗锯齿和使用平滑转换算法

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

    // 绘制设置点和设置点序号
    pen.setColor(Qt::red);
    painter.setPen(pen);
    QFont font = painter.font();
    font.setPixelSize(20);
    painter.setFont(font);
    for(int i=0; i<Point_xy.count(); i++)
    {
        // 绘制设置点
        painter.drawPixmap(Point_xy.at(i).x()-22, Point_xy.at(i).y()-44, 44, 44, pixPoint);
        // 绘制设置点序号
        painter.drawText(Point_xy.at(i).x()-5, Point_xy.at(i).y()-22, QString::number(i));
    }

    // 绘制设置点连线
    pen.setColor(QColor(85,255,255));
    pen.setStyle(Qt::DotLine);
    pen.setWidth(3);
    painter.setPen(pen);
    if(Point_xy.count() > 1)
    {
        for(int i=0; i<Point_xy.count()-1; i++)
        {
            painter.drawLine(Point_xy.at(i), Point_xy.at(i+1));
        }
    }

    // 画大圆 摇杆
    QPixmap pixmax;
    pixmax.load(":/new/prefix1/image/cleanimag/max.png");
    painter.drawPixmap(m_bigCir_xy.x()-90, m_bigCir_xy.y()-90, 180, 180, pixmax);
    // 画小圆 摇杆
    QPixmap pixmin;
    pixmin.load(":/new/prefix1/image/cleanimag/min.png");
    painter.drawPixmap(m_smallCir_xy.x()-30, m_smallCir_xy.y()-30, 60, 60, pixmin);
}

// 鼠标移动事件
void ShowModeW::mouseMoveEvent(QMouseEvent *e)
{
    QPoint mousexy;
    QByteArray xy;
    xy.resize(2);
    int x;
    int y;
    mousexy = e->pos();

    // 鼠标点击在了大圆内
    if(m_bigCirPressFlag)
    {
        // 小圆圆心出了大圆则在大圆上90-25=65  65*65=4225
        if((pow((mousexy.x()-m_bigCir_xy.x()),2) + pow((mousexy.y()-m_bigCir_xy.y()),2)) > 8100)
        {
            x = static_cast<int>( 90*cos(atan2(abs(mousexy.y()-m_bigCir_xy.y()), abs(mousexy.x()-m_bigCir_xy.x()))) ) ;
            y = static_cast<int>( 90*sin(atan2(abs(mousexy.y()-m_bigCir_xy.y()), abs(mousexy.x()-m_bigCir_xy.x()))) );

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
        update();
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
            for(int i=0; i<Point_xy.count(); i++)
            {
                Point_xy[i].setX(Point_xy[i].x() + MouseMovePoint.x());
                Point_xy[i].setY(Point_xy[i].y() + MouseMovePoint.y());
            }

            this->update();
        }
    }

    // 移动鼠标前会点击鼠标，打开定时器，所以在这里要关闭先前打开的定时器
    m_timer->stop();

    m_mapRemovOld = mousexy;
}

// 鼠标释放事件：释放鼠标，则BigCirPressFlag复位，且小圆圆心设置为初始值，更新绘图事件后，重新绘图使小圆（摇杆）回到原处
void ShowModeW::mouseReleaseEvent(QMouseEvent *e)
{
    Q_UNUSED(e);

    m_bigCirPressFlag = false;
    m_smallCir_xy.setX(m_bigCir_xy.x());
    m_smallCir_xy.setY(m_bigCir_xy.y());

    this->update();
}

// 鼠标按下事件
void ShowModeW::mousePressEvent(QMouseEvent *e)
{
    QPoint mousexy;
    mousexy = e->pos();

    if((pow((mousexy.x()-m_bigCir_xy.x()),2) + pow((mousexy.y()-m_bigCir_xy.y()),2)) <= 8100)
    {
       m_bigCirPressFlag = true;
    }
    else
    {
       m_mapRemovOld = mousexy;

       // 鼠标按下后打开定时器，500ms后超时绘制预设点
       m_timer->start(500);
       m_mousePress_xy = mousexy;
    }
}

// --------------------slots------------------------------------------

// 放大背景图按钮-点击槽函数
void ShowModeW::on_addBoardButton_clicked()
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

        // 在放大缩小前，使中心点、预设点和设置点绘制坐标，还原成鼠标移动前的大小
        m_centPoint_xy.setX(m_centPoint_xy.x() - m_mouseAllMove_x);
        m_centPoint_xy.setY(m_centPoint_xy.y() - m_mouseAllMove_y);
        m_preSetPoint_xy.setX(m_preSetPoint_xy.x() - m_mouseAllMove_x);
        m_preSetPoint_xy.setY(m_preSetPoint_xy.y() - m_mouseAllMove_y);
        for(int i=0; i<Point_xy.count(); i++)
        {
            Point_xy[i].setX(Point_xy[i].x() - m_mouseAllMove_x);
            Point_xy[i].setY(Point_xy[i].y() - m_mouseAllMove_y);
        }
        // 清零鼠标全部移动坐标
        m_mouseAllMove_x = 0;
        m_mouseAllMove_y = 0;
        // 使预设点坐标在放大时位置不改变（放大缩小后，预设点要求相对地图位置不变）
        m_preSetPoint_xy.setX(m_preSetPoint_xy.x()*2 - m_centPoint_xy.x());
        m_preSetPoint_xy.setY(m_preSetPoint_xy.y()*2 - m_centPoint_xy.y());
        // 使设置点Point列表的各点，在放大时位置不改变
        for(int i=0; i<Point_xy.count(); i++)
        {
            // 使设定点坐标在放大时位置不改变
            Point_xy[i].setX(Point_xy[i].x()*2 - m_centPoint_xy.x());
            Point_xy[i].setY(Point_xy[i].y()*2 - m_centPoint_xy.y());
        }

        this->update();
    }
}

// 缩小背景图按钮-点击槽函数
void ShowModeW::on_lessBoardButton_clicked()
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

        // 在放大缩小前，使中心点、预设点和设置点绘制坐标，还原成鼠标移动前的大小
        m_centPoint_xy.setX(m_centPoint_xy.x() - m_mouseAllMove_x);
        m_centPoint_xy.setY(m_centPoint_xy.y() - m_mouseAllMove_y);
        m_preSetPoint_xy.setX(m_preSetPoint_xy.x() - m_mouseAllMove_x);
        m_preSetPoint_xy.setY(m_preSetPoint_xy.y() - m_mouseAllMove_y);
        for(int i=0; i<Point_xy.count(); i++)
        {
            Point_xy[i].setX(Point_xy[i].x() - m_mouseAllMove_x);
            Point_xy[i].setY(Point_xy[i].y() - m_mouseAllMove_y);
        }
        // 清零鼠标全部移动坐标
        m_mouseAllMove_x = 0;
        m_mouseAllMove_y = 0;
        // 使预设点坐标在缩小时位置不改变
        m_preSetPoint_xy.setX((m_preSetPoint_xy.x() + m_centPoint_xy.x()) / 2);
        m_preSetPoint_xy.setY((m_preSetPoint_xy.y() + m_centPoint_xy.y()) / 2);
        // 使设置点Point列表的各点，在缩小时位置不改变
        for(int i=0; i<Point_xy.count(); i++)
        {
            // 使设定点坐标在缩小时位置不改变
            Point_xy[i].setX((Point_xy[i].x() + m_centPoint_xy.x()) / 2);
            Point_xy[i].setY((Point_xy[i].y() + m_centPoint_xy.y()) / 2);
        }

        this->update();
    }
}

// 复位背景图按钮-点击槽函数
void ShowModeW::on_resetBoardButton_clicked()
{
    // 设置地图图片的绘制原点
    m_imgPaintOrigin.setX(int(-(m_originSize.x() * pow(2,0) - WINDOW_WIDTH) / 2));
    m_imgPaintOrigin.setY(int(-(m_originSize.y() * pow(2,0) - WINDOW_HEIGHT) / 2));
    // 设置地图图片的绘制长宽
    m_currImgSize.setX(m_originSize.x());
    m_currImgSize.setY(m_originSize.y());

    // 在复位前，使预设点和设置点绘制坐标，还原成鼠标移动前的大小
    m_preSetPoint_xy.setX(m_preSetPoint_xy.x() - m_mouseAllMove_x);
    m_preSetPoint_xy.setY(m_preSetPoint_xy.y() - m_mouseAllMove_y);
    for(int i=0; i<Point_xy.count(); i++)
    {
        Point_xy[i].setX(Point_xy[i].x() - m_mouseAllMove_x);
        Point_xy[i].setY(Point_xy[i].y() - m_mouseAllMove_y);
    }
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
        m_preSetPoint_xy.setX((m_preSetPoint_xy.x() + m_centPoint_xy.x()) / 2);
        m_preSetPoint_xy.setY((m_preSetPoint_xy.y() + m_centPoint_xy.y()) / 2);
        // 使设置点Point列表的各点，在复位时位置不改变
        for(int i=0; i<Point_xy.count(); i++)
        {
            Point_xy[i].setX((Point_xy[i].x() + m_centPoint_xy.x()) / 2);
            Point_xy[i].setY((Point_xy[i].y() + m_centPoint_xy.y()) / 2);
        }
    }

    // 放大缩小次数清零
    m_addLessCount = 0;

    this->update();
}

// 返回主窗口-点击槽函数
void ShowModeW::on_returnMoreButton_clicked()
{
    this->close();
    emit doProssSendGeneratShow();
}

// 自动按钮-点击槽函数
void ShowModeW::on_autoButton_clicked()
{
    ui->groupBox->hide();
    ui->setGroupBox->show();
}

// 手动按钮-点击槽函数
void ShowModeW::on_manualButton_clicked()
{
    // 隐藏groupBox，显示巡航点设置Group
    ui->groupBox->hide();
    ui->cruiseGroupBox->show();
}

// 间隔分组框的返回按钮-点击槽函数
void ShowModeW::on_gapGroupBox_returnBtn_clicked()
{
    ui->gapGroupBox->hide();
    ui->setGroupBox->show();
}

// 巡航分组框的返回按钮-点击槽函数
void ShowModeW::on_cruiseGroupBox_returnBtn_clicked()
{
    ui->cruiseGroupBox->hide();
    ui->groupBox->show();
}

// 设置分组框的返回按钮-点击槽函数
void ShowModeW::on_setGroupBox_returnBtn_clicked()
{
    ui->setGroupBox->hide();
    ui->groupBox->show();
}

// 设置分组框的参数按钮-点击槽函数
void ShowModeW::on_paramButton_clicked()
{
    ui->setGroupBox->hide();
    ui->gapGroupBox->show();
}

// 手动模式添加巡航点
void ShowModeW::on_addItemButton_clicked()
{
    // 当前点和设定点列表最后一个点相同则不能添加,原点也不能添加
    if( (Point_xy.count()>0 && Point_xy.last()==m_preSetPoint_xy)
        || (m_preSetPoint_xy.x()==0 && m_preSetPoint_xy.y()==0) )
    {
        return;
    }

    // 当listWidget没有列表项时，在设定点列表后添加项
    if(ui->listWidget->currentRow() == -1)
    {
        Point_xy.append(m_preSetPoint_xy);
    }
    // 当listWidget有列表项时，在设定点列表后面插入项
    else
    {
        Point_xy.insert(ui->listWidget->currentRow()+1, m_preSetPoint_xy);
    }
    ui->listWidget->clear();

    // 在listWidget上逐行添加项
    for(int i=0;i<Point_xy.count();i++)
    {
        ui->listWidget->addItem(QString::number(i) + "        " + QString::number(Point_xy[i].x())
                                + "-" + QString::number(Point_xy[i].y()));

        // UDP send map_xy
        int x = Point_xy[i].x() -550;
        int y = -(Point_xy[i].y() -345);
        qDebug() << "send_xy:" << x << " " << y;
        // mycartcp->UdpSendMapxy(MAP_XY_SEND_CMD, x, y);
    }

    this->update();
}

// 手动模式删除巡航点
void ShowModeW::on_lessItemButton_clicked()
{
    // 如果没有选中
    if(ui->listWidget->currentRow() == -1)
    {
        // 删除最后一个点
        Point_xy.removeAt(Point_xy.count() - 1);
    }
    // 选中
    else
    {
        // 删除当前所选点
        Point_xy.removeAt(ui->listWidget->currentRow());
    }
    ui->listWidget->clear();

    for(int i=0; i<Point_xy.count(); i++)
    {
        ui->listWidget->addItem(QString::number(i) + "        " + QString::number(Point_xy[i].x())
                                + "-"+QString::number(Point_xy[i].y()));
    }

    // 清除当前点
    m_preSetPoint_xy.setX(0);
    m_preSetPoint_xy.setY(0);
    this->update();
}

// 更改窗口名称标签的文本
void ShowModeW::doProssReChangeTheMainText(QString str)
{
    ui->titleLabel->setText(str);
}

// 超时函数：防止重复进入
void ShowModeW::doProssTimerOut()
{
    // 防止重复进入
    m_timer->stop();

    // 超时后将当前鼠标按下坐标，赋给预设点绘制坐标
    m_preSetPoint_xy = m_mousePress_xy;

    // 更新绘图事件，绘制预设点
    this->update();
}

QPoint ShowModeW::getPointXyAdd() const
{
    return m_preSetPoint_xy;
}

void ShowModeW::setPointXyAdd(const QPoint &value)
{
    m_preSetPoint_xy = value;
}
