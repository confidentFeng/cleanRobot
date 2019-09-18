/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：更多-路径规划-显示模式窗口，绘制地图并可以缩放、重置，摇杆功能，设置巡航点等
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 24 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef SHOWMODEW_H
#define SHOWMODEW_H

#include <QDialog>
#include <QDebug>
#include <QPainter>
#include <QPaintEvent>
#include <QMouseEvent>
#include <math.h>
#include <QScroller>
#include <QTimer>
#include "common.h"
#include "cleanW.h"

namespace Ui {
class ShowModeW;
}

class ShowModeW : public QDialog
{
    Q_OBJECT

public:
    explicit ShowModeW(QWidget *parent = nullptr);
    ~ShowModeW();

    QPoint getPointXyAdd() const;
    void setPointXyAdd(const QPoint &value);

signals:
    void doProssSendGeneratShow();

private slots:
    void on_returnMoreButton_clicked(); // 返回更多窗口-点击槽函数
    void on_addBoardButton_clicked(); // 放大背景图按钮-点击槽函数
    void on_lessBoardButton_clicked(); // 缩小背景图按钮-点击槽函数
    void on_resetBoardButton_clicked(); // 复位背景图按钮-点击槽函数
    void on_autoButton_clicked(); // 自动按钮-点击槽函数
    void on_manualButton_clicked(); // 手动按钮-点击槽函数

    void on_addItemButton_clicked(); // 手动模式添加巡航点
    void on_lessItemButton_clicked(); // 手动模式删除巡航点
    void on_gapGroupBox_returnBtn_clicked(); // 间隔分组框的返回按钮-点击槽函数
    void on_cruiseGroupBox_returnBtn_clicked(); // 巡航分组框的返回按钮-点击槽函数
    void on_setGroupBox_returnBtn_clicked(); // 设置分组框的返回按钮-点击槽函数
    void on_paramButton_clicked(); // 设置分组框的参数按钮-点击槽函数

    void doProssReChangeTheMainText(QString str); // 更改窗口名称标签的文本
    void doProssTimerOut(); // 超时函数：防止重复进入

private:
    Ui::ShowModeW *ui;

    // 地图相关
    QPixmap m_pix;
    QPoint m_originSize; // 地图图片的原始尺寸
    QPoint m_currImgSize; // 地图图片的当前尺寸
    QPoint m_imgPaintOrigin; // 地图图片的绘制原点
    int m_addLessCount; // 放大缩小次数

    // 摇杆相关
    QPoint m_bigCir_xy; // 大圆圆心坐标
    QPoint m_smallCir_xy; // 小圆圆心坐标
    QPoint m_mapRemovOld; // 鼠标不点击在摇杆大圆内时的鼠标点击坐标
    bool m_bigCirPressFlag; // 鼠标在摇杆大圆内时按下的标志位

    // 设定点相关
    QList<QPoint> Point_xy; // 定义Point数组
    QPoint m_preSetPoint_xy; // 设定点绘制坐标
    QPoint m_centPoint_xy; // 地图图片中心点
    QPoint m_mousePress_xy; // 当前鼠标按下坐标
    int m_mouseAllMove_x; // 鼠标全部移动x坐标
    int m_mouseAllMove_y; // 鼠标全部移动y坐标

    QTimer *m_timer; //  预设点设置相关定时器

    void init(); // 初始化窗口
    void paintEvent(QPaintEvent *event); // 绘图事件：绘制地图、摇杆中的大圆和小圆、预设点、设置点和点连线
    void mouseMoveEvent(QMouseEvent *); // 鼠标移动事件
    void mousePressEvent(QMouseEvent *); // 鼠标按下事件
    void mouseReleaseEvent(QMouseEvent *); // 鼠标释放事件：释放鼠标，则MousePressFlag复位，且小圆圆心设置为初始值，更新绘图事件后，重新绘图使小圆（摇杆）回到原处
};

#endif //  SHOWMODEW_H
