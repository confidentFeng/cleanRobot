/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：更多-锁屏设置-锁屏窗口，开机后进入主窗口或超时的时候显示，正确输入锁屏密码后则关闭窗口
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 28 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef LOCKSCREENW_H
#define LOCKSCREENW_H

#include <QDialog>
#include <QEvent>
#include <QFile>
#include <QDebug>
#include "common.h"

namespace Ui {
class LockScreenW;
}

class LockScreenW : public QDialog
{
    Q_OBJECT

public:
    explicit LockScreenW(QWidget *parent = nullptr);
    ~LockScreenW();

    // 注：用于超时锁屏相关，防止在已经出现锁屏窗口的情况下，还超时重复显示锁屏窗口
    bool m_unlockFlag; // 解除锁屏成功标志，true表示解除锁屏成功，false表示解除锁屏失败

private slots:
    void on_cancelButton_clicked();
    void on_loginButton_clicked();

private:
    Ui::LockScreenW *ui;

    void init(); // 初始化窗口
    bool eventFilter(QObject *watched, QEvent *event); // 事件过滤器
};

#endif //  LOCKSCREENW_H
