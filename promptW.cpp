#include "promptW.h"
#include "ui_widget_prompt.h"

PromptW::PromptW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PromptW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

PromptW::~PromptW()
{
    delete ui;
}

// 初始化窗口
void PromptW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
}

// 设置提示框的标题和信息标签文本
void PromptW::setTitle21Info(QString titleStr, QString infoStr, QString infoStr2)
{
    ui->titleLabel->setText(titleStr);
    ui->infoLabel->setText(infoStr);
    ui->infoLabel2->setText(infoStr2);
}

// 确定按钮-点击槽函数
void PromptW::on_okButton_clicked()
{
    if(m_str == "关机按钮")
    {
        qDebug() << "关机按钮"  << endl;

#ifdef Q_OS_WIN32 // win
        QCoreApplication::exit(); // 关闭应用程序
#endif

#ifdef Q_OS_LINUX // linux
        QProcess::execute("sudo shutdown -h now"); // UBuntu下执行关机命令（需要root权限）
#endif
    }
    else if(m_str == "重启按钮")
    {
        qDebug() << "重启按钮"  << endl;

#ifdef Q_OS_WIN32 // win
        // 重启应用程序
        qApp->quit();
        QProcess::startDetached(qApp->applicationFilePath(), QStringList());
#endif

#ifdef Q_OS_LINUX // linux
        QProcess::execute("sudo reboot"); // UBuntu下执行重启命令（需要root权限）
#endif
    }

    this->hide(); // 确认按钮按下后，关闭窗口
}

// 取消按钮-点击槽函数
void PromptW::on_cancelButton_clicked()
{
    this->close(); // 取消按钮按下，关闭窗口
}

// 接受"系统窗口"的"信号转发器"传递来的字符串
void PromptW::recvButton(QString str)
{
    m_str = str;
}
