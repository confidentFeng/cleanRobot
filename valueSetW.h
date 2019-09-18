/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：锁屏时间窗口，设置锁屏时间
*      （1）增加值和减少值按钮可长按，0.5s后加速变化，1分钟为单位
*      （2）默认4分钟锁屏，范围为0~60分钟
*      （3）确认后返回上级页面
*      （4）将数据写入linux脚本中，设置为linux系统锁屏时间
*      （5）当锁屏时间发生变化时，确认按钮才高亮显示，并可点击
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 7 月 26 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef LOCKTIMEDD_H
#define LOCKTIMEDD_H

#include <QDialog>
#include <QTimer>
#include <QFile>
#include <QSettings>
#include <QDebug>
#include "common.h"
#include "warningW.h"

namespace Ui {
class ValueSetW;
}

class ValueSetW : public QDialog
{
    Q_OBJECT

public:
    explicit ValueSetW(QString titleStr, QString uintStr, QWidget *parent = nullptr);
    ~ValueSetW();

private slots:
    void on_returnParentButton_clicked(); // 返回父窗口按钮-点击槽函数
    void on_addButton_clicked(); // 增加值按钮-点击槽函数
    void on_addButton_pressed(); // 增加值按钮-按下槽函数
    void on_addButton_released(); // 增加值按钮-释放槽函数
    void on_lessButton_clicked(); // 减少值按钮-点击槽函数
    void on_lessButton_pressed(); // 减少值按钮-按下槽函数
    void on_lessButton_released(); // 减少值按钮-释放槽函数

    void on_okButton_clicked(); // 确定按钮-点击槽函数
    void on_okButton_pressed(); // 确定按钮-按下槽函数
    void halfSecondTimeout(); // 半秒钟超时槽函数:实现半秒钟后，长按加速修改值

signals:
    void doProseShowParent(); // 显示父窗口的信号

private:
    Ui::ValueSetW *ui;

    QTimer *m_addPressTimer; // 增加值按钮按下定时器
    QTimer *m_lessPressTimer; // 减小值按钮按下定时器
    QTimer *m_halfSecondTimer; // 按钮按下半秒钟定时器
    bool m_add2Less_flag; // 增加/减少值的标志位：true则增加，false则减少

    void init(); // 初始化窗口
};

#endif //  LOCKTIMEDD_H
