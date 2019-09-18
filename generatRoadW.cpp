#include "generatRoadW.h"
#include "ui_generatRoadW.h"

GeneratRoadW::GeneratRoadW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GeneratRoadW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

GeneratRoadW::~GeneratRoadW()
{
    delete ui;
}

// 初始化窗口
void GeneratRoadW::init()
{
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint); //  去掉标题栏,去掉任务栏显示，窗口
}

// ---------------------------------slots------------------------------------------

// 返回主窗口按钮-点击槽函数
void GeneratRoadW::on_returnMainButton_clicked()
{
    emit doProseShowMoreW();
    this->close();
}

// 清洗模式按钮-点击槽函数
void GeneratRoadW::on_cleanModeButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    ShowModeW *myShowMode = new ShowModeW(this);
    myShowMode->show();
    connect(myShowMode,SIGNAL(doProssSendGeneratShow()), this, SLOT(doProssReciveThisShow()));
    // 连接“修改标题栏文本”信号槽
    connect(this,SIGNAL(doProssChangTheMainText(QString )), myShowMode, SLOT(doProssReChangeTheMainText(QString)));
    // 发送“修改标题栏文本”信号，修改该子窗口标题栏
    emit doProssChangTheMainText("清洗模式");

    this->hide();
}

// 显示模式按钮-点击槽函数 （清洗模式和展示模式一样的）
void GeneratRoadW::on_showModeButton_clicked()
{
    // 创建窗口，显示该窗口，并连接父窗口显示信号槽以返回父窗口
    ShowModeW *myShowMode = new ShowModeW(this);
    myShowMode->show();
    connect(myShowMode,SIGNAL(doProssSendGeneratShow()), this, SLOT(doProssReciveThisShow()));
    // 连接“修改标题栏文本”信号槽
    connect(this,SIGNAL(doProssChangTheMainText(QString )), myShowMode, SLOT(doProssReChangeTheMainText(QString)));
    // 发送“修改标题栏文本”信号，修改该子窗口标题栏
    emit doProssChangTheMainText("展示模式");

    this->hide();
}

// 显示自身窗口
void GeneratRoadW::doProssReciveThisShow()
{
    this->show();
}
