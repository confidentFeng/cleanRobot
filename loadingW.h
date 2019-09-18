/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：开机加载窗口，完成开机自检任务后，才进入主窗口
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 7 月 28 日
*/
#ifndef LOADINGW_H
#define LOADINGW_H

#include <QWidget>
#include <QThread>
#include <QTime>
#include "mainW.h"
#include "frmnum.h"

namespace Ui {
class LoadingW;
}

class LoadingW : public QWidget
{
    Q_OBJECT

public:
    explicit LoadingW(QWidget *parent = nullptr);
    ~LoadingW();

    void bootSelfTest(); // 开机自检
    void showMain();

private slots:
    void onTimeOut();

private:
    Ui::LoadingW *ui;

    int m_nIndex; // 当前图标下标
    QTimer *m_pTimer; // 定时器
    QThread *m_pThread; // 定时器线程

    void init(); // 初始化窗口
};

#endif //  LOADINGW_H
