/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：更多-锁屏设置窗口，拥有"更改密码"和"锁屏时间"这两个按钮，可以选择进入"更改密码"或者"锁屏时间"窗口
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 28 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef LOCKSET_H
#define LOCKSET_H

#include <QDialog>
#include "valueSetW.h"
#include "changepasswdW.h"

namespace Ui {
class LockSetW;
}

class lockSetW : public QDialog
{
    Q_OBJECT

public:
    explicit lockSetW(QWidget *parent = nullptr);
    ~lockSetW();

signals:
     void doProseShowMoreW();

private slots:
     void on_returnMoreButton_clicked(); // 返回更多窗口按钮-点击槽函数
     void on_changePasswdButton_clicked(); // 更改密码按钮-点击槽函数
     void on_lockTimeButton_clicked(); // 锁定时间按钮-点击槽函数
     void doProssShowthis(); // 显示当前窗口按钮-点击槽函数

private:
    Ui::LockSetW *ui;

    void init(); // 初始化窗口
};

#endif //  LOCKSET_H
