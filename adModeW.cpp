#include "adModeW.h"
#include "ui_admoded.h"

AdModeW::AdModeW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdModeW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

AdModeW::~AdModeW()
{
    delete ui;
}

// 初始化窗口
void AdModeW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
}

// ----------------------------slots-----------------------------------------------

// 返回更多窗口按钮-点击槽函数
void AdModeW::on_returnMoreButton_clicked()
{
    emit doProseShowMoreW();
    this->close();
}
