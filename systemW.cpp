#include "systemW.h"
#include "ui_systemW.h"

SystemW::SystemW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SystemW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

SystemW::~SystemW()
{
    delete ui;
}

// 初始化窗口
void SystemW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    // 初始化"提示框"窗口实例
    m_promptWin = new PromptW(this);
    // 初始化QSignalMapper实例(信号转发器)
    QSignalMapper *signalMapper = new QSignalMapper(this);

    // "关机"按钮的点击信号和QSignalMapper实例的map()槽函数关联，"关机按钮"字符串作为实参传递
    connect(ui->shutdownButton, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->shutdownButton, "关机按钮");
    // "重启"按钮的点击信号和QSignalMapper实例的map()槽函数关联，"重启按钮"字符串作为实参传递
    connect(ui->rebootButton, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->rebootButton, "重启按钮");

    // 然后将signalMapper的mapped信号与"m_promptWin"的recvButton槽函数关联，传递"xx按钮"字符串
    connect(signalMapper, SIGNAL(mapped(QString)), m_promptWin, SLOT(recvButton(QString)));
}

// 返回更多窗口按钮-点击槽函数
void SystemW::on_returnMoreButton_clicked()
{
    emit doProseShowMoreW();
    this->close();
}

// 显示自身窗口
void SystemW::doProssRecivThisShow()
{
    this->show();
}

// 关机按钮-点击槽函数
void SystemW::on_shutdownButton_clicked()
{
    m_promptWin->setTitle21Info("警告", "是否确定关机？", " ");
    m_promptWin->show();
}

// 重启按钮-点击槽函数
void SystemW::on_rebootButton_clicked()
{
    m_promptWin->setTitle21Info("警告", "是否确定重启？", " ");
    m_promptWin->show();
}

// 关于按钮-点击槽函数
void SystemW::on_aboutButton_clicked()
{
    // 创建"关于"窗口，显示该窗口，并连接"关于"窗口的返回上一级窗口的信号与槽
    AboutW *myAbout = new AboutW(this);
    myAbout->show();
    connect(myAbout, SIGNAL(doProssSendSystemShow()), this, SLOT(doProssRecivThisShow()));

    this->hide();
}
