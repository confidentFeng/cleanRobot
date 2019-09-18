#include "lockSetW.h"
#include "ui_lockSetW.h"

lockSetW::lockSetW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LockSetW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

lockSetW::~lockSetW()
{
    delete ui;
}

// 初始化窗口
void lockSetW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
}

// 返回更多窗口按钮-点击槽函数
void lockSetW::on_returnMoreButton_clicked()
{
    emit doProseShowMoreW();
    this->close();
}

// 更改密码按钮-点击槽函数
void lockSetW::on_changePasswdButton_clicked()
{
    this->hide();

    // 创建界面，显示该界面，并连接父窗口显示信号槽以返回父窗口
    ChangePasswdW *mychangpassword = new ChangePasswdW(this);
    mychangpassword->show();
    connect(mychangpassword, SIGNAL(doProseShowlockscreend()), this, SLOT(doProssShowthis()));
}

// 锁定时间按钮-点击槽函数
void lockSetW::on_lockTimeButton_clicked()
{
    this->hide();

    // 创建界面，显示该界面，并连接父窗口显示信号槽以返回父窗口
    ValueSetW *myValueSetW = new ValueSetW("锁屏时间", "单位：/分钟", this);
    myValueSetW->show();
    connect(myValueSetW, SIGNAL(doProseShowParent()), this, SLOT(doProssShowthis()));
}

// 显示当前窗口按钮-点击槽函数
void lockSetW::doProssShowthis()
{
    this->show();
}
