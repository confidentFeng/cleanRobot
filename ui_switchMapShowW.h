/********************************************************************************
** Form generated from reading UI file 'switchMapShowW.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWITCHMAPSHOWW_H
#define UI_SWITCHMAPSHOWW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SwitchMapShowW
{
public:
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *SwitchMapShowW)
    {
        if (SwitchMapShowW->objectName().isEmpty())
            SwitchMapShowW->setObjectName(QStringLiteral("SwitchMapShowW"));
        SwitchMapShowW->resize(480, 360);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        SwitchMapShowW->setFont(font);
        okButton = new QPushButton(SwitchMapShowW);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(330, 300, 75, 23));
        cancelButton = new QPushButton(SwitchMapShowW);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(70, 300, 75, 23));

        retranslateUi(SwitchMapShowW);

        QMetaObject::connectSlotsByName(SwitchMapShowW);
    } // setupUi

    void retranslateUi(QDialog *SwitchMapShowW)
    {
        SwitchMapShowW->setWindowTitle(QApplication::translate("SwitchMapShowW", "Dialog", Q_NULLPTR));
        okButton->setText(QApplication::translate("SwitchMapShowW", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("SwitchMapShowW", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SwitchMapShowW: public Ui_SwitchMapShowW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWITCHMAPSHOWW_H
