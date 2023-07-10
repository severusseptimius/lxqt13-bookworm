/********************************************************************************
** Form generated from reading UI file 'autostartedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOSTARTEDIT_H
#define UI_AUTOSTARTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AutoStartEdit
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *browseButton;
    QDialogButtonBox *buttonBox;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *commandEdit;
    QCheckBox *trayCheckBox;

    void setupUi(QDialog *AutoStartEdit)
    {
        if (AutoStartEdit->objectName().isEmpty())
            AutoStartEdit->setObjectName(QString::fromUtf8("AutoStartEdit"));
        AutoStartEdit->resize(296, 118);
        gridLayout = new QGridLayout(AutoStartEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AutoStartEdit);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        browseButton = new QPushButton(AutoStartEdit);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        gridLayout->addWidget(browseButton, 1, 2, 1, 1);

        buttonBox = new QDialogButtonBox(AutoStartEdit);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 3);

        nameEdit = new QLineEdit(AutoStartEdit);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 2);

        label_3 = new QLabel(AutoStartEdit);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        commandEdit = new QLineEdit(AutoStartEdit);
        commandEdit->setObjectName(QString::fromUtf8("commandEdit"));

        gridLayout->addWidget(commandEdit, 1, 1, 1, 1);

        trayCheckBox = new QCheckBox(AutoStartEdit);
        trayCheckBox->setObjectName(QString::fromUtf8("trayCheckBox"));

        gridLayout->addWidget(trayCheckBox, 2, 1, 1, 2);

        QWidget::setTabOrder(nameEdit, commandEdit);
        QWidget::setTabOrder(commandEdit, trayCheckBox);
        QWidget::setTabOrder(trayCheckBox, buttonBox);
        QWidget::setTabOrder(buttonBox, browseButton);

        retranslateUi(AutoStartEdit);
        QObject::connect(buttonBox, SIGNAL(accepted()), AutoStartEdit, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AutoStartEdit, SLOT(reject()));

        QMetaObject::connectSlotsByName(AutoStartEdit);
    } // setupUi

    void retranslateUi(QDialog *AutoStartEdit)
    {
        AutoStartEdit->setWindowTitle(QCoreApplication::translate("AutoStartEdit", "Edit", nullptr));
        label->setText(QCoreApplication::translate("AutoStartEdit", "Name:", nullptr));
        browseButton->setText(QCoreApplication::translate("AutoStartEdit", "Search...", nullptr));
        label_3->setText(QCoreApplication::translate("AutoStartEdit", "Command:", nullptr));
        trayCheckBox->setText(QCoreApplication::translate("AutoStartEdit", "Wait for system tray", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutoStartEdit: public Ui_AutoStartEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOSTARTEDIT_H
