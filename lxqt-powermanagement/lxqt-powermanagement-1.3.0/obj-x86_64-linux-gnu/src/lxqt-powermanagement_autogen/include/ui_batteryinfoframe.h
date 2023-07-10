/********************************************************************************
** Form generated from reading UI file 'batteryinfoframe.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTERYINFOFRAME_H
#define UI_BATTERYINFOFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_BatteryInfoFrame
{
public:
    QGridLayout *gridLayout;
    QLabel *vendorValue;
    QLabel *typeValue;
    QLabel *temperatureValue;
    QLabel *temperatureCaption;
    QLabel *typeCaption;
    QLabel *stateCaption;
    QLabel *stateValue;
    QLabel *energyFullDesignCaption;
    QLabel *energyFullDesignValue;
    QLabel *energyFullCaption;
    QLabel *energyFullValue;
    QLabel *energyCaption;
    QLabel *energyValue;
    QLabel *energyRateCaption;
    QLabel *energyRateValue;
    QLabel *technologyValue;
    QLabel *technologyCaption;
    QLabel *voltageValue;
    QLabel *voltageCaption;
    QLabel *vendorCaption;

    void setupUi(QFrame *BatteryInfoFrame)
    {
        if (BatteryInfoFrame->objectName().isEmpty())
            BatteryInfoFrame->setObjectName(QString::fromUtf8("BatteryInfoFrame"));
        BatteryInfoFrame->resize(277, 292);
        gridLayout = new QGridLayout(BatteryInfoFrame);
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 12, -1, 12);
        vendorValue = new QLabel(BatteryInfoFrame);
        vendorValue->setObjectName(QString::fromUtf8("vendorValue"));
        vendorValue->setText(QString::fromUtf8("DELL 00"));

        gridLayout->addWidget(vendorValue, 10, 1, 1, 1);

        typeValue = new QLabel(BatteryInfoFrame);
        typeValue->setObjectName(QString::fromUtf8("typeValue"));
        typeValue->setText(QString::fromUtf8("Primary"));

        gridLayout->addWidget(typeValue, 0, 1, 1, 1);

        temperatureValue = new QLabel(BatteryInfoFrame);
        temperatureValue->setObjectName(QString::fromUtf8("temperatureValue"));
        temperatureValue->setText(QString::fromUtf8("12.27 \302\272C"));

        gridLayout->addWidget(temperatureValue, 9, 1, 1, 1);

        temperatureCaption = new QLabel(BatteryInfoFrame);
        temperatureCaption->setObjectName(QString::fromUtf8("temperatureCaption"));
        temperatureCaption->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(temperatureCaption, 9, 0, 1, 1);

        typeCaption = new QLabel(BatteryInfoFrame);
        typeCaption->setObjectName(QString::fromUtf8("typeCaption"));
        typeCaption->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(typeCaption, 0, 0, 1, 1);

        stateCaption = new QLabel(BatteryInfoFrame);
        stateCaption->setObjectName(QString::fromUtf8("stateCaption"));
        stateCaption->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(stateCaption, 1, 0, 1, 1);

        stateValue = new QLabel(BatteryInfoFrame);
        stateValue->setObjectName(QString::fromUtf8("stateValue"));
        stateValue->setText(QString::fromUtf8("Charging"));

        gridLayout->addWidget(stateValue, 1, 1, 1, 1);

        energyFullDesignCaption = new QLabel(BatteryInfoFrame);
        energyFullDesignCaption->setObjectName(QString::fromUtf8("energyFullDesignCaption"));
        energyFullDesignCaption->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(energyFullDesignCaption, 2, 0, 1, 1);

        energyFullDesignValue = new QLabel(BatteryInfoFrame);
        energyFullDesignValue->setObjectName(QString::fromUtf8("energyFullDesignValue"));
        energyFullDesignValue->setText(QString::fromUtf8("73.26 Wh"));

        gridLayout->addWidget(energyFullDesignValue, 2, 1, 1, 1);

        energyFullCaption = new QLabel(BatteryInfoFrame);
        energyFullCaption->setObjectName(QString::fromUtf8("energyFullCaption"));
        energyFullCaption->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(energyFullCaption, 3, 0, 1, 1);

        energyFullValue = new QLabel(BatteryInfoFrame);
        energyFullValue->setObjectName(QString::fromUtf8("energyFullValue"));
        energyFullValue->setText(QString::fromUtf8("64.58 Wh (88.2 %)"));

        gridLayout->addWidget(energyFullValue, 3, 1, 1, 1);

        energyCaption = new QLabel(BatteryInfoFrame);
        energyCaption->setObjectName(QString::fromUtf8("energyCaption"));
        energyCaption->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(energyCaption, 4, 0, 1, 1);

        energyValue = new QLabel(BatteryInfoFrame);
        energyValue->setObjectName(QString::fromUtf8("energyValue"));
        energyValue->setText(QString::fromUtf8("63.41 Wh (98.2 %)"));

        gridLayout->addWidget(energyValue, 4, 1, 1, 1);

        energyRateCaption = new QLabel(BatteryInfoFrame);
        energyRateCaption->setObjectName(QString::fromUtf8("energyRateCaption"));
        energyRateCaption->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(energyRateCaption, 5, 0, 1, 1);

        energyRateValue = new QLabel(BatteryInfoFrame);
        energyRateValue->setObjectName(QString::fromUtf8("energyRateValue"));
        energyRateValue->setText(QString::fromUtf8("15.11 W"));

        gridLayout->addWidget(energyRateValue, 5, 1, 1, 1);

        technologyValue = new QLabel(BatteryInfoFrame);
        technologyValue->setObjectName(QString::fromUtf8("technologyValue"));
        technologyValue->setText(QString::fromUtf8("Lithium ion"));

        gridLayout->addWidget(technologyValue, 7, 1, 1, 1);

        technologyCaption = new QLabel(BatteryInfoFrame);
        technologyCaption->setObjectName(QString::fromUtf8("technologyCaption"));
        technologyCaption->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(technologyCaption, 7, 0, 1, 1);

        voltageValue = new QLabel(BatteryInfoFrame);
        voltageValue->setObjectName(QString::fromUtf8("voltageValue"));
        voltageValue->setText(QString::fromUtf8("12.27 V"));

        gridLayout->addWidget(voltageValue, 8, 1, 1, 1);

        voltageCaption = new QLabel(BatteryInfoFrame);
        voltageCaption->setObjectName(QString::fromUtf8("voltageCaption"));
        voltageCaption->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(voltageCaption, 8, 0, 1, 1);

        vendorCaption = new QLabel(BatteryInfoFrame);
        vendorCaption->setObjectName(QString::fromUtf8("vendorCaption"));
        vendorCaption->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(vendorCaption, 10, 0, 1, 1);


        retranslateUi(BatteryInfoFrame);

        QMetaObject::connectSlotsByName(BatteryInfoFrame);
    } // setupUi

    void retranslateUi(QFrame *BatteryInfoFrame)
    {
        BatteryInfoFrame->setWindowTitle(QCoreApplication::translate("BatteryInfoFrame", "Power Management", nullptr));
        temperatureCaption->setText(QCoreApplication::translate("BatteryInfoFrame", "Temperature:", nullptr));
        typeCaption->setText(QCoreApplication::translate("BatteryInfoFrame", "Type:", nullptr));
        stateCaption->setText(QCoreApplication::translate("BatteryInfoFrame", "State:", nullptr));
        energyFullDesignCaption->setText(QCoreApplication::translate("BatteryInfoFrame", "Energy Full Design:", nullptr));
        energyFullCaption->setText(QCoreApplication::translate("BatteryInfoFrame", "Energy Full:", nullptr));
        energyCaption->setText(QCoreApplication::translate("BatteryInfoFrame", "Energy Now:", nullptr));
        energyRateCaption->setText(QCoreApplication::translate("BatteryInfoFrame", "Energy rate:", nullptr));
        technologyCaption->setText(QCoreApplication::translate("BatteryInfoFrame", "Technology:", nullptr));
        voltageCaption->setText(QCoreApplication::translate("BatteryInfoFrame", "Voltage:", nullptr));
        vendorCaption->setText(QCoreApplication::translate("BatteryInfoFrame", "Vendor:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BatteryInfoFrame: public Ui_BatteryInfoFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTERYINFOFRAME_H
