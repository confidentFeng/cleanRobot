/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：提示窗口，其他窗口按下功能按键则弹出该窗口，并提示信息，
*       拥有"确定"和"取消"这两个按钮，按下"确定"按钮执行相应功能，按下"取消"按钮则关闭窗口
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 24 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef PROMPTW_H
#define PROMPTW_H

#include <QDialog>
#include <QProcess>
#include <QDebug>

namespace Ui {
class PromptW;
}

class PromptW : public QDialog
{
    Q_OBJECT

public:
    explicit PromptW(QWidget *parent = nullptr);
    ~PromptW();

    // 设置提示框的标题和信息标签文本
    void setTitle21Info(QString titleStr, QString infoStr, QString infoStr2);

private slots:
    void on_okButton_clicked(); // 确定按钮-点击槽函数
    void on_cancelButton_clicked(); // 取消按钮-点击槽函数
    void recvButton(QString str); // 接受"系统窗口"的"信号转发器"传递来的字符串

private:
    Ui::PromptW *ui;

    QString m_str;

    void init(); // 初始化窗口
};

#endif //  PROMPTW_H
