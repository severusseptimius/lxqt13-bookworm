/********************************************************************************
** Form generated from reading UI file 'idlenesswatchersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDLENESSWATCHERSETTINGS_H
#define UI_IDLENESSWATCHERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IdlenessWatcherSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *idlenessWatcherGroupBox;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *idleTimeACLabel;
    QComboBox *idleACActionComboBox;
    QLabel *idleACActionLabel;
    QTimeEdit *idleACTimeEdit;
    QLabel *idleTimeBatteryLabel;
    QLabel *idleBatteryActionLabel;
    QTimeEdit *idleBatteryTimeEdit;
    QComboBox *idleBatteryActionComboBox;
    QGroupBox *idlenessBacklightWatcherGroupBox;
    QFormLayout *formLayout_2;
    QLabel *backlightLabel;
    QSlider *backlightSlider;
    QLabel *idleTimeBacklightLabel;
    QTimeEdit *idleTimeBacklightTimeEdit;
    QPushButton *checkBacklightButton;
    QCheckBox *onBatteryDischargingCheckBox;
    QCheckBox *disableIdlenessFullscreenBox;

    void setupUi(QWidget *IdlenessWatcherSettings)
    {
        if (IdlenessWatcherSettings->objectName().isEmpty())
            IdlenessWatcherSettings->setObjectName(QString::fromUtf8("IdlenessWatcherSettings"));
        IdlenessWatcherSettings->resize(400, 452);
        verticalLayout = new QVBoxLayout(IdlenessWatcherSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        idlenessWatcherGroupBox = new QGroupBox(IdlenessWatcherSettings);
        idlenessWatcherGroupBox->setObjectName(QString::fromUtf8("idlenessWatcherGroupBox"));
        idlenessWatcherGroupBox->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(idlenessWatcherGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        idleTimeACLabel = new QLabel(idlenessWatcherGroupBox);
        idleTimeACLabel->setObjectName(QString::fromUtf8("idleTimeACLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(idleTimeACLabel->sizePolicy().hasHeightForWidth());
        idleTimeACLabel->setSizePolicy(sizePolicy);
        idleTimeACLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, idleTimeACLabel);

        idleACActionComboBox = new QComboBox(idlenessWatcherGroupBox);
        idleACActionComboBox->setObjectName(QString::fromUtf8("idleACActionComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, idleACActionComboBox);

        idleACActionLabel = new QLabel(idlenessWatcherGroupBox);
        idleACActionLabel->setObjectName(QString::fromUtf8("idleACActionLabel"));
        sizePolicy.setHeightForWidth(idleACActionLabel->sizePolicy().hasHeightForWidth());
        idleACActionLabel->setSizePolicy(sizePolicy);
        idleACActionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, idleACActionLabel);

        idleACTimeEdit = new QTimeEdit(idlenessWatcherGroupBox);
        idleACTimeEdit->setObjectName(QString::fromUtf8("idleACTimeEdit"));
        idleACTimeEdit->setMinimumDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 1, 0)));

        formLayout->setWidget(1, QFormLayout::FieldRole, idleACTimeEdit);

        idleTimeBatteryLabel = new QLabel(idlenessWatcherGroupBox);
        idleTimeBatteryLabel->setObjectName(QString::fromUtf8("idleTimeBatteryLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, idleTimeBatteryLabel);

        idleBatteryActionLabel = new QLabel(idlenessWatcherGroupBox);
        idleBatteryActionLabel->setObjectName(QString::fromUtf8("idleBatteryActionLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, idleBatteryActionLabel);

        idleBatteryTimeEdit = new QTimeEdit(idlenessWatcherGroupBox);
        idleBatteryTimeEdit->setObjectName(QString::fromUtf8("idleBatteryTimeEdit"));
        idleBatteryTimeEdit->setMinimumDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 1, 0)));

        formLayout->setWidget(3, QFormLayout::FieldRole, idleBatteryTimeEdit);

        idleBatteryActionComboBox = new QComboBox(idlenessWatcherGroupBox);
        idleBatteryActionComboBox->setObjectName(QString::fromUtf8("idleBatteryActionComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, idleBatteryActionComboBox);


        verticalLayout_2->addLayout(formLayout);

        idlenessBacklightWatcherGroupBox = new QGroupBox(idlenessWatcherGroupBox);
        idlenessBacklightWatcherGroupBox->setObjectName(QString::fromUtf8("idlenessBacklightWatcherGroupBox"));
        idlenessBacklightWatcherGroupBox->setCheckable(true);
        formLayout_2 = new QFormLayout(idlenessBacklightWatcherGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        backlightLabel = new QLabel(idlenessBacklightWatcherGroupBox);
        backlightLabel->setObjectName(QString::fromUtf8("backlightLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, backlightLabel);

        backlightSlider = new QSlider(idlenessBacklightWatcherGroupBox);
        backlightSlider->setObjectName(QString::fromUtf8("backlightSlider"));
        backlightSlider->setMaximum(100);
        backlightSlider->setPageStep(1);
        backlightSlider->setOrientation(Qt::Horizontal);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, backlightSlider);

        idleTimeBacklightLabel = new QLabel(idlenessBacklightWatcherGroupBox);
        idleTimeBacklightLabel->setObjectName(QString::fromUtf8("idleTimeBacklightLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, idleTimeBacklightLabel);

        idleTimeBacklightTimeEdit = new QTimeEdit(idlenessBacklightWatcherGroupBox);
        idleTimeBacklightTimeEdit->setObjectName(QString::fromUtf8("idleTimeBacklightTimeEdit"));
        idleTimeBacklightTimeEdit->setMaximumTime(QTime(22, 59, 59));
        idleTimeBacklightTimeEdit->setMinimumTime(QTime(0, 0, 1));
        idleTimeBacklightTimeEdit->setCurrentSection(QDateTimeEdit::MinuteSection);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, idleTimeBacklightTimeEdit);

        checkBacklightButton = new QPushButton(idlenessBacklightWatcherGroupBox);
        checkBacklightButton->setObjectName(QString::fromUtf8("checkBacklightButton"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, checkBacklightButton);

        onBatteryDischargingCheckBox = new QCheckBox(idlenessBacklightWatcherGroupBox);
        onBatteryDischargingCheckBox->setObjectName(QString::fromUtf8("onBatteryDischargingCheckBox"));
        onBatteryDischargingCheckBox->setChecked(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, onBatteryDischargingCheckBox);


        verticalLayout_2->addWidget(idlenessBacklightWatcherGroupBox);


        verticalLayout->addWidget(idlenessWatcherGroupBox);

        disableIdlenessFullscreenBox = new QCheckBox(IdlenessWatcherSettings);
        disableIdlenessFullscreenBox->setObjectName(QString::fromUtf8("disableIdlenessFullscreenBox"));

        verticalLayout->addWidget(disableIdlenessFullscreenBox);


        retranslateUi(IdlenessWatcherSettings);

        QMetaObject::connectSlotsByName(IdlenessWatcherSettings);
    } // setupUi

    void retranslateUi(QWidget *IdlenessWatcherSettings)
    {
        idlenessWatcherGroupBox->setTitle(QCoreApplication::translate("IdlenessWatcherSettings", "Enab&le Idleness Watcher", nullptr));
        idleTimeACLabel->setText(QCoreApplication::translate("IdlenessWatcherSettings", "When idle on AC:", nullptr));
        idleACActionLabel->setText(QCoreApplication::translate("IdlenessWatcherSettings", "AC Idle time:", nullptr));
#if QT_CONFIG(tooltip)
        idleACTimeEdit->setToolTip(QCoreApplication::translate("IdlenessWatcherSettings", "Minutes:Seconds (min: 01:30)", nullptr));
#endif // QT_CONFIG(tooltip)
        idleACTimeEdit->setDisplayFormat(QCoreApplication::translate("IdlenessWatcherSettings", "mm:ss", nullptr));
        idleTimeBatteryLabel->setText(QCoreApplication::translate("IdlenessWatcherSettings", "When idle on Battery:", nullptr));
        idleBatteryActionLabel->setText(QCoreApplication::translate("IdlenessWatcherSettings", "Battery Idle time:", nullptr));
#if QT_CONFIG(tooltip)
        idleBatteryTimeEdit->setToolTip(QCoreApplication::translate("IdlenessWatcherSettings", "Minutes:Seconds (min: 01:30)", nullptr));
#endif // QT_CONFIG(tooltip)
        idleBatteryTimeEdit->setDisplayFormat(QCoreApplication::translate("IdlenessWatcherSettings", "mm:ss", nullptr));
        idlenessBacklightWatcherGroupBox->setTitle(QCoreApplication::translate("IdlenessWatcherSettings", "Enable Backlight Change", nullptr));
        backlightLabel->setText(QCoreApplication::translate("IdlenessWatcherSettings", "Backlight (%):", nullptr));
        idleTimeBacklightLabel->setText(QCoreApplication::translate("IdlenessWatcherSettings", "Idle time:", nullptr));
#if QT_CONFIG(tooltip)
        idleTimeBacklightTimeEdit->setToolTip(QCoreApplication::translate("IdlenessWatcherSettings", "Minutes:Seconds", nullptr));
#endif // QT_CONFIG(tooltip)
        idleTimeBacklightTimeEdit->setDisplayFormat(QCoreApplication::translate("IdlenessWatcherSettings", "mm:ss", nullptr));
        checkBacklightButton->setText(QCoreApplication::translate("IdlenessWatcherSettings", "Check backlight", nullptr));
        onBatteryDischargingCheckBox->setText(QCoreApplication::translate("IdlenessWatcherSettings", "On battery discharging ", nullptr));
        disableIdlenessFullscreenBox->setText(QCoreApplication::translate("IdlenessWatcherSettings", "Disable idleness checks when fullscreen", nullptr));
        (void)IdlenessWatcherSettings;
    } // retranslateUi

};

namespace Ui {
    class IdlenessWatcherSettings: public Ui_IdlenessWatcherSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDLENESSWATCHERSETTINGS_H
