#include "globalApplication.h"

GlobalApplication::GlobalApplication(int &argc,char **argv):
QApplication(argc,argv)
{
    // 初始化函数
    init();
}

GlobalApplication::~GlobalApplication()
{
    // 彻底结束线程
    m_pThread->requestInterruption();
    m_pThread->quit();
    m_pThread->wait();
}

// 初始化函数
void GlobalApplication::init()
{
    m_currWinObj = new QObject(); // 初始化当前窗口

    // 获得锁屏时间
    QSettings *iniRead = new QSettings(FILE_NAME, QSettings::IniFormat);
    int intLock = iniRead->value("lockTime").toInt();

    // 初始化定时器线程和定时器
    m_pThread = new QThread(this);
    m_pTimer = new QTimer();
    m_pTimer->moveToThread(m_pThread);
    m_pTimer->setInterval(intLock*60*1000);
    connect(m_pThread, SIGNAL(started()), m_pTimer, SLOT(start()));
    connect(m_pTimer, SIGNAL(timeout()), this,SLOT(onTimeOut()));
    // 开启线程，调用定时器的start()
    m_pThread->start();

    // qDebug() << "thread2: " << m_pThread->currentThread();

    m_myLockWindow = new LockScreenW(); // 初始化锁屏窗口
    m_myLockWindow->m_unlockFlag = true; // 初始化解除锁屏成功标志
}

bool GlobalApplication::notify(QObject *obj, QEvent *e)
{
    // 因为鼠标点击或滑动到任何窗口部件都会进入该函数，所以根据objectName()过滤窗口部件
    if(obj->objectName().right(1) == "W") // cleanW mainW
    {
        // 工控机是触摸屏，触摸屏幕和滑动屏幕都会点击屏幕，所以这里只检测鼠标点击事件
        if(e->type() == QEvent::MouseButtonPress) // 不区分左右键按下了
        {
            // qDebug() << "objName:" << obj->objectName();
            // qDebug()<<"press stop";
            m_pThread->quit(); // 线程结束后，则在此线程的定时器会自动停止计时
        }
        else if(e->type() == QEvent::MouseButtonRelease)
        {
            // qDebug()<<"release start";
            m_pThread->start(); // 线程开始，会发送started()信号，启动定时器的start()槽函数
        }

        m_currWinObj = obj; // 获得鼠标事件发生时的当前所在窗口
    }

    return QApplication::notify(obj,e);
}

// 超时锁屏槽函数
void GlobalApplication::onTimeOut()
{
    // m_unlockFlag为false,表示锁屏窗口未关闭，则即使再超时也不会再显示锁屏窗口
    if(m_myLockWindow->m_unlockFlag == true) // 当密码输入正确后，关闭锁屏窗口，则会将m_unlockFlag设置为true
    {
        qDebug()<<"锁屏";
        // 创建锁屏窗口对象，并显示该窗口
        m_myLockWindow = new LockScreenW(static_cast<QWidget *>(m_currWinObj));
        m_myLockWindow->show();

        // 这行代码要放在最后，因为在构建对象时，会自动设置m_unlockFlag，所以在构建后要复位m_unlockFlag
        m_myLockWindow->m_unlockFlag = false;
    }
    else
        qDebug() <<"重复锁屏";
}
