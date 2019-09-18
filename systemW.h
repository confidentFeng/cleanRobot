/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：系统窗口，拥有"关机"、"重启"和"关于"按钮，可以选择关闭机器、重启机器或者查看关于信息
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 7 月 26 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef SYSTEMD_H
#define SYSTEMD_H

#include <QDialog>
#include <aboutW.h>
#include <QDebug>
#include "promptW.h"
#include <QSignalMapper>

namespace Ui {
class SystemW;
}

class SystemW : public QDialog
{
    Q_OBJECT

public:
    explicit SystemW(QWidget *parent = nullptr);
    ~SystemW();

signals:
     void doProseShowMoreW(); // 返回更多窗口信号

private slots:
     void on_returnMoreButton_clicked(); // 返回更多窗口按钮-点击槽函数
     void doProssRecivThisShow(); // 显示自身窗口
     void on_shutdownButton_clicked(); // 关机按钮-点击槽函数
     void on_rebootButton_clicked(); // 重启按钮-点击槽函数
     void on_aboutButton_clicked(); // 关于按钮-点击槽函数

private:
    Ui::SystemW *ui;

    PromptW *m_promptWin; // "提示框"窗口实例

    void init(); // 初始化窗口
};

#endif //  SYSTEMD_H
