/********************************************************************************
** Form generated from reading UI file 'basicsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICSETTINGS_H
#define UI_BASICSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicSettings
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QComboBox *wmComboBox;
    QPushButton *findWmButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *startButton;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer;
    QTreeView *moduleView;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *scaleSpinBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QCheckBox *leaveConfirmationCheckBox;
    QCheckBox *lockBeforePowerActionsCheckBox;
    QLabel *powerDelayLabel;
    QSpinBox *powerAfterLockDelaySpinBox;

    void setupUi(QWidget *BasicSettings)
    {
        if (BasicSettings->objectName().isEmpty())
            BasicSettings->setObjectName(QString::fromUtf8("BasicSettings"));
        BasicSettings->resize(322, 380);
        gridLayout_3 = new QGridLayout(BasicSettings);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(BasicSettings);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        groupBox = new QGroupBox(BasicSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        wmComboBox = new QComboBox(groupBox);
        wmComboBox->setObjectName(QString::fromUtf8("wmComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wmComboBox->sizePolicy().hasHeightForWidth());
        wmComboBox->setSizePolicy(sizePolicy);
        wmComboBox->setEditable(true);

        gridLayout_2->addWidget(wmComboBox, 0, 0, 1, 1);

        findWmButton = new QPushButton(groupBox);
        findWmButton->setObjectName(QString::fromUtf8("findWmButton"));

        gridLayout_2->addWidget(findWmButton, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(BasicSettings);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        startButton = new QPushButton(groupBox_2);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        gridLayout->addWidget(startButton, 7, 1, 1, 1);

        stopButton = new QPushButton(groupBox_2);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        gridLayout->addWidget(stopButton, 7, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 0, 1, 1);

        moduleView = new QTreeView(groupBox_2);
        moduleView->setObjectName(QString::fromUtf8("moduleView"));
        moduleView->setAlternatingRowColors(true);
        moduleView->setRootIsDecorated(false);
        moduleView->setHeaderHidden(true);
        moduleView->header()->setStretchLastSection(false);

        gridLayout->addWidget(moduleView, 0, 0, 1, 3);


        gridLayout_3->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(BasicSettings);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout = new QFormLayout(groupBox_4);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setHorizontalSpacing(6);
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        scaleSpinBox = new QDoubleSpinBox(groupBox_4);
        scaleSpinBox->setObjectName(QString::fromUtf8("scaleSpinBox"));
        scaleSpinBox->setMinimum(1.000000000000000);
        scaleSpinBox->setMaximum(4.000000000000000);
        scaleSpinBox->setSingleStep(0.500000000000000);
        scaleSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, scaleSpinBox);


        gridLayout_3->addWidget(groupBox_4, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(BasicSettings);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        leaveConfirmationCheckBox = new QCheckBox(groupBox_3);
        leaveConfirmationCheckBox->setObjectName(QString::fromUtf8("leaveConfirmationCheckBox"));

        gridLayout_4->addWidget(leaveConfirmationCheckBox, 0, 0, 1, 2);

        lockBeforePowerActionsCheckBox = new QCheckBox(groupBox_3);
        lockBeforePowerActionsCheckBox->setObjectName(QString::fromUtf8("lockBeforePowerActionsCheckBox"));

        gridLayout_4->addWidget(lockBeforePowerActionsCheckBox, 1, 0, 1, 2);

        powerDelayLabel = new QLabel(groupBox_3);
        powerDelayLabel->setObjectName(QString::fromUtf8("powerDelayLabel"));

        gridLayout_4->addWidget(powerDelayLabel, 2, 0, 1, 1);

        powerAfterLockDelaySpinBox = new QSpinBox(groupBox_3);
        powerAfterLockDelaySpinBox->setObjectName(QString::fromUtf8("powerAfterLockDelaySpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(powerAfterLockDelaySpinBox->sizePolicy().hasHeightForWidth());
        powerAfterLockDelaySpinBox->setSizePolicy(sizePolicy1);
        powerAfterLockDelaySpinBox->setMaximum(4500);
        powerAfterLockDelaySpinBox->setSingleStep(250);

        gridLayout_4->addWidget(powerAfterLockDelaySpinBox, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 4, 0, 1, 1);


        retranslateUi(BasicSettings);
        QObject::connect(lockBeforePowerActionsCheckBox, SIGNAL(toggled(bool)), powerAfterLockDelaySpinBox, SLOT(setEnabled(bool)));
        QObject::connect(lockBeforePowerActionsCheckBox, SIGNAL(toggled(bool)), powerDelayLabel, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(BasicSettings);
    } // setupUi

    void retranslateUi(QWidget *BasicSettings)
    {
        label->setText(QCoreApplication::translate("BasicSettings", "Basic Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BasicSettings", "Window Manager", nullptr));
        findWmButton->setText(QCoreApplication::translate("BasicSettings", "Search...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("BasicSettings", "LXQt Modules", nullptr));
        startButton->setText(QCoreApplication::translate("BasicSettings", "Start", nullptr));
        stopButton->setText(QCoreApplication::translate("BasicSettings", "Stop", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("BasicSettings", "Global Screen Scaling", nullptr));
        label_2->setText(QCoreApplication::translate("BasicSettings", "Scale factor:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("BasicSettings", "Leave Session", nullptr));
        leaveConfirmationCheckBox->setText(QCoreApplication::translate("BasicSettings", "Ask for confirmation to leave session", nullptr));
        lockBeforePowerActionsCheckBox->setText(QCoreApplication::translate("BasicSettings", "Lock screen before suspending/hibernating", nullptr));
        powerDelayLabel->setText(QCoreApplication::translate("BasicSettings", "Suspend/hibernate after lock delay:", nullptr));
        powerAfterLockDelaySpinBox->setSuffix(QCoreApplication::translate("BasicSettings", " ms", nullptr));
        powerAfterLockDelaySpinBox->setPrefix(QString());
        (void)BasicSettings;
    } // retranslateUi

};

namespace Ui {
    class BasicSettings: public Ui_BasicSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICSETTINGS_H
