/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：更多-切换地图包-预览地图窗口，预览地图包
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 24 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef SWITCHMAPSHOWW_H
#define SWITCHMAPSHOWW_H

#include <QDialog>
#include <QDebug>
#include <QPainter>
#include <QPaintEvent>

namespace Ui {
class SwitchMapShowW;
}

class SwitchMapShowW : public QDialog
{
    Q_OBJECT

public:
    explicit SwitchMapShowW(QWidget *parent = nullptr);
    ~SwitchMapShowW();

private slots:
    void RrciveMapPath(QString path); // 接受地图路径
    void on_okButton_clicked(); // 确定按钮-点击槽函数
    void on_cancelButton_clicked(); // 取消按钮-点击槽函数

signals:
    void doProcessSendMapOK();

private:
    Ui::SwitchMapShowW *ui;

    QString m_mapPath;

    void init(); // 初始化窗口
    void paintEvent(QPaintEvent *event); // 绘图事件：显示预览地图
};

#endif //  SWITCHMAPSHOWW_H
