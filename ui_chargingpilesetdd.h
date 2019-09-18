/********************************************************************************
** Form generated from reading UI file 'chargingpilesetdd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARGINGPILESETDD_H
#define UI_CHARGINGPILESETDD_H

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

class Ui_ChargingPileSetDD
{
public:
    QGroupBox *titleGroupBox;
    QPushButton *returnMoreButton;
    QLabel *titleLabel;
    QGroupBox *setGroupBox;
    QGroupBox *chooseGroupBox;
    QPushButton *setCurrPointButton;
    QPushButton *manualSetButton;
    QLabel *label;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *xAxisLabel;
    QLabel *yAxisLabel;
    QPushButton *addxButton;
    QPushButton *lessxButton;
    QPushButton *addyButton;
    QPushButton *lessyButton;
    QLabel *xLabel;
    QLabel *yLabel;
    QPushButton *resetBoardButton;
    QPushButton *addBoardButton;
    QPushButton *lessBoardButton;

    void setupUi(QDialog *ChargingPileSetDD)
    {
        if (ChargingPileSetDD->objectName().isEmpty())
            ChargingPileSetDD->setObjectName(QStringLiteral("ChargingPileSetDD"));
        ChargingPileSetDD->setWindowModality(Qt::WindowModal);
        ChargingPileSetDD->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        ChargingPileSetDD->setFont(font);
        titleGroupBox = new QGroupBox(ChargingPileSetDD);
        titleGroupBox->setObjectName(QStringLiteral("titleGroupBox"));
        titleGroupBox->setGeometry(QRect(20, 10, 980, 80));
        titleGroupBox->setFont(font);
        titleGroupBox->setStyleSheet(QLatin1String("#titleGroupBox\n"
"{\n"
"border-image: url(:/new/prefix1/image/chargingpilesetimag/back_board1.png);\n"
"}"));
        titleGroupBox->setFlat(false);
        returnMoreButton = new QPushButton(titleGroupBox);
        returnMoreButton->setObjectName(QStringLiteral("returnMoreButton"));
        returnMoreButton->setGeometry(QRect(26, 27, 16, 26));
        returnMoreButton->setFont(font);
        returnMoreButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/chargingpilesetimag/return.png);"));
        titleLabel = new QLabel(titleGroupBox);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(330, 11, 331, 58));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(35);
        font1.setBold(true);
        font1.setWeight(75);
        titleLabel->setFont(font1);
        titleLabel->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        titleLabel->setFrameShape(QFrame::NoFrame);
        titleLabel->setFrameShadow(QFrame::Plain);
        titleLabel->setLineWidth(0);
        setGroupBox = new QGroupBox(ChargingPileSetDD);
        setGroupBox->setObjectName(QStringLiteral("setGroupBox"));
        setGroupBox->setGeometry(QRect(0, 180, 270, 300));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setKerning(true);
        setGroupBox->setFont(font2);
        setGroupBox->setMouseTracking(true);
        setGroupBox->setStyleSheet(QLatin1String("#setGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/chargingpilesetimag/back_board.png);\n"
"}"));
        chooseGroupBox = new QGroupBox(setGroupBox);
        chooseGroupBox->setObjectName(QStringLiteral("chooseGroupBox"));
        chooseGroupBox->setGeometry(QRect(20, 30, 221, 40));
        chooseGroupBox->setToolTipDuration(-4);
        chooseGroupBox->setStyleSheet(QLatin1String("#chooseGroupBox\n"
"{\n"
"border-image: url(:/new/prefix1/image/chargingpilesetimag/ground_board.png);\n"
"}"));
        setCurrPointButton = new QPushButton(chooseGroupBox);
        setCurrPointButton->setObjectName(QStringLiteral("setCurrPointButton"));
        setCurrPointButton->setGeometry(QRect(1, 1, 110, 40));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(18);
        setCurrPointButton->setFont(font3);
        setCurrPointButton->setStyleSheet(QLatin1String("color: rgb(0, 210, 255);\n"
"background-color:transparent;"));
        setCurrPointButton->setFlat(true);
        manualSetButton = new QPushButton(chooseGroupBox);
        manualSetButton->setObjectName(QStringLiteral("manualSetButton"));
        manualSetButton->setGeometry(QRect(111, 0, 110, 40));
        manualSetButton->setFont(font3);
        manualSetButton->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/image/chargingpilesetimag/keyboard.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color:transparent;"));
        manualSetButton->setFlat(true);
        label = new QLabel(setGroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 80, 111, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(20);
        label->setFont(font4);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 210, 255);"));
        okButton = new QPushButton(setGroupBox);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(40, 250, 75, 31));
        okButton->setFont(font3);
        okButton->setStyleSheet(QLatin1String("color: rgb(0, 210, 255);\n"
"background-color: transparent;"));
        okButton->setFlat(true);
        cancelButton = new QPushButton(setGroupBox);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(130, 250, 75, 31));
        cancelButton->setFont(font3);
        cancelButton->setStyleSheet(QLatin1String("color: rgb(0, 210, 255);\n"
"background-color:transparent;"));
        cancelButton->setFlat(true);
        xAxisLabel = new QLabel(setGroupBox);
        xAxisLabel->setObjectName(QStringLiteral("xAxisLabel"));
        xAxisLabel->setGeometry(QRect(30, 130, 51, 21));
        xAxisLabel->setFont(font3);
        xAxisLabel->setStyleSheet(QStringLiteral("color: rgb(102, 102, 102);"));
        yAxisLabel = new QLabel(setGroupBox);
        yAxisLabel->setObjectName(QStringLiteral("yAxisLabel"));
        yAxisLabel->setGeometry(QRect(30, 180, 51, 31));
        yAxisLabel->setFont(font3);
        yAxisLabel->setStyleSheet(QStringLiteral("color: rgb(102, 102, 102);"));
        addxButton = new QPushButton(setGroupBox);
        addxButton->setObjectName(QStringLiteral("addxButton"));
        addxButton->setGeometry(QRect(100, 130, 24, 24));
        addxButton->setFont(font);
        addxButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/chargingpilesetimag/addmin.png);"));
        lessxButton = new QPushButton(setGroupBox);
        lessxButton->setObjectName(QStringLiteral("lessxButton"));
        lessxButton->setGeometry(QRect(200, 130, 24, 24));
        lessxButton->setFont(font);
        lessxButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/chargingpilesetimag/lessmin.png);"));
        addyButton = new QPushButton(setGroupBox);
        addyButton->setObjectName(QStringLiteral("addyButton"));
        addyButton->setGeometry(QRect(100, 190, 24, 24));
        addyButton->setFont(font);
        addyButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/chargingpilesetimag/addmin.png);"));
        lessyButton = new QPushButton(setGroupBox);
        lessyButton->setObjectName(QStringLiteral("lessyButton"));
        lessyButton->setGeometry(QRect(200, 190, 24, 24));
        lessyButton->setFont(font);
        lessyButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/chargingpilesetimag/lessmin.png);"));
        xLabel = new QLabel(setGroupBox);
        xLabel->setObjectName(QStringLiteral("xLabel"));
        xLabel->setGeometry(QRect(140, 130, 51, 21));
        xLabel->setFont(font3);
        xLabel->setAlignment(Qt::AlignCenter);
        yLabel = new QLabel(setGroupBox);
        yLabel->setObjectName(QStringLiteral("yLabel"));
        yLabel->setGeometry(QRect(140, 190, 51, 21));
        yLabel->setFont(font3);
        yLabel->setAlignment(Qt::AlignCenter);
        resetBoardButton = new QPushButton(ChargingPileSetDD);
        resetBoardButton->setObjectName(QStringLiteral("resetBoardButton"));
        resetBoardButton->setGeometry(QRect(934, 354, 70, 90));
        resetBoardButton->setFont(font);
        resetBoardButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/chargingpilesetimag/reset.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/chargingpilesetimag/reset.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/chargingpilesetimag/reset1.png)}"));
        addBoardButton = new QPushButton(ChargingPileSetDD);
        addBoardButton->setObjectName(QStringLiteral("addBoardButton"));
        addBoardButton->setGeometry(QRect(934, 176, 70, 91));
        addBoardButton->setFont(font);
        addBoardButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/chargingpilesetimag/add.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/chargingpilesetimag/add.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/chargingpilesetimag/add1.png)}"));
        lessBoardButton = new QPushButton(ChargingPileSetDD);
        lessBoardButton->setObjectName(QStringLiteral("lessBoardButton"));
        lessBoardButton->setGeometry(QRect(934, 265, 70, 91));
        lessBoardButton->setFont(font);
        lessBoardButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/chargingpilesetimag/less.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/chargingpilesetimag/less.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/chargingpilesetimag/less1.png)}"));

        retranslateUi(ChargingPileSetDD);

        QMetaObject::connectSlotsByName(ChargingPileSetDD);
    } // setupUi

    void retranslateUi(QDialog *ChargingPileSetDD)
    {
        titleGroupBox->setTitle(QString());
        returnMoreButton->setText(QString());
        titleLabel->setText(QApplication::translate("ChargingPileSetDD", "\345\205\205\347\224\265\346\241\251\344\275\215\347\275\256\350\256\276\347\275\256", Q_NULLPTR));
        setGroupBox->setTitle(QString());
        chooseGroupBox->setTitle(QString());
        setCurrPointButton->setText(QApplication::translate("ChargingPileSetDD", "\350\256\276\345\275\223\345\211\215\347\202\271", Q_NULLPTR));
        manualSetButton->setText(QApplication::translate("ChargingPileSetDD", "\346\211\213\345\212\250\350\260\203\350\212\202", Q_NULLPTR));
        label->setText(QApplication::translate("ChargingPileSetDD", "\345\235\220\346\240\207\346\230\276\347\244\272", Q_NULLPTR));
        okButton->setText(QApplication::translate("ChargingPileSetDD", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("ChargingPileSetDD", "\345\217\226\346\266\210", Q_NULLPTR));
        xAxisLabel->setText(QApplication::translate("ChargingPileSetDD", "X \350\275\264", Q_NULLPTR));
        yAxisLabel->setText(QApplication::translate("ChargingPileSetDD", "Y \350\275\264", Q_NULLPTR));
        addxButton->setText(QString());
        lessxButton->setText(QString());
        addyButton->setText(QString());
        lessyButton->setText(QString());
        xLabel->setText(QApplication::translate("ChargingPileSetDD", "0", Q_NULLPTR));
        yLabel->setText(QApplication::translate("ChargingPileSetDD", "0", Q_NULLPTR));
        resetBoardButton->setText(QString());
        addBoardButton->setText(QString());
        lessBoardButton->setText(QString());
        Q_UNUSED(ChargingPileSetDD);
    } // retranslateUi

};

namespace Ui {
    class ChargingPileSetDD: public Ui_ChargingPileSetDD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARGINGPILESETDD_H
