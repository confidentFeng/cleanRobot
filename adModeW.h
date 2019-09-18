/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：广告模式窗口，用以显示广告（暂时没用到）
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 7 月 10 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef ADMODEW_H
#define ADMODEW_H

#include <QDialog>

namespace Ui {
class AdModeW;
}

class AdModeW : public QDialog
{
    Q_OBJECT

public:
    explicit AdModeW(QWidget *parent = nullptr);
    ~AdModeW();

signals:
     void doProseShowMoreW(); //显示更多窗口的信号

private slots:
     void on_returnMoreButton_clicked(); //返回更多窗口按钮-点击槽函数

private:
    Ui::AdModeW *ui;

    void init(); //初始化窗口
};

#endif // ADMODEW_H
