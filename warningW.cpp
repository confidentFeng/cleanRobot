#include "warningW.h"
#include "ui_widget_wainm.h"

WarningW::WarningW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WarningW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

WarningW::~WarningW()
{
    delete ui;
}

// 初始化窗口
void WarningW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
}

// 确定按钮-点击槽函数：按下则关闭自身窗口
void WarningW::on_okButton_clicked()
{
    this->close();
}

// 设置提示框的标题和信息标签文本
void WarningW::setTitle2Info(QString titleStr, QString infoStr)
{
    ui->titleLabel->setText(titleStr);
    ui->infoLabel->setText(infoStr);    
}
