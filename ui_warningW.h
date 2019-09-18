/********************************************************************************
** Form generated from reading UI file 'warningW.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGW_H
#define UI_WARNINGW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_warningW
{
public:
    QLabel *titleLabel;
    QLabel *infoLabel;
    QPushButton *okButton;

    void setupUi(QDialog *warningW)
    {
        if (warningW->objectName().isEmpty())
            warningW->setObjectName(QStringLiteral("warningW"));
        warningW->resize(380, 224);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        warningW->setFont(font);
        warningW->setStyleSheet(QStringLiteral(""));
        titleLabel = new QLabel(warningW);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(40, 10, 291, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(24);
        titleLabel->setFont(font1);
        titleLabel->setStyleSheet(QStringLiteral("color: rgb(0, 210, 255);"));
        titleLabel->setAlignment(Qt::AlignCenter);
        infoLabel = new QLabel(warningW);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        infoLabel->setGeometry(QRect(0, 90, 381, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(20);
        infoLabel->setFont(font2);
        infoLabel->setStyleSheet(QStringLiteral(""));
        infoLabel->setAlignment(Qt::AlignCenter);
        okButton = new QPushButton(warningW);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(0, 170, 380, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(22);
        okButton->setFont(font3);
        okButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/widget_wainmimag/ok_board.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/widget_wainmimag/ok_board.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/widget_wainmimag/ok_board1.png)}"));

        retranslateUi(warningW);

        QMetaObject::connectSlotsByName(warningW);
    } // setupUi

    void retranslateUi(QDialog *warningW)
    {
        warningW->setWindowTitle(QApplication::translate("warningW", "Dialog", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("warningW", "\345\267\262\345\256\214\346\210\220", Q_NULLPTR));
        infoLabel->setText(QApplication::translate("warningW", "\346\270\205\346\260\264\347\256\261\347\274\272\346\260\264\357\274\214\350\257\267\345\217\212\346\227\266\345\212\240\346\260\264", Q_NULLPTR));
        okButton->setText(QApplication::translate("warningW", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class warningW: public Ui_warningW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGW_H
