/********************************************************************************
** Form generated from reading UI file 'cartcp.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARUDP_H
#define UI_CARUDP_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_carUdp
{
public:

    void setupUi(QDialog *carUdp)
    {
        if (carUdp->objectName().isEmpty())
            carUdp->setObjectName(QString::fromUtf8("carUdp"));
        carUdp->resize(400, 300);

        retranslateUi(carUdp);

        QMetaObject::connectSlotsByName(carUdp);
    } // setupUi

    void retranslateUi(QDialog *carUdp)
    {
        carUdp->setWindowTitle(QApplication::translate("carUdp", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class carUdp: public Ui_carUdp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARUDP_H
