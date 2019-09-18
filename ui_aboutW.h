/********************************************************************************
** Form generated from reading UI file 'aboutW.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTW_H
#define UI_ABOUTW_H

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

class Ui_AboutW
{
public:
    QGroupBox *titleGroupBox;
    QPushButton *returnMoreButton;
    QLabel *titleLabel;
    QLabel *iconLabel;
    QLabel *nameLabel;
    QLabel *currVersionLabel;
    QLabel *versionRightLabel;

    void setupUi(QDialog *AboutW)
    {
        if (AboutW->objectName().isEmpty())
            AboutW->setObjectName(QStringLiteral("AboutW"));
        AboutW->resize(1024, 768);
        AboutW->setStyleSheet(QLatin1String("#AboutW\n"
"{\n"
"	border-image: url(:/new/prefix1/image/aboutimag/back_board.png);\n"
"}"));
        titleGroupBox = new QGroupBox(AboutW);
        titleGroupBox->setObjectName(QStringLiteral("titleGroupBox"));
        titleGroupBox->setGeometry(QRect(20, 10, 980, 80));
        titleGroupBox->setStyleSheet(QLatin1String("#titleGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/aboutimag/back_board1.png);\n"
"}"));
        titleGroupBox->setFlat(false);
        returnMoreButton = new QPushButton(titleGroupBox);
        returnMoreButton->setObjectName(QStringLiteral("returnMoreButton"));
        returnMoreButton->setGeometry(QRect(26, 27, 16, 26));
        returnMoreButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/aboutimag/return.png);"));
        titleLabel = new QLabel(titleGroupBox);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(410, 11, 101, 58));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(35);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        titleLabel->setFrameShape(QFrame::NoFrame);
        titleLabel->setFrameShadow(QFrame::Plain);
        titleLabel->setLineWidth(0);
        iconLabel = new QLabel(AboutW);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        iconLabel->setGeometry(QRect(185, 220, 120, 120));
        iconLabel->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/aboutimag/logo.png);"));
        nameLabel = new QLabel(AboutW);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(404, 190, 400, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        nameLabel->setFont(font1);
        currVersionLabel = new QLabel(AboutW);
        currVersionLabel->setObjectName(QStringLiteral("currVersionLabel"));
        currVersionLabel->setGeometry(QRect(404, 300, 400, 50));
        currVersionLabel->setFont(font1);
        versionRightLabel = new QLabel(AboutW);
        versionRightLabel->setObjectName(QStringLiteral("versionRightLabel"));
        versionRightLabel->setGeometry(QRect(404, 410, 461, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(20);
        versionRightLabel->setFont(font2);

        retranslateUi(AboutW);

        QMetaObject::connectSlotsByName(AboutW);
    } // setupUi

    void retranslateUi(QDialog *AboutW)
    {
        AboutW->setWindowTitle(QApplication::translate("AboutW", "Dialog", Q_NULLPTR));
        titleGroupBox->setTitle(QString());
        returnMoreButton->setText(QString());
        titleLabel->setText(QApplication::translate("AboutW", "\345\205\263\344\272\216", Q_NULLPTR));
        iconLabel->setText(QString());
        nameLabel->setText(QApplication::translate("AboutW", "\345\272\224\347\224\250\345\220\215\347\247\260  XXX", Q_NULLPTR));
        currVersionLabel->setText(QApplication::translate("AboutW", "\345\275\223\345\211\215\347\211\210\346\234\254\345\217\267  x.x.x.xxx", Q_NULLPTR));
        versionRightLabel->setText(QApplication::translate("AboutW", "\347\211\210\346\235\203\346\211\200\346\234\211 2018 \346\231\272\346\276\234\347\247\221\346\212\200 \344\277\235\347\225\231\346\211\200\346\234\211\346\235\203", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutW: public Ui_AboutW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTW_H
