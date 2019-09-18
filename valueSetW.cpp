#include "valueSetW.h"
#include "ui_valueSetW.h"

ValueSetW::ValueSetW(QString titleStr, QString uintStr, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ValueSetW)
{
    ui->setupUi(this);

    // 设置标题label的文本（必须在构建实例的时候，设置label文本）
    ui->titleLable->setText(titleStr);
    // 设置单位label的文本
    ui->tipLabel->setText(uintStr);

    // 初始化窗口
    init();
}

ValueSetW::~ValueSetW()
{
    delete ui;
}

// 初始化窗口
void ValueSetW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    // "增加值按钮按下定时器"的超时信号，与"增加值按钮-点击槽函数"绑定
    m_addPressTimer = new QTimer(this);
    connect(m_addPressTimer, SIGNAL(timeout()), this, SLOT(on_addButton_clicked()));
    // "减小值按钮按下定时器"的超时信号，与"减小值按钮-点击槽函数"绑定
    m_lessPressTimer = new QTimer(this);
    connect(m_lessPressTimer, SIGNAL(timeout()), this, SLOT(on_lessButton_clicked()));
    // "按钮按下半秒钟定时器"的超时信号，与"halfSecondTimeout槽函数"绑定
    m_halfSecondTimer = new QTimer(this);
    connect(m_halfSecondTimer, SIGNAL(timeout()), this, SLOT(halfSecondTimeout()));
    // 增加/减少值的标志位
    m_add2Less_flag = false;

    // 初始设置确定按钮不可用
    ui->okButton->setEnabled(false);

    /*** 读取配置文本中的配置值，并相应设置label值 ***/
    QSettings *iniRead = new QSettings(FILE_NAME, QSettings::IniFormat);
    int intValue = 0;
    // 读取配置文本中的配置值
    if(ui->titleLable->text() == "滚刷转速")
        intValue = iniRead->value("brushSpeed").toInt();
    else if(ui->titleLable->text() == "锁屏时间")
        intValue = iniRead->value("lockTime").toInt();
    // 读取完成后删除指针
    delete iniRead;
    // 设置设置label值
    ui->dataLabel->setText(QString::number(intValue));
}

// 返回父窗口按钮-点击槽函数
void ValueSetW::on_returnParentButton_clicked()
{
    emit doProseShowParent();
    this->close();
}

// 增加值按钮-点击槽函数
void ValueSetW::on_addButton_clicked()
{
    if(ui->dataLabel->text().toInt() < 60) // 限制锁屏时间范围为0~60分钟
    {
         // 增加值
         ui->dataLabel->setText(QString::number(ui->dataLabel->text().toInt()+1));
         // 值改变，确定按钮才高亮
         ui->okButton->setStyleSheet("border-image: url(:/new/prefix1/image/locktimeimag/ok1.png)");
         // 设置确定按钮可用
         ui->okButton->setEnabled(true);
    }
}
// 增加值按钮-按下槽函数
void ValueSetW::on_addButton_pressed()
{
    // 增加/减少值的标志位设置为true
    m_add2Less_flag = true;
    // 按下按钮，则"按钮按下半秒钟定时器"开始计时
    m_halfSecondTimer->start(500);
}
// 增加值按钮-释放槽函数
void ValueSetW::on_addButton_released()
{
    // 按钮释放后，则"按钮按下半秒钟定时器"和"增加值按钮按下定时器"停止计时
    m_halfSecondTimer->stop();
    m_addPressTimer->stop();
}

// 减少值按钮-点击槽函数
void ValueSetW::on_lessButton_clicked()
{
    if(ui->dataLabel->text().toInt() > 0) // 限制锁屏时间范围为0~60分钟
    {
         // 减少值
         ui->dataLabel->setText(QString::number(ui->dataLabel->text().toInt()-1));
         // 值改变，按钮才高亮
         ui->okButton->setStyleSheet("border-image: url(:/new/prefix1/image/locktimeimag/ok1.png)");
         // 设置确定按钮可用
         ui->okButton->setEnabled(true);
    }
}
// 减少值按钮-按下槽函数
void ValueSetW::on_lessButton_pressed()
{
    // 增加/减少值的标志位设置为false
    m_add2Less_flag = false;
    // 按下按钮，则"按钮按下半秒钟定时器"开始计时
    m_halfSecondTimer->start(500);
}
// 减少值按钮-释放槽函数
void ValueSetW::on_lessButton_released()
{
    // 释放鼠标后，定时器停止计时
    m_halfSecondTimer->stop();
    m_lessPressTimer->stop();
}

// 确定按钮-点击槽函数
void ValueSetW::on_okButton_clicked()
{
    // 写入加密后的锁屏时间到配置文本中
    QSettings *IniWrite = new QSettings(FILE_NAME, QSettings::IniFormat);
    // 定义并显示提示对话框
    WarningW *tipDialog = new WarningW(this);

    if(ui->titleLable->text() == "滚刷转速")
    {
        IniWrite->setValue("brushSpeed", ui->dataLabel->text());
        tipDialog->setTitle2Info("提示", "滚刷转速设置成功！");
    }
    else if(ui->titleLable->text() == "锁屏时间")
    {
        IniWrite->setValue("lockTime", ui->dataLabel->text());
        tipDialog->setTitle2Info("提示", "锁屏时间设置成功！");
    }

    // 写入完成后删除指针
    delete IniWrite;
    // 显示"提示消息"窗口
    tipDialog->show();

    // 锁屏时间写入后，则确定按钮不可用且变灰
    ui->okButton->setEnabled(false);
    ui->okButton->setStyleSheet("border-image: url(:/new/prefix1/image/locktimeimag/ok.png)");
}

// 确定按钮-按下槽函数
void ValueSetW::on_okButton_pressed()
{
     ui->okButton->setStyleSheet("border-image: url(:/new/prefix1/image/locktimeimag/ok2.png)");
}

// 半秒钟超时槽函数:实现半秒钟后，长按加速修改值
void ValueSetW::halfSecondTimeout()
{
    // 关闭"按钮按下半秒钟定时器"
    m_halfSecondTimer->stop();

    // 根据"增加/减少值的标志位"，选择开启"增加值按钮按下定时器"还是"减小值按钮按下定时器"
    if(m_add2Less_flag == true)
        m_addPressTimer->start(200);
    else
        m_lessPressTimer->start(200);
}
