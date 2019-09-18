/********************************************************************************
** Form generated from reading UI file 'loadingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGW_H
#define UI_LOADINGW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingW
{
public:
    QLabel *pixmapLabel;
    QLabel *tipLabel;

    void setupUi(QWidget *LoadingWidget)
    {
        if (LoadingWidget->objectName().isEmpty())
            LoadingWidget->setObjectName(QStringLiteral("LoadingWidget"));
        LoadingWidget->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        LoadingWidget->setFont(font);
        LoadingWidget->setStyleSheet(QStringLiteral("border-color: rgb(85, 170, 255);"));
        pixmapLabel = new QLabel(LoadingWidget);
        pixmapLabel->setObjectName(QStringLiteral("pixmapLabel"));
        pixmapLabel->setGeometry(QRect(280, 30, 400, 400));
        pixmapLabel->setFont(font);
        tipLabel = new QLabel(LoadingWidget);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setGeometry(QRect(360, 300, 261, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        tipLabel->setFont(font1);

        retranslateUi(LoadingWidget);

        QMetaObject::connectSlotsByName(LoadingWidget);
    } // setupUi

    void retranslateUi(QWidget *LoadingWidget)
    {
        LoadingWidget->setWindowTitle(QApplication::translate("LoadingWidget", "Form", Q_NULLPTR));
        pixmapLabel->setText(QApplication::translate("LoadingWidget", "gifLabel", Q_NULLPTR));
        tipLabel->setText(QApplication::translate("LoadingWidget", "\345\212\240\350\275\275\344\270\255...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoadingW: public Ui_LoadingW{};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGW_H
