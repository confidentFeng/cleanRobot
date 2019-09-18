/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：更多-清扫报告窗口，列表显示所有清扫报告，以及时间日期等信息
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 28 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef CLEANREPORTW_H
#define CLEANREPORTW_H

#include <QDialog>
#include <QStandardItemModel>
#include <QLabel>
#include <QScroller>
#include <QScrollBar>
#include <QScrollArea>
#include <QListWidgetItem>
#include <QDir>
#include <QDateTime>
#include <QDebug>
#include "switchMapShowW.h"

namespace Ui {
class CleanReportW;
}

class CleanReportW : public QDialog
{
    Q_OBJECT

public:
    explicit CleanReportW(QWidget *parent = nullptr);
    ~CleanReportW();

signals:
     void doProseShowMoreW(); // 显示更多窗口的信号

private slots:
     void on_returnMoreButton_clicked(); // 返回更多窗口按钮-点击槽函数

private:
    Ui::CleanReportW *ui;

    QStringList m_txtAbsPatch; // 清扫报告的绝对路径名，时间升序

    void init(); // 初始化窗口
    void ReadAllReport(); // 获得所有清扫报告名字并按创建时间排序
    void AddListWigetItem(); // 添加清扫报告项到列表中
};

#endif //  CLEANREPORTD_H
