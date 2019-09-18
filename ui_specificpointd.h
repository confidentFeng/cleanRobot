/********************************************************************************
** Form generated from reading UI file 'specificpointd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIFICPOINTD_H
#define UI_SPECIFICPOINTD_H

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

class Ui_SpecificPointD
{
public:
    QGroupBox *titleGroupBox;
    QPushButton *returnMoreButton;
    QLabel *titleLabel;
    QPushButton *chargButton;
    QPushButton *drainButton;
    QPushButton *addWaterButton;

    void setupUi(QDialog *SpecificPointD)
    {
        if (SpecificPointD->objectName().isEmpty())
            SpecificPointD->setObjectName(QStringLiteral("SpecificPointD"));
        SpecificPointD->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        SpecificPointD->setFont(font);
        SpecificPointD->setMouseTracking(false);
        SpecificPointD->setStyleSheet(QLatin1String("#SpecificPointD\n"
"{\n"
"border-image: url(:/new/prefix1/image/specificpointimag/back_board.png);\n"
"}"));
        titleGroupBox = new QGroupBox(SpecificPointD);
        titleGroupBox->setObjectName(QStringLiteral("titleGroupBox"));
        titleGroupBox->setGeometry(QRect(20, 10, 980, 80));
        titleGroupBox->setFont(font);
        titleGroupBox->setStyleSheet(QLatin1String("#titleGroupBox\n"
"{\n"
"border-image: url(:/new/prefix1/image/specificpointimag/back_board1.png);\n"
"}"));
        titleGroupBox->setFlat(false);
        returnMoreButton = new QPushButton(titleGroupBox);
        returnMoreButton->setObjectName(QStringLiteral("returnMoreButton"));
        returnMoreButton->setGeometry(QRect(26, 27, 16, 26));
        returnMoreButton->setFont(font);
        returnMoreButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/specificpointimag/return.png);"));
        titleLabel = new QLabel(titleGroupBox);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(370, 11, 241, 58));
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
        chargButton = new QPushButton(SpecificPointD);
        chargButton->setObjectName(QStringLiteral("chargButton"));
        chargButton->setGeometry(QRect(84, 200, 380, 186));
        chargButton->setFont(font);
        chargButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/specificpointimag/chanrg_set.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/specificpointimag/chanrg_set.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/specificpointimag/chanrg_set1.png)}"));
        drainButton = new QPushButton(SpecificPointD);
        drainButton->setObjectName(QStringLiteral("drainButton"));
        drainButton->setGeometry(QRect(560, 200, 380, 186));
        drainButton->setFont(font);
        drainButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/specificpointimag/drain.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/specificpointimag/drain.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/specificpointimag/drain1.png)}"));
        addWaterButton = new QPushButton(SpecificPointD);
        addWaterButton->setObjectName(QStringLiteral("addWaterButton"));
        addWaterButton->setGeometry(QRect(84, 410, 380, 186));
        addWaterButton->setFont(font);
        addWaterButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/specificpointimag/add_water.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/specificpointimag/add_water.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/specificpointimag/add_water1.png)}"));

        retranslateUi(SpecificPointD);

        QMetaObject::connectSlotsByName(SpecificPointD);
    } // setupUi

    void retranslateUi(QDialog *SpecificPointD)
    {
        SpecificPointD->setWindowTitle(QApplication::translate("SpecificPointD", "Dialog", Q_NULLPTR));
        titleGroupBox->setTitle(QString());
        returnMoreButton->setText(QString());
        titleLabel->setText(QApplication::translate("SpecificPointD", "\347\211\271\345\256\232\347\202\271\350\256\276\347\275\256", Q_NULLPTR));
        chargButton->setText(QString());
        drainButton->setText(QString());
        addWaterButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SpecificPointD: public Ui_SpecificPointD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIFICPOINTD_H
