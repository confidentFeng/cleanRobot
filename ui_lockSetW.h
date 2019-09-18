/********************************************************************************
** Form generated from reading UI file 'lockSetW.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCKSETW_H
#define UI_LOCKSETW_H

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

class Ui_LockSetW
{
public:
    QGroupBox *titleGroupBox;
    QPushButton *returnMoreButton;
    QLabel *titleLabel;
    QPushButton *changePasswdButton;
    QPushButton *lockTimeButton;

    void setupUi(QDialog *LockSetW)
    {
        if (LockSetW->objectName().isEmpty())
            LockSetW->setObjectName(QStringLiteral("LockSetW"));
        LockSetW->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        LockSetW->setFont(font);
        LockSetW->setStyleSheet(QLatin1String("#LockSetW\n"
"{\n"
"	border-image: url(:/new/prefix1/image/lockscreedimag/back_board.png);\n"
"}"));
        titleGroupBox = new QGroupBox(LockSetW);
        titleGroupBox->setObjectName(QStringLiteral("titleGroupBox"));
        titleGroupBox->setGeometry(QRect(20, 10, 980, 80));
        titleGroupBox->setFont(font);
        titleGroupBox->setStyleSheet(QLatin1String("#titleGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/lockscreedimag/back_board1.png);\n"
"}"));
        titleGroupBox->setFlat(false);
        returnMoreButton = new QPushButton(titleGroupBox);
        returnMoreButton->setObjectName(QStringLiteral("returnMoreButton"));
        returnMoreButton->setGeometry(QRect(26, 27, 16, 26));
        returnMoreButton->setFont(font);
        returnMoreButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/lockscreedimag/return.png);"));
        titleLabel = new QLabel(titleGroupBox);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(394, 11, 191, 58));
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
        changePasswdButton = new QPushButton(LockSetW);
        changePasswdButton->setObjectName(QStringLiteral("changePasswdButton"));
        changePasswdButton->setGeometry(QRect(84, 240, 380, 186));
        changePasswdButton->setFont(font);
        changePasswdButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/lockscreedimag/chang_pass.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/lockscreedimag/chang_pass.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/lockscreedimag/chang_pass1.png)}"));
        lockTimeButton = new QPushButton(LockSetW);
        lockTimeButton->setObjectName(QStringLiteral("lockTimeButton"));
        lockTimeButton->setGeometry(QRect(560, 240, 380, 186));
        lockTimeButton->setFont(font);
        lockTimeButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/lockscreedimag/lock_time.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/lockscreedimag/lock_time.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/lockscreedimag/lock_time1.png)}"));

        retranslateUi(LockSetW);

        QMetaObject::connectSlotsByName(LockSetW);
    } // setupUi

    void retranslateUi(QDialog *LockSetW)
    {
        LockSetW->setWindowTitle(QApplication::translate("LockSetW", "Dialog", Q_NULLPTR));
        titleGroupBox->setTitle(QString());
        returnMoreButton->setText(QString());
        titleLabel->setText(QApplication::translate("LockSetW", "\351\224\201\345\261\217\350\256\276\347\275\256", Q_NULLPTR));
        changePasswdButton->setText(QString());
        lockTimeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LockSetW: public Ui_LockSetW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCKSETW_H
