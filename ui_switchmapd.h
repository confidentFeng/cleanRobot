/********************************************************************************
** Form generated from reading UI file 'switchmapd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWITCHMAPW_H
#define UI_SWITCHMAPW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SwitchMapW
{
public:
    QGroupBox *titleGroupBox;
    QPushButton *returnMoreButton;
    QLabel *titleLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *currentMapLabel;
    QPushButton *returnMapButton;

    void setupUi(QDialog *SwitchMapD)
    {
        if (SwitchMapD->objectName().isEmpty())
            SwitchMapD->setObjectName(QStringLiteral("SwitchMapD"));
        SwitchMapD->setEnabled(true);
        SwitchMapD->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        SwitchMapD->setFont(font);
        titleGroupBox = new QGroupBox(SwitchMapD);
        titleGroupBox->setObjectName(QStringLiteral("titleGroupBox"));
        titleGroupBox->setGeometry(QRect(20, 10, 980, 80));
        titleGroupBox->setFont(font);
        titleGroupBox->setStyleSheet(QLatin1String("#titleGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/mainimag/back_board1.png);\n"
"}"));
        titleGroupBox->setFlat(false);
        returnMoreButton = new QPushButton(titleGroupBox);
        returnMoreButton->setObjectName(QStringLiteral("returnMoreButton"));
        returnMoreButton->setGeometry(QRect(26, 27, 16, 26));
        returnMoreButton->setFont(font);
        returnMoreButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/cleanimag/return.png);"));
        titleLabel = new QLabel(titleGroupBox);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(400, 11, 241, 58));
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
        groupBox = new QGroupBox(SwitchMapD);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(22, 177, 984, 581));
        groupBox->setStyleSheet(QLatin1String("#groupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/moreimag/back_board.png);\n"
"}"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("A\346\200\235\346\272\220\351\273\221\344\275\223\342\200\22404"));
        font2.setPointSize(24);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(3);
        listWidget->setFont(font2);
        listWidget->setStyleSheet(QString::fromUtf8("font: 25 24pt \"A\346\200\235\346\272\220\351\273\221\344\275\223\342\200\22404\";"));
        listWidget->setFrameShape(QFrame::NoFrame);
        listWidget->setFrameShadow(QFrame::Plain);
        listWidget->setAutoScroll(true);
        listWidget->setProperty("showDropIndicator", QVariant(true));
        listWidget->setDragEnabled(false);
        listWidget->setAlternatingRowColors(true);
        listWidget->setLayoutMode(QListView::SinglePass);
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setSelectionRectVisible(false);

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        label = new QLabel(SwitchMapD);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 122, 180, 29));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(30);
        label->setFont(font3);
        label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/switchmapimag/the_map.png);"));
        currentMapLabel = new QLabel(SwitchMapD);
        currentMapLabel->setObjectName(QStringLiteral("currentMapLabel"));
        currentMapLabel->setGeometry(QRect(260, 122, 201, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(24);
        currentMapLabel->setFont(font4);
        returnMapButton = new QPushButton(SwitchMapD);
        returnMapButton->setObjectName(QStringLiteral("returnMapButton"));
        returnMapButton->setGeometry(QRect(954, 112, 44, 44));
        returnMapButton->setFont(font);
        returnMapButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/switchmapimag/pbut_return.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/switchmapimag/pbut_return.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/switchmapimag/pbut_return1.png)}"));

        retranslateUi(SwitchMapD);

        QMetaObject::connectSlotsByName(SwitchMapD);
    } // setupUi

    void retranslateUi(QDialog *SwitchMapD)
    {
        SwitchMapD->setWindowTitle(QApplication::translate("SwitchMapD", "Dialog", Q_NULLPTR));
        titleGroupBox->setTitle(QString());
        returnMoreButton->setText(QString());
        titleLabel->setText(QApplication::translate("SwitchMapD", "\345\210\207\346\215\242\345\234\260\345\233\276\345\214\205", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QString());
        currentMapLabel->setText(QApplication::translate("SwitchMapD", "223", Q_NULLPTR));
        returnMapButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SwitchMapW: public Ui_SwitchMapW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWITCHMAPW_H
