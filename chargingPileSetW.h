/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：更多-特定点设置-充电桩位置设置窗口，设置充电桩在地图中的坐标位置，另外排水点位置设置窗口、加水点位置设置窗口
*       也公用这一个窗口，通过修改"窗口标题标签"文本的方式
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 18 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef CHARGINGPILESETW_H
#define CHARGINGPILESETW_H

#include <QDialog>
#include <QPainter>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QScroller>
#include <QTimer>
#include <math.h>
#include <QDebug>
#include "warningW.h"
#include "promptW.h"
#include "common.h"

namespace Ui {
class ChargingPileSetW;
}

class ChargingPileSetW : public QDialog
{
    Q_OBJECT

public:
    explicit ChargingPileSetW(QWidget *parent = nullptr);
    ~ChargingPileSetW();

private slots:
    void on_returnMoreButton_clicked(); // 返回更多窗口按钮-点击槽函数

    void on_addBoardButton_clicked(); // 放大地图按钮-点击槽函数
    void on_lessBoardButton_clicked(); // 缩小地图按钮-点击槽函数
    void on_resetBoardButton_clicked(); // 复位地图按钮-点击槽函数

    void on_setCurrPointButton_clicked(); // 设当前点按钮-点击槽函数
    void on_manualSetButton_clicked(); // 手动调节按钮-点击槽函数
    void on_addxButton_clicked(); // 增加x轴值按钮-点击槽函数
    void on_lessxButton_clicked(); // 减少x轴值按钮-点击槽函数
    void on_addyButton_clicked(); // 增加y轴值按钮-点击槽函数
    void on_lessyButton_clicked(); // 减少y轴值按钮-点击槽函数

    void doProssReChangeTheMainText(QString str); // 更改窗口标题标签的文本
    void doProssTimerOut(); // 超时函数

    void on_okButton_clicked();

    void on_cancelButton_clicked();

signals:
    void doProseShowspecificpoint();

private:
    Ui::ChargingPileSetW *ui;

    void init(); // 初始化窗口

    // 地图相关
    QPixmap m_pix;
    QPoint m_originSize; // 地图图片的原始尺寸
    QPoint m_currImgSize; // 地图图片的当前尺寸
    QPoint m_imgPaintOrigin; // 地图图片的绘制原点
    int m_addLessCount; // 放大缩小次数
    QPoint m_pointMouseMove;

    // 设定点相关
    QList<QPoint> m_point_xy; // 定义Point数组
    QPoint m_preSetPoint_xy; // 设定点绘制坐标
    QPoint m_centPoint_xy; // 地图图片中心点
    QPoint m_mousePress_xy; // 当前鼠标按下坐标
    int m_mouseAllMove_x; // 鼠标全部移动x坐标
    int m_mouseAllMove_y; // 鼠标全部移动y坐标

    // 摇杆相关
    QPoint m_bigCir_xy; // 大圆圆心坐标
    QPoint m_smallCir_xy; // 小圆圆心坐标
    QPoint m_mapRemovOld; // 鼠标不点击在摇杆大圆内时的鼠标点击坐标
    bool m_bigCirPressFlag; // 鼠标在摇杆大圆内时按下的标志位

    // 各模式坐标点记录
    QPoint m_pointCharging; // 充电设置点
    QPoint m_pointAddWater; // 加水设置点
    QPoint m_pointLessWater; // 排水设置点

    QTimer *m_timer; // 预设点设置相关定时器

    void paintEvent(QPaintEvent *event); // 绘图事件：绘制摇杆大小圆、预设点
    void mouseMoveEvent(QMouseEvent *); // 鼠标移动事件：实现摇杆功能
    void mousePressEvent(QMouseEvent *); // 鼠标按下事件：获取摇杆所在的实时坐标
    void mouseReleaseEvent(QMouseEvent *); // 鼠标释放事件：释放鼠标，则MousePressFlag复位，且小圆圆心设置为初始值
};

#endif //  CHARGINGPILESETW_H
