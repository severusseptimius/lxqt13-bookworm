/********************************************************************************
** Form generated from reading UI file 'kbdstateconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KBDSTATECONFIG_H
#define UI_KBDSTATECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_KbdStateConfig
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *leds;
    QVBoxLayout *verticalLayout;
    QCheckBox *showCaps;
    QCheckBox *showNum;
    QCheckBox *showScroll;
    QGroupBox *showLayout;
    QGridLayout *gridLayout;
    QLabel *policyLabel;
    QRadioButton *switchGlobal;
    QRadioButton *switchWindow;
    QRadioButton *switchApplication;
    QLabel *label;
    QLineEdit *layoutFlagPattern;
    QPushButton *configureLayouts;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *btns;
    QButtonGroup *modes;

    void setupUi(QDialog *KbdStateConfig)
    {
        if (KbdStateConfig->objectName().isEmpty())
            KbdStateConfig->setObjectName(QString::fromUtf8("KbdStateConfig"));
        KbdStateConfig->resize(384, 408);
        verticalLayout_3 = new QVBoxLayout(KbdStateConfig);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        leds = new QGroupBox(KbdStateConfig);
        leds->setObjectName(QString::fromUtf8("leds"));
        verticalLayout = new QVBoxLayout(leds);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        showCaps = new QCheckBox(leds);
        showCaps->setObjectName(QString::fromUtf8("showCaps"));

        verticalLayout->addWidget(showCaps);

        showNum = new QCheckBox(leds);
        showNum->setObjectName(QString::fromUtf8("showNum"));

        verticalLayout->addWidget(showNum);

        showScroll = new QCheckBox(leds);
        showScroll->setObjectName(QString::fromUtf8("showScroll"));

        verticalLayout->addWidget(showScroll);


        verticalLayout_3->addWidget(leds);

        showLayout = new QGroupBox(KbdStateConfig);
        showLayout->setObjectName(QString::fromUtf8("showLayout"));
        showLayout->setCheckable(true);
        showLayout->setChecked(false);
        gridLayout = new QGridLayout(showLayout);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        policyLabel = new QLabel(showLayout);
        policyLabel->setObjectName(QString::fromUtf8("policyLabel"));

        gridLayout->addWidget(policyLabel, 0, 0, 1, 2);

        switchGlobal = new QRadioButton(showLayout);
        modes = new QButtonGroup(KbdStateConfig);
        modes->setObjectName(QString::fromUtf8("modes"));
        modes->addButton(switchGlobal);
        switchGlobal->setObjectName(QString::fromUtf8("switchGlobal"));

        gridLayout->addWidget(switchGlobal, 1, 0, 1, 2);

        switchWindow = new QRadioButton(showLayout);
        modes->addButton(switchWindow);
        switchWindow->setObjectName(QString::fromUtf8("switchWindow"));

        gridLayout->addWidget(switchWindow, 2, 0, 1, 2);

        switchApplication = new QRadioButton(showLayout);
        modes->addButton(switchApplication);
        switchApplication->setObjectName(QString::fromUtf8("switchApplication"));

        gridLayout->addWidget(switchApplication, 3, 0, 1, 2);

        label = new QLabel(showLayout);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        layoutFlagPattern = new QLineEdit(showLayout);
        layoutFlagPattern->setObjectName(QString::fromUtf8("layoutFlagPattern"));

        gridLayout->addWidget(layoutFlagPattern, 4, 1, 1, 1);


        verticalLayout_3->addWidget(showLayout);

        configureLayouts = new QPushButton(KbdStateConfig);
        configureLayouts->setObjectName(QString::fromUtf8("configureLayouts"));

        verticalLayout_3->addWidget(configureLayouts);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        btns = new QDialogButtonBox(KbdStateConfig);
        btns->setObjectName(QString::fromUtf8("btns"));
        btns->setOrientation(Qt::Horizontal);
        btns->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout_3->addWidget(btns);


        retranslateUi(KbdStateConfig);
        QObject::connect(btns, SIGNAL(accepted()), KbdStateConfig, SLOT(accept()));
        QObject::connect(btns, SIGNAL(rejected()), KbdStateConfig, SLOT(reject()));

        QMetaObject::connectSlotsByName(KbdStateConfig);
    } // setupUi

    void retranslateUi(QDialog *KbdStateConfig)
    {
        KbdStateConfig->setWindowTitle(QCoreApplication::translate("KbdStateConfig", "Keyboard state settings", nullptr));
        leds->setTitle(QCoreApplication::translate("KbdStateConfig", "Lock Indicators", nullptr));
        showCaps->setText(QCoreApplication::translate("KbdStateConfig", "Show Caps Lock", nullptr));
        showNum->setText(QCoreApplication::translate("KbdStateConfig", "Show Num Lock", nullptr));
        showScroll->setText(QCoreApplication::translate("KbdStateConfig", "Show Scroll Lock", nullptr));
        showLayout->setTitle(QCoreApplication::translate("KbdStateConfig", "Keyboard Layout Indicator", nullptr));
        policyLabel->setText(QCoreApplication::translate("KbdStateConfig", "Switching policy", nullptr));
        switchGlobal->setText(QCoreApplication::translate("KbdStateConfig", "Global", nullptr));
        switchWindow->setText(QCoreApplication::translate("KbdStateConfig", "Window", nullptr));
        switchApplication->setText(QCoreApplication::translate("KbdStateConfig", "Application", nullptr));
        label->setText(QCoreApplication::translate("KbdStateConfig", "Flags path pattern:", nullptr));
#if QT_CONFIG(tooltip)
        layoutFlagPattern->setToolTip(QCoreApplication::translate("KbdStateConfig", "File path pattern for country flags. Must contain <strong>%1</strong> which is replaced by the two letter ISO country code (lower case).<br><br>Example: /usr/share/iso-flags-svg/country-squared/%1.svg", nullptr));
#endif // QT_CONFIG(tooltip)
        configureLayouts->setText(QCoreApplication::translate("KbdStateConfig", "Configure layouts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KbdStateConfig: public Ui_KbdStateConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KBDSTATECONFIG_H
