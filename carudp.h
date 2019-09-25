/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：udp通信，与ros进行udp通信，进而与扫地机通信
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 7 月 10 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef CARUDP_H
#define CARUDP_H

#include <QDialog>
#include <QLabel>
#include <QTextCodec>
#include <QPainter>
#include <QTimer>
#include <QTime>
#include <QUdpSocket>
#include <QNetworkInterface>
#include <QDebug>
#include "common.h"

/*
 * g_recviveData[RECV_DATA_BASE+0] - 清理寄存器
 * g_recviveData[RECV_DATA_BASE+2~3] - 滚刷速度
 * g_recviveData[RECV_DATA_BASE+4] - 灯寄存器
 * g_recviveData[RECV_DATA_BASE+5] - 电源速度
 * g_recviveData[RECV_DATA_BASE+6] - 电源电量
 * g_recviveData[RECV_DATA_BASE+7] - 液位寄存器
*/
static QByteArray g_recviveDat; // UDP接受数据

namespace Ui {
class carUdp;
}

class carUdp : public QDialog
{
    Q_OBJECT

public:
    explicit carUdp(QWidget *parent = nullptr);
    ~carUdp();
   
    void udpSend(QByteArray data); // UDP发送数据
    bool udpSendConCmd(qint16 cmd, char data,char data1=0); // 发送控制命令：cmd为命令，char为数据（0-关闭/下降 1-开启/关闭）  参数默认值为0
    bool udpSendMapxy(qint16 cmd, int data1,int data2); // 发送地图导航点坐标数据
    bool udpSendQueryCmd(); // 发送查询指令
    void udpRecived(); // 接收函数
    //  ----
    void setPoweValue(QPoint m_vXY,QLabel *label,int value=100); // 设置电池电量
    void paintPower(QWidget *parent); // 绘制电池电量
    void setScheduleValue(QPoint m_vXY,QLabel *label,int value=80); // 设置进度
    void paintSchedule(QWidget *parent); // 绘制进度
    void setWaterValue(QPoint m_vXY,QLabel *label,int value=100); // 设置水量
    void paintWater(QWidget *parent); // 绘制水量

private slots:
    void doProssTimeout(); // 超时处理
    void doProssTimeoutToSendQueryCmd(); // 5S钟查询一次数据
    void doProssUdpread(); // UDP接收数据

signals:
    void doProseSendData(int powerdata,int waterdata,int scheduldata);

private:
    Ui::carUdp *ui;

    QUdpSocket *m_Socket; // 套接字
    QString m_ipAddress; // IP地址
    QByteArray m_sendData; // 发送数据帧
    uint8_t m_sendCount; // 重发命令帧次数
    bool m_receSuccessFlag; // 接收数据成功标志位
    QTimer *m_timer;
    QTimer *m_timerToSendQueryCmd; // udp接收查询数据超时定时器

    int m_powerValue; // 电量值
    int m_scheduleValue; // 进度值
    int m_waterValue; // 水量值
    QPoint m_powerIcon_XY; // 电量绘制坐标
    QPoint m_scheduleIcon_XY; // 进度绘制坐标
    QPoint m_waterIcon_XY; // 水量绘制坐标

    void init(); // 初始化函数
    bool delayMsec(int msec); // 非阻塞延时(true接收应发成功,fals接收应答失败)
};

#endif //  CARUDP_H
