/********************************************************************************
** Form generated from reading UI file 'desktopswitchconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESKTOPSWITCHCONFIGURATION_H
#define UI_DESKTOPSWITCHCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DesktopSwitchConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *rowsSB;
    QLabel *labelButtons;
    QLabel *labelRowsSB;
    QComboBox *labelTypeCB;
    QCheckBox *showOnlyActiveCB;
    QGroupBox *namesGroupBox;
    QFormLayout *formLayout;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *DesktopSwitchConfiguration)
    {
        if (DesktopSwitchConfiguration->objectName().isEmpty())
            DesktopSwitchConfiguration->setObjectName(QString::fromUtf8("DesktopSwitchConfiguration"));
        DesktopSwitchConfiguration->resize(253, 235);
        verticalLayout = new QVBoxLayout(DesktopSwitchConfiguration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(DesktopSwitchConfiguration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rowsSB = new QSpinBox(groupBox);
        rowsSB->setObjectName(QString::fromUtf8("rowsSB"));
        rowsSB->setMinimum(1);
        rowsSB->setMaximum(40);
        rowsSB->setValue(1);

        gridLayout->addWidget(rowsSB, 0, 2, 1, 1);

        labelButtons = new QLabel(groupBox);
        labelButtons->setObjectName(QString::fromUtf8("labelButtons"));

        gridLayout->addWidget(labelButtons, 1, 0, 1, 1);

        labelRowsSB = new QLabel(groupBox);
        labelRowsSB->setObjectName(QString::fromUtf8("labelRowsSB"));

        gridLayout->addWidget(labelRowsSB, 0, 0, 1, 1);

        labelTypeCB = new QComboBox(groupBox);
        labelTypeCB->addItem(QString());
        labelTypeCB->addItem(QString());
        labelTypeCB->addItem(QString());
        labelTypeCB->setObjectName(QString::fromUtf8("labelTypeCB"));

        gridLayout->addWidget(labelTypeCB, 1, 2, 1, 1);

        showOnlyActiveCB = new QCheckBox(groupBox);
        showOnlyActiveCB->setObjectName(QString::fromUtf8("showOnlyActiveCB"));

        gridLayout->addWidget(showOnlyActiveCB, 2, 0, 1, 3);


        verticalLayout->addWidget(groupBox);

        namesGroupBox = new QGroupBox(DesktopSwitchConfiguration);
        namesGroupBox->setObjectName(QString::fromUtf8("namesGroupBox"));
        formLayout = new QFormLayout(namesGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));

        verticalLayout->addWidget(namesGroupBox);

        buttons = new QDialogButtonBox(DesktopSwitchConfiguration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttons);


        retranslateUi(DesktopSwitchConfiguration);

        QMetaObject::connectSlotsByName(DesktopSwitchConfiguration);
    } // setupUi

    void retranslateUi(QDialog *DesktopSwitchConfiguration)
    {
        DesktopSwitchConfiguration->setWindowTitle(QCoreApplication::translate("DesktopSwitchConfiguration", "DesktopSwitch settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DesktopSwitchConfiguration", "Appearance", nullptr));
        labelButtons->setText(QCoreApplication::translate("DesktopSwitchConfiguration", "Desktop labels:", nullptr));
        labelRowsSB->setText(QCoreApplication::translate("DesktopSwitchConfiguration", "Number of rows:", nullptr));
        labelTypeCB->setItemText(0, QCoreApplication::translate("DesktopSwitchConfiguration", "Numbers", nullptr));
        labelTypeCB->setItemText(1, QCoreApplication::translate("DesktopSwitchConfiguration", "Names", nullptr));
        labelTypeCB->setItemText(2, QCoreApplication::translate("DesktopSwitchConfiguration", "None", nullptr));

#if QT_CONFIG(tooltip)
        showOnlyActiveCB->setToolTip(QCoreApplication::translate("DesktopSwitchConfiguration", "If checked, widget will be just an indicator", nullptr));
#endif // QT_CONFIG(tooltip)
        showOnlyActiveCB->setText(QCoreApplication::translate("DesktopSwitchConfiguration", "Show only active desktop", nullptr));
        namesGroupBox->setTitle(QCoreApplication::translate("DesktopSwitchConfiguration", "Desktop names", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DesktopSwitchConfiguration: public Ui_DesktopSwitchConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOPSWITCHCONFIGURATION_H
