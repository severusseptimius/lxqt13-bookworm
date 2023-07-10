/********************************************************************************
** Form generated from reading UI file 'batterywatchersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTERYWATCHERSETTINGS_H
#define UI_BATTERYWATCHERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatteryWatcherSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *actionLabel;
    QComboBox *actionComboBox;
    QLabel *warningLabel;
    QSpinBox *warningSpinBox;
    QLabel *levelLabel;
    QSpinBox *levelSpinBox;
    QLabel *showIconLabel;
    QCheckBox *showIconCheckBox;
    QLabel *iconTypeLabel;
    QComboBox *iconTypeComboBox;
    QGroupBox *previewBox;
    QGridLayout *gridLayout;
    QSlider *chargeLevelSlider;
    QLabel *chargingIcon;
    QLabel *chargingLabel;
    QLabel *dischargingIcon;
    QLabel *chargeLevelLabel;
    QLabel *dischargingLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *BatteryWatcherSettings)
    {
        if (BatteryWatcherSettings->objectName().isEmpty())
            BatteryWatcherSettings->setObjectName(QString::fromUtf8("BatteryWatcherSettings"));
        BatteryWatcherSettings->resize(428, 414);
        verticalLayout = new QVBoxLayout(BatteryWatcherSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(BatteryWatcherSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setCheckable(true);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        actionLabel = new QLabel(groupBox);
        actionLabel->setObjectName(QString::fromUtf8("actionLabel"));
        actionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, actionLabel);

        actionComboBox = new QComboBox(groupBox);
        actionComboBox->setObjectName(QString::fromUtf8("actionComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, actionComboBox);

        warningLabel = new QLabel(groupBox);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, warningLabel);

        warningSpinBox = new QSpinBox(groupBox);
        warningSpinBox->setObjectName(QString::fromUtf8("warningSpinBox"));
        warningSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        warningSpinBox->setMaximum(500);

        formLayout->setWidget(1, QFormLayout::FieldRole, warningSpinBox);

        levelLabel = new QLabel(groupBox);
        levelLabel->setObjectName(QString::fromUtf8("levelLabel"));
        levelLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, levelLabel);

        levelSpinBox = new QSpinBox(groupBox);
        levelSpinBox->setObjectName(QString::fromUtf8("levelSpinBox"));
        levelSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, levelSpinBox);

        showIconLabel = new QLabel(groupBox);
        showIconLabel->setObjectName(QString::fromUtf8("showIconLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, showIconLabel);

        showIconCheckBox = new QCheckBox(groupBox);
        showIconCheckBox->setObjectName(QString::fromUtf8("showIconCheckBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, showIconCheckBox);

        iconTypeLabel = new QLabel(groupBox);
        iconTypeLabel->setObjectName(QString::fromUtf8("iconTypeLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, iconTypeLabel);

        iconTypeComboBox = new QComboBox(groupBox);
        iconTypeComboBox->setObjectName(QString::fromUtf8("iconTypeComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, iconTypeComboBox);

        previewBox = new QGroupBox(groupBox);
        previewBox->setObjectName(QString::fromUtf8("previewBox"));
        gridLayout = new QGridLayout(previewBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        chargeLevelSlider = new QSlider(previewBox);
        chargeLevelSlider->setObjectName(QString::fromUtf8("chargeLevelSlider"));
        chargeLevelSlider->setMaximum(100);
        chargeLevelSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(chargeLevelSlider, 3, 0, 1, 2);

        chargingIcon = new QLabel(previewBox);
        chargingIcon->setObjectName(QString::fromUtf8("chargingIcon"));
        chargingIcon->setMinimumSize(QSize(50, 50));
        chargingIcon->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(chargingIcon, 1, 0, 1, 1);

        chargingLabel = new QLabel(previewBox);
        chargingLabel->setObjectName(QString::fromUtf8("chargingLabel"));
        QFont font;
        font.setPointSize(9);
        chargingLabel->setFont(font);
        chargingLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(chargingLabel, 2, 0, 1, 1);

        dischargingIcon = new QLabel(previewBox);
        dischargingIcon->setObjectName(QString::fromUtf8("dischargingIcon"));
        dischargingIcon->setMinimumSize(QSize(50, 50));
        dischargingIcon->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dischargingIcon, 1, 1, 1, 1);

        chargeLevelLabel = new QLabel(previewBox);
        chargeLevelLabel->setObjectName(QString::fromUtf8("chargeLevelLabel"));

        gridLayout->addWidget(chargeLevelLabel, 4, 0, 1, 2);

        dischargingLabel = new QLabel(previewBox);
        dischargingLabel->setObjectName(QString::fromUtf8("dischargingLabel"));
        dischargingLabel->setFont(font);
        dischargingLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dischargingLabel, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);


        formLayout->setWidget(6, QFormLayout::SpanningRole, previewBox);

        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(5, QFormLayout::LabelRole, verticalSpacer_2);


        verticalLayout->addWidget(groupBox);


        retranslateUi(BatteryWatcherSettings);

        QMetaObject::connectSlotsByName(BatteryWatcherSettings);
    } // setupUi

    void retranslateUi(QWidget *BatteryWatcherSettings)
    {
        BatteryWatcherSettings->setWindowTitle(QCoreApplication::translate("BatteryWatcherSettings", "Battery Watcher Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BatteryWatcherSettings", "E&nable Battery Watcher", nullptr));
        actionLabel->setText(QCoreApplication::translate("BatteryWatcherSettings", "When power is low then:", nullptr));
        warningLabel->setText(QCoreApplication::translate("BatteryWatcherSettings", "Warning:", nullptr));
        warningSpinBox->setSuffix(QCoreApplication::translate("BatteryWatcherSettings", " seconds", nullptr));
        levelLabel->setText(QCoreApplication::translate("BatteryWatcherSettings", "Level is low at:", nullptr));
        levelSpinBox->setSuffix(QCoreApplication::translate("BatteryWatcherSettings", " %", nullptr));
        showIconLabel->setText(QCoreApplication::translate("BatteryWatcherSettings", "Show icon:", nullptr));
        showIconCheckBox->setText(QString());
        iconTypeLabel->setText(QCoreApplication::translate("BatteryWatcherSettings", "Icon:", nullptr));
        previewBox->setTitle(QCoreApplication::translate("BatteryWatcherSettings", "Preview", nullptr));
        chargingIcon->setText(QString());
        chargingLabel->setText(QCoreApplication::translate("BatteryWatcherSettings", "Charging", nullptr));
        dischargingIcon->setText(QString());
        chargeLevelLabel->setText(QString());
        dischargingLabel->setText(QCoreApplication::translate("BatteryWatcherSettings", "Discharging", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BatteryWatcherSettings: public Ui_BatteryWatcherSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTERYWATCHERSETTINGS_H
