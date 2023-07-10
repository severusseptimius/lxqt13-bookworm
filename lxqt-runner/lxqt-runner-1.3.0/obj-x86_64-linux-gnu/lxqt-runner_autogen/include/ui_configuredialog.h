/********************************************************************************
** Form generated from reading UI file 'configuredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGUREDIALOG_H
#define UI_CONFIGUREDIALOG_H

#include <LXQtGlobalKeysUi/ShortcutSelector>
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

class Ui_ConfigureDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label;
    QComboBox *positionCbx;
    QLabel *label_2;
    QComboBox *monitorCbx;
    QCheckBox *historyFirstCb;
    QCheckBox *historyUseCb;
    QLabel *label_4;
    QSpinBox *listShownItemsSB;
    QCheckBox *clearCb;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_3;
    ShortcutSelector *shortcutEd;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureDialog)
    {
        if (ConfigureDialog->objectName().isEmpty())
            ConfigureDialog->setObjectName(QString::fromUtf8("ConfigureDialog"));
        ConfigureDialog->resize(312, 278);
        verticalLayout = new QVBoxLayout(ConfigureDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(ConfigureDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        positionCbx = new QComboBox(groupBox);
        positionCbx->setObjectName(QString::fromUtf8("positionCbx"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, positionCbx);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        monitorCbx = new QComboBox(groupBox);
        monitorCbx->setObjectName(QString::fromUtf8("monitorCbx"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, monitorCbx);

        historyFirstCb = new QCheckBox(groupBox);
        historyFirstCb->setObjectName(QString::fromUtf8("historyFirstCb"));

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, historyFirstCb);

        historyUseCb = new QCheckBox(groupBox);
        historyUseCb->setObjectName(QString::fromUtf8("historyUseCb"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, historyUseCb);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        listShownItemsSB = new QSpinBox(groupBox);
        listShownItemsSB->setObjectName(QString::fromUtf8("listShownItemsSB"));
        listShownItemsSB->setMinimum(1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, listShownItemsSB);

        clearCb = new QCheckBox(groupBox);
        clearCb->setObjectName(QString::fromUtf8("clearCb"));

        formLayout_2->setWidget(5, QFormLayout::SpanningRole, clearCb);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_3 = new QLabel(ConfigureDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        shortcutEd = new ShortcutSelector(ConfigureDialog);
        shortcutEd->setObjectName(QString::fromUtf8("shortcutEd"));
        shortcutEd->setMinimumSize(QSize(81, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, shortcutEd);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ConfigureDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ConfigureDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigureDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigureDialog, SLOT(reject()));
        QObject::connect(historyUseCb, SIGNAL(toggled(bool)), historyFirstCb, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ConfigureDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigureDialog)
    {
        ConfigureDialog->setWindowTitle(QCoreApplication::translate("ConfigureDialog", "Runner Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConfigureDialog", "Appearance", nullptr));
        label->setText(QCoreApplication::translate("ConfigureDialog", "Positioning:", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigureDialog", "Show on:", nullptr));
        historyFirstCb->setText(QCoreApplication::translate("ConfigureDialog", "Show history first", nullptr));
        historyUseCb->setText(QCoreApplication::translate("ConfigureDialog", "Store/show history", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("ConfigureDialog", "<b>Note</b>: The size of top-level widgets are constrained to 2/3 of the desktop's height and width.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("ConfigureDialog", "Show list with:", nullptr));
        listShownItemsSB->setSuffix(QCoreApplication::translate("ConfigureDialog", " item(s)", nullptr));
        clearCb->setText(QCoreApplication::translate("ConfigureDialog", "Clear input on launching", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigureDialog", "Shortcut:", nullptr));
        shortcutEd->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ConfigureDialog: public Ui_ConfigureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUREDIALOG_H
