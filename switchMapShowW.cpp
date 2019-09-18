#include "switchMapShowW.h"
#include "ui_switchMapShowW.h"

SwitchMapShowW::SwitchMapShowW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SwitchMapShowW)
{
    ui->setupUi(this);
    init();
}

SwitchMapShowW::~SwitchMapShowW()
{
    delete ui;
}

// 初始化窗口
void SwitchMapShowW::init()
{
    this->setWindowModality(Qt::WindowModal); // 阻塞其父子窗口
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
}

// 绘图事件：显示预览地图
void SwitchMapShowW::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    QPixmap pix;
    pix.load(m_mapPath);

    painter.drawPixmap(0, 0, this->width(), this->height(), pix);
}

// 接受地图路径
void SwitchMapShowW::RrciveMapPath(QString path)
{
    m_mapPath=path;
    qDebug()<<path;
}

// 确定按钮-点击槽函数
void SwitchMapShowW::on_okButton_clicked()
{
    emit doProcessSendMapOK();
    this->close();
}

// 取消按钮-点击槽函数
void SwitchMapShowW::on_cancelButton_clicked()
{
    this->close();
}
