/********************************************************************************
** Form generated from reading UI file 'morew.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOREW_H
#define UI_MOREW_H

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

class Ui_moreW
{
public:
    QGroupBox *groupBox_2;
    QPushButton *returnMainButton;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *genRoadButton;
    QPushButton *switchMapButton;
    QPushButton *lockScreenButton;
    QPushButton *cleanReportButton;
    QPushButton *adModeButton;
    QPushButton *spePointButton;
    QPushButton *systemButton;

    void setupUi(QDialog *moreW)
    {
        if (moreW->objectName().isEmpty())
            moreW->setObjectName(QStringLiteral("moreW"));
        moreW->resize(1024, 768);
        moreW->setStyleSheet(QStringLiteral(""));
        groupBox_2 = new QGroupBox(moreW);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(22, 10, 980, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QLatin1String("#groupBox_2\n"
"{\n"
"	border-image: url(:/new/prefix1/image/moreimag/back_board1.png);\n"
"}"));
        groupBox_2->setFlat(false);
        returnMainButton = new QPushButton(groupBox_2);
        returnMainButton->setObjectName(QStringLiteral("returnMainButton"));
        returnMainButton->setGeometry(QRect(26, 27, 16, 26));
        returnMainButton->setFont(font);
        returnMainButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/cleanimag/return.png);"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 11, 111, 58));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(35);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(0);
        groupBox = new QGroupBox(moreW);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(22, 110, 980, 643));
        groupBox->setStyleSheet(QLatin1String("#groupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/moreimag/back_board.png);\n"
"}"));
        genRoadButton = new QPushButton(groupBox);
        genRoadButton->setObjectName(QStringLiteral("genRoadButton"));
        genRoadButton->setGeometry(QRect(20, 13, 940, 80));
        genRoadButton->setFont(font);
        genRoadButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/moreimag/patch.jpg)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/moreimag/patch.jpg)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/moreimag/patch1.jpg)}"));
        switchMapButton = new QPushButton(groupBox);
        switchMapButton->setObjectName(QStringLiteral("switchMapButton"));
        switchMapButton->setGeometry(QRect(20, 100, 940, 80));
        switchMapButton->setFont(font);
        switchMapButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/moreimag/switch_map.jpg)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/moreimag/switch_map.jpg)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/moreimag/switch_map1.jpg)}"));
        lockScreenButton = new QPushButton(groupBox);
        lockScreenButton->setObjectName(QStringLiteral("lockScreenButton"));
        lockScreenButton->setGeometry(QRect(20, 188, 940, 80));
        lockScreenButton->setFont(font);
        lockScreenButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/moreimag/set_lock.jpg)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/moreimag/set_lock.jpg)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/moreimag/set_lock1.jpg)}"));
        cleanReportButton = new QPushButton(groupBox);
        cleanReportButton->setObjectName(QStringLiteral("cleanReportButton"));
        cleanReportButton->setGeometry(QRect(20, 275, 940, 80));
        cleanReportButton->setFont(font);
        cleanReportButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/moreimag/clean_report.jpg)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/moreimag/clean_report.jpg)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/moreimag/clean_report1.jpg)}"));
        adModeButton = new QPushButton(groupBox);
        adModeButton->setObjectName(QStringLiteral("adModeButton"));
        adModeButton->setGeometry(QRect(20, 363, 940, 80));
        adModeButton->setFont(font);
        adModeButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/moreimag/ad_mode.jpg)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/moreimag/ad_mode.jpg)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/moreimag/ad_mode1.jpg)}"));
        spePointButton = new QPushButton(groupBox);
        spePointButton->setObjectName(QStringLiteral("spePointButton"));
        spePointButton->setGeometry(QRect(20, 449, 940, 80));
        spePointButton->setFont(font);
        spePointButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/moreimag/Specific_point.jpg)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/moreimag/Specific_point.jpg)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/moreimag/Specific_point1.jpg)}"));
        systemButton = new QPushButton(groupBox);
        systemButton->setObjectName(QStringLiteral("systemButton"));
        systemButton->setGeometry(QRect(20, 538, 940, 80));
        systemButton->setFont(font);
        systemButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/moreimag/systems.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/moreimag/systems.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/moreimag/systems1.png)}"));
        switchMapButton->raise();
        lockScreenButton->raise();
        cleanReportButton->raise();
        adModeButton->raise();
        spePointButton->raise();
        systemButton->raise();
        genRoadButton->raise();
        groupBox->raise();
        groupBox_2->raise();

        retranslateUi(moreW);

        QMetaObject::connectSlotsByName(moreW);
    } // setupUi

    void retranslateUi(QDialog *moreW)
    {
        moreW->setWindowTitle(QApplication::translate("moreW", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        returnMainButton->setText(QString());
        label->setText(QApplication::translate("moreW", "\346\233\264\345\244\232", Q_NULLPTR));
        groupBox->setTitle(QString());
        genRoadButton->setText(QString());
        switchMapButton->setText(QString());
        lockScreenButton->setText(QString());
        cleanReportButton->setText(QString());
        adModeButton->setText(QString());
        spePointButton->setText(QString());
        systemButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class moreW: public Ui_moreW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOREW_H
