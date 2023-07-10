/********************************************************************************
** Form generated from reading UI file 'lidwatchersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIDWATCHERSETTINGS_H
#define UI_LIDWATCHERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LidWatcherSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *lidWatcherSettingsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *onBatteryActionLabel;
    QComboBox *onBatteryActionComboBox;
    QLabel *onAcActionLabel;
    QComboBox *onAcActionComboBox;
    QGroupBox *extMonGroupBox;
    QFormLayout *formLayout;
    QLabel *extMonOnBatteryActionLabel;
    QComboBox *extMonOnBatteryActionComboBox;
    QLabel *extMonOnAcActionLabel;
    QComboBox *extMonOnAcActionComboBox;

    void setupUi(QWidget *LidWatcherSettings)
    {
        if (LidWatcherSettings->objectName().isEmpty())
            LidWatcherSettings->setObjectName(QString::fromUtf8("LidWatcherSettings"));
        LidWatcherSettings->resize(276, 289);
        LidWatcherSettings->setStyleSheet(QString::fromUtf8("QGroupBox QGroupBox {\n"
"border: none;\n"
"padding-top: 30px;\n"
"}"));
        verticalLayout = new QVBoxLayout(LidWatcherSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lidWatcherSettingsGroupBox = new QGroupBox(LidWatcherSettings);
        lidWatcherSettingsGroupBox->setObjectName(QString::fromUtf8("lidWatcherSettingsGroupBox"));
        lidWatcherSettingsGroupBox->setCheckable(true);
        lidWatcherSettingsGroupBox->setChecked(true);
        verticalLayout_2 = new QVBoxLayout(lidWatcherSettingsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(lidWatcherSettingsGroupBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        onBatteryActionLabel = new QLabel(groupBox);
        onBatteryActionLabel->setObjectName(QString::fromUtf8("onBatteryActionLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, onBatteryActionLabel);

        onBatteryActionComboBox = new QComboBox(groupBox);
        onBatteryActionComboBox->addItem(QString());
        onBatteryActionComboBox->addItem(QString());
        onBatteryActionComboBox->addItem(QString());
        onBatteryActionComboBox->addItem(QString());
        onBatteryActionComboBox->setObjectName(QString::fromUtf8("onBatteryActionComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, onBatteryActionComboBox);

        onAcActionLabel = new QLabel(groupBox);
        onAcActionLabel->setObjectName(QString::fromUtf8("onAcActionLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, onAcActionLabel);

        onAcActionComboBox = new QComboBox(groupBox);
        onAcActionComboBox->setObjectName(QString::fromUtf8("onAcActionComboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, onAcActionComboBox);


        verticalLayout_2->addWidget(groupBox);

        extMonGroupBox = new QGroupBox(lidWatcherSettingsGroupBox);
        extMonGroupBox->setObjectName(QString::fromUtf8("extMonGroupBox"));
        extMonGroupBox->setCheckable(true);
        formLayout = new QFormLayout(extMonGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        extMonOnBatteryActionLabel = new QLabel(extMonGroupBox);
        extMonOnBatteryActionLabel->setObjectName(QString::fromUtf8("extMonOnBatteryActionLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(extMonOnBatteryActionLabel->sizePolicy().hasHeightForWidth());
        extMonOnBatteryActionLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, extMonOnBatteryActionLabel);

        extMonOnBatteryActionComboBox = new QComboBox(extMonGroupBox);
        extMonOnBatteryActionComboBox->setObjectName(QString::fromUtf8("extMonOnBatteryActionComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, extMonOnBatteryActionComboBox);

        extMonOnAcActionLabel = new QLabel(extMonGroupBox);
        extMonOnAcActionLabel->setObjectName(QString::fromUtf8("extMonOnAcActionLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, extMonOnAcActionLabel);

        extMonOnAcActionComboBox = new QComboBox(extMonGroupBox);
        extMonOnAcActionComboBox->setObjectName(QString::fromUtf8("extMonOnAcActionComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(extMonOnAcActionComboBox->sizePolicy().hasHeightForWidth());
        extMonOnAcActionComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::FieldRole, extMonOnAcActionComboBox);


        verticalLayout_2->addWidget(extMonGroupBox);


        verticalLayout->addWidget(lidWatcherSettingsGroupBox);


        retranslateUi(LidWatcherSettings);

        QMetaObject::connectSlotsByName(LidWatcherSettings);
    } // setupUi

    void retranslateUi(QWidget *LidWatcherSettings)
    {
        lidWatcherSettingsGroupBox->setTitle(QCoreApplication::translate("LidWatcherSettings", "Enable &Lid Watcher", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LidWatcherSettings", "Action when lid is closed:", nullptr));
        onBatteryActionLabel->setText(QCoreApplication::translate("LidWatcherSettings", "On Battery:", nullptr));
        onBatteryActionComboBox->setItemText(0, QCoreApplication::translate("LidWatcherSettings", "Nothing", nullptr));
        onBatteryActionComboBox->setItemText(1, QCoreApplication::translate("LidWatcherSettings", "Suspend", nullptr));
        onBatteryActionComboBox->setItemText(2, QCoreApplication::translate("LidWatcherSettings", "Hibernate", nullptr));
        onBatteryActionComboBox->setItemText(3, QCoreApplication::translate("LidWatcherSettings", "Shut down", nullptr));

        onAcActionLabel->setText(QCoreApplication::translate("LidWatcherSettings", "On AC:", nullptr));
        extMonGroupBox->setTitle(QCoreApplication::translate("LidWatcherSettings", "When &using external monitor", nullptr));
        extMonOnBatteryActionLabel->setText(QCoreApplication::translate("LidWatcherSettings", "On Battery:", nullptr));
        extMonOnAcActionLabel->setText(QCoreApplication::translate("LidWatcherSettings", "On AC:", nullptr));
        (void)LidWatcherSettings;
    } // retranslateUi

};

namespace Ui {
    class LidWatcherSettings: public Ui_LidWatcherSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIDWATCHERSETTINGS_H
