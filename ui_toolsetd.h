/********************************************************************************
** Form generated from reading UI file 'toolsetd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLSETD_H
#define UI_TOOLSETD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ToolSetD
{
public:
    QLabel *label;
    QPushButton *okButton;
    QPushButton *addButton;
    QPushButton *lessButton;
    QPushButton *closeButton;
    QLabel *speedLabel;

    void setupUi(QDialog *ToolSetD)
    {
        if (ToolSetD->objectName().isEmpty())
            ToolSetD->setObjectName(QStringLiteral("ToolSetD"));
        ToolSetD->resize(560, 380);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        ToolSetD->setFont(font);
        ToolSetD->setStyleSheet(QLatin1String("#ToolSetD\n"
"{\n"
"	border-image: url(:/new/prefix1/image/toolsetimag/back_board.png);\n"
"}"));
        label = new QLabel(ToolSetD);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 70, 181, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("A\346\200\235\346\272\220\351\273\221\344\275\223\342\200\22405"));
        font1.setPointSize(26);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 204, 255);"));
        label->setAlignment(Qt::AlignCenter);
        okButton = new QPushButton(ToolSetD);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(190, 265, 200, 60));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(22);
        okButton->setFont(font2);
        okButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/locktimeimag/ok.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/locktimeimag/ok.png)}"));
        addButton = new QPushButton(ToolSetD);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(150, 155, 64, 64));
        addButton->setFont(font);
        addButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/toolsetimag/add.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/toolsetimag/add.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/toolsetimag/add1.png)}"));
        lessButton = new QPushButton(ToolSetD);
        lessButton->setObjectName(QStringLiteral("lessButton"));
        lessButton->setGeometry(QRect(350, 155, 64, 64));
        lessButton->setFont(font);
        lessButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/toolsetimag/less.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/toolsetimag/less.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/toolsetimag/less1.png)}"));
        closeButton = new QPushButton(ToolSetD);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(20, 20, 20, 20));
        closeButton->setFont(font);
        closeButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/toolsetimag/close.png);"));
        speedLabel = new QLabel(ToolSetD);
        speedLabel->setObjectName(QStringLiteral("speedLabel"));
        speedLabel->setGeometry(QRect(220, 160, 120, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(24);
        speedLabel->setFont(font3);
        speedLabel->setAutoFillBackground(false);
        speedLabel->setStyleSheet(QLatin1String("#label_2\n"
"{\n"
"	border-image: url(:/new/prefix1/image/locktimeimag/data_board.png);\n"
"}\n"
""));
        speedLabel->setTextFormat(Qt::AutoText);
        speedLabel->setScaledContents(false);
        speedLabel->setAlignment(Qt::AlignCenter);
        speedLabel->setOpenExternalLinks(false);

        retranslateUi(ToolSetD);

        QMetaObject::connectSlotsByName(ToolSetD);
    } // setupUi

    void retranslateUi(QDialog *ToolSetD)
    {
        ToolSetD->setWindowTitle(QApplication::translate("ToolSetD", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ToolSetD", "\346\273\232\345\210\267\351\200\237\345\272\246", Q_NULLPTR));
        okButton->setText(QString());
        addButton->setText(QString());
        lessButton->setText(QString());
        closeButton->setText(QString());
        speedLabel->setText(QApplication::translate("ToolSetD", "4", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ToolSetD: public Ui_ToolSetD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLSETD_H
