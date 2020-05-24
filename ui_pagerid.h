/********************************************************************************
** Form generated from reading UI file 'pagerid.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGERID_H
#define UI_PAGERID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Pagerid
{
public:
    QPushButton *pbDone;
    QListWidget *lwPagerIDs;
    QPushButton *pbCancel;

    void setupUi(QDialog *Pagerid)
    {
        if (Pagerid->objectName().isEmpty())
            Pagerid->setObjectName(QString::fromUtf8("Pagerid"));
        Pagerid->resize(147, 337);
        pbDone = new QPushButton(Pagerid);
        pbDone->setObjectName(QString::fromUtf8("pbDone"));
        pbDone->setGeometry(QRect(74, 306, 67, 27));
        lwPagerIDs = new QListWidget(Pagerid);
        lwPagerIDs->setObjectName(QString::fromUtf8("lwPagerIDs"));
        lwPagerIDs->setGeometry(QRect(2, 2, 143, 301));
        pbCancel = new QPushButton(Pagerid);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(4, 306, 67, 27));

        retranslateUi(Pagerid);

        QMetaObject::connectSlotsByName(Pagerid);
    } // setupUi

    void retranslateUi(QDialog *Pagerid)
    {
        Pagerid->setWindowTitle(QApplication::translate("Pagerid", "Pager IDs", nullptr));
        pbDone->setText(QApplication::translate("Pagerid", "&Done", nullptr));
        pbCancel->setText(QApplication::translate("Pagerid", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pagerid: public Ui_Pagerid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGERID_H
