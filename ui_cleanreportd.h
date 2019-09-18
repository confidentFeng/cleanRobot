/********************************************************************************
** Form generated from reading UI file 'cleanreportd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLEANREPORTD_H
#define UI_CLEANREPORTD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CleanReportD
{
public:
    QGroupBox *titleGroupBox;
    QPushButton *returnMoreButton;
    QLabel *titleLabel;
    QGroupBox *timeGroupBox;
    QLabel *totalTimeLabel;
    QGroupBox *cleanGroupBox;
    QLabel *totalCleanLabel;
    QGroupBox *countGroupBox;
    QLabel *totalCountLabel;
    QListWidget *listWidget;

    void setupUi(QDialog *CleanReportD)
    {
        if (CleanReportD->objectName().isEmpty())
            CleanReportD->setObjectName(QStringLiteral("CleanReportD"));
        CleanReportD->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        CleanReportD->setFont(font);
        titleGroupBox = new QGroupBox(CleanReportD);
        titleGroupBox->setObjectName(QStringLiteral("titleGroupBox"));
        titleGroupBox->setGeometry(QRect(20, 10, 980, 80));
        titleGroupBox->setFont(font);
        titleGroupBox->setStyleSheet(QLatin1String("#titleGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/cleanrportimag/back_board1.png);\n"
"}"));
        titleGroupBox->setFlat(false);
        returnMoreButton = new QPushButton(titleGroupBox);
        returnMoreButton->setObjectName(QStringLiteral("returnMoreButton"));
        returnMoreButton->setGeometry(QRect(26, 27, 16, 26));
        returnMoreButton->setFont(font);
        returnMoreButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/cleanrportimag/return.png);"));
        titleLabel = new QLabel(titleGroupBox);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(420, 11, 191, 58));
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
        timeGroupBox = new QGroupBox(CleanReportD);
        timeGroupBox->setObjectName(QStringLiteral("timeGroupBox"));
        timeGroupBox->setGeometry(QRect(20, 110, 174, 202));
        timeGroupBox->setFont(font);
        timeGroupBox->setStyleSheet(QLatin1String("#timeGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/cleanrportimag/alltime.png);\n"
"}"));
        totalTimeLabel = new QLabel(timeGroupBox);
        totalTimeLabel->setObjectName(QStringLiteral("totalTimeLabel"));
        totalTimeLabel->setGeometry(QRect(37, 31, 101, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        totalTimeLabel->setFont(font2);
        totalTimeLabel->setStyleSheet(QStringLiteral(""));
        totalTimeLabel->setAlignment(Qt::AlignCenter);
        cleanGroupBox = new QGroupBox(CleanReportD);
        cleanGroupBox->setObjectName(QStringLiteral("cleanGroupBox"));
        cleanGroupBox->setGeometry(QRect(20, 332, 174, 202));
        cleanGroupBox->setFont(font);
        cleanGroupBox->setStyleSheet(QLatin1String("#cleanGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/cleanrportimag/allclean.png);\n"
"}\n"
""));
        totalCleanLabel = new QLabel(cleanGroupBox);
        totalCleanLabel->setObjectName(QStringLiteral("totalCleanLabel"));
        totalCleanLabel->setGeometry(QRect(37, 31, 101, 41));
        totalCleanLabel->setFont(font2);
        totalCleanLabel->setAlignment(Qt::AlignCenter);
        countGroupBox = new QGroupBox(CleanReportD);
        countGroupBox->setObjectName(QStringLiteral("countGroupBox"));
        countGroupBox->setGeometry(QRect(20, 554, 174, 202));
        countGroupBox->setFont(font);
        countGroupBox->setStyleSheet(QLatin1String("#countGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/cleanrportimag/allci.png);\n"
"}"));
        totalCountLabel = new QLabel(countGroupBox);
        totalCountLabel->setObjectName(QStringLiteral("totalCountLabel"));
        totalCountLabel->setGeometry(QRect(37, 31, 101, 31));
        totalCountLabel->setFont(font2);
        totalCountLabel->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(CleanReportD);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(214, 110, 786, 638));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(24);
        listWidget->setFont(font3);
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setAutoScroll(true);
        listWidget->setAutoScrollMargin(16);
        listWidget->setTabKeyNavigation(false);
        listWidget->setProperty("showDropIndicator", QVariant(true));
        listWidget->setDragDropOverwriteMode(false);
        listWidget->setAlternatingRowColors(true);
        listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setUniformItemSizes(false);
        listWidget->setWordWrap(false);
        listWidget->setSelectionRectVisible(false);
        listWidget->setSortingEnabled(false);

        retranslateUi(CleanReportD);

        QMetaObject::connectSlotsByName(CleanReportD);
    } // setupUi

    void retranslateUi(QDialog *CleanReportD)
    {
        CleanReportD->setWindowTitle(QApplication::translate("CleanReportD", "Dialog", Q_NULLPTR));
        titleGroupBox->setTitle(QString());
        returnMoreButton->setText(QString());
        titleLabel->setText(QApplication::translate("CleanReportD", "\346\270\205\346\264\201\346\212\245\345\221\212", Q_NULLPTR));
        timeGroupBox->setTitle(QString());
        totalTimeLabel->setText(QApplication::translate("CleanReportD", "1000", Q_NULLPTR));
        cleanGroupBox->setTitle(QString());
        totalCleanLabel->setText(QApplication::translate("CleanReportD", "100", Q_NULLPTR));
        countGroupBox->setTitle(QString());
        totalCountLabel->setText(QApplication::translate("CleanReportD", "100", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CleanReportW: public Ui_CleanReportD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLEANREPORTD_H
