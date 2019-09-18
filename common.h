/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：common.h/cpp，存放一些公用的宏、枚举、类
*
* 当前版本：1.0
* 作 者：聂咸丰
* 完成日期：2019 年 8 月 27 日
*/
#ifndef COMMON_H
#define COMMON_H

#include <QString>
#include <stdint.h>

#define uint16 quint16

#define POWERWITH  26 // 电量label的宽度
#define POWERHIGH  16 // 电量label的高度

typedef union
{
    uint8_t regist;

    struct stuReg
    {
        uint8_t registBit0:1; // 最低位(最右边开始) 一个位bit
        uint8_t registBit1:1;
        uint8_t registBit2:1;
        uint8_t registBit3:1;
        uint8_t registBit4:1;
        uint8_t registBit5:1;
        uint8_t registBit6:1;
        uint8_t registBit7:1;
    }stuRegist;
}unionRegister,g_unionCleanReg;

/******************************控制指令******************************/
#define CON_QUERY_FRAME_HEAD 0XFD // 帧头（控制和查询指令共用）
#define CON_QUERY_FRAME_INDEX 0X00 // 帧序（控制和查询指令共用）
#define CON_FRAME_LENGTH 0X0B // 帧长度
#define CON_QUERY_CMD_COUNT 0X01 // 命令个数（控制和查询指令共用）
#define CON_DATA_LENGTH 0X01 // 数据长度
#define CON_OPEN_DATA 0X01 // 开启/上升（数据）
#define CON_CLOSE_DATA 0x00 // 关闭/下降（数据）

#define BRUSH_OPEN_CMD 0X0001 // 滚刷开启/关闭
#define FAN_OPEN_CMD 0X0002 // 风机开启/关闭
#define WATER_VALVE_OPEN_CMD 0X0003 // 水阀开启/关闭
#define BRUSH_UP_CMD 0X0004 // 滚刷上升/下降
#define SUCKING_UP_CMD 0X0005 // 吸耙上升/下降
#define CLEAN_OPEN_CMD 0X0006 // 扫地开启/关闭
#define WASH_OPEN_CMD 0X0007 // 洗地开启/关闭
#define BREAT_LIGHT_OPEN_CMD 0X0008 // 呼吸灯开启/关闭
#define LEFT_TRUN_OPEN_CMD 0X0009 // 左转向灯开启/关闭
#define RIGHT_TRUN_OPEN_CMD 0X000a // 左转向灯开启/关闭
#define AD_OPEN_CMD 0X000b // 广告开启/关闭
#define POWER_OPEN_CMD 0X000c // 电源开启/关闭
#define BRUSH_SPEED_SET_CMD 0X000d // 滚刷速度设置
#define MAP_XY_SEND_CMD 0X000e // 发送地图导航点坐标指令

/******************************查询指令******************************/
#define QUERY_FRAME_LEGHTH 0X0E // 帧长度
#define QUERY_CMD 0X00 // 命令
#define QUERY_DATA_LENGTH 0X04 // 发送数据长度
#define QUERY_DATA_PRRP 0X0000 // 前一个发送数据
#define QUERY_DATA_NEXT 0X0007 // 后一个发送数据
#define RECV_DATA_BASE 12 // 接受数据索引基准

#define SMALL_CIRCLE_RADIUS 30 // 小圆半径 （小圆图片分辨率为60*60）
#define BIG_CIRCLE_RADIUS 90 // 大圆半径 （大圆图片分辨率为180*180）
#define WINDOW_WIDTH 1024 // 窗口宽度
#define WINDOW_HEIGHT 768 // 窗口高度

#define FILE_NAME "config.ini"
#define ADMIN_PASSWD "110520" // 管理员密码
#define KEY 698185 // 加密解密KEY值

/*** 关于 ***/
#define APP_NAME "智澜扫地机客户端" // 应用名称
#define CURR_VERSION "当前版本号  V1.0.0" // 当前版本号：主版本号.子版本号.修正版本号.[编译版本号]

// 公共类
class Common
{
public:
    explicit Common(); // 构造函数

    // static函数才能使用Common::fun()这种调用形式
    static QString encrypt(QString plainText, int key); // 加密函数
    static QString decrypt(QString cipherText, int key); // 解密函数
};

#endif //  COMMON_H
