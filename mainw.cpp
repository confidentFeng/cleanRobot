#include "mainW.h"
#include "ui_mainw.h"

MainW::MainW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainW)
{
    ui->setupUi(this);

    // 初始化函数
    init();
}

MainW::~MainW()
{
    delete ui;
}

// 初始化窗口
void MainW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    // 初始化成员对象
    m_cleanWindow = new cleanW(this);
    m_moreWindow = new MoreW(this);
    // 实现三个子窗口返回主窗口的功能：将各子窗口的doProseShowmainw()自定义信号绑定到主窗口的this->show()函数
    connect(m_cleanWindow, SIGNAL(doProseShowMainw()), this, SLOT(doProssShowthis()));
    connect(m_moreWindow, SIGNAL(doProseShowMainw()), this, SLOT(doProssShowthis()));

    // label安装事件过滤器
    ui->ele_label->installEventFilter(this);
    ui->schedule_label->installEventFilter(this);
    ui->water_label->installEventFilter(this);

    /******************连接信号槽、初始化状态栏label数据******************/
    // 接收到下位机发来的数据，mycarudp发射信号，传输数据到doProssReciveData槽，更新状态栏label数据
    connect(mycarudp, SIGNAL(doProseSendData(int,int,int)), this, SLOT(doProssReciveData(int,int,int)));
    // 初始化电池数据(主窗口)
    mycarudp->setPoweValue(QPoint(2,5), ui->eleVal_label, 70);
    // 初始化进度数据(主窗口)
    mycarudp->setScheduleValue(QPoint(13,13), ui->scheVal_label, 60);
    // 初始化水量数据(主窗口)
    mycarudp->setWaterValue(QPoint(0,0), ui->waterVal_label, 50);

    /******************初始化配置文本******************/
    QFile file(FILE_NAME);
    // 第一次打开程序时文件不存在，才写入数据初始化文本
    if(!file.exists())
    {
        file.close();

        // 写入加密后的密码、锁屏时间和滚刷速度到配置文本中
        QSettings *IniWrite = new QSettings(FILE_NAME, QSettings::IniFormat);
        QString cipherPasswd = Common::encrypt("123456", KEY); // 加密密码
        IniWrite->setValue("passwd", cipherPasswd);
        IniWrite->setValue("lockTime", 5);
        IniWrite->setValue("brushSpeed", 5);
        // 写入完成后删除指针
        delete IniWrite;
     }

    /******************根据屏幕分辨率来设置窗口固定大小******************/
    // 获取设备屏幕大小( xrandr cmd)
    QRect screenRect = QApplication::desktop()->screenGeometry();
    qDebug() << "设备屏幕分辨率: " << screenRect.width() <<" " << screenRect.height();
    // 根据最终的工控机屏幕分辨率来设置窗口固定大小
    // this->setFixedSize(screenRect.width(),screenRect.height());

    // 开机调用shell脚本
    // QProcess::execute("/home/zlkj/test.sh");
}

// 重载paintEvent事件：解决主窗口不显示背景图片的问题
void MainW::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    // 如果是用QWidget做的主窗口，需要重构paintEvent事件，解决主窗口不显示背景图片问题
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

// 用事件过滤器拦截进度、电量、水量label中的QEvent::Paint事件 （显示该窗口的最开始时，会调用update()）
bool MainW::eventFilter(QObject *object, QEvent *event)
{
    if(object==ui->ele_label && event->type()==QEvent::Paint)
    {
        // 绘制电池电量
        mycarudp->paintPower(ui->ele_label);
    }

    if(object==ui->schedule_label && event->type()==QEvent::Paint)
    {
        // 绘制进度
        mycarudp->paintSchedule(ui->schedule_label);
    }

    if(object==ui->water_label && event->type()==QEvent::Paint)
    {
        // 绘制水量
        mycarudp->paintWater(ui->water_label);
    }

    return QWidget::eventFilter(object,event);
}

// 显示锁屏窗口
void MainW::Lockfrom()
{
    // 创建锁屏窗口，显示该窗口
    LockScreenW *myLockWindow = new LockScreenW(this);
    myLockWindow->show();
}

/*--------------------------slots-----------------------------------------*/

// 清扫按钮-点击槽函数
void MainW::on_cleanButton_clicked()
{
    m_cleanWindow->show();
    this->hide();
}

// 工具按钮-点击槽函数
void MainW::on_toolButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    ToolW *toolWindow = new ToolW(this);
    toolWindow->show();
    connect(toolWindow, SIGNAL(doProseShowMainw()), this, SLOT(doProssShowthis()));

    this->hide();
}

// 更多按钮-点击槽函数
void MainW::on_moreButton_clicked()
{
    m_moreWindow->show();
    this->hide();
}

// 显示自身窗口-槽函数
void MainW::doProssShowthis()
{
    this->show();
}

// 接收并刷新设置状态栏label数据
void MainW::doProssReciveData(int powerdata, int waterdata, int scheduldata)
{
    qDebug() <<"接收到下位机打来的状态栏标签数据";
    // set电池数据
    mycarudp->setPoweValue(QPoint(2,5), ui->eleVal_label, powerdata);
    // set进度数据
    mycarudp->setScheduleValue(QPoint(13,13), ui->scheVal_label, scheduldata);
    // set水量数据
    mycarudp->setWaterValue(QPoint(0,0), ui->waterVal_label, waterdata);

    this->update(); // 在事件过滤器中，重新绘制状态栏label
}
