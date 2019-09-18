/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：关于窗口，显示"应用名称"、"版本号"、"版权信息"
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 7 月 10 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef ABOUTW_H
#define ABOUTW_H

#include <QDialog>
#include "common.h"

namespace Ui {
class AboutW;
}

class AboutW : public QDialog
{
    Q_OBJECT

public:
    explicit AboutW(QWidget *parent = nullptr);
    ~AboutW();

private slots:
    void on_returnMoreButton_clicked(); // 返回更多窗口按钮-点击槽函数

signals:
    void doProssSendSystemShow();

private:
    Ui::AboutW *ui;

    void init(); // 初始化窗口
};

#endif // ABOUTW_H
