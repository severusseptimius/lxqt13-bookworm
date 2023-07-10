/********************************************************************************
** Form generated from reading UI file 'lxqtsensorsconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTSENSORSCONFIGURATION_H
#define UI_LXQTSENSORSCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LXQtSensorsConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *mainTabWidget;
    QWidget *commonTab;
    QGridLayout *gridLayout;
    QLabel *updateIntervalL;
    QLabel *tempBarWidthL;
    QSpinBox *updateIntervalSB;
    QSpinBox *tempBarWidthSB;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *tempScaleGB;
    QHBoxLayout *horizontalLayout;
    QRadioButton *celsiusTempScaleRB;
    QRadioButton *fahrenheitTempScaleRB;
    QCheckBox *warningAboutHighTemperatureChB;
    QWidget *sensorsSettingsTab;
    QGridLayout *gridLayout_2;
    QComboBox *detectedChipsCB;
    QLabel *detectedChipsL;
    QLabel *chipFeaturesL;
    QTableWidget *chipFeaturesT;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *LXQtSensorsConfiguration)
    {
        if (LXQtSensorsConfiguration->objectName().isEmpty())
            LXQtSensorsConfiguration->setObjectName(QString::fromUtf8("LXQtSensorsConfiguration"));
        LXQtSensorsConfiguration->resize(271, 284);
        verticalLayout = new QVBoxLayout(LXQtSensorsConfiguration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mainTabWidget = new QTabWidget(LXQtSensorsConfiguration);
        mainTabWidget->setObjectName(QString::fromUtf8("mainTabWidget"));
        mainTabWidget->setTabShape(QTabWidget::Rounded);
        mainTabWidget->setDocumentMode(true);
        commonTab = new QWidget();
        commonTab->setObjectName(QString::fromUtf8("commonTab"));
        gridLayout = new QGridLayout(commonTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        updateIntervalL = new QLabel(commonTab);
        updateIntervalL->setObjectName(QString::fromUtf8("updateIntervalL"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(updateIntervalL->sizePolicy().hasHeightForWidth());
        updateIntervalL->setSizePolicy(sizePolicy);

        gridLayout->addWidget(updateIntervalL, 0, 0, 1, 1);

        tempBarWidthL = new QLabel(commonTab);
        tempBarWidthL->setObjectName(QString::fromUtf8("tempBarWidthL"));

        gridLayout->addWidget(tempBarWidthL, 1, 0, 1, 1);

        updateIntervalSB = new QSpinBox(commonTab);
        updateIntervalSB->setObjectName(QString::fromUtf8("updateIntervalSB"));
        updateIntervalSB->setEnabled(true);
        updateIntervalSB->setMinimum(1);
        updateIntervalSB->setMaximum(300);

        gridLayout->addWidget(updateIntervalSB, 0, 1, 1, 1);

        tempBarWidthSB = new QSpinBox(commonTab);
        tempBarWidthSB->setObjectName(QString::fromUtf8("tempBarWidthSB"));
        tempBarWidthSB->setMinimum(1);
        tempBarWidthSB->setValue(8);

        gridLayout->addWidget(tempBarWidthSB, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        tempScaleGB = new QGroupBox(commonTab);
        tempScaleGB->setObjectName(QString::fromUtf8("tempScaleGB"));
        horizontalLayout = new QHBoxLayout(tempScaleGB);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        celsiusTempScaleRB = new QRadioButton(tempScaleGB);
        celsiusTempScaleRB->setObjectName(QString::fromUtf8("celsiusTempScaleRB"));
        celsiusTempScaleRB->setChecked(true);

        horizontalLayout->addWidget(celsiusTempScaleRB);

        fahrenheitTempScaleRB = new QRadioButton(tempScaleGB);
        fahrenheitTempScaleRB->setObjectName(QString::fromUtf8("fahrenheitTempScaleRB"));

        horizontalLayout->addWidget(fahrenheitTempScaleRB);

        fahrenheitTempScaleRB->raise();
        celsiusTempScaleRB->raise();

        gridLayout->addWidget(tempScaleGB, 3, 0, 1, 2);

        warningAboutHighTemperatureChB = new QCheckBox(commonTab);
        warningAboutHighTemperatureChB->setObjectName(QString::fromUtf8("warningAboutHighTemperatureChB"));
        warningAboutHighTemperatureChB->setLayoutDirection(Qt::LeftToRight);
        warningAboutHighTemperatureChB->setChecked(true);
        warningAboutHighTemperatureChB->setTristate(false);

        gridLayout->addWidget(warningAboutHighTemperatureChB, 2, 0, 1, 2);

        mainTabWidget->addTab(commonTab, QString());
        sensorsSettingsTab = new QWidget();
        sensorsSettingsTab->setObjectName(QString::fromUtf8("sensorsSettingsTab"));
        gridLayout_2 = new QGridLayout(sensorsSettingsTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        detectedChipsCB = new QComboBox(sensorsSettingsTab);
        detectedChipsCB->setObjectName(QString::fromUtf8("detectedChipsCB"));
        detectedChipsCB->setFrame(true);

        gridLayout_2->addWidget(detectedChipsCB, 4, 0, 1, 1);

        detectedChipsL = new QLabel(sensorsSettingsTab);
        detectedChipsL->setObjectName(QString::fromUtf8("detectedChipsL"));

        gridLayout_2->addWidget(detectedChipsL, 3, 0, 1, 1);

        chipFeaturesL = new QLabel(sensorsSettingsTab);
        chipFeaturesL->setObjectName(QString::fromUtf8("chipFeaturesL"));

        gridLayout_2->addWidget(chipFeaturesL, 5, 0, 1, 1);

        chipFeaturesT = new QTableWidget(sensorsSettingsTab);
        if (chipFeaturesT->columnCount() < 3)
            chipFeaturesT->setColumnCount(3);
        chipFeaturesT->setObjectName(QString::fromUtf8("chipFeaturesT"));
        chipFeaturesT->setColumnCount(3);

        gridLayout_2->addWidget(chipFeaturesT, 6, 0, 1, 1);

        mainTabWidget->addTab(sensorsSettingsTab, QString());

        verticalLayout->addWidget(mainTabWidget);

        buttons = new QDialogButtonBox(LXQtSensorsConfiguration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttons);


        retranslateUi(LXQtSensorsConfiguration);
        QObject::connect(buttons, SIGNAL(accepted()), LXQtSensorsConfiguration, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), LXQtSensorsConfiguration, SLOT(reject()));

        mainTabWidget->setCurrentIndex(0);
        detectedChipsCB->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(LXQtSensorsConfiguration);
    } // setupUi

    void retranslateUi(QDialog *LXQtSensorsConfiguration)
    {
        LXQtSensorsConfiguration->setWindowTitle(QCoreApplication::translate("LXQtSensorsConfiguration", "Sensors Settings", nullptr));
        updateIntervalL->setText(QCoreApplication::translate("LXQtSensorsConfiguration", "Update interval (seconds)", nullptr));
        tempBarWidthL->setText(QCoreApplication::translate("LXQtSensorsConfiguration", "Temperature bar width", nullptr));
#if QT_CONFIG(accessibility)
        updateIntervalSB->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        updateIntervalSB->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        updateIntervalSB->setSuffix(QString());
        updateIntervalSB->setPrefix(QString());
        tempScaleGB->setTitle(QCoreApplication::translate("LXQtSensorsConfiguration", "Temperature scale", nullptr));
        celsiusTempScaleRB->setText(QCoreApplication::translate("LXQtSensorsConfiguration", "Celsius", nullptr));
        fahrenheitTempScaleRB->setText(QCoreApplication::translate("LXQtSensorsConfiguration", "Fahrenheit", nullptr));
#if QT_CONFIG(tooltip)
        warningAboutHighTemperatureChB->setToolTip(QCoreApplication::translate("LXQtSensorsConfiguration", "Blink status bars when the temperature is too high", nullptr));
#endif // QT_CONFIG(tooltip)
        warningAboutHighTemperatureChB->setText(QCoreApplication::translate("LXQtSensorsConfiguration", "Warning about high temperature", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(commonTab), QCoreApplication::translate("LXQtSensorsConfiguration", "Common", nullptr));
        detectedChipsL->setText(QCoreApplication::translate("LXQtSensorsConfiguration", "Detected chips:", nullptr));
        chipFeaturesL->setText(QCoreApplication::translate("LXQtSensorsConfiguration", "Chip features:", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(sensorsSettingsTab), QCoreApplication::translate("LXQtSensorsConfiguration", "Sensors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtSensorsConfiguration: public Ui_LXQtSensorsConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTSENSORSCONFIGURATION_H
