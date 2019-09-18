/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：清扫窗口，绘制地图并可以缩放、重置，摇杆功能，UDP获取并显示进度、电量等信息
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 28 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef CLEANW_H
#define CLEANW_H

#include <QDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QPainter>
#include <QPaintEvent>
#include <QMouseEvent>
#include <math.h>
#include <QDebug>
#include "carudp.h"
#include "lockScreenW.h"
#include "common.h"

// 定义全局TCP类对象
extern carUdp *mycarudp;

namespace Ui {
class cleanW;
}

class cleanW : public QDialog
{
    Q_OBJECT
    
public:
    explicit cleanW(QWidget *parent = nullptr);
    ~cleanW();
    
private slots:

    void on_returnMainButton_clicked(); // 返回主界面-点击槽函数
    void on_addBoardButton_clicked(); // 放大背景图按钮-点击槽函数
    void on_lessBoardButton_clicked(); // 缩小背景图按钮-点击槽函数
    void on_resetBoardButton_clicked(); // 复位背景图按钮-点击槽函数
    void on_startButton_clicked(); // 开始清理按钮-点击槽函数
    void on_lockButton_clicked(); // 锁屏按钮-点击槽函数
    void doProssReciveData(int scheduldata,int powerdata,int waterdata); // 接收并刷新设置进度、电量、水量值

signals:
    void doProseShowMainw(); // 显示主界面信号

private:
    Ui::cleanW *ui;

    // 地图相关
    QPixmap m_pix;
    QPoint m_originSize; // 地图图片的原始尺寸
    QPoint m_currImgSize; // 地图图片的尺寸大小，为1024*768像素
    QPoint m_imgPaintOrigin; // 地图图片的绘制原点
    QPoint m_mapRemov_Old; // 鼠标不点击在摇杆大圆内时的鼠标点击坐标
    int m_addLessCount; // 放大缩小次数（初始为0）

    // 摇杆相关
    QPoint m_bigCir_xy; // 大圆圆心坐标
    QPoint m_smallCir_xy; // 小圆圆心坐标
    bool m_bigCirPressFlag; // 鼠标按下的标志位

    void init(); // 初始化窗口
    void paintEvent(QPaintEvent *event); // 绘图事件：绘制地图、摇杆中的大圆和小圆
    void mouseMoveEvent(QMouseEvent *); // 鼠标移动事件：实现摇杆功能、绘制地图相关
    void mousePressEvent(QMouseEvent *); // 鼠标按下事件：获取摇杆所在的实时坐标
    void mouseReleaseEvent(QMouseEvent *); // 鼠标释放事件：释放鼠标，则MousePressFlag复位，重新绘图使小圆（摇杆）回到原处
    bool eventFilter(QObject *watched, QEvent *event); // 用事件过滤器拦截进度、电量、水量label中的QEvent::Paint事件
};

#endif //  CLEANW_H
