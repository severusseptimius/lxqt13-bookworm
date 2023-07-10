/********************************************************************************
** Form generated from reading UI file 'advancedsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDSETTINGS_H
#define UI_ADVANCEDSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdvancedSettings
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *unattendedLabel;
    QSpinBox *unattendedBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *blackListLabel;
    QLineEdit *blackListEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *spacingLabel;
    QSpinBox *widthBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *widthLabel;
    QSpinBox *spacingBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *serverDecidesLabel;
    QSpinBox *serverDecidesBox;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *screenWithMouseBtn;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *doNotDisturbBtn;

    void setupUi(QWidget *AdvancedSettings)
    {
        if (AdvancedSettings->objectName().isEmpty())
            AdvancedSettings->setObjectName(QString::fromUtf8("AdvancedSettings"));
        AdvancedSettings->resize(350, 407);
        gridLayout_2 = new QGridLayout(AdvancedSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_3 = new QGroupBox(AdvancedSettings);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        unattendedLabel = new QLabel(groupBox_3);
        unattendedLabel->setObjectName(QString::fromUtf8("unattendedLabel"));

        horizontalLayout_5->addWidget(unattendedLabel);

        unattendedBox = new QSpinBox(groupBox_3);
        unattendedBox->setObjectName(QString::fromUtf8("unattendedBox"));

        horizontalLayout_5->addWidget(unattendedBox);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        blackListLabel = new QLabel(groupBox_3);
        blackListLabel->setObjectName(QString::fromUtf8("blackListLabel"));

        horizontalLayout_6->addWidget(blackListLabel);

        blackListEdit = new QLineEdit(groupBox_3);
        blackListEdit->setObjectName(QString::fromUtf8("blackListEdit"));
        blackListEdit->setClearButtonEnabled(true);

        horizontalLayout_6->addWidget(blackListEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);


        gridLayout_2->addWidget(groupBox_3, 3, 0, 1, 2);

        groupBox = new QGroupBox(AdvancedSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        spacingLabel = new QLabel(groupBox);
        spacingLabel->setObjectName(QString::fromUtf8("spacingLabel"));

        horizontalLayout_4->addWidget(spacingLabel);

        widthBox = new QSpinBox(groupBox);
        widthBox->setObjectName(QString::fromUtf8("widthBox"));
        widthBox->setMinimum(10);
        widthBox->setMaximum(2000);

        horizontalLayout_4->addWidget(widthBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widthLabel = new QLabel(groupBox);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));

        horizontalLayout_3->addWidget(widthLabel);

        spacingBox = new QSpinBox(groupBox);
        spacingBox->setObjectName(QString::fromUtf8("spacingBox"));

        horizontalLayout_3->addWidget(spacingBox);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addWidget(groupBox, 1, 0, 2, 2);

        groupBox_2 = new QGroupBox(AdvancedSettings);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        serverDecidesLabel = new QLabel(groupBox_2);
        serverDecidesLabel->setObjectName(QString::fromUtf8("serverDecidesLabel"));

        horizontalLayout->addWidget(serverDecidesLabel);

        serverDecidesBox = new QSpinBox(groupBox_2);
        serverDecidesBox->setObjectName(QString::fromUtf8("serverDecidesBox"));
        serverDecidesBox->setMaximum(7200);

        horizontalLayout->addWidget(serverDecidesBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 6, 0, 1, 2);

        groupBox_4 = new QGroupBox(AdvancedSettings);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        screenWithMouseBtn = new QCheckBox(groupBox_4);
        screenWithMouseBtn->setObjectName(QString::fromUtf8("screenWithMouseBtn"));

        verticalLayout_3->addWidget(screenWithMouseBtn);


        gridLayout_2->addWidget(groupBox_4, 5, 0, 1, 2);

        groupBox_5 = new QGroupBox(AdvancedSettings);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        doNotDisturbBtn = new QCheckBox(groupBox_5);
        doNotDisturbBtn->setObjectName(QString::fromUtf8("doNotDisturbBtn"));

        verticalLayout_4->addWidget(doNotDisturbBtn);


        gridLayout_2->addWidget(groupBox_5, 4, 0, 1, 2);


        retranslateUi(AdvancedSettings);

        QMetaObject::connectSlotsByName(AdvancedSettings);
    } // setupUi

    void retranslateUi(QWidget *AdvancedSettings)
    {
        groupBox_3->setTitle(QCoreApplication::translate("AdvancedSettings", "Unattended Notifications", nullptr));
        unattendedLabel->setText(QCoreApplication::translate("AdvancedSettings", "How many to save:", nullptr));
#if QT_CONFIG(tooltip)
        blackListLabel->setToolTip(QCoreApplication::translate("AdvancedSettings", "Application name is on the top of notification.", nullptr));
#endif // QT_CONFIG(tooltip)
        blackListLabel->setText(QCoreApplication::translate("AdvancedSettings", "Ignore these applications:", nullptr));
#if QT_CONFIG(tooltip)
        blackListEdit->setToolTip(QCoreApplication::translate("AdvancedSettings", "Application name is on the top of notification.", nullptr));
#endif // QT_CONFIG(tooltip)
        blackListEdit->setPlaceholderText(QCoreApplication::translate("AdvancedSettings", "app1,app2,app3", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AdvancedSettings", "Sizes", nullptr));
        spacingLabel->setText(QCoreApplication::translate("AdvancedSettings", "Width:", nullptr));
        widthBox->setSuffix(QCoreApplication::translate("AdvancedSettings", " px", nullptr));
        widthLabel->setText(QCoreApplication::translate("AdvancedSettings", "Spacing:", nullptr));
        spacingBox->setSuffix(QCoreApplication::translate("AdvancedSettings", " px", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AdvancedSettings", "Duration", nullptr));
        label_3->setText(QCoreApplication::translate("AdvancedSettings", "Some notifications set their own on-screen duration.", nullptr));
        serverDecidesLabel->setText(QCoreApplication::translate("AdvancedSettings", "Default duration:", nullptr));
        serverDecidesBox->setSuffix(QCoreApplication::translate("AdvancedSettings", " sec", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("AdvancedSettings", "Screen", nullptr));
#if QT_CONFIG(tooltip)
        screenWithMouseBtn->setToolTip(QCoreApplication::translate("AdvancedSettings", "When unchecked the notification will always show on primary screen", nullptr));
#endif // QT_CONFIG(tooltip)
        screenWithMouseBtn->setText(QCoreApplication::translate("AdvancedSettings", "Show notifications on screen with the mouse", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("AdvancedSettings", "Do Not Disturb", nullptr));
        doNotDisturbBtn->setText(QCoreApplication::translate("AdvancedSettings", "Only save notifications", nullptr));
        (void)AdvancedSettings;
    } // retranslateUi

};

namespace Ui {
    class AdvancedSettings: public Ui_AdvancedSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDSETTINGS_H
