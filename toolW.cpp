#include "toolW.h"
#include "ui_toolw.h"
#include "ui_toolw.h"

ToolW::ToolW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::toolW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

ToolW::~ToolW()
{
    delete ui;
}

// 初始化窗口
void ToolW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    // 获得初始样式表
    m_strFanBtn = ui->fanButton->styleSheet();
    m_strBrushBtn = ui->brushButton->styleSheet();
    m_strBrushUpBtn = ui->brushUpButton->styleSheet();
    m_strAdBtn = ui->adButton->styleSheet();
    m_strSuckingbtn = ui->suckingButton->styleSheet();

    // 初始化提示弹出对话框
    tipDialog = new WarningW(this);
}

// -------------slots---------------------------------

// 返回主菜单按钮-点击槽函数
void ToolW::on_returnMainButton_clicked()
{
    this->hide();
    emit doProseShowMainw();
}

// 风机开启/关闭-点击槽函数
void ToolW::on_fanButton_clicked()
{       
    qDebug()<<"fan_cloked--------!";
    if(ui->fanButton->styleSheet() == m_strFanBtn)
    {
        // 命令发送检测，成功则执行操作，失败则暂时不往下执行。
        if(mycarudp->udpSendConCmd(FAN_OPEN_CMD, CON_CLOSE_DATA))
        {
            // 关闭
        }
        else
        {
            // UDP通信失败，弹窗提示用户
            tipDialog->setTitle2Info("警告","UDP通信失败!");
            tipDialog->show();
            return;
        }

        ui->fanButton->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/image/toolimag/pbut_close.png);}");
    }
    else
    {
        if(mycarudp->udpSendConCmd(FAN_OPEN_CMD, CON_OPEN_DATA))
        {
            // 打开
        }
        else
        {
            // UDP通信失败，弹窗提示用户
            tipDialog->setTitle2Info("警告","UDP通信失败!");
            tipDialog->show();
            return;
        }

        ui->fanButton->setStyleSheet(m_strFanBtn);
    }
}

// 吸水耙上升/下降-点击槽函数
void ToolW::on_suckingButton_clicked()
{
    if(ui->suckingButton->styleSheet() == m_strSuckingbtn)
    {
        if(mycarudp->udpSendConCmd(SUCKING_UP_CMD, CON_OPEN_DATA))
        {
            // 打开
        }
        else
        {
            // UDP通信失败，弹窗提示用户
            tipDialog->setTitle2Info("警告", "UDP通信失败!");
            tipDialog->show();
            return;
        }
        ui->suckingButton->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/image/toolimag/pbut_open.png);}");
    }
    else
    {
        if(mycarudp->udpSendConCmd(SUCKING_UP_CMD, CON_CLOSE_DATA))
        {
            // 关闭
        }
        else
        {
            // UDP通信失败，弹窗提示用户
            tipDialog->setTitle2Info("警告", "UDP通信失败!");
            tipDialog->show();
            return;
        }
        ui->suckingButton->setStyleSheet(m_strSuckingbtn);
    }
}

// 滚刷开启/关闭-点击槽函数
void ToolW::on_brushButton_clicked()
{
    if(ui->brushButton->styleSheet() == m_strBrushBtn)
    {
        if(mycarudp->udpSendConCmd(BRUSH_OPEN_CMD, CON_OPEN_DATA))
        {
            // 打开
        }
        else
        {
            // UDP通信失败，弹窗提示用户
            tipDialog->setTitle2Info("警告", "UDP通信失败!");
            tipDialog->show();
            return;
        }

        ui->brushButton->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/image/toolimag/pbut_open.png);}");
    }
    else
    {
        if(mycarudp->udpSendConCmd(BRUSH_OPEN_CMD, CON_CLOSE_DATA))
        {
            // 关闭
        }
        else
        {
            // UDP通信失败，弹窗提示用户
            tipDialog->setTitle2Info("警告", "UDP通信失败!");
            tipDialog->show();
            return;
        }

        ui->brushButton->setStyleSheet(m_strBrushBtn);
    }
}

// 滚刷上升/下降-点击槽函数
void ToolW::on_brushUpButton_clicked()
{
    if(ui->brushUpButton->styleSheet() == m_strBrushUpBtn)
    {
        if(mycarudp->udpSendConCmd(BRUSH_UP_CMD, CON_OPEN_DATA))
        {
            // 打开
        }
        else
        {
            // UDP通信失败，弹窗提示用户
            tipDialog->setTitle2Info("警告", "UDP通信失败!");
            tipDialog->show();
            return;
        }
        ui->brushUpButton->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/image/toolimag/pbut_open.png);}");
    }
    else
    {
        if(mycarudp->udpSendConCmd(BRUSH_UP_CMD, CON_CLOSE_DATA))
        {
            // 关闭
        }
        else
        {
            // UDP通信失败，弹窗提示用户
            tipDialog->setTitle2Info("警告", "UDP通信失败!");
            tipDialog->show();
            return;
        }
        ui->brushUpButton->setStyleSheet(m_strBrushUpBtn);
    }
}

// 广告开启/关闭-点击槽函数
void ToolW::on_adButton_clicked()
{
    if(ui->adButton->styleSheet() == m_strAdBtn)
    {
        if(mycarudp->udpSendConCmd(AD_OPEN_CMD, CON_OPEN_DATA))
        {
            // 打开
        }
        else
        {
            // UDP通信失败，弹窗提示用户
            tipDialog->setTitle2Info("警告", "UDP通信失败!");
            tipDialog->show();
            return;
        }

        ui->adButton->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/image/toolimag/pbut_open.png);}");
    }
    else
    {
        if(mycarudp->udpSendConCmd(AD_OPEN_CMD, CON_CLOSE_DATA))
        {
            // 关闭
        }
        else
        {
            // UDP通信失败，弹窗提示用户
            tipDialog->setTitle2Info("警告", "UDP通信失败!");
            tipDialog->show();
            return;
        }

        ui->adButton->setStyleSheet(m_strAdBtn);
    }
}

// 滚刷速度设置-点击槽函数
void ToolW::on_brushSpeedButton_clicked()
{
    // 创建界面，显示该界面，并连接父窗口显示信号槽以返回父窗口
    ValueSetW *myValueSetW = new ValueSetW("滚刷转速", "单位：r/S", this);
    myValueSetW->show();
    connect(myValueSetW, SIGNAL(doProseShowParent()), this, SLOT(doProssShowthis()));
}

// 显示自身窗口-槽函数
void ToolW::doProssShowthis()
{
    this->show();
}
