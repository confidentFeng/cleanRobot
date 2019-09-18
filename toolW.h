/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：工具窗口，拥有多个工具按钮，可以选择控制下位机一些设备的开关、升降，以及设置滚刷速度等
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 7 月 26 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef TOOLW_H
#define TOOLW_H

#include <QDialog>
#include <QDebug>
#include "cleanW.h"
#include "valueSetW.h"
#include "warningW.h"

namespace Ui {
class toolW;
}

class ToolW : public QDialog
{
    Q_OBJECT
    
public:
    explicit ToolW(QWidget *parent = nullptr);
    ~ToolW();
    
private slots:
    void on_returnMainButton_clicked(); // 返回主菜单按钮-点击槽函数
    void on_fanButton_clicked(); // 风机开启/关闭-点击槽函数
    void on_suckingButton_clicked(); // 吸水耙上升/下降-点击槽函数
    void on_brushButton_clicked(); // 滚刷开启/关闭-点击槽函数
    void on_brushUpButton_clicked(); // 滚刷上升/下降-点击槽函数
    void on_adButton_clicked(); // 广告开启/关闭-点击槽函数
    void on_brushSpeedButton_clicked(); // 滚刷速度设置-点击槽函数
    void doProssShowthis(); // 显示自身窗口-槽函数

signals:
    void doProseShowMainw(); // 显示主窗口信号

private:
    Ui::toolW *ui;

    QString m_strFanBtn;
    QString m_strBrushBtn;
    QString m_strBrushUpBtn;
    QString m_strSuckingbtn;
    QString m_strAdBtn;

    WarningW *tipDialog; // 定义提示弹出对话框

    void init(); // 初始化窗口
};

#endif //  TOOLW_H
