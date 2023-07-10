/********************************************************************************
** Form generated from reading UI file 'lxqttaskbarconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTTASKBARCONFIGURATION_H
#define UI_LXQTTASKBARCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LXQtTaskbarConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *WLContentGB;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *limitByDesktopCB;
    QComboBox *showDesktopNumCB;
    QCheckBox *limitByScreenCB;
    QCheckBox *limitByMinimizedCB;
    QCheckBox *raiseOnCurrentDesktopCB;
    QCheckBox *middleClickCB;
    QGroupBox *WLMousewheelGB;
    QVBoxLayout *verticalLayout_mousewheel;
    QComboBox *wheelEventsActionCB;
    QHBoxLayout *horizontalLayout_2;
    QLabel *wheelDeltaThresholdLabel;
    QSpinBox *wheelDeltaThresholdSB;
    QGroupBox *groupingGB;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *showGroupOnHoverCB;
    QCheckBox *ungroupedNextToExistingCB;
    QGroupBox *WLAppearanceGB;
    QFormLayout *formLayout;
    QLabel *buttonStyleL;
    QComboBox *buttonStyleCB;
    QLabel *buttonWidthL;
    QSpinBox *buttonWidthSB;
    QLabel *buttonHeightL;
    QSpinBox *buttonHeightSB;
    QCheckBox *autoRotateCB;
    QCheckBox *iconByClassCB;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *LXQtTaskbarConfiguration)
    {
        if (LXQtTaskbarConfiguration->objectName().isEmpty())
            LXQtTaskbarConfiguration->setObjectName(QString::fromUtf8("LXQtTaskbarConfiguration"));
        LXQtTaskbarConfiguration->resize(401, 528);
        verticalLayout = new QVBoxLayout(LXQtTaskbarConfiguration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        WLContentGB = new QGroupBox(LXQtTaskbarConfiguration);
        WLContentGB->setObjectName(QString::fromUtf8("WLContentGB"));
        verticalLayout_2 = new QVBoxLayout(WLContentGB);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        limitByDesktopCB = new QCheckBox(WLContentGB);
        limitByDesktopCB->setObjectName(QString::fromUtf8("limitByDesktopCB"));

        horizontalLayout->addWidget(limitByDesktopCB);

        showDesktopNumCB = new QComboBox(WLContentGB);
        showDesktopNumCB->setObjectName(QString::fromUtf8("showDesktopNumCB"));

        horizontalLayout->addWidget(showDesktopNumCB);


        verticalLayout_2->addLayout(horizontalLayout);

        limitByScreenCB = new QCheckBox(WLContentGB);
        limitByScreenCB->setObjectName(QString::fromUtf8("limitByScreenCB"));

        verticalLayout_2->addWidget(limitByScreenCB);

        limitByMinimizedCB = new QCheckBox(WLContentGB);
        limitByMinimizedCB->setObjectName(QString::fromUtf8("limitByMinimizedCB"));

        verticalLayout_2->addWidget(limitByMinimizedCB);

        raiseOnCurrentDesktopCB = new QCheckBox(WLContentGB);
        raiseOnCurrentDesktopCB->setObjectName(QString::fromUtf8("raiseOnCurrentDesktopCB"));

        verticalLayout_2->addWidget(raiseOnCurrentDesktopCB);

        middleClickCB = new QCheckBox(WLContentGB);
        middleClickCB->setObjectName(QString::fromUtf8("middleClickCB"));

        verticalLayout_2->addWidget(middleClickCB);


        verticalLayout->addWidget(WLContentGB);

        WLMousewheelGB = new QGroupBox(LXQtTaskbarConfiguration);
        WLMousewheelGB->setObjectName(QString::fromUtf8("WLMousewheelGB"));
        verticalLayout_mousewheel = new QVBoxLayout(WLMousewheelGB);
        verticalLayout_mousewheel->setObjectName(QString::fromUtf8("verticalLayout_mousewheel"));
        wheelEventsActionCB = new QComboBox(WLMousewheelGB);
        wheelEventsActionCB->setObjectName(QString::fromUtf8("wheelEventsActionCB"));

        verticalLayout_mousewheel->addWidget(wheelEventsActionCB);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        wheelDeltaThresholdLabel = new QLabel(WLMousewheelGB);
        wheelDeltaThresholdLabel->setObjectName(QString::fromUtf8("wheelDeltaThresholdLabel"));

        horizontalLayout_2->addWidget(wheelDeltaThresholdLabel);

        wheelDeltaThresholdSB = new QSpinBox(WLMousewheelGB);
        wheelDeltaThresholdSB->setObjectName(QString::fromUtf8("wheelDeltaThresholdSB"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wheelDeltaThresholdSB->sizePolicy().hasHeightForWidth());
        wheelDeltaThresholdSB->setSizePolicy(sizePolicy);
        wheelDeltaThresholdSB->setMinimum(0);
        wheelDeltaThresholdSB->setMaximum(300);

        horizontalLayout_2->addWidget(wheelDeltaThresholdSB);


        verticalLayout_mousewheel->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(WLMousewheelGB);

        groupingGB = new QGroupBox(LXQtTaskbarConfiguration);
        groupingGB->setObjectName(QString::fromUtf8("groupingGB"));
        groupingGB->setCheckable(true);
        verticalLayout_3 = new QVBoxLayout(groupingGB);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        showGroupOnHoverCB = new QCheckBox(groupingGB);
        showGroupOnHoverCB->setObjectName(QString::fromUtf8("showGroupOnHoverCB"));

        verticalLayout_3->addWidget(showGroupOnHoverCB);


        verticalLayout->addWidget(groupingGB);

        ungroupedNextToExistingCB = new QCheckBox(LXQtTaskbarConfiguration);
        ungroupedNextToExistingCB->setObjectName(QString::fromUtf8("ungroupedNextToExistingCB"));

        verticalLayout->addWidget(ungroupedNextToExistingCB);

        WLAppearanceGB = new QGroupBox(LXQtTaskbarConfiguration);
        WLAppearanceGB->setObjectName(QString::fromUtf8("WLAppearanceGB"));
        formLayout = new QFormLayout(WLAppearanceGB);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        buttonStyleL = new QLabel(WLAppearanceGB);
        buttonStyleL->setObjectName(QString::fromUtf8("buttonStyleL"));

        formLayout->setWidget(0, QFormLayout::LabelRole, buttonStyleL);

        buttonStyleCB = new QComboBox(WLAppearanceGB);
        buttonStyleCB->setObjectName(QString::fromUtf8("buttonStyleCB"));

        formLayout->setWidget(0, QFormLayout::FieldRole, buttonStyleCB);

        buttonWidthL = new QLabel(WLAppearanceGB);
        buttonWidthL->setObjectName(QString::fromUtf8("buttonWidthL"));

        formLayout->setWidget(1, QFormLayout::LabelRole, buttonWidthL);

        buttonWidthSB = new QSpinBox(WLAppearanceGB);
        buttonWidthSB->setObjectName(QString::fromUtf8("buttonWidthSB"));
        sizePolicy.setHeightForWidth(buttonWidthSB->sizePolicy().hasHeightForWidth());
        buttonWidthSB->setSizePolicy(sizePolicy);
        buttonWidthSB->setMinimum(1);
        buttonWidthSB->setMaximum(2147483647);

        formLayout->setWidget(1, QFormLayout::FieldRole, buttonWidthSB);

        buttonHeightL = new QLabel(WLAppearanceGB);
        buttonHeightL->setObjectName(QString::fromUtf8("buttonHeightL"));

        formLayout->setWidget(2, QFormLayout::LabelRole, buttonHeightL);

        buttonHeightSB = new QSpinBox(WLAppearanceGB);
        buttonHeightSB->setObjectName(QString::fromUtf8("buttonHeightSB"));
        sizePolicy.setHeightForWidth(buttonHeightSB->sizePolicy().hasHeightForWidth());
        buttonHeightSB->setSizePolicy(sizePolicy);
        buttonHeightSB->setMinimum(1);
        buttonHeightSB->setMaximum(500);

        formLayout->setWidget(2, QFormLayout::FieldRole, buttonHeightSB);

        autoRotateCB = new QCheckBox(WLAppearanceGB);
        autoRotateCB->setObjectName(QString::fromUtf8("autoRotateCB"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, autoRotateCB);

        iconByClassCB = new QCheckBox(WLAppearanceGB);
        iconByClassCB->setObjectName(QString::fromUtf8("iconByClassCB"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, iconByClassCB);


        verticalLayout->addWidget(WLAppearanceGB);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttons = new QDialogButtonBox(LXQtTaskbarConfiguration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttons);


        retranslateUi(LXQtTaskbarConfiguration);
        QObject::connect(buttons, SIGNAL(accepted()), LXQtTaskbarConfiguration, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), LXQtTaskbarConfiguration, SLOT(reject()));

        QMetaObject::connectSlotsByName(LXQtTaskbarConfiguration);
    } // setupUi

    void retranslateUi(QDialog *LXQtTaskbarConfiguration)
    {
        LXQtTaskbarConfiguration->setWindowTitle(QCoreApplication::translate("LXQtTaskbarConfiguration", "Task Manager Settings", nullptr));
        WLContentGB->setTitle(QCoreApplication::translate("LXQtTaskbarConfiguration", "General", nullptr));
        limitByDesktopCB->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Show only windows from desktop", nullptr));
        limitByScreenCB->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Show only windows from &panel's screen", nullptr));
        limitByMinimizedCB->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Show only minimized windows", nullptr));
        raiseOnCurrentDesktopCB->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Raise minimized windows on current desktop", nullptr));
        middleClickCB->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Close on middle-click", nullptr));
        WLMousewheelGB->setTitle(QCoreApplication::translate("LXQtTaskbarConfiguration", "Mouse Wheel", nullptr));
        wheelDeltaThresholdLabel->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Wheel Delta Threshold", nullptr));
        wheelDeltaThresholdSB->setSuffix(QCoreApplication::translate("LXQtTaskbarConfiguration", " px", nullptr));
        groupingGB->setTitle(QCoreApplication::translate("LXQtTaskbarConfiguration", "Window &grouping", nullptr));
        showGroupOnHoverCB->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Show popup on mouse hover", nullptr));
        ungroupedNextToExistingCB->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Put buttons of the same class next to each other", nullptr));
        WLAppearanceGB->setTitle(QCoreApplication::translate("LXQtTaskbarConfiguration", "Appearance", nullptr));
        buttonStyleL->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Button style", nullptr));
        buttonWidthL->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Maximum button width", nullptr));
        buttonWidthSB->setSuffix(QCoreApplication::translate("LXQtTaskbarConfiguration", " px", nullptr));
        buttonHeightL->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Maximum button height", nullptr));
        buttonHeightSB->setSuffix(QCoreApplication::translate("LXQtTaskbarConfiguration", " px", nullptr));
        autoRotateCB->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Auto&rotate buttons when the panel is vertical", nullptr));
        iconByClassCB->setText(QCoreApplication::translate("LXQtTaskbarConfiguration", "Use icons by WindowClass, if available", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtTaskbarConfiguration: public Ui_LXQtTaskbarConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTTASKBARCONFIGURATION_H
