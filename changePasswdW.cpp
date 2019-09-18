#include "changepasswdW.h"
#include "ui_changepasswdW.h"

ChangePasswdW::ChangePasswdW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePasswdW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

ChangePasswdW::~ChangePasswdW()
{
    delete ui;
}

// 初始化窗口
void ChangePasswdW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    // 显示默认提示
    this->showDefaultTip();

    // 三行密码栏安装事件过滤器
    ui->oldPasswd_lineEdit->installEventFilter(this);
    ui->newPasswd_lineEdit->installEventFilter(this);
    ui->confirmPasswd_lineEdit->installEventFilter(this);

    // 通过正则表达式设置三行"密码输入栏"，只能输入6位数字
    QValidator *accountValidator = new QRegExpValidator(QRegExp("[0-9]{6}"));
    ui->oldPasswd_lineEdit->setValidator(accountValidator);
    ui->newPasswd_lineEdit->setValidator(accountValidator);
    ui->confirmPasswd_lineEdit->setValidator(accountValidator);
}

// 事件过滤器：获取三行密码栏的焦点
bool ChangePasswdW::eventFilter(QObject *watched, QEvent *event)
{
    // 当焦点在"原密码栏"时
    if(watched ==ui->oldPasswd_lineEdit)
    {
        if(QEvent::FocusIn == event->type())
        {
            // 只设置"原密码栏"的样式为"蓝色边框"
            ui->oldPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show1.png);""color: rgb(208, 208, 208);");
            ui->newPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);""color: rgb(208, 208, 208);");
            ui->confirmPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);""color: rgb(208, 208, 208);");

            // 点击"原密码栏"时清除密码栏文本
            if(ui->oldPasswd_lineEdit->echoMode() == QLineEdit::Normal)
            {
                ui->oldPasswd_lineEdit->clear();
            }

            // 设置"原密码栏"为密码格式
            ui->oldPasswd_lineEdit->setEchoMode(QLineEdit::Password);
        }
    }

    // 当焦点在"新密码栏"时
    if(watched ==ui->newPasswd_lineEdit)
    {
        if(QEvent::FocusIn == event->type())
        {
            // 只设置"新密码栏"的样式为"蓝色边框"
            ui->oldPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);""color: rgb(208, 208, 208);");
            ui->newPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show1.png);""color: rgb(208, 208, 208);");
            ui->confirmPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);""color: rgb(208, 208, 208);");

            // 点击"新密码栏"时清除密码栏文本
            if(ui->newPasswd_lineEdit->echoMode() == QLineEdit::Normal)
            {
                ui->newPasswd_lineEdit->clear();
            }

            // 设置"新密码栏"为密码格式
            ui->newPasswd_lineEdit->setEchoMode(QLineEdit::Password);
        }
    }

    // 当焦点在"确认密码栏"时
    if(watched ==ui->confirmPasswd_lineEdit)
    {
        if(QEvent::FocusIn == event->type())
        {
            // 只设置"确认密码栏"的样式为"蓝色边框"
            ui->oldPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);""color: rgb(208, 208, 208);");
            ui->newPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);""color: rgb(208, 208, 208);");
            ui->confirmPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show1.png);""color: rgb(208, 208, 208);");

            // 点击"确认密码栏"时清除密码栏文本
            if(ui->confirmPasswd_lineEdit->echoMode() == QLineEdit::Normal)
            {
                ui->confirmPasswd_lineEdit->clear();
            }

            // 设置"确认密码栏"为密码格式
            ui->confirmPasswd_lineEdit->setEchoMode(QLineEdit::Password);
        }
    }

    // 判断三行密码栏的位数是否均是6位，是则按钮变为淡蓝色，且设置确定按钮可用
    if( ui->oldPasswd_lineEdit->text().length()==6 && ui->newPasswd_lineEdit->text().length()==6 \
          &&  ui->confirmPasswd_lineEdit->text().length()==6 )
    {
        ui->okButton->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/ok1.png)");
        ui->okButton->setEnabled(true);
    }

    return QWidget::eventFilter(watched, event);     //  最后将事件交给上层对话框
}

// 显示默认提示
void ChangePasswdW::showDefaultTip()
{
    // 设置三行密码栏的样式都为"灰色边框"
    ui->oldPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);""color: rgb(208, 208, 208);");
    ui->newPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);""color: rgb(208, 208, 208);");
    ui->confirmPasswd_lineEdit->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);""color: rgb(208, 208, 208);");

    // 设置三行密码栏的文本都为"默认文本"
    ui->oldPasswd_lineEdit->clear();
    ui->oldPasswd_lineEdit->setEchoMode(QLineEdit::Normal);
    ui->oldPasswd_lineEdit->setText("原密码  请输入6位数字");
    // --
    ui->newPasswd_lineEdit->clear();
    ui->newPasswd_lineEdit->setEchoMode(QLineEdit::Normal);
    ui->newPasswd_lineEdit->setText("新密码  请输入6位数字");
    // --
    ui->confirmPasswd_lineEdit->clear();
    ui->confirmPasswd_lineEdit->setEchoMode(QLineEdit::Normal);
    ui->confirmPasswd_lineEdit->setText("确认密码  请输入6位数字");

    // 确定按钮变为灰色，且设置确定按钮不可用
    ui->okButton->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/ok.png)");
    ui->okButton->setEnabled(false);
}

// -----------------------------------slots-------------------------------------------------

// 返回锁屏设置窗口按钮-点击槽函数
void ChangePasswdW::on_returnLockButton_clicked()
{
    emit doProseShowlockscreend();
    this->close();
}

// 确定设置密码按钮-点击槽函数
void ChangePasswdW::on_okButton_clicked()
{
    /*** 在配置文本中读取原密码 ***/
    QSettings *iniRead = new QSettings(FILE_NAME, QSettings::IniFormat);
    // 将读取到的ini文件保存在QString中，先取值，然后通过toString()函数转换成QString类型
    QString strTemp = iniRead->value("passwd").toString();
    QString strOldPasswd = Common::decrypt(strTemp, KEY);
    qDebug() << "strOldPasswd: " << strOldPasswd;
    // 读取完成后删除指针
    delete iniRead;

    // 定义提示对话框
    WarningW *tipDialog = new WarningW(this);

    // 第1步：判断输入栏是否输入了密码
    if(ui->oldPasswd_lineEdit->text().isEmpty())
    {
        tipDialog->setTitle2Info("警告","请输入密码！");
        this->showDefaultTip();
    }

    if(strOldPasswd==ui->oldPasswd_lineEdit->text() || ADMIN_PASSWD==ui->oldPasswd_lineEdit->text()) // 第2步：判断原密码或管理员密码是否正确
    {
        if(ui->newPasswd_lineEdit->text() == ui->confirmPasswd_lineEdit->text())// 第3步：判断新密码与确认密码是否一致
        {
            if(ui->newPasswd_lineEdit->text() != ui->oldPasswd_lineEdit->text()) // 第4步：判断新密码与原密码是否还相同
            {
                // 获取新密码
                QString strPasswd = ui->newPasswd_lineEdit->text();
                qDebug() << "密码设置成功,密码：" << strPasswd << endl;

                // 写入加密后的密码到配置文本中
                QSettings *IniWrite = new QSettings(FILE_NAME, QSettings::IniFormat);
                QString cipherPasswd = Common::encrypt(strPasswd, KEY); // 加密密码
                IniWrite->setValue("passwd", cipherPasswd);
                // 写入完成后删除指针
                delete IniWrite;

                tipDialog->setTitle2Info("提示","新密码设置成功！");
                this->showDefaultTip();
            }
            else // 原密码正确，位数均是6位，新密码与确认密码一致，但新密码与原密码相同
            {
                tipDialog->setTitle2Info("警告","新密码与原密码不能再相同！");
                this->showDefaultTip();
            }
        }
        else// 原密码正确，位数均是6位，但新密码与确认密码不一致
        {
            tipDialog->setTitle2Info("警告","新密码与确认密码不一致！");
            this->showDefaultTip();
        }
    }
    else // 原密码错误
    {
        tipDialog->setTitle2Info("警告","原密码错误！");
        this->showDefaultTip();
    }

    // 显示提示对话框
    tipDialog->show();
}

// 确定按钮-按下槽函数
void ChangePasswdW::on_okButton_pressed()
{
    // 由于前面使用了setStyleSheet()函数，QtDesigner样式表失效，需要这里再使用setStyleSheet()函数
    ui->okButton->setStyleSheet("border-image: url(:/new/prefix1/image/changepasswordimag/ok2.png)");
}
