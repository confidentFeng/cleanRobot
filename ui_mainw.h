/********************************************************************************
** Form generated from reading UI file 'mainw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINW_H
#define UI_MAINW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainW
{
public:
    QPushButton *toolButton;
    QPushButton *cleanButton;
    QPushButton *moreButton;
    QGroupBox *groupBox;
    QLabel *schedule_label;
    QLabel *scheVal_label;
    QLabel *ele_label;
    QLabel *eleVal_label;
    QLabel *water_label;
    QLabel *time_label;
    QLabel *statusIcon_label;
    QLabel *waterVal_label;
    QLabel *timeVal_label;
    QLabel *status_label;

    void setupUi(QWidget *mainW)
    {
        if (mainW->objectName().isEmpty())
            mainW->setObjectName(QStringLiteral("mainW"));
        mainW->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(18);
        mainW->setFont(font);
        mainW->setStyleSheet(QLatin1String("#mainW\n"
"{\n"
"	border-image: url(:/new/prefix1/image/mainimag/board_img.png);\n"
"}"));
        toolButton = new QPushButton(mainW);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(34, 294, 250, 180));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        toolButton->setFont(font1);
        toolButton->setFocusPolicy(Qt::ClickFocus);
        toolButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/mainimag/tool.png);"));
        cleanButton = new QPushButton(mainW);
        cleanButton->setObjectName(QStringLiteral("cleanButton"));
        cleanButton->setGeometry(QRect(30, 40, 250, 180));
        cleanButton->setFont(font1);
        cleanButton->setFocusPolicy(Qt::ClickFocus);
        cleanButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/mainimag/clearn.png);"));
        moreButton = new QPushButton(mainW);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        moreButton->setGeometry(QRect(34, 548, 250, 180));
        moreButton->setFont(font1);
        moreButton->setFocusPolicy(Qt::ClickFocus);
        moreButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/mainimag/more.png);"));
        groupBox = new QGroupBox(mainW);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(304, 40, 714, 70));
        groupBox->setStyleSheet(QLatin1String("#groupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/mainimag/back_board1.png);\n"
"}"));
        schedule_label = new QLabel(groupBox);
        schedule_label->setObjectName(QStringLiteral("schedule_label"));
        schedule_label->setGeometry(QRect(21, 20, 26, 26));
        schedule_label->setStyleSheet(QStringLiteral(""));
        scheVal_label = new QLabel(groupBox);
        scheVal_label->setObjectName(QStringLiteral("scheVal_label"));
        scheVal_label->setGeometry(QRect(60, 20, 61, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        scheVal_label->setFont(font2);
        scheVal_label->setStyleSheet(QStringLiteral("color: rgb(51, 51, 51);"));
        ele_label = new QLabel(groupBox);
        ele_label->setObjectName(QStringLiteral("ele_label"));
        ele_label->setGeometry(QRect(133, 20, 30, 26));
        ele_label->setStyleSheet(QStringLiteral(""));
        eleVal_label = new QLabel(groupBox);
        eleVal_label->setObjectName(QStringLiteral("eleVal_label"));
        eleVal_label->setGeometry(QRect(177, 20, 61, 30));
        eleVal_label->setFont(font2);
        eleVal_label->setStyleSheet(QStringLiteral("color: rgb(51, 51, 51);"));
        water_label = new QLabel(groupBox);
        water_label->setObjectName(QStringLiteral("water_label"));
        water_label->setGeometry(QRect(240, 13, 44, 44));
        water_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/mainimag/water.jpg);"));
        time_label = new QLabel(groupBox);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setGeometry(QRect(358, 20, 26, 26));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        time_label->setFont(font3);
        time_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/mainimag/time.jpg);"));
        statusIcon_label = new QLabel(groupBox);
        statusIcon_label->setObjectName(QStringLiteral("statusIcon_label"));
        statusIcon_label->setGeometry(QRect(470, 20, 25, 26));
        statusIcon_label->setFont(font3);
        statusIcon_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/mainimag/status.jpg);"));
        waterVal_label = new QLabel(groupBox);
        waterVal_label->setObjectName(QStringLiteral("waterVal_label"));
        waterVal_label->setGeometry(QRect(285, 20, 61, 30));
        waterVal_label->setFont(font2);
        waterVal_label->setStyleSheet(QStringLiteral("color: rgb(51, 51, 51);"));
        timeVal_label = new QLabel(groupBox);
        timeVal_label->setObjectName(QStringLiteral("timeVal_label"));
        timeVal_label->setGeometry(QRect(397, 20, 61, 30));
        timeVal_label->setFont(font2);
        timeVal_label->setStyleSheet(QStringLiteral("color: rgb(51, 51, 51);"));
        status_label = new QLabel(groupBox);
        status_label->setObjectName(QStringLiteral("status_label"));
        status_label->setGeometry(QRect(509, 20, 141, 30));
        status_label->setFont(font2);
        status_label->setStyleSheet(QStringLiteral("color: rgb(51, 51, 51);"));
        groupBox->raise();
        toolButton->raise();
        cleanButton->raise();
        moreButton->raise();

        retranslateUi(mainW);

        QMetaObject::connectSlotsByName(mainW);
    } // setupUi

    void retranslateUi(QWidget *mainW)
    {
        mainW->setWindowTitle(QApplication::translate("mainW", "mainW", Q_NULLPTR));
        toolButton->setText(QString());
        cleanButton->setText(QString());
        moreButton->setText(QString());
        groupBox->setTitle(QString());
        schedule_label->setText(QString());
        scheVal_label->setText(QApplication::translate("mainW", "100%", Q_NULLPTR));
        ele_label->setText(QString());
        eleVal_label->setText(QApplication::translate("mainW", "100%", Q_NULLPTR));
        water_label->setText(QString());
        time_label->setText(QString());
        statusIcon_label->setText(QString());
        waterVal_label->setText(QApplication::translate("mainW", "100%", Q_NULLPTR));
        timeVal_label->setText(QApplication::translate("mainW", "100%", Q_NULLPTR));
        status_label->setText(QApplication::translate("mainW", "\345\267\262\345\210\260\350\276\276\345\212\240\346\260\264\347\202\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainW: public Ui_mainW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINW_H
