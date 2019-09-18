/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：更多-特定点设置窗口，有三个按钮，可选择进入"充电桩位置设置"窗口、"排水点位置设置"窗口、"加水点位置设置"窗口
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 24 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef SPECIFICPOINTD_H
#define SPECIFICPOINTD_H

#include <QDialog>
#include <chargingPileSetW.h>

namespace Ui {
class SpecificPointW;
}

class SpecificPointW : public QDialog
{
    Q_OBJECT

public:
    explicit SpecificPointW(QWidget *parent = nullptr);
    ~SpecificPointW();

signals:
     void doProseShowMoreW(); // 返回更多窗口信号
     void doProssChangTheMainText(QString str);

private slots:
     void on_returnMoreButton_clicked(); // 返回更多窗口按钮-点击槽函数
     void on_chargButton_clicked(); // 充电桩位置设置按钮-点击槽函数
     void on_drainButton_clicked(); // 排水点位置设置按钮-点击槽函数
     void on_addWaterButton_clicked(); // 加水点位置设置按钮-点击槽函数
     void doProessShowThis(); // 显示自身窗口

private:
    Ui::SpecificPointW *ui;

    ChargingPileSetW *m_mychargingpileset;

    void init(); // 初始化窗口
};

#endif //  SPECIFICPOINTD_H
