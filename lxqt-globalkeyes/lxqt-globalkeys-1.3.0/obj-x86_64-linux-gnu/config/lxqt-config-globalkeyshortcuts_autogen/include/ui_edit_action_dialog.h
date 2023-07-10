/********************************************************************************
** Form generated from reading UI file 'edit_action_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_ACTION_DIALOG_H
#define UI_EDIT_ACTION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "shortcut_selector.h"

QT_BEGIN_NAMESPACE

class Ui_EditActionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *shortcut_L;
    QHBoxLayout *horizontalLayout_2;
    ShortcutSelector *shortcut_SS;
    QSpacerItem *horizontalSpacer;
    QLabel *description_L;
    QLineEdit *description_LE;
    QCheckBox *enabled_CB;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *command_RB;
    QRadioButton *dbus_method_RB;
    QLabel *type_L;
    QFrame *line;
    QStackedWidget *action_SW;
    QWidget *command_P;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_3;
    QLabel *command_L;
    QPlainTextEdit *command_PTE;
    QWidget *dbus_method_P;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *service_L;
    QLineEdit *service_LE;
    QLabel *path_L;
    QLineEdit *path_LE;
    QLabel *interface_L;
    QLineEdit *interface_LE;
    QLabel *method_L;
    QLineEdit *method_LE;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditActionDialog)
    {
        if (EditActionDialog->objectName().isEmpty())
            EditActionDialog->setObjectName(QString::fromUtf8("EditActionDialog"));
        EditActionDialog->resize(400, 286);
        verticalLayout = new QVBoxLayout(EditActionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(6);
        shortcut_L = new QLabel(EditActionDialog);
        shortcut_L->setObjectName(QString::fromUtf8("shortcut_L"));

        formLayout->setWidget(0, QFormLayout::LabelRole, shortcut_L);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        shortcut_SS = new ShortcutSelector(EditActionDialog);
        shortcut_SS->setObjectName(QString::fromUtf8("shortcut_SS"));
        shortcut_SS->setMinimumSize(QSize(81, 0));

        horizontalLayout_2->addWidget(shortcut_SS);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        description_L = new QLabel(EditActionDialog);
        description_L->setObjectName(QString::fromUtf8("description_L"));

        formLayout->setWidget(1, QFormLayout::LabelRole, description_L);

        description_LE = new QLineEdit(EditActionDialog);
        description_LE->setObjectName(QString::fromUtf8("description_LE"));

        formLayout->setWidget(1, QFormLayout::FieldRole, description_LE);

        enabled_CB = new QCheckBox(EditActionDialog);
        enabled_CB->setObjectName(QString::fromUtf8("enabled_CB"));
        enabled_CB->setChecked(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, enabled_CB);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        command_RB = new QRadioButton(EditActionDialog);
        command_RB->setObjectName(QString::fromUtf8("command_RB"));

        horizontalLayout_3->addWidget(command_RB);

        dbus_method_RB = new QRadioButton(EditActionDialog);
        dbus_method_RB->setObjectName(QString::fromUtf8("dbus_method_RB"));

        horizontalLayout_3->addWidget(dbus_method_RB);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        type_L = new QLabel(EditActionDialog);
        type_L->setObjectName(QString::fromUtf8("type_L"));

        formLayout->setWidget(3, QFormLayout::LabelRole, type_L);


        verticalLayout->addLayout(formLayout);

        line = new QFrame(EditActionDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        action_SW = new QStackedWidget(EditActionDialog);
        action_SW->setObjectName(QString::fromUtf8("action_SW"));
        command_P = new QWidget();
        command_P->setObjectName(QString::fromUtf8("command_P"));
        verticalLayout_2 = new QVBoxLayout(command_P);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setHorizontalSpacing(6);
        formLayout_3->setVerticalSpacing(0);
        command_L = new QLabel(command_P);
        command_L->setObjectName(QString::fromUtf8("command_L"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, command_L);

        command_PTE = new QPlainTextEdit(command_P);
        command_PTE->setObjectName(QString::fromUtf8("command_PTE"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, command_PTE);


        verticalLayout_2->addLayout(formLayout_3);

        action_SW->addWidget(command_P);
        dbus_method_P = new QWidget();
        dbus_method_P->setObjectName(QString::fromUtf8("dbus_method_P"));
        verticalLayout_3 = new QVBoxLayout(dbus_method_P);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(6);
        formLayout_2->setVerticalSpacing(6);
        service_L = new QLabel(dbus_method_P);
        service_L->setObjectName(QString::fromUtf8("service_L"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, service_L);

        service_LE = new QLineEdit(dbus_method_P);
        service_LE->setObjectName(QString::fromUtf8("service_LE"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, service_LE);

        path_L = new QLabel(dbus_method_P);
        path_L->setObjectName(QString::fromUtf8("path_L"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, path_L);

        path_LE = new QLineEdit(dbus_method_P);
        path_LE->setObjectName(QString::fromUtf8("path_LE"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, path_LE);

        interface_L = new QLabel(dbus_method_P);
        interface_L->setObjectName(QString::fromUtf8("interface_L"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, interface_L);

        interface_LE = new QLineEdit(dbus_method_P);
        interface_LE->setObjectName(QString::fromUtf8("interface_LE"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, interface_LE);

        method_L = new QLabel(dbus_method_P);
        method_L->setObjectName(QString::fromUtf8("method_L"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, method_L);

        method_LE = new QLineEdit(dbus_method_P);
        method_LE->setObjectName(QString::fromUtf8("method_LE"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, method_LE);


        verticalLayout_3->addLayout(formLayout_2);

        action_SW->addWidget(dbus_method_P);

        verticalLayout->addWidget(action_SW);

        buttonBox = new QDialogButtonBox(EditActionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(2, 1);
#if QT_CONFIG(shortcut)
        shortcut_L->setBuddy(shortcut_SS);
        description_L->setBuddy(description_LE);
        command_L->setBuddy(command_PTE);
        service_L->setBuddy(service_LE);
        path_L->setBuddy(path_LE);
        interface_L->setBuddy(interface_LE);
        method_L->setBuddy(method_LE);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(shortcut_SS, description_LE);
        QWidget::setTabOrder(description_LE, enabled_CB);
        QWidget::setTabOrder(enabled_CB, command_RB);
        QWidget::setTabOrder(command_RB, dbus_method_RB);
        QWidget::setTabOrder(dbus_method_RB, command_PTE);
        QWidget::setTabOrder(command_PTE, service_LE);
        QWidget::setTabOrder(service_LE, path_LE);
        QWidget::setTabOrder(path_LE, interface_LE);
        QWidget::setTabOrder(interface_LE, method_LE);
        QWidget::setTabOrder(method_LE, buttonBox);

        retranslateUi(EditActionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditActionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditActionDialog, SLOT(reject()));

        action_SW->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditActionDialog);
    } // setupUi

    void retranslateUi(QDialog *EditActionDialog)
    {
        EditActionDialog->setWindowTitle(QCoreApplication::translate("EditActionDialog", "Edit Action", nullptr));
        shortcut_L->setText(QCoreApplication::translate("EditActionDialog", "&Shortcut:", nullptr));
        shortcut_SS->setText(QString());
        description_L->setText(QCoreApplication::translate("EditActionDialog", "&Description:", nullptr));
        enabled_CB->setText(QCoreApplication::translate("EditActionDialog", "&Enabled", nullptr));
        command_RB->setText(QCoreApplication::translate("EditActionDialog", "&Command", nullptr));
        dbus_method_RB->setText(QCoreApplication::translate("EditActionDialog", "&DBus message", nullptr));
        type_L->setText(QCoreApplication::translate("EditActionDialog", "Type:", nullptr));
        command_L->setText(QCoreApplication::translate("EditActionDialog", "Co&mmand:", nullptr));
        service_L->setText(QCoreApplication::translate("EditActionDialog", "S&ervice:", nullptr));
        path_L->setText(QCoreApplication::translate("EditActionDialog", "&Path:", nullptr));
        interface_L->setText(QCoreApplication::translate("EditActionDialog", "&Interface:", nullptr));
        method_L->setText(QCoreApplication::translate("EditActionDialog", "&Method:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditActionDialog: public Ui_EditActionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_ACTION_DIALOG_H
