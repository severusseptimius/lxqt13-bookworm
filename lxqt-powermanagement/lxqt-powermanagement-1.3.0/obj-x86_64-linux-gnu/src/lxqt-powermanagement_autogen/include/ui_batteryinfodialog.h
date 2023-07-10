/********************************************************************************
** Form generated from reading UI file 'batteryinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTERYINFODIALOG_H
#define UI_BATTERYINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BatteryInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BatteryInfoDialog)
    {
        if (BatteryInfoDialog->objectName().isEmpty())
            BatteryInfoDialog->setObjectName(QString::fromUtf8("BatteryInfoDialog"));
        BatteryInfoDialog->resize(334, 301);
        verticalLayout = new QVBoxLayout(BatteryInfoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttonBox = new QDialogButtonBox(BatteryInfoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(BatteryInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BatteryInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BatteryInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BatteryInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *BatteryInfoDialog)
    {
        BatteryInfoDialog->setWindowTitle(QCoreApplication::translate("BatteryInfoDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BatteryInfoDialog: public Ui_BatteryInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTERYINFODIALOG_H
