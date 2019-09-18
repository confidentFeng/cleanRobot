#include "specificPointW.h"
#include "ui_specificPointW.h"

// 特定点设置窗口

SpecificPointW::SpecificPointW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpecificPointW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

SpecificPointW::~SpecificPointW()
{
    delete ui;
}

// 初始化窗口
void SpecificPointW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
}

// 返回更多窗口按钮-点击槽函数
void SpecificPointW::on_returnMoreButton_clicked()
{
    emit doProseShowMoreW();
    this->close();
}

// 充电桩位置设置按钮-点击槽函数
void SpecificPointW::on_chargButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    ChargingPileSetW *myChargingPileset = new ChargingPileSetW(this);
    myChargingPileset->show();
    connect(myChargingPileset, SIGNAL(doProseShowspecificpoint()), this, SLOT(doProessShowThis()));
    // 连接“修改标题栏文本”信号槽
    connect(this, SIGNAL(doProssChangTheMainText(QString )), myChargingPileset, SLOT(doProssReChangeTheMainText(QString)));
    // 发送“修改标题栏文本”信号，修改该子窗口标题栏
    emit doProssChangTheMainText("充电桩位置设置");

    this->hide();
}

// 排水点位置设置按钮-点击槽函数
void SpecificPointW::on_drainButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    ChargingPileSetW *myChargingPileset = new ChargingPileSetW(this);
    myChargingPileset->show();
    connect(myChargingPileset, SIGNAL(doProseShowspecificpoint()), this, SLOT(doProessShowThis()));
    // 连接“修改标题栏文本”信号槽
    connect(this, SIGNAL(doProssChangTheMainText(QString )), myChargingPileset, SLOT(doProssReChangeTheMainText(QString)));
    // 发送“修改标题栏文本”信号，修改该子窗口标题栏
    emit doProssChangTheMainText("排水点位置设置");

    this->hide();
}

// 加水点位置设置按钮-点击槽函数
void SpecificPointW::on_addWaterButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    ChargingPileSetW *myChargingPileset = new ChargingPileSetW(this);
    myChargingPileset->show();
    connect(myChargingPileset, SIGNAL(doProseShowspecificpoint()), this, SLOT(doProessShowThis()));
    // 连接“修改标题栏文本”信号槽
    connect(this, SIGNAL(doProssChangTheMainText(QString )), myChargingPileset, SLOT(doProssReChangeTheMainText(QString)));
    // 发送“修改标题栏文本”信号，修改该子窗口标题栏
    emit doProssChangTheMainText("加水点位置设置");

    this->hide();
}

// 显示自身窗口
void SpecificPointW::doProessShowThis()
{
    this->show();
}
