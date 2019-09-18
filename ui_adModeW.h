/********************************************************************************
** Form generated from reading UI file 'adModeW.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMODEW_H
#define UI_ADMODEW_H

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

class Ui_AdModeW
{
public:
    QGroupBox *titleGroupBox;
    QPushButton *returnMoreButton;
    QLabel *label;

    void setupUi(QDialog *AdModeW)
    {
        if (AdModeW->objectName().isEmpty())
            AdModeW->setObjectName(QStringLiteral("AdModeW"));
        AdModeW->resize(1024, 768);
        AdModeW->setStyleSheet(QLatin1String("#AdModeD\n"
"{\n"
"border-image: url(:/new/prefix1/image/changepasswordimag/back_board.png);\n"
"}"));
        titleGroupBox = new QGroupBox(AdModeW);
        titleGroupBox->setObjectName(QStringLiteral("titleGroupBox"));
        titleGroupBox->setGeometry(QRect(20, 10, 980, 58));
        titleGroupBox->setStyleSheet(QLatin1String("#titleGroupBox\n"
"{\n"
"border-image: url(:/new/prefix1/image/changepasswordimag/back_board1.png);\n"
"}"));
        titleGroupBox->setFlat(false);
        returnMoreButton = new QPushButton(titleGroupBox);
        returnMoreButton->setObjectName(QStringLiteral("returnMoreButton"));
        returnMoreButton->setGeometry(QRect(26, 16, 16, 26));
        returnMoreButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/cleanimag/return.png);"));
        label = new QLabel(titleGroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 0, 191, 58));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(35);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(0);

        retranslateUi(AdModeW);

        QMetaObject::connectSlotsByName(AdModeW);
    } // setupUi

    void retranslateUi(QDialog *AdModeW)
    {
        AdModeW->setWindowTitle(QApplication::translate("AdModeW", "Dialog", Q_NULLPTR));
        titleGroupBox->setTitle(QString());
        returnMoreButton->setText(QString());
        label->setText(QApplication::translate("AdModeW", "\345\271\277\345\221\212\346\250\241\345\274\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdModeW: public Ui_AdModeW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMODEW_H
