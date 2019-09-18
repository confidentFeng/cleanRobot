/********************************************************************************
** Form generated from reading UI file 'generatRoadW.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATROADW_H
#define UI_GENERATROADW_H

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

class Ui_GeneratRoadW
{
public:
    QGroupBox *groupBox_2;
    QPushButton *returnMainButton;
    QLabel *label;
    QPushButton *cleanModeButton;
    QPushButton *showModeButton;

    void setupUi(QDialog *GeneratRoadW)
    {
        if (GeneratRoadW->objectName().isEmpty())
            GeneratRoadW->setObjectName(QStringLiteral("GeneratRoadW"));
        GeneratRoadW->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        GeneratRoadW->setFont(font);
        GeneratRoadW->setStyleSheet(QLatin1String("#GeneratRoadW\n"
"{\n"
"	border-image: url(:/new/prefix1/image/generatroadimg/back_board.png);\n"
"}"));
        groupBox_2 = new QGroupBox(GeneratRoadW);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 980, 80));
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QLatin1String("#groupBox_2\n"
"{\n"
"	border-image: url(:/new/prefix1/image/generatroadimg/back_board1.png);\n"
"}"));
        groupBox_2->setFlat(false);
        returnMainButton = new QPushButton(groupBox_2);
        returnMainButton->setObjectName(QStringLiteral("returnMainButton"));
        returnMainButton->setGeometry(QRect(26, 27, 16, 26));
        returnMainButton->setFont(font);
        returnMainButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/generatroadimg/return.png);"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(395, 11, 191, 58));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(35);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(0);
        cleanModeButton = new QPushButton(GeneratRoadW);
        cleanModeButton->setObjectName(QStringLiteral("cleanModeButton"));
        cleanModeButton->setGeometry(QRect(200, 220, 206, 256));
        cleanModeButton->setFont(font);
        cleanModeButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/generatroadimg/clean_mode.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/generatroadimg/clean_mode.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/generatroadimg/clean_mode1.png)}"));
        showModeButton = new QPushButton(GeneratRoadW);
        showModeButton->setObjectName(QStringLiteral("showModeButton"));
        showModeButton->setGeometry(QRect(630, 220, 206, 256));
        showModeButton->setFont(font);
        showModeButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/generatroadimg/show_mode.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/generatroadimg/show_mode.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/generatroadimg/show_mode1.png)}"));

        retranslateUi(GeneratRoadW);

        QMetaObject::connectSlotsByName(GeneratRoadW);
    } // setupUi

    void retranslateUi(QDialog *GeneratRoadW)
    {
        GeneratRoadW->setWindowTitle(QApplication::translate("GeneratRoadW", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        returnMainButton->setText(QString());
        label->setText(QApplication::translate("GeneratRoadW", "\350\267\257\345\212\262\350\247\204\345\210\222", Q_NULLPTR));
        cleanModeButton->setText(QString());
        showModeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GeneratRoadW: public Ui_GeneratRoadW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATROADW_H
