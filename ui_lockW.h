/********************************************************************************
** Form generated from reading UI file 'lockW.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCKW_H
#define UI_LOCKW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Widget_Lock
{
public:
    QLabel *titleLabel;
    QLabel *infoLabel;
    QLineEdit *lineEdit;
    QPushButton *loginButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Widget_Lock)
    {
        if (Widget_Lock->objectName().isEmpty())
            Widget_Lock->setObjectName(QStringLiteral("Widget_Lock"));
        Widget_Lock->resize(380, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        Widget_Lock->setFont(font);
        Widget_Lock->setFocusPolicy(Qt::ClickFocus);
        Widget_Lock->setStyleSheet(QLatin1String("#Widget_Lock\n"
"{\n"
"border-image: url(:/new/prefix1/image/widget_lockimag/bigback_board.png);\n"
"}"));
        titleLabel = new QLabel(Widget_Lock);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(140, 30, 121, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(28);
        titleLabel->setFont(font1);
        titleLabel->setStyleSheet(QStringLiteral("color: rgb(0, 210, 255);"));
        infoLabel = new QLabel(Widget_Lock);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        infoLabel->setGeometry(QRect(40, 90, 321, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(22);
        infoLabel->setFont(font2);
        infoLabel->setFocusPolicy(Qt::ClickFocus);
        infoLabel->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        infoLabel->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(Widget_Lock);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 150, 281, 50));
        lineEdit->setFont(font2);
        lineEdit->setFocusPolicy(Qt::ClickFocus);
        lineEdit->setStyleSheet(QLatin1String("color: rgb(229, 229, 229);\n"
"border-image: url(:/new/prefix1/image/widget_lockimag/password_board.png);"));
        loginButton = new QPushButton(Widget_Lock);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(190, 242, 190, 70));
        loginButton->setFont(font);
        loginButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/widget_lockimag/ok.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/widget_lockimag/ok.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/widget_lockimag/ok1.png)}"));
        cancelButton = new QPushButton(Widget_Lock);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(0, 242, 190, 70));
        cancelButton->setFont(font);
        cancelButton->setFocusPolicy(Qt::StrongFocus);
        cancelButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/widget_lockimag/cancel.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/widget_lockimag/cancel.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/widget_lockimag/cancel1.png)}"));

        retranslateUi(Widget_Lock);

        QMetaObject::connectSlotsByName(Widget_Lock);
    } // setupUi

    void retranslateUi(QDialog *Widget_Lock)
    {
        Widget_Lock->setWindowTitle(QApplication::translate("Widget_Lock", "Dialog", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("Widget_Lock", "\345\267\262\351\224\201\345\261\217", Q_NULLPTR));
        infoLabel->setText(QApplication::translate("Widget_Lock", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\350\247\243\351\224\201", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Widget_Lock", "\350\257\267\350\276\223\345\205\2456\344\275\215\346\225\260\345\255\227", Q_NULLPTR));
        loginButton->setText(QString());
        cancelButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget_Lock: public Ui_Widget_Lock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCKW_H
