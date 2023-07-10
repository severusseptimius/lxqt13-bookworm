/********************************************************************************
** Form generated from reading UI file 'lxqtcpuloadconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTCPULOADCONFIGURATION_H
#define UI_LXQTCPULOADCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_LXQtCpuLoadConfiguration
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *generalGB;
    QGridLayout *gridLayout;
    QCheckBox *showTextCB;
    QLabel *label;
    QDoubleSpinBox *updateIntervalSpinBox;
    QLabel *barOrientationL;
    QComboBox *barOrientationCOB;
    QLabel *barWidthL;
    QSpinBox *barWidthSB;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *LXQtCpuLoadConfiguration)
    {
        if (LXQtCpuLoadConfiguration->objectName().isEmpty())
            LXQtCpuLoadConfiguration->setObjectName(QString::fromUtf8("LXQtCpuLoadConfiguration"));
        LXQtCpuLoadConfiguration->resize(285, 191);
        gridLayout_2 = new QGridLayout(LXQtCpuLoadConfiguration);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        generalGB = new QGroupBox(LXQtCpuLoadConfiguration);
        generalGB->setObjectName(QString::fromUtf8("generalGB"));
        generalGB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        generalGB->setFlat(false);
        generalGB->setCheckable(false);
        gridLayout = new QGridLayout(generalGB);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        showTextCB = new QCheckBox(generalGB);
        showTextCB->setObjectName(QString::fromUtf8("showTextCB"));

        gridLayout->addWidget(showTextCB, 0, 0, 1, 2);

        label = new QLabel(generalGB);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        updateIntervalSpinBox = new QDoubleSpinBox(generalGB);
        updateIntervalSpinBox->setObjectName(QString::fromUtf8("updateIntervalSpinBox"));
        updateIntervalSpinBox->setDecimals(1);
        updateIntervalSpinBox->setMinimum(0.500000000000000);
        updateIntervalSpinBox->setMaximum(10000.000000000000000);
        updateIntervalSpinBox->setSingleStep(0.500000000000000);
        updateIntervalSpinBox->setValue(1.000000000000000);

        gridLayout->addWidget(updateIntervalSpinBox, 1, 1, 1, 1);

        barOrientationL = new QLabel(generalGB);
        barOrientationL->setObjectName(QString::fromUtf8("barOrientationL"));

        gridLayout->addWidget(barOrientationL, 2, 0, 1, 1);

        barOrientationCOB = new QComboBox(generalGB);
        barOrientationCOB->setObjectName(QString::fromUtf8("barOrientationCOB"));

        gridLayout->addWidget(barOrientationCOB, 2, 1, 1, 1);

        barWidthL = new QLabel(generalGB);
        barWidthL->setObjectName(QString::fromUtf8("barWidthL"));

        gridLayout->addWidget(barWidthL, 3, 0, 1, 1);

        barWidthSB = new QSpinBox(generalGB);
        barWidthSB->setObjectName(QString::fromUtf8("barWidthSB"));
        barWidthSB->setMinimum(4);
        barWidthSB->setMaximum(2048);
        barWidthSB->setValue(20);

        gridLayout->addWidget(barWidthSB, 3, 1, 1, 1);


        gridLayout_2->addWidget(generalGB, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        buttons = new QDialogButtonBox(LXQtCpuLoadConfiguration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        gridLayout_2->addWidget(buttons, 2, 0, 1, 1);


        retranslateUi(LXQtCpuLoadConfiguration);

        QMetaObject::connectSlotsByName(LXQtCpuLoadConfiguration);
    } // setupUi

    void retranslateUi(QDialog *LXQtCpuLoadConfiguration)
    {
        LXQtCpuLoadConfiguration->setWindowTitle(QCoreApplication::translate("LXQtCpuLoadConfiguration", "CPU Load Settings", nullptr));
        generalGB->setTitle(QCoreApplication::translate("LXQtCpuLoadConfiguration", "General", nullptr));
        showTextCB->setText(QCoreApplication::translate("LXQtCpuLoadConfiguration", "Show text", nullptr));
        label->setText(QCoreApplication::translate("LXQtCpuLoadConfiguration", "Update interval:", nullptr));
        updateIntervalSpinBox->setSuffix(QCoreApplication::translate("LXQtCpuLoadConfiguration", "sec", nullptr));
        barOrientationL->setText(QCoreApplication::translate("LXQtCpuLoadConfiguration", "Bar orientation:", nullptr));
        barWidthL->setText(QCoreApplication::translate("LXQtCpuLoadConfiguration", "Bar width:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtCpuLoadConfiguration: public Ui_LXQtCpuLoadConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTCPULOADCONFIGURATION_H
