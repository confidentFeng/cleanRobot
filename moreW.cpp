#include "moreW.h"
#include "ui_morew.h"

MoreW::MoreW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moreW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

MoreW::~MoreW()
{
    delete ui;
}

// 初始化窗口
void MoreW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
}

// -------------------------slots---------------------------------

// 返回主菜单按钮-点击槽函数
void MoreW::on_returnMainButton_clicked()
{
    this->hide();
    emit doProseShowMainw();
}

// 生成路径按钮-点击槽函数
void MoreW::on_genRoadButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    GeneratRoadW *myGeneratRoad = new GeneratRoadW(this);
    myGeneratRoad->show();
    connect(myGeneratRoad, SIGNAL(doProseShowMoreW()), this, SLOT(doProssShowthis()));

    this->hide();
}

// 切换地图包按钮-点击槽函数
void MoreW::on_switchMapButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    SwitchMapW *mySwitchMap = new SwitchMapW(this);
    mySwitchMap->show();
    connect(mySwitchMap, SIGNAL(doProseShowMoreW()), this, SLOT(doProssShowthis()));

    this->hide();
}

// 锁屏设置按钮-点击槽函数
void MoreW::on_lockScreenButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    lockSetW *myLockScreen = new lockSetW(this);
    myLockScreen->show();
    connect(myLockScreen, SIGNAL(doProseShowMoreW()), this, SLOT(doProssShowthis()));

    this->hide();
}

// 清扫报告按钮-点击槽函数
void MoreW::on_cleanReportButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    CleanReportW *myCleanReport = new CleanReportW(this);
    myCleanReport->show();
    connect(myCleanReport, SIGNAL(doProseShowMoreW()), this, SLOT(doProssShowthis()));

    this->hide();
}

// 广告模式按钮-点击槽函数
void MoreW::on_adModeButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    AdModeW *myAdMode = new AdModeW(this);
    myAdMode->show();
    connect(myAdMode, SIGNAL(doProseShowMoreW()), this, SLOT(doProssShowthis()));

    this->hide();
}

// 特定点设置按钮-点击槽函数
void MoreW::on_spePointButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    SpecificPointW *mySpecificPoint = new SpecificPointW(this);
    mySpecificPoint->show();
    connect(mySpecificPoint, SIGNAL(doProseShowMoreW()), this, SLOT(doProssShowthis()));

    this->hide();
}

// 系统按钮-点击槽函数
void MoreW::on_systemButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    SystemW *mySystem = new SystemW(this);
    mySystem->show();
    connect(mySystem, SIGNAL(doProseShowMoreW()), this, SLOT(doProssShowthis()));

    this->hide();
}

// 显示自身窗口
void MoreW::doProssShowthis()
{
    this->show();
}
