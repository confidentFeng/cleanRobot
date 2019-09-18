/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：更多-生成路径窗口，拥有"清洗模式"和"展示模式"这两个按钮，可以选择进入"清洗模式"或者"展示模式"窗口
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 28 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef GENERATROADW_H
#define GENERATROADW_H

#include <QDialog>
#include "showModeW.h"

namespace Ui {
class GeneratRoadW;
}

class GeneratRoadW : public QDialog
{
    Q_OBJECT

public:
    explicit GeneratRoadW(QWidget *parent = nullptr);
    ~GeneratRoadW();
signals:
     void doProseShowMoreW();

     void doProssChangTheMainText(QString str);

private slots:
     void on_returnMainButton_clicked(); // 返回主窗口按钮-点击槽函数
     void on_cleanModeButton_clicked(); // 清洗模式按钮-点击槽函数
     void on_showModeButton_clicked(); // 显示模式按钮-点击槽函数
     void doProssReciveThisShow(); // 显示自身窗口

private:
    Ui::GeneratRoadW *ui;

    void init(); // 初始化窗口
};

#endif // GENERATROADW_H
