/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：修改密码窗口，输入原密码、新密码、确认密码来修改并加密写入新密码到文本中
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 5 月 28 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef CHANGEPASSWDW_H
#define CHANGEPASSWDW_H

#include <QDialog>
#include <QShowEvent>
#include <QValidator>
#include <QSettings>
#include <QDebug>
#include "warningW.h"
#include "common.h"

namespace Ui {
class ChangePasswdW;
}

class ChangePasswdW : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePasswdW(QWidget *parent = nullptr);
    ~ChangePasswdW();

private slots:
    void on_returnLockButton_clicked(); // 返回锁屏设置窗口按钮-点击槽函数
    void on_okButton_clicked(); // 确定设置密码按钮-点击槽函数
    void on_okButton_pressed(); // 确定按钮-按下槽函数

signals:
    void doProseShowlockscreend(); // 显示锁屏设置窗口的信号

private:
    Ui::ChangePasswdW *ui;

    void init(); // 初始化窗口
    bool eventFilter(QObject *watched, QEvent *event); // 事件过滤器：获取三行密码栏的焦点
    void showDefaultTip(); // 显示默认提示
};

#endif //  CHANGEPASSWDW_H
