#-------------------------------------------------
#
# Project created by QtCreator 2019-06-03T15:30:12
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cleanRobot
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

#添加exe图标
RC_ICONS = car.ico

SOURCES += \
        main.cpp \
    common.cpp \
    frmnum.cpp \
    systemW.cpp \
    valueSetW.cpp \
    mainW.cpp \
    toolW.cpp \
    moreW.cpp \
    cleanReportW.cpp \
    aboutW.cpp \
    adModeW.cpp \
    carUdp.cpp \
    changePasswdW.cpp \
    chargingPilesetW.cpp \
    cleanW.cpp \
    generatRoadW.cpp \
    globalApplication.cpp \
    loadingW.cpp \
    showModeW.cpp \
    specificPointW.cpp \
    switchMapW.cpp \
    switchMapShowW.cpp \
    lockSetW.cpp \
    lockScreenW.cpp \
    promptW.cpp \
    warningW.cpp

HEADERS += \
    common.h \
    frmnum.h \
    systemW.h \
    valueSetW.h \
    mainW.h \
    toolW.h \
    moreW.h \
    cleanReportW.h \
    aboutW.h \
    adModeW.h \
    carUdp.h \
    changePasswdW.h \
    chargingPileSetW.h \
    cleanW.h \
    generatRoadW.h \
    globalApplication.h \
    loadingW.h \
    showModeW.h \
    specificPointW.h \
    switchMapW.h \
    switchMapShowW.h \
    lockSetW.h \
    lockScreenW.h \
    promptW.h \
    warningW.h

FORMS += \
    frmnum.ui \
    systemW.ui \
    valueSetW.ui \
    mainW.ui \
    toolW.ui \
    moreW.ui \
    aboutW.ui \
    adModeW.ui \
    changePasswdW.ui \
    chargingPileSetW.ui \
    cleanW.ui \
    generatRoadW.ui \
    cleanReportW.ui \
    loadingW.ui \
    showModeW.ui \
    specificPointW.ui \
    switchMapW.ui \
    switchMapShowW.ui \
    lockSetW.ui \
    lockScreenW.ui \
    promptW.ui \
    warningW.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    cleanimg.qrc \
    widget_lockimg.qrc \
    mainimg.qrc \
    widget_wainm.qrc \
    widget_promptimg.qrc \
    aboutimg.qrc \
    systrmimg.qrc \
    changgepasswordimg.qrc \
    chargingpilesetimg.qrc \
    cleanreportimg.qrc \
    switchmapimg.qrc \
    lockscreend.qrc \
    toolimg.qrc \
    toolsetimg.qrc \
    moreimg.qrc \
    generatroadimg.qrc \
    locktimeimg.qrc \
    map.qrc \
    showmodeimg.qrc \
    specificpointimg.qrc \
    loadingwidget.qrc

DISTFILES +=
