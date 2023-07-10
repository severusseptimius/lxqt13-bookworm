/********************************************************************************
** Form generated from reading UI file 'configuration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATION_H
#define UI_CONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Configuration
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *devAddedLabel;
    QComboBox *devAddedCombo;
    QLabel *ejectPressedLabel;
    QComboBox *ejectPressedCombo;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *Configuration)
    {
        if (Configuration->objectName().isEmpty())
            Configuration->setObjectName(QString::fromUtf8("Configuration"));
        Configuration->resize(607, 170);
        verticalLayout = new QVBoxLayout(Configuration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Configuration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        devAddedLabel = new QLabel(groupBox);
        devAddedLabel->setObjectName(QString::fromUtf8("devAddedLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, devAddedLabel);

        devAddedCombo = new QComboBox(groupBox);
        devAddedCombo->setObjectName(QString::fromUtf8("devAddedCombo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, devAddedCombo);

        ejectPressedLabel = new QLabel(groupBox);
        ejectPressedLabel->setObjectName(QString::fromUtf8("ejectPressedLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ejectPressedLabel);

        ejectPressedCombo = new QComboBox(groupBox);
        ejectPressedCombo->setObjectName(QString::fromUtf8("ejectPressedCombo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, ejectPressedCombo);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttons = new QDialogButtonBox(Configuration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttons);


        retranslateUi(Configuration);
        QObject::connect(buttons, SIGNAL(accepted()), Configuration, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), Configuration, SLOT(reject()));

        QMetaObject::connectSlotsByName(Configuration);
    } // setupUi

    void retranslateUi(QDialog *Configuration)
    {
        Configuration->setWindowTitle(QCoreApplication::translate("Configuration", "Removable Media Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Configuration", "Behaviour", nullptr));
        devAddedLabel->setText(QCoreApplication::translate("Configuration", "When a device is connected:", nullptr));
#if QT_CONFIG(tooltip)
        ejectPressedLabel->setToolTip(QCoreApplication::translate("Configuration", "<html><head/><body><p>Trigger the following action when eject shortcut is pressed (<span style=\" font-weight:600;\">XF86Eject</span> by default)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ejectPressedLabel->setText(QCoreApplication::translate("Configuration", "When eject button is pressed:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Configuration: public Ui_Configuration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATION_H
