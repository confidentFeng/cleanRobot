/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：更多-切换地图包窗口，列表显示所有地图包，并双击列表项可预览地图包
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 24 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef SWITCHMAPW_H
#define SWITCHMAPW_H

#include <QDialog>
#include <QStandardItemModel>
#include <QDir>
#include <QDebug>
#include <QDateTime>
#include <QScrollBar>
#include <QScrollArea>
#include <QListWidgetItem>
#include "switchMapShowW.h"
#include <QLabel>
#include <QScroller>
#include <QQueue>

namespace Ui {
class SwitchMapW;
}

class SwitchMapW : public QDialog
{
    Q_OBJECT

public:
    explicit SwitchMapW(QWidget *parent = nullptr);
    ~SwitchMapW();

signals:
     void doProseShowMoreW(); // 显示更多窗口信号
     void doProssSendMapPath(QString path);

private slots:
     void on_returnMoreButton_clicked(); // 返回更多窗口按钮-点击槽函数
     void on_listWidget_clicked(const QModelIndex &index); // 地图栏项目按钮-点击槽函数
     void on_returnMapButton_clicked(); // 撤回地图按钮-点击槽函数
     void doProcessReciverMapOk(); // 预览地图窗口的确定按钮按下信号对应槽函数

private:
    Ui::SwitchMapW *ui;

    SwitchMapShowW *m_myswitchmapdd;

    QStringList m_mapAbsPatch;
    QList<QDateTime> m_mapCreatTime;
    QStringList m_mapName;
    QQueue<int> m_queuemap;
    int m_mapNameIndex;

    void init(); // 初始化窗口
    void ReadAllMap(); // 获得所有地图名字并按创建时间排序
    void AddItemMap(); // 添加地图item到列表
};

#endif //  SWITCHMAPD_H
