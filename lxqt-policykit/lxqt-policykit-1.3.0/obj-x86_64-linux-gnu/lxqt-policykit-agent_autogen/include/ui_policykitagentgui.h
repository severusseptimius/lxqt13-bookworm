/********************************************************************************
** Form generated from reading UI file 'policykitagentgui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLICYKITAGENTGUI_H
#define UI_POLICYKITAGENTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_PolicykitAgentGUI
{
public:
    QGridLayout *gridLayout;
    QLabel *iconLabel;
    QLabel *messageLabel;
    QLabel *label;
    QComboBox *identityComboBox;
    QLabel *promptLabel;
    QLineEdit *passwordEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PolicykitAgentGUI)
    {
        if (PolicykitAgentGUI->objectName().isEmpty())
            PolicykitAgentGUI->setObjectName(QString::fromUtf8("PolicykitAgentGUI"));
        PolicykitAgentGUI->resize(310, 173);
        gridLayout = new QGridLayout(PolicykitAgentGUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        iconLabel = new QLabel(PolicykitAgentGUI);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setMinimumSize(QSize(64, 64));
        iconLabel->setMaximumSize(QSize(64, 64));
        iconLabel->setText(QString::fromUtf8("iconLabel"));

        gridLayout->addWidget(iconLabel, 0, 0, 1, 1);

        messageLabel = new QLabel(PolicykitAgentGUI);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(messageLabel->sizePolicy().hasHeightForWidth());
        messageLabel->setSizePolicy(sizePolicy);
        messageLabel->setText(QString::fromUtf8("messageLabel"));
        messageLabel->setWordWrap(true);

        gridLayout->addWidget(messageLabel, 0, 1, 1, 1);

        label = new QLabel(PolicykitAgentGUI);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        identityComboBox = new QComboBox(PolicykitAgentGUI);
        identityComboBox->setObjectName(QString::fromUtf8("identityComboBox"));

        gridLayout->addWidget(identityComboBox, 1, 1, 1, 1);

        promptLabel = new QLabel(PolicykitAgentGUI);
        promptLabel->setObjectName(QString::fromUtf8("promptLabel"));

        gridLayout->addWidget(promptLabel, 2, 0, 1, 1);

        passwordEdit = new QLineEdit(PolicykitAgentGUI);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordEdit, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(PolicykitAgentGUI);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);


        retranslateUi(PolicykitAgentGUI);
        QObject::connect(buttonBox, SIGNAL(accepted()), PolicykitAgentGUI, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PolicykitAgentGUI, SLOT(reject()));

        QMetaObject::connectSlotsByName(PolicykitAgentGUI);
    } // setupUi

    void retranslateUi(QDialog *PolicykitAgentGUI)
    {
        PolicykitAgentGUI->setWindowTitle(QCoreApplication::translate("PolicykitAgentGUI", "Authentication Required", nullptr));
        label->setText(QCoreApplication::translate("PolicykitAgentGUI", "Identity:", nullptr));
        promptLabel->setText(QCoreApplication::translate("PolicykitAgentGUI", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolicykitAgentGUI: public Ui_PolicykitAgentGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLICYKITAGENTGUI_H
