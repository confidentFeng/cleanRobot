/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：更多窗口，拥有"更改密码"和"生成地图包"等子功能按钮，可以选择进入"更改密码"和"生成地图包"等子功能窗口
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 28 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef MOREW_H
#define MOREW_H

#include <QDialog>
#include "generatRoadW.h"
#include "switchMapW.h"
#include "lockSetW.h"
#include "cleanreportW.h"
#include "adModeW.h"
#include "specificPointW.h"
#include "systemW.h"

namespace Ui {
class moreW;
}

class MoreW : public QDialog
{
    Q_OBJECT
    
public:
    explicit MoreW(QWidget *parent = nullptr);
    ~MoreW();
    
private slots:
    void on_returnMainButton_clicked(); // 返回主菜单按钮-点击槽函数
    void on_genRoadButton_clicked(); // 生成路径按钮-点击槽函数
    void on_switchMapButton_clicked(); // 切换地图包按钮-点击槽函数
    void on_lockScreenButton_clicked(); // 锁屏设置按钮-点击槽函数
    void on_cleanReportButton_clicked(); // 清扫报告按钮-点击槽函数
    void on_adModeButton_clicked(); // 广告模式按钮-点击槽函数
    void on_spePointButton_clicked(); // 特定点设置按钮-点击槽函数
    void on_systemButton_clicked(); // 系统按钮-点击槽函数
    void doProssShowthis(); // 显示自身界面

signals:
    void doProseShowMainw(); // 显示主窗口信号

private:
    Ui::moreW *ui;

    void init(); // 初始化窗口
};

#endif //  MOREW_H
