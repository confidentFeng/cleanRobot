/********************************************************************************
** Form generated from reading UI file 'cleanw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLEANW_H
#define UI_CLEANW_H

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

class Ui_cleanW
{
public:
    QGroupBox *groupBox_2;
    QLabel *scheVal_label;
    QPushButton *returnMainButton;
    QLabel *schedule_label;
    QLabel *ele_label;
    QLabel *water_label;
    QLabel *time_label;
    QLabel *reach_label;
    QLabel *eleVal_label;
    QLabel *waterVal_label;
    QLabel *timeVal_label;
    QLabel *status_label;
    QGroupBox *groupBox;
    QPushButton *positionButton;
    QPushButton *lockButton;
    QPushButton *startButton;
    QLabel *startLabel;
    QLabel *lockLabel;
    QLabel *positonLabel;
    QPushButton *resetBoardButton;
    QPushButton *addBoardButton;
    QPushButton *lessBoardButton;

    void setupUi(QDialog *cleanW)
    {
        if (cleanW->objectName().isEmpty())
            cleanW->setObjectName(QStringLiteral("cleanW"));
        cleanW->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        cleanW->setFont(font);
        cleanW->setStyleSheet(QStringLiteral(""));
        groupBox_2 = new QGroupBox(cleanW);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 984, 80));
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QLatin1String("#groupBox_2\n"
"{\n"
"	border-image: url(:/new/prefix1/image/cleanimag/back_board1.png);\n"
"}"));
        scheVal_label = new QLabel(groupBox_2);
        scheVal_label->setObjectName(QStringLiteral("scheVal_label"));
        scheVal_label->setEnabled(true);
        scheVal_label->setGeometry(QRect(216, 25, 61, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        scheVal_label->setFont(font1);
        scheVal_label->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        returnMainButton = new QPushButton(groupBox_2);
        returnMainButton->setObjectName(QStringLiteral("returnMainButton"));
        returnMainButton->setGeometry(QRect(20, 27, 16, 26));
        returnMainButton->setFont(font);
        returnMainButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/cleanimag/return.png);"));
        schedule_label = new QLabel(groupBox_2);
        schedule_label->setObjectName(QStringLiteral("schedule_label"));
        schedule_label->setGeometry(QRect(176, 27, 26, 26));
        schedule_label->setFont(font);
        schedule_label->setStyleSheet(QStringLiteral(""));
        ele_label = new QLabel(groupBox_2);
        ele_label->setObjectName(QStringLiteral("ele_label"));
        ele_label->setGeometry(QRect(305, 27, 30, 26));
        ele_label->setStyleSheet(QStringLiteral(""));
        water_label = new QLabel(groupBox_2);
        water_label->setObjectName(QStringLiteral("water_label"));
        water_label->setGeometry(QRect(430, 20, 44, 44));
        water_label->setStyleSheet(QStringLiteral(""));
        time_label = new QLabel(groupBox_2);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setGeometry(QRect(565, 27, 26, 26));
        time_label->setFont(font);
        time_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/cleanimag/time.png);"));
        reach_label = new QLabel(groupBox_2);
        reach_label->setObjectName(QStringLiteral("reach_label"));
        reach_label->setGeometry(QRect(694, 27, 26, 26));
        reach_label->setFont(font);
        reach_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/cleanimag/status.png);"));
        eleVal_label = new QLabel(groupBox_2);
        eleVal_label->setObjectName(QStringLiteral("eleVal_label"));
        eleVal_label->setGeometry(QRect(351, 25, 61, 31));
        eleVal_label->setFont(font1);
        eleVal_label->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        waterVal_label = new QLabel(groupBox_2);
        waterVal_label->setObjectName(QStringLiteral("waterVal_label"));
        waterVal_label->setGeometry(QRect(480, 25, 61, 31));
        waterVal_label->setFont(font1);
        waterVal_label->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        timeVal_label = new QLabel(groupBox_2);
        timeVal_label->setObjectName(QStringLiteral("timeVal_label"));
        timeVal_label->setGeometry(QRect(605, 25, 61, 31));
        timeVal_label->setFont(font1);
        timeVal_label->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        status_label = new QLabel(groupBox_2);
        status_label->setObjectName(QStringLiteral("status_label"));
        status_label->setGeometry(QRect(734, 25, 221, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(18);
        status_label->setFont(font2);
        status_label->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        status_label->raise();
        scheVal_label->raise();
        returnMainButton->raise();
        schedule_label->raise();
        ele_label->raise();
        water_label->raise();
        time_label->raise();
        reach_label->raise();
        eleVal_label->raise();
        timeVal_label->raise();
        waterVal_label->raise();
        groupBox = new QGroupBox(cleanW);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(290, 628, 430, 120));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("#groupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/cleanimag/key_board.png);\n"
"}"));
        positionButton = new QPushButton(groupBox);
        positionButton->setObjectName(QStringLiteral("positionButton"));
        positionButton->setGeometry(QRect(328, 18, 43, 55));
        positionButton->setFont(font);
        positionButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/cleanimag/reset.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/cleanimag/reset.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/cleanimag/reset1.png)}"));
        lockButton = new QPushButton(groupBox);
        lockButton->setObjectName(QStringLiteral("lockButton"));
        lockButton->setGeometry(QRect(194, 18, 47, 52));
        lockButton->setFont(font);
        lockButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/cleanimag/lock.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/cleanimag/lock.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/cleanimag/lock1.png)}"));
        startButton = new QPushButton(groupBox);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(60, 20, 38, 44));
        startButton->setFont(font);
        startButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/cleanimag/start.png);"));
        startLabel = new QLabel(groupBox);
        startLabel->setObjectName(QStringLiteral("startLabel"));
        startLabel->setGeometry(QRect(60, 78, 51, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(18);
        font3.setKerning(true);
        startLabel->setFont(font3);
        startLabel->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        lockLabel = new QLabel(groupBox);
        lockLabel->setObjectName(QStringLiteral("lockLabel"));
        lockLabel->setGeometry(QRect(194, 78, 51, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(18);
        font4.setStrikeOut(false);
        lockLabel->setFont(font4);
        lockLabel->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        lockLabel->setTextFormat(Qt::AutoText);
        positonLabel = new QLabel(groupBox);
        positonLabel->setObjectName(QStringLiteral("positonLabel"));
        positonLabel->setGeometry(QRect(316, 78, 71, 31));
        positonLabel->setFont(font2);
        positonLabel->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        positonLabel->setFrameShape(QFrame::NoFrame);
        startLabel->raise();
        positionButton->raise();
        lockButton->raise();
        startButton->raise();
        lockLabel->raise();
        positonLabel->raise();
        resetBoardButton = new QPushButton(cleanW);
        resetBoardButton->setObjectName(QStringLiteral("resetBoardButton"));
        resetBoardButton->setGeometry(QRect(30, 638, 100, 100));
        resetBoardButton->setFont(font);
        resetBoardButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/cleanimag/return_start.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/cleanimag/return_start.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/cleanimag/return_start1.png)}"));
        addBoardButton = new QPushButton(cleanW);
        addBoardButton->setObjectName(QStringLiteral("addBoardButton"));
        addBoardButton->setGeometry(QRect(944, 110, 60, 90));
        addBoardButton->setFont(font);
        addBoardButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/cleanimag/add.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/cleanimag/add.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/cleanimag/add1.png)}"));
        lessBoardButton = new QPushButton(cleanW);
        lessBoardButton->setObjectName(QStringLiteral("lessBoardButton"));
        lessBoardButton->setGeometry(QRect(944, 190, 60, 90));
        lessBoardButton->setFont(font);
        lessBoardButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/cleanimag/less.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/cleanimag/less.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/cleanimag/less1.png)}"));
        groupBox->raise();
        resetBoardButton->raise();
        addBoardButton->raise();
        lessBoardButton->raise();
        groupBox_2->raise();

        retranslateUi(cleanW);

        QMetaObject::connectSlotsByName(cleanW);
    } // setupUi

    void retranslateUi(QDialog *cleanW)
    {
        cleanW->setWindowTitle(QApplication::translate("cleanW", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        scheVal_label->setText(QApplication::translate("cleanW", "100%", Q_NULLPTR));
        returnMainButton->setText(QString());
        schedule_label->setText(QString());
        ele_label->setText(QString());
        water_label->setText(QString());
        time_label->setText(QString());
        reach_label->setText(QString());
        eleVal_label->setText(QApplication::translate("cleanW", "100%", Q_NULLPTR));
        waterVal_label->setText(QApplication::translate("cleanW", "100%", Q_NULLPTR));
        timeVal_label->setText(QApplication::translate("cleanW", "100%", Q_NULLPTR));
        status_label->setText(QApplication::translate("cleanW", "\345\267\262\345\210\260\350\276\276\345\212\240\346\260\264\347\202\271", Q_NULLPTR));
        groupBox->setTitle(QString());
        positionButton->setText(QString());
        lockButton->setText(QString());
        startButton->setText(QString());
        startLabel->setText(QApplication::translate("cleanW", "\345\274\200\345\247\213", Q_NULLPTR));
        lockLabel->setText(QApplication::translate("cleanW", "\351\224\201\345\261\217", Q_NULLPTR));
        positonLabel->setText(QApplication::translate("cleanW", "\351\207\215\345\256\232\344\275\215", Q_NULLPTR));
        resetBoardButton->setText(QString());
        addBoardButton->setText(QString());
        lessBoardButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class cleanW: public Ui_cleanW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLEANW_H
