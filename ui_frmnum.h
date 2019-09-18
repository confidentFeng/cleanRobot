/********************************************************************************
** Form generated from reading UI file 'frmnum.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMNUM_H
#define UI_FRMNUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmNum
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btnClear;
    QPushButton *btnDelete;
    QPushButton *btn0;

    void setupUi(QWidget *frmNum)
    {
        if (frmNum->objectName().isEmpty())
            frmNum->setObjectName(QStringLiteral("frmNum"));
        frmNum->resize(302, 185);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        frmNum->setFont(font);
        gridLayout_2 = new QGridLayout(frmNum);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn1 = new QPushButton(frmNum);
        btn1->setObjectName(QStringLiteral("btn1"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);
        btn1->setMinimumSize(QSize(66, 51));
        btn1->setMaximumSize(QSize(66, 51));
        btn1->setFocusPolicy(Qt::NoFocus);
        btn1->setFlat(false);

        gridLayout->addWidget(btn1, 0, 0, 1, 1);

        btn2 = new QPushButton(frmNum);
        btn2->setObjectName(QStringLiteral("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);
        btn2->setMinimumSize(QSize(66, 51));
        btn2->setMaximumSize(QSize(66, 51));
        btn2->setFocusPolicy(Qt::NoFocus);
        btn2->setFlat(false);

        gridLayout->addWidget(btn2, 0, 1, 1, 1);

        btn3 = new QPushButton(frmNum);
        btn3->setObjectName(QStringLiteral("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);
        btn3->setMinimumSize(QSize(66, 51));
        btn3->setMaximumSize(QSize(66, 51));
        btn3->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn3, 0, 2, 1, 1);

        btn4 = new QPushButton(frmNum);
        btn4->setObjectName(QStringLiteral("btn4"));
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);
        btn4->setMinimumSize(QSize(66, 51));
        btn4->setMaximumSize(QSize(66, 51));
        btn4->setFocusPolicy(Qt::NoFocus);
        btn4->setFlat(false);

        gridLayout->addWidget(btn4, 1, 0, 1, 1);

        btn5 = new QPushButton(frmNum);
        btn5->setObjectName(QStringLiteral("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);
        btn5->setMinimumSize(QSize(66, 51));
        btn5->setMaximumSize(QSize(66, 51));
        btn5->setFocusPolicy(Qt::NoFocus);
        btn5->setFlat(false);

        gridLayout->addWidget(btn5, 1, 1, 1, 1);

        btn6 = new QPushButton(frmNum);
        btn6->setObjectName(QStringLiteral("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);
        btn6->setMinimumSize(QSize(66, 51));
        btn6->setMaximumSize(QSize(66, 51));
        btn6->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn6, 1, 2, 1, 1);

        btn7 = new QPushButton(frmNum);
        btn7->setObjectName(QStringLiteral("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);
        btn7->setMinimumSize(QSize(66, 51));
        btn7->setMaximumSize(QSize(66, 51));
        btn7->setFocusPolicy(Qt::NoFocus);
        btn7->setFlat(false);

        gridLayout->addWidget(btn7, 2, 0, 1, 1);

        btn8 = new QPushButton(frmNum);
        btn8->setObjectName(QStringLiteral("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);
        btn8->setMinimumSize(QSize(66, 51));
        btn8->setMaximumSize(QSize(66, 51));
        btn8->setFocusPolicy(Qt::NoFocus);
        btn8->setFlat(false);

        gridLayout->addWidget(btn8, 2, 1, 1, 1);

        btn9 = new QPushButton(frmNum);
        btn9->setObjectName(QStringLiteral("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);
        btn9->setMinimumSize(QSize(66, 51));
        btn9->setMaximumSize(QSize(66, 51));
        btn9->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn9, 2, 2, 1, 1);

        btnClear = new QPushButton(frmNum);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        sizePolicy.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy);
        btnClear->setMinimumSize(QSize(66, 51));
        btnClear->setMaximumSize(QSize(66, 51));
        btnClear->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnClear, 2, 3, 1, 1);

        btnDelete = new QPushButton(frmNum);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        sizePolicy.setHeightForWidth(btnDelete->sizePolicy().hasHeightForWidth());
        btnDelete->setSizePolicy(sizePolicy);
        btnDelete->setMinimumSize(QSize(66, 51));
        btnDelete->setMaximumSize(QSize(66, 51));
        btnDelete->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnDelete, 1, 3, 1, 1);

        btn0 = new QPushButton(frmNum);
        btn0->setObjectName(QStringLiteral("btn0"));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        btn0->setMinimumSize(QSize(66, 51));
        btn0->setMaximumSize(QSize(66, 51));
        btn0->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn0, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(frmNum);

        QMetaObject::connectSlotsByName(frmNum);
    } // setupUi

    void retranslateUi(QWidget *frmNum)
    {
        frmNum->setWindowTitle(QApplication::translate("frmNum", "\346\225\260\345\255\227\351\224\256\347\233\230", Q_NULLPTR));
        btn1->setText(QApplication::translate("frmNum", "1", Q_NULLPTR));
        btn2->setText(QApplication::translate("frmNum", "2", Q_NULLPTR));
        btn3->setText(QApplication::translate("frmNum", "3", Q_NULLPTR));
        btn4->setText(QApplication::translate("frmNum", "4", Q_NULLPTR));
        btn5->setText(QApplication::translate("frmNum", "5", Q_NULLPTR));
        btn6->setText(QApplication::translate("frmNum", "6", Q_NULLPTR));
        btn7->setText(QApplication::translate("frmNum", "7", Q_NULLPTR));
        btn8->setText(QApplication::translate("frmNum", "8", Q_NULLPTR));
        btn9->setText(QApplication::translate("frmNum", "9", Q_NULLPTR));
        btnClear->setText(QApplication::translate("frmNum", "\346\270\205\347\251\272", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("frmNum", "\342\206\220", Q_NULLPTR));
        btn0->setText(QApplication::translate("frmNum", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frmNum: public Ui_frmNum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMNUM_H
