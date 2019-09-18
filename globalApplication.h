/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：实现应用程序的所有窗口响应鼠标事件的功能，以进一步实现超时锁屏功能
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 7 月 16 日
*/
#ifndef GLOBALAPPLICATION_H
#define GLOBALAPPLICATION_H

#include <QApplication>
#include <QMouseEvent>
#include <QThread>
#include <QTimer>
#include <QSettings>
#include <QDebug>
#include "lockScreenW.h"
#include "common.h"

class GlobalApplication : public QApplication
{
    Q_OBJECT

public:
     GlobalApplication(int&argc,char **argv);
     ~GlobalApplication();

     bool notify(QObject*, QEvent *);

private slots:
    void onTimeOut(); // 超时锁屏槽函数

private:
    LockScreenW *m_myLockWindow; // 锁屏窗口
    QObject *m_currWinObj; // 鼠标事件发生时的当前所在窗口

    QTimer *m_pTimer; // 定时器
    QThread *m_pThread; // 定时器线程

    void init(); // 初始化函数
};

#endif //  GLOBALAPPLICATION_H
