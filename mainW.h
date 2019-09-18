/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：主窗口，左侧显示"清洗"、"工具"、“"更多"这3个菜单按钮，另外上侧显示"电量"、"剩余水量"等信息
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 28 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef MAINW_H
#define MAINW_H

#include <QWidget>
#include <QSettings>
#include <QProcess>
#include <QDesktopWidget>
#include "cleanW.h"
#include "toolW.h"
#include "moreW.h"
#include "lockScreenW.h"
#include "carudp.h"

namespace Ui {
class mainW;
}

class MainW : public QWidget
{
    Q_OBJECT
    
public:
    explicit MainW(QWidget *parent = nullptr);
    ~MainW();

    void Lockfrom(); // 显示锁屏窗口

private slots:
    void on_cleanButton_clicked(); // 清扫按钮-点击槽函数
    void on_toolButton_clicked(); // 工具按钮-点击槽函数
    void on_moreButton_clicked(); // 更多按钮-点击槽函数
    void doProssShowthis(); // 显示自身窗口-槽函数
    void doProssReciveData(int powerdata, int waterdata, int scheduldata); // UDP接收并刷新设置状态栏label数据

private:
    Ui::mainW *ui;

    cleanW *m_cleanWindow; // 清扫窗口对象
    MoreW  *m_moreWindow; // 更多窗口对象

    void init(); // 初始化窗口
    void paintEvent(QPaintEvent *event); // 重载paintEvent事件：解决主窗口不显示背景图片的问题
    bool eventFilter(QObject *object, QEvent *event); // 用事件过滤器拦截进度、电量、水量label中的QEvent::Paint事件
};


#endif //  MAINW_H
