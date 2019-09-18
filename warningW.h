/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：警告窗口，显示警告信息，按下"确定按钮"则关闭窗口
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 8 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef WIDGET_WAINM_H
#define WIDGET_WAINM_H

#include <QDialog>

namespace Ui {
class WarningW;
}

class WarningW : public QDialog
{
    Q_OBJECT

public:
    explicit WarningW(QWidget *parent = nullptr);
    ~WarningW();

    // 设置提示框的标题和信息标签文本
    void setTitle2Info(QString titleStr, QString infoStr);

private slots:
    void on_okButton_clicked(); // 确定按钮-点击槽函数：按下则关闭自身窗口

private:
    Ui::WarningW *ui;

    void init(); // 初始化窗口
};

#endif //  WIDGET_WAINM_H
