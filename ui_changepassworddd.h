/********************************************************************************
** Form generated from reading UI file 'changepassworddd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDDD_H
#define UI_CHANGEPASSWORDDD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChangePasswordDD
{
public:
    QGroupBox *titleGroupBox;
    QPushButton *returnLockButton;
    QLabel *titleLable;
    QPushButton *okButton;
    QLineEdit *oldPasswd_lineEdit;
    QLineEdit *newPasswd_lineEdit;
    QLineEdit *confirmPasswd_lineEdit;

    void setupUi(QDialog *ChangePasswordDD)
    {
        if (ChangePasswordDD->objectName().isEmpty())
            ChangePasswordDD->setObjectName(QStringLiteral("ChangePasswordDD"));
        ChangePasswordDD->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(16);
        ChangePasswordDD->setFont(font);
        ChangePasswordDD->setFocusPolicy(Qt::ClickFocus);
        ChangePasswordDD->setStyleSheet(QLatin1String("#ChangePasswordDD\n"
"{\n"
"border-image: url(:/new/prefix1/image/changepasswordimag/back_board.png);\n"
"}"));
        titleGroupBox = new QGroupBox(ChangePasswordDD);
        titleGroupBox->setObjectName(QStringLiteral("titleGroupBox"));
        titleGroupBox->setGeometry(QRect(20, 20, 980, 80));
        titleGroupBox->setStyleSheet(QLatin1String("#titleGroupBox\n"
"{\n"
"border-image: url(:/new/prefix1/image/changepasswordimag/back_board1.png);\n"
"}"));
        titleGroupBox->setFlat(false);
        returnLockButton = new QPushButton(titleGroupBox);
        returnLockButton->setObjectName(QStringLiteral("returnLockButton"));
        returnLockButton->setGeometry(QRect(26, 27, 16, 26));
        returnLockButton->setFocusPolicy(Qt::NoFocus);
        returnLockButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/changepasswordimag/return.png);"));
        titleLable = new QLabel(titleGroupBox);
        titleLable->setObjectName(QStringLiteral("titleLable"));
        titleLable->setGeometry(QRect(394, 11, 191, 58));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(35);
        font1.setBold(true);
        font1.setWeight(75);
        titleLable->setFont(font1);
        titleLable->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        titleLable->setFrameShape(QFrame::NoFrame);
        titleLable->setFrameShadow(QFrame::Plain);
        titleLable->setLineWidth(0);
        okButton = new QPushButton(ChangePasswordDD);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(330, 510, 350, 60));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(20);
        okButton->setFont(font2);
        okButton->setFocusPolicy(Qt::NoFocus);
        okButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/changepasswordimag/ok.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/changepasswordimag/ok.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/changepasswordimag/ok2.png)}"));
        oldPasswd_lineEdit = new QLineEdit(ChangePasswordDD);
        oldPasswd_lineEdit->setObjectName(QStringLiteral("oldPasswd_lineEdit"));
        oldPasswd_lineEdit->setGeometry(QRect(330, 200, 350, 60));
        oldPasswd_lineEdit->setFont(font2);
        oldPasswd_lineEdit->setFocusPolicy(Qt::ClickFocus);
        oldPasswd_lineEdit->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);\n"
"color: rgb(208, 208, 208);"));
        oldPasswd_lineEdit->setEchoMode(QLineEdit::Normal);
        oldPasswd_lineEdit->setAlignment(Qt::AlignCenter);
        newPasswd_lineEdit = new QLineEdit(ChangePasswordDD);
        newPasswd_lineEdit->setObjectName(QStringLiteral("newPasswd_lineEdit"));
        newPasswd_lineEdit->setGeometry(QRect(330, 300, 350, 60));
        newPasswd_lineEdit->setFont(font2);
        newPasswd_lineEdit->setFocusPolicy(Qt::ClickFocus);
        newPasswd_lineEdit->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);\n"
"color: rgb(208, 208, 208);"));
        newPasswd_lineEdit->setAlignment(Qt::AlignCenter);
        confirmPasswd_lineEdit = new QLineEdit(ChangePasswordDD);
        confirmPasswd_lineEdit->setObjectName(QStringLiteral("confirmPasswd_lineEdit"));
        confirmPasswd_lineEdit->setGeometry(QRect(330, 400, 350, 60));
        confirmPasswd_lineEdit->setFont(font2);
        confirmPasswd_lineEdit->setFocusPolicy(Qt::ClickFocus);
        confirmPasswd_lineEdit->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/image/changepasswordimag/show.png);\n"
"color: rgb(208, 208, 208);"));
        confirmPasswd_lineEdit->setAlignment(Qt::AlignCenter);

        retranslateUi(ChangePasswordDD);

        QMetaObject::connectSlotsByName(ChangePasswordDD);
    } // setupUi

    void retranslateUi(QDialog *ChangePasswordDD)
    {
        ChangePasswordDD->setWindowTitle(QApplication::translate("ChangePasswordDD", "Dialog", Q_NULLPTR));
        titleGroupBox->setTitle(QString());
        returnLockButton->setText(QString());
        titleLable->setText(QApplication::translate("ChangePasswordDD", "\346\233\264\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        okButton->setText(QApplication::translate("ChangePasswordDD", "\347\241\256\345\256\232", Q_NULLPTR));
        oldPasswd_lineEdit->setText(QApplication::translate("ChangePasswordDD", "\345\216\237\345\257\206\347\240\201  \350\257\267\350\276\223\345\205\2456\344\275\215\346\225\260\345\255\227", Q_NULLPTR));
        newPasswd_lineEdit->setText(QApplication::translate("ChangePasswordDD", "\346\226\260\345\257\206\347\240\201  \350\257\267\350\276\223\345\205\2456\344\275\215\346\225\260\345\255\227", Q_NULLPTR));
        confirmPasswd_lineEdit->setText(QApplication::translate("ChangePasswordDD", "\347\241\256\350\256\244\345\257\206\347\240\201  \350\257\267\350\276\223\345\205\2456\344\275\215\346\225\260\345\255\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordDD: public Ui_ChangePasswordDD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDDD_H
