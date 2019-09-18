#include "lockScreenW.h"
#include "ui_widget_lock.h"

LockScreenW::LockScreenW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LockScreenW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

LockScreenW::~LockScreenW()
{
    delete ui;
}

// 初始化窗口
void LockScreenW::init()
{
    this->setWindowModality(Qt::WindowModal); // 阻塞其父子窗口
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
    // 设置窗口的透明度，要求能看到背后的界面
    setWindowOpacity(0.9);

    // lineEdit安装过滤器
    ui->lineEdit->installEventFilter(this);

    // 通过正则表达式设置"密码输入栏"，只能输入数字0-9,不超过6位
    QValidator *accountValidator = new QRegExpValidator(QRegExp("[0-9]{6}"));
    ui->lineEdit->setValidator(accountValidator);
}

// 事件过滤器
bool  LockScreenW::eventFilter(QObject *watched, QEvent *event)
{
    if(watched ==ui->lineEdit)
    {
        if(QEvent::FocusIn == event->type())
        {
            if(ui->lineEdit->echoMode()==QLineEdit::Normal)
            {
                ui->lineEdit->clear();
            }

            ui->lineEdit->setEchoMode(QLineEdit::Password);
        }
    }
    return QWidget::eventFilter(watched, event);     //  最后将事件交给上层对话框
}

// ---------------------------slots-----------------------------------------------

// 取消按钮-点击槽函数：清空密码栏
void LockScreenW::on_cancelButton_clicked()
{
    ui->lineEdit->clear();
}

// 登录按钮-点击槽函数
void LockScreenW::on_loginButton_clicked()
{ 
    // 获得原密码
    QFile file(FILE_NAME);
    QString strOldPasswd;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString strTemp;
        while (!file.atEnd())
        {
            // 若返回字符串非空，说明查找到了"passwd="所在行（section切割出"passwd"后面的字符串，simplified()去除字符串尾的'\n'）
            if( !(strTemp = QString(file.readLine()).section("passwd=",1,1).simplified()).isEmpty() )
            {
                strOldPasswd = Common::decrypt(strTemp, KEY);
                qDebug() <<"strOldPasswd: " <<strOldPasswd;
            }
        }
        file.close();
    }

    if(ui->lineEdit->text()==strOldPasswd || ui->lineEdit->text()==ADMIN_PASSWD) // 密码正确则关闭锁屏窗口
    {
        this->close();
        m_unlockFlag = true; // 解除锁屏成功，则设置解除锁屏标志
    }
    else if(ui->lineEdit->text().isEmpty())
    {
        ui->infoLabel->setStyleSheet("color:red");
        ui->infoLabel->setText("输入密码不能为空！");       
    }
    else if(ui->lineEdit->text().length()<6)
    {
        ui->infoLabel->setStyleSheet("color:red");
        ui->infoLabel->setText("输入密码不足6位！");
        ui->lineEdit->clear();
    }
    else
    {
        ui->infoLabel->setStyleSheet("color:red");
        ui->infoLabel->setText("密码错误，请重新输入");
        ui->lineEdit->clear();
    }
}
