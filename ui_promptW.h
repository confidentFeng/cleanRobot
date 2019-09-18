/********************************************************************************
** Form generated from reading UI file 'promptW.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMPTW_H
#define UI_PROMPTW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PromptW
{
public:
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *titleLabel;
    QLabel *infoLabel;
    QLabel *infoLabel2;

    void setupUi(QDialog *PromptW)
    {
        if (PromptW->objectName().isEmpty())
            PromptW->setObjectName(QStringLiteral("PromptW"));
        PromptW->resize(400, 266);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(18);
        PromptW->setFont(font);
        PromptW->setStyleSheet(QLatin1String("#Widget_Prompt\n"
"{\n"
"border-image: url(:/new/prefix1/image/widget_promptimag/bigback_board.png);\n"
"}"));
        okButton = new QPushButton(PromptW);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(0, 190, 200, 70));
        okButton->setFont(font);
        okButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/widget_promptimag/ok.png);"));
        cancelButton = new QPushButton(PromptW);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(200, 190, 200, 70));
        cancelButton->setFont(font);
        cancelButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/widget_promptimag/cancel.png);"));
        titleLabel = new QLabel(PromptW);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(120, 10, 161, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(28);
        titleLabel->setFont(font1);
        titleLabel->setStyleSheet(QStringLiteral("color: rgb(255, 56, 27);"));
        titleLabel->setAlignment(Qt::AlignCenter);
        infoLabel = new QLabel(PromptW);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        infoLabel->setGeometry(QRect(10, 80, 381, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(22);
        infoLabel->setFont(font2);
        infoLabel->setAlignment(Qt::AlignCenter);
        infoLabel2 = new QLabel(PromptW);
        infoLabel2->setObjectName(QStringLiteral("infoLabel2"));
        infoLabel2->setGeometry(QRect(10, 130, 381, 41));
        infoLabel2->setFont(font2);
        infoLabel2->setAlignment(Qt::AlignCenter);

        retranslateUi(PromptW);

        QMetaObject::connectSlotsByName(PromptW);
    } // setupUi

    void retranslateUi(QDialog *PromptW)
    {
        PromptW->setWindowTitle(QApplication::translate("PromptW", "Dialog", Q_NULLPTR));
        okButton->setText(QString());
        cancelButton->setText(QString());
        titleLabel->setText(QApplication::translate("PromptW", "\346\217\220\347\244\272", Q_NULLPTR));
        infoLabel->setText(QApplication::translate("PromptW", "\346\270\205\346\211\253\346\250\241\345\274\217\346\255\243\345\234\250\346\211\247\350\241\214\357\274\214\347\241\256\345\256\232", Q_NULLPTR));
        infoLabel2->setText(QApplication::translate("PromptW", "\346\232\202\345\201\234\344\273\273\345\212\241\345\220\227\357\274\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PromptW: public Ui_PromptW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMPTW_H
