/********************************************************************************
** Form generated from reading UI file 'powerkeyssettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POWERKEYSSETTINGS_H
#define UI_POWERKEYSSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PowerKeysSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *powerKeyLabel;
    QComboBox *powerKeyActionComboBox;
    QComboBox *suspendKeyActionComboBox;
    QComboBox *hibernateKeyActionComboBox;
    QLabel *suspendKeyLabel;
    QLabel *hibernateKeyLabel;

    void setupUi(QWidget *PowerKeysSettings)
    {
        if (PowerKeysSettings->objectName().isEmpty())
            PowerKeysSettings->setObjectName(QString::fromUtf8("PowerKeysSettings"));
        PowerKeysSettings->resize(400, 300);
        verticalLayout = new QVBoxLayout(PowerKeysSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(PowerKeysSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        powerKeyLabel = new QLabel(groupBox);
        powerKeyLabel->setObjectName(QString::fromUtf8("powerKeyLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, powerKeyLabel);

        powerKeyActionComboBox = new QComboBox(groupBox);
        powerKeyActionComboBox->setObjectName(QString::fromUtf8("powerKeyActionComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, powerKeyActionComboBox);

        suspendKeyActionComboBox = new QComboBox(groupBox);
        suspendKeyActionComboBox->setObjectName(QString::fromUtf8("suspendKeyActionComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, suspendKeyActionComboBox);

        hibernateKeyActionComboBox = new QComboBox(groupBox);
        hibernateKeyActionComboBox->setObjectName(QString::fromUtf8("hibernateKeyActionComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, hibernateKeyActionComboBox);

        suspendKeyLabel = new QLabel(groupBox);
        suspendKeyLabel->setObjectName(QString::fromUtf8("suspendKeyLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, suspendKeyLabel);

        hibernateKeyLabel = new QLabel(groupBox);
        hibernateKeyLabel->setObjectName(QString::fromUtf8("hibernateKeyLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, hibernateKeyLabel);


        verticalLayout->addWidget(groupBox);


        retranslateUi(PowerKeysSettings);

        QMetaObject::connectSlotsByName(PowerKeysSettings);
    } // setupUi

    void retranslateUi(QWidget *PowerKeysSettings)
    {
        PowerKeysSettings->setWindowTitle(QCoreApplication::translate("PowerKeysSettings", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PowerKeysSettings", "Handle Power Keys", nullptr));
        powerKeyLabel->setText(QCoreApplication::translate("PowerKeysSettings", "Power Key Action:", nullptr));
        suspendKeyLabel->setText(QCoreApplication::translate("PowerKeysSettings", "Suspend Key Action:", nullptr));
        hibernateKeyLabel->setText(QCoreApplication::translate("PowerKeysSettings", "Hibernate Key Action:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PowerKeysSettings: public Ui_PowerKeysSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POWERKEYSSETTINGS_H
