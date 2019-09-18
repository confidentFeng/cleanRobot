#include "aboutW.h"
#include "ui_aboutW.h"

AboutW::AboutW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

AboutW::~AboutW()
{
    delete ui;
}

// 初始化窗口
void AboutW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    ui->nameLabel->setText(APP_NAME); // 应用名称
    ui->currVersionLabel->setText(CURR_VERSION); // 当前版本号
}

// 返回更多窗口按钮-点击槽函数
void AboutW::on_returnMoreButton_clicked()
{
    emit doProssSendSystemShow();
    this->close();
}
