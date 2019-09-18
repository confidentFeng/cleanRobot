/********************************************************************************
** Form generated from reading UI file 'toolw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLW_H
#define UI_TOOLW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_toolW
{
public:
    QGroupBox *groupBox_2;
    QPushButton *returnMainButton;
    QLabel *toolLabel;
    QGroupBox *groupBox;
    QGroupBox *groupBox_3;
    QLabel *fanIconLabel;
    QPushButton *fanButton;
    QLabel *fanLabel;
    QGroupBox *groupBox_4;
    QLabel *brushIconLabel;
    QGroupBox *groupBox_5;
    QLabel *brushLabel;
    QGroupBox *groupBox_6;
    QGroupBox *groupBox_7;
    QLabel *adIconLabel;
    QLabel *adLabel;
    QPushButton *brushButton;
    QPushButton *adButton;
    QPushButton *suckingButton;
    QPushButton *brushUpButton;
    QPushButton *brushSpeedButton;
    QLabel *brushUpIconLabel;
    QLabel *brushUpLabel;
    QLabel *suckingIconLabel;
    QLabel *suckingLabel;

    void setupUi(QDialog *toolW)
    {
        if (toolW->objectName().isEmpty())
            toolW->setObjectName(QStringLiteral("toolW"));
        toolW->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        toolW->setFont(font);
        toolW->setStyleSheet(QStringLiteral(""));
        groupBox_2 = new QGroupBox(toolW);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(17, 10, 980, 80));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(35);
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QLatin1String("#groupBox_2\n"
"{\n"
"	border-image: url(:/new/prefix1/image/toolimag/back_board1.png);\n"
"}"));
        returnMainButton = new QPushButton(groupBox_2);
        returnMainButton->setObjectName(QStringLiteral("returnMainButton"));
        returnMainButton->setGeometry(QRect(20, 27, 16, 26));
        returnMainButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/return.png);"));
        toolLabel = new QLabel(groupBox_2);
        toolLabel->setObjectName(QStringLiteral("toolLabel"));
        toolLabel->setGeometry(QRect(420, 11, 111, 58));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(35);
        font2.setBold(false);
        font2.setWeight(50);
        toolLabel->setFont(font2);
        toolLabel->setStyleSheet(QStringLiteral(""));
        groupBox = new QGroupBox(toolW);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(55, 130, 914, 610));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(18);
        font3.setKerning(false);
        groupBox->setFont(font3);
        groupBox->setStyleSheet(QLatin1String("#groupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/toolimag/back_board.png);\n"
"}"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(123, 98, 786, 2));
        groupBox_3->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/light.png);"));
        fanIconLabel = new QLabel(groupBox);
        fanIconLabel->setObjectName(QStringLiteral("fanIconLabel"));
        fanIconLabel->setGeometry(QRect(33, 22, 60, 60));
        fanIconLabel->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/fan.png);"));
        fanButton = new QPushButton(groupBox);
        fanButton->setObjectName(QStringLiteral("fanButton"));
        fanButton->setGeometry(QRect(809, 28, 85, 50));
        fanButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/pbut_open.png);"));
        fanLabel = new QLabel(groupBox);
        fanLabel->setObjectName(QStringLiteral("fanLabel"));
        fanLabel->setGeometry(QRect(123, 28, 101, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        font4.setKerning(true);
        font4.setStyleStrategy(QFont::PreferDefault);
        fanLabel->setFont(font4);
        fanLabel->setStyleSheet(QStringLiteral("color: rgb(110, 110, 110);"));
        fanLabel->setFrameShape(QFrame::NoFrame);
        fanLabel->setFrameShadow(QFrame::Plain);
        fanLabel->setLineWidth(0);
        fanLabel->setTextFormat(Qt::AutoText);
        fanLabel->setIndent(0);
        fanLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(123, 196, 786, 2));
        groupBox_4->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/light.png);"));
        brushIconLabel = new QLabel(groupBox);
        brushIconLabel->setObjectName(QStringLiteral("brushIconLabel"));
        brushIconLabel->setGeometry(QRect(33, 222, 60, 60));
        brushIconLabel->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/brush.png);"));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(123, 296, 786, 2));
        groupBox_5->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/light.png);"));
        brushLabel = new QLabel(groupBox);
        brushLabel->setObjectName(QStringLiteral("brushLabel"));
        brushLabel->setGeometry(QRect(123, 230, 51, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setWeight(75);
        brushLabel->setFont(font5);
        brushLabel->setStyleSheet(QStringLiteral("color: rgb(110, 110, 110);"));
        brushLabel->setFrameShape(QFrame::NoFrame);
        brushLabel->setFrameShadow(QFrame::Plain);
        brushLabel->setLineWidth(0);
        brushLabel->setTextFormat(Qt::AutoText);
        brushLabel->setIndent(0);
        brushLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(123, 396, 786, 2));
        groupBox_6->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/light.png);"));
        groupBox_7 = new QGroupBox(groupBox);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(123, 496, 786, 2));
        groupBox_7->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/light.png);"));
        adIconLabel = new QLabel(groupBox);
        adIconLabel->setObjectName(QStringLiteral("adIconLabel"));
        adIconLabel->setGeometry(QRect(33, 522, 60, 60));
        adIconLabel->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/ad.png);"));
        adLabel = new QLabel(groupBox);
        adLabel->setObjectName(QStringLiteral("adLabel"));
        adLabel->setGeometry(QRect(123, 530, 71, 41));
        adLabel->setFont(font5);
        adLabel->setStyleSheet(QStringLiteral("color: rgb(110, 110, 110);"));
        adLabel->setFrameShape(QFrame::NoFrame);
        adLabel->setFrameShadow(QFrame::Plain);
        adLabel->setLineWidth(0);
        adLabel->setTextFormat(Qt::AutoText);
        adLabel->setIndent(0);
        adLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        brushButton = new QPushButton(groupBox);
        brushButton->setObjectName(QStringLiteral("brushButton"));
        brushButton->setGeometry(QRect(809, 221, 85, 50));
        brushButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/pbut_close.png);"));
        adButton = new QPushButton(groupBox);
        adButton->setObjectName(QStringLiteral("adButton"));
        adButton->setGeometry(QRect(809, 523, 85, 50));
        adButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/pbut_close.png);"));
        suckingButton = new QPushButton(groupBox);
        suckingButton->setObjectName(QStringLiteral("suckingButton"));
        suckingButton->setGeometry(QRect(809, 120, 85, 50));
        suckingButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/pbut_close.png);"));
        brushUpButton = new QPushButton(groupBox);
        brushUpButton->setObjectName(QStringLiteral("brushUpButton"));
        brushUpButton->setGeometry(QRect(809, 320, 85, 50));
        brushUpButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/pbut_close.png);"));
        brushSpeedButton = new QPushButton(groupBox);
        brushSpeedButton->setObjectName(QStringLiteral("brushSpeedButton"));
        brushSpeedButton->setGeometry(QRect(5, 400, 904, 95));
        brushSpeedButton->setFont(font5);
        brushSpeedButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/toolimag/brush_speed.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/toolimag/brush_speed.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/toolimag/brush_speed1.png)}"));
        brushUpIconLabel = new QLabel(groupBox);
        brushUpIconLabel->setObjectName(QStringLiteral("brushUpIconLabel"));
        brushUpIconLabel->setGeometry(QRect(33, 315, 60, 60));
        brushUpIconLabel->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/brush_up_dow.png);"));
        brushUpLabel = new QLabel(groupBox);
        brushUpLabel->setObjectName(QStringLiteral("brushUpLabel"));
        brushUpLabel->setGeometry(QRect(120, 325, 101, 41));
        brushUpLabel->setFont(font5);
        brushUpLabel->setStyleSheet(QStringLiteral("color: rgb(110, 110, 110);"));
        brushUpLabel->setFrameShape(QFrame::NoFrame);
        brushUpLabel->setFrameShadow(QFrame::Plain);
        brushUpLabel->setLineWidth(0);
        brushUpLabel->setTextFormat(Qt::AutoText);
        brushUpLabel->setIndent(0);
        brushUpLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        suckingIconLabel = new QLabel(groupBox);
        suckingIconLabel->setObjectName(QStringLiteral("suckingIconLabel"));
        suckingIconLabel->setGeometry(QRect(33, 120, 60, 60));
        suckingIconLabel->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolimag/water_up_dow.png);"));
        suckingLabel = new QLabel(groupBox);
        suckingLabel->setObjectName(QStringLiteral("suckingLabel"));
        suckingLabel->setGeometry(QRect(123, 125, 131, 41));
        suckingLabel->setFont(font4);
        suckingLabel->setStyleSheet(QStringLiteral("color: rgb(110, 110, 110);"));
        suckingLabel->setFrameShape(QFrame::NoFrame);
        suckingLabel->setFrameShadow(QFrame::Plain);
        suckingLabel->setLineWidth(0);
        suckingLabel->setTextFormat(Qt::AutoText);
        suckingLabel->setIndent(0);
        suckingLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        retranslateUi(toolW);

        QMetaObject::connectSlotsByName(toolW);
    } // setupUi

    void retranslateUi(QDialog *toolW)
    {
        toolW->setWindowTitle(QApplication::translate("toolW", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        returnMainButton->setText(QString());
        toolLabel->setText(QApplication::translate("toolW", "\345\267\245\345\205\267", Q_NULLPTR));
        groupBox->setTitle(QString());
        groupBox_3->setTitle(QString());
        fanIconLabel->setText(QString());
        fanButton->setText(QString());
        fanLabel->setText(QApplication::translate("toolW", "\345\220\270\346\260\264\351\243\216\346\234\272", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        brushIconLabel->setText(QString());
        groupBox_5->setTitle(QString());
        brushLabel->setText(QApplication::translate("toolW", "\346\273\232\345\210\267", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        groupBox_7->setTitle(QString());
        adIconLabel->setText(QString());
        adLabel->setText(QApplication::translate("toolW", "\345\271\277\345\221\212", Q_NULLPTR));
        brushButton->setText(QString());
        adButton->setText(QString());
        suckingButton->setText(QString());
        brushUpButton->setText(QString());
        brushSpeedButton->setText(QString());
        brushUpIconLabel->setText(QString());
        brushUpLabel->setText(QApplication::translate("toolW", "\346\273\232\345\210\267\345\215\207\351\231\215", Q_NULLPTR));
        suckingIconLabel->setText(QString());
        suckingLabel->setText(QApplication::translate("toolW", "\345\220\270\346\260\264\350\200\231\345\215\207\351\231\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class toolW: public Ui_toolW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLW_H
