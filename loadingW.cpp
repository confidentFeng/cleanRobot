#include "loadingW.h"
#include "ui_loadingW.h"

LoadingW::LoadingW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoadingW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

// 初始化窗口
void LoadingW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    m_nIndex = 1;
}

// 开机自检
void LoadingW::bootSelfTest()
{
    // 检查清水箱是否缺水
    ui->tipLabel->setText("检查清水箱是否缺水");
    // mycarudp->UdpSendConCmd(BRUSH_SPEED_SET_CMD,char((0xff00)>>8),char(0x00ff));

    QEventLoop eventloop;
    QTimer::singleShot(1000, &eventloop, SLOT(quit()));
    eventloop.exec();

    // 检查电量是否过低
    ui->tipLabel->setText("检查电量是否过低");

    QTimer::singleShot(1000, &eventloop, SLOT(quit()));
    eventloop.exec();

    // 检查是否关闭了风机滚刷
    ui->tipLabel->setText("检查是否关闭了风机滚刷");

    QTimer::singleShot(1000, &eventloop, SLOT(quit()));
    eventloop.exec();

    // 检查上升吸水趴滚刷
    ui->tipLabel->setText("检查上升吸水趴滚刷");

    QTimer::singleShot(1000, &eventloop, SLOT(quit()));
    eventloop.exec();

    // 开机自检完，关闭加载窗口，进入主窗口
    this->close();
}

LoadingW::~LoadingW()
{
    // 彻底结束线程（单独的一个quit()无法彻底结束进程）
    m_pThread->requestInterruption();
    m_pThread->quit();
    m_pThread->wait();

    delete ui;
}

/*
 * 去网上找一个加载的中间有个圈圈在转的jif的图片，然后点击之后就进行播放，等后台处理完成之后发送一个信号，将播放停止，并且隐藏就好了。
 * */
void LoadingW::showMain()
{
    // 初始化定时器线程和定时器
    m_pThread = new QThread(this);
    m_pTimer = new QTimer();
    m_pTimer->moveToThread(m_pThread);
    m_pTimer->setInterval(500);
    connect(m_pThread, SIGNAL(started()), m_pTimer, SLOT(start()));
    connect(m_pTimer, SIGNAL(timeout()), this, SLOT(onTimeOut()));
    // 开启线程，调用定时器的start()
    m_pThread->start();

    // 在还未超时的时候，显示第一张图片，避免为空白
    QPixmap pixmap(QString(":/new/prefix1/image/loadingWidget/loading1.png"));
    ui->pixmapLabel->setPixmap(pixmap);

    // 开机自检
    bootSelfTest();

    MainW *w = new MainW(this);
    frmNum::Instance();// set brown--灰黑色
    w->show();
    // 初始化加锁
    w->Lockfrom();
}

void LoadingW::onTimeOut()
{
    //  若当前图标下标超过8表示到达末尾，重新计数。
    m_nIndex++;
    if (m_nIndex > 5)
        m_nIndex = 1;

    QPixmap pixmap(QString(":/new/prefix1/image/loadingWidget/loading%1.png").arg(m_nIndex));
    ui->pixmapLabel->setPixmap(pixmap);
}
