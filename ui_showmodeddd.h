/********************************************************************************
** Form generated from reading UI file 'showmodeddd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWMODEW_H
#define UI_SHOWMODEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ShowModeW
{
public:
    QGroupBox *titleGroupBox;
    QPushButton *returnMoreButton;
    QLabel *titleLabel;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QGroupBox *groupBox;
    QPushButton *autoButton;
    QPushButton *manualButton;
    QGroupBox *gapGroupBox;
    QPushButton *gapGroupBox_returnBtn;
    QPushButton *gapOkButton;
    QLabel *gapLabel;
    QLineEdit *lineEdit;
    QGroupBox *cruiseGroupBox;
    QPushButton *addItemButton;
    QPushButton *lessItemButton;
    QListWidget *listWidget;
    QPushButton *cruiseGroupBox_returnBtn;
    QLabel *cruiseLabel;
    QGroupBox *setGroupBox;
    QPushButton *paramButton;
    QPushButton *resetButton;
    QPushButton *setGroupBox_returnBtn;
    QLabel *currentMapLabel;
    QLabel *mapIndexLabel;
    QPushButton *addBoardButton;
    QPushButton *lessBoardButton;
    QPushButton *resetBoardButton;

    void setupUi(QDialog *ShowModeDDD)
    {
        if (ShowModeDDD->objectName().isEmpty())
            ShowModeDDD->setObjectName(QStringLiteral("ShowModeDDD"));
        ShowModeDDD->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        font.setItalic(false);
        ShowModeDDD->setFont(font);
        ShowModeDDD->setAutoFillBackground(true);
        titleGroupBox = new QGroupBox(ShowModeDDD);
        titleGroupBox->setObjectName(QStringLiteral("titleGroupBox"));
        titleGroupBox->setGeometry(QRect(20, 10, 980, 80));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        titleGroupBox->setFont(font1);
        titleGroupBox->setStyleSheet(QLatin1String("#titleGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/showmodeimag/back_board1.png);\n"
"}"));
        titleGroupBox->setFlat(false);
        returnMoreButton = new QPushButton(titleGroupBox);
        returnMoreButton->setObjectName(QStringLiteral("returnMoreButton"));
        returnMoreButton->setGeometry(QRect(26, 27, 16, 26));
        returnMoreButton->setFont(font1);
        returnMoreButton->setFocusPolicy(Qt::NoFocus);
        returnMoreButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/showmodeimag/return.png);"));
        titleLabel = new QLabel(titleGroupBox);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(370, 11, 241, 58));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(35);
        font2.setBold(true);
        font2.setWeight(75);
        titleLabel->setFont(font2);
        titleLabel->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        titleLabel->setFrameShape(QFrame::NoFrame);
        titleLabel->setFrameShadow(QFrame::Plain);
        titleLabel->setLineWidth(0);
        okButton = new QPushButton(ShowModeDDD);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(270, 668, 200, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(20);
        okButton->setFont(font3);
        okButton->setAutoFillBackground(false);
        okButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/showmodeimag/ok.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/showmodeimag/ok.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/showmodeimag/ok1.png)}"));
        cancelButton = new QPushButton(ShowModeDDD);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(560, 668, 200, 60));
        cancelButton->setFont(font3);
        cancelButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/showmodeimag/cancel.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/showmodeimag/cancel.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/showmodeimag/cancel1.png)}"));
        groupBox = new QGroupBox(ShowModeDDD);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(25, 176, 161, 304));
        groupBox->setStyleSheet(QLatin1String("#groupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/showmodeimag/group.png);\n"
"}"));
        autoButton = new QPushButton(groupBox);
        autoButton->setObjectName(QStringLiteral("autoButton"));
        autoButton->setGeometry(QRect(9, 10, 141, 134));
        autoButton->setFont(font1);
        autoButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/showmodeimag/aout.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/showmodeimag/aout.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/showmodeimag/aout1.png)}"));
        manualButton = new QPushButton(groupBox);
        manualButton->setObjectName(QStringLiteral("manualButton"));
        manualButton->setGeometry(QRect(9, 140, 141, 141));
        manualButton->setFont(font1);
        manualButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/showmodeimag/manual.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/showmodeimag/manual.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/showmodeimag/manual1.png)}"));
        gapGroupBox = new QGroupBox(ShowModeDDD);
        gapGroupBox->setObjectName(QStringLiteral("gapGroupBox"));
        gapGroupBox->setGeometry(QRect(190, 230, 260, 250));
        gapGroupBox->setFont(font1);
        gapGroupBox->setAutoFillBackground(false);
        gapGroupBox->setStyleSheet(QLatin1String("#gapGroupBox\n"
"{\n"
"border-image: url(:/new/prefix1/image/showmodeimag/group3.png);\n"
"}"));
        gapGroupBox->setFlat(false);
        gapGroupBox_returnBtn = new QPushButton(gapGroupBox);
        gapGroupBox_returnBtn->setObjectName(QStringLiteral("gapGroupBox_returnBtn"));
        gapGroupBox_returnBtn->setGeometry(QRect(20, 30, 18, 29));
        gapGroupBox_returnBtn->setFont(font1);
        gapGroupBox_returnBtn->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/showmodeimag/return2.png);"));
        gapOkButton = new QPushButton(gapGroupBox);
        gapOkButton->setObjectName(QStringLiteral("gapOkButton"));
        gapOkButton->setGeometry(QRect(90, 170, 75, 41));
        gapOkButton->setFont(font3);
        gapOkButton->setAutoFillBackground(false);
        gapOkButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        gapOkButton->setFlat(true);
        gapLabel = new QLabel(gapGroupBox);
        gapLabel->setObjectName(QStringLiteral("gapLabel"));
        gapLabel->setGeometry(QRect(90, 20, 54, 41));
        gapLabel->setFont(font3);
        lineEdit = new QLineEdit(gapGroupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 100, 130, 40));
        lineEdit->setFont(font3);
        lineEdit->setFocusPolicy(Qt::ClickFocus);
        lineEdit->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/showmodeimag/password_board.png);"));
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit->setAlignment(Qt::AlignCenter);
        cruiseGroupBox = new QGroupBox(ShowModeDDD);
        cruiseGroupBox->setObjectName(QStringLiteral("cruiseGroupBox"));
        cruiseGroupBox->setGeometry(QRect(470, 160, 296, 386));
        cruiseGroupBox->setFont(font1);
        cruiseGroupBox->setStyleSheet(QLatin1String("#cruiseGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/showmodeimag/group4.png);\n"
"}"));
        addItemButton = new QPushButton(cruiseGroupBox);
        addItemButton->setObjectName(QStringLiteral("addItemButton"));
        addItemButton->setGeometry(QRect(30, 325, 75, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setWeight(50);
        addItemButton->setFont(font4);
        addItemButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        addItemButton->setFlat(true);
        lessItemButton = new QPushButton(cruiseGroupBox);
        lessItemButton->setObjectName(QStringLiteral("lessItemButton"));
        lessItemButton->setGeometry(QRect(170, 325, 75, 31));
        lessItemButton->setFont(font4);
        lessItemButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        lessItemButton->setFlat(true);
        listWidget = new QListWidget(cruiseGroupBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(12, 80, 258, 231));
        listWidget->setFont(font3);
        listWidget->setFrameShape(QFrame::NoFrame);
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setAlternatingRowColors(true);
        cruiseGroupBox_returnBtn = new QPushButton(cruiseGroupBox);
        cruiseGroupBox_returnBtn->setObjectName(QStringLiteral("cruiseGroupBox_returnBtn"));
        cruiseGroupBox_returnBtn->setGeometry(QRect(20, 30, 18, 29));
        cruiseGroupBox_returnBtn->setFont(font1);
        cruiseGroupBox_returnBtn->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/showmodeimag/return2.png);"));
        cruiseLabel = new QLabel(cruiseGroupBox);
        cruiseLabel->setObjectName(QStringLiteral("cruiseLabel"));
        cruiseLabel->setGeometry(QRect(100, 30, 81, 41));
        cruiseLabel->setFont(font3);
        setGroupBox = new QGroupBox(ShowModeDDD);
        setGroupBox->setObjectName(QStringLiteral("setGroupBox"));
        setGroupBox->setGeometry(QRect(800, 470, 206, 206));
        setGroupBox->setFont(font1);
        setGroupBox->setStyleSheet(QLatin1String("#setGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/showmodeimag/group5.png);\n"
"}"));
        paramButton = new QPushButton(setGroupBox);
        paramButton->setObjectName(QStringLiteral("paramButton"));
        paramButton->setGeometry(QRect(90, 130, 75, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font5.setPointSize(16);
        paramButton->setFont(font5);
        paramButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        paramButton->setFlat(true);
        resetButton = new QPushButton(setGroupBox);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(90, 40, 90, 41));
        resetButton->setFont(font5);
        resetButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        resetButton->setFlat(true);
        setGroupBox_returnBtn = new QPushButton(setGroupBox);
        setGroupBox_returnBtn->setObjectName(QStringLiteral("setGroupBox_returnBtn"));
        setGroupBox_returnBtn->setGeometry(QRect(40, 90, 18, 29));
        setGroupBox_returnBtn->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/showmodeimag/return3.png);"));
        currentMapLabel = new QLabel(ShowModeDDD);
        currentMapLabel->setObjectName(QStringLiteral("currentMapLabel"));
        currentMapLabel->setGeometry(QRect(20, 120, 141, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font6.setPointSize(22);
        currentMapLabel->setFont(font6);
        mapIndexLabel = new QLabel(ShowModeDDD);
        mapIndexLabel->setObjectName(QStringLiteral("mapIndexLabel"));
        mapIndexLabel->setGeometry(QRect(160, 120, 141, 41));
        mapIndexLabel->setFont(font6);
        addBoardButton = new QPushButton(ShowModeDDD);
        addBoardButton->setObjectName(QStringLiteral("addBoardButton"));
        addBoardButton->setGeometry(QRect(934, 176, 70, 91));
        addBoardButton->setFont(font1);
        addBoardButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/showmodeimag/add.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/showmodeimag/add.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/showmodeimag/add1.png)}"));
        lessBoardButton = new QPushButton(ShowModeDDD);
        lessBoardButton->setObjectName(QStringLiteral("lessBoardButton"));
        lessBoardButton->setGeometry(QRect(934, 265, 70, 91));
        lessBoardButton->setFont(font1);
        lessBoardButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/showmodeimag/less.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/showmodeimag/less.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/showmodeimag/less1.png)}"));
        resetBoardButton = new QPushButton(ShowModeDDD);
        resetBoardButton->setObjectName(QStringLiteral("resetBoardButton"));
        resetBoardButton->setGeometry(QRect(934, 354, 70, 90));
        resetBoardButton->setFont(font1);
        resetBoardButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/showmodeimag/reset.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/showmodeimag/reset.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/showmodeimag/reset1.png)}"));

        retranslateUi(ShowModeDDD);

        QMetaObject::connectSlotsByName(ShowModeDDD);
    } // setupUi

    void retranslateUi(QDialog *ShowModeDDD)
    {
        ShowModeDDD->setWindowTitle(QApplication::translate("ShowModeDDD", "Dialog", Q_NULLPTR));
        titleGroupBox->setTitle(QString());
        returnMoreButton->setText(QString());
        titleLabel->setText(QApplication::translate("ShowModeDDD", "\345\261\225\347\244\272\346\250\241\345\274\217", Q_NULLPTR));
        okButton->setText(QApplication::translate("ShowModeDDD", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("ShowModeDDD", "\345\217\226\346\266\210", Q_NULLPTR));
        groupBox->setTitle(QString());
        autoButton->setText(QString());
        manualButton->setText(QString());
        gapGroupBox->setTitle(QString());
        gapGroupBox_returnBtn->setText(QString());
        gapOkButton->setText(QApplication::translate("ShowModeDDD", "\347\241\256\345\256\232", Q_NULLPTR));
        gapLabel->setText(QApplication::translate("ShowModeDDD", "\351\227\264\351\232\224", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("ShowModeDDD", "30", Q_NULLPTR));
        cruiseGroupBox->setTitle(QString());
        addItemButton->setText(QApplication::translate("ShowModeDDD", "\346\267\273\345\212\240\347\202\271", Q_NULLPTR));
        lessItemButton->setText(QApplication::translate("ShowModeDDD", "\345\210\240\351\231\244\347\202\271", Q_NULLPTR));
        cruiseGroupBox_returnBtn->setText(QString());
        cruiseLabel->setText(QApplication::translate("ShowModeDDD", "\345\267\241\350\210\252\347\202\271", Q_NULLPTR));
        setGroupBox->setTitle(QString());
        paramButton->setText(QApplication::translate("ShowModeDDD", "\345\217\202\346\225\260", Q_NULLPTR));
        resetButton->setText(QApplication::translate("ShowModeDDD", "\351\207\215\350\256\276\345\256\232", Q_NULLPTR));
        setGroupBox_returnBtn->setText(QString());
        currentMapLabel->setText(QApplication::translate("ShowModeDDD", "\345\275\223\345\211\215\345\234\260\345\233\276\357\274\232", Q_NULLPTR));
        mapIndexLabel->setText(QApplication::translate("ShowModeDDD", "332", Q_NULLPTR));
        addBoardButton->setText(QString());
        lessBoardButton->setText(QString());
        resetBoardButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShowModeW: public Ui_ShowModeW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMODEW_H
