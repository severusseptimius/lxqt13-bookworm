/********************************************************************************
** Form generated from reading UI file 'bulk-rename.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BULK_2D_RENAME_H
#define UI_BULK_2D_RENAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_BulkRenameDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label1;
    QLineEdit *lineEdit;
    QLabel *label2;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *zeroBox;
    QCheckBox *localeBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BulkRenameDialog)
    {
        if (BulkRenameDialog->objectName().isEmpty())
            BulkRenameDialog->setObjectName(QString::fromUtf8("BulkRenameDialog"));
        gridLayout = new QGridLayout(BulkRenameDialog);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        label1 = new QLabel(BulkRenameDialog);
        label1->setObjectName(QString::fromUtf8("label1"));

        gridLayout->addWidget(label1, 0, 0, 1, 3);

        lineEdit = new QLineEdit(BulkRenameDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit, 1, 0, 1, 3);

        label2 = new QLabel(BulkRenameDialog);
        label2->setObjectName(QString::fromUtf8("label2"));

        gridLayout->addWidget(label2, 2, 0, 1, 1);

        spinBox = new QSpinBox(BulkRenameDialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(-1000);
        spinBox->setMaximum(1000);

        gridLayout->addWidget(spinBox, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 5, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        zeroBox = new QCheckBox(BulkRenameDialog);
        zeroBox->setObjectName(QString::fromUtf8("zeroBox"));

        gridLayout->addWidget(zeroBox, 3, 0, 1, 3);

        localeBox = new QCheckBox(BulkRenameDialog);
        localeBox->setObjectName(QString::fromUtf8("localeBox"));

        gridLayout->addWidget(localeBox, 4, 0, 1, 3);

        verticalSpacer = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        buttonBox = new QDialogButtonBox(BulkRenameDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 3);


        retranslateUi(BulkRenameDialog);

        QMetaObject::connectSlotsByName(BulkRenameDialog);
    } // setupUi

    void retranslateUi(QDialog *BulkRenameDialog)
    {
        BulkRenameDialog->setWindowTitle(QCoreApplication::translate("BulkRenameDialog", "Bulk Rename", nullptr));
        label1->setText(QCoreApplication::translate("BulkRenameDialog", "Rename selected files to:", nullptr));
        lineEdit->setText(QCoreApplication::translate("BulkRenameDialog", "Name#", nullptr));
        label2->setText(QCoreApplication::translate("BulkRenameDialog", "# will be replaced by numbers starting with:", nullptr));
        zeroBox->setText(QCoreApplication::translate("BulkRenameDialog", "Pad numbers with zero if possible", nullptr));
        localeBox->setText(QCoreApplication::translate("BulkRenameDialog", "Use localized numbers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BulkRenameDialog: public Ui_BulkRenameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BULK_2D_RENAME_H
