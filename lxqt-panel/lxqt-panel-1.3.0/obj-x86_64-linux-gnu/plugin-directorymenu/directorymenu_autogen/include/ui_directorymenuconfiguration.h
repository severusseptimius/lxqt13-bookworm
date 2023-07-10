/********************************************************************************
** Form generated from reading UI file 'directorymenuconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIRECTORYMENUCONFIGURATION_H
#define UI_DIRECTORYMENUCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DirectoryMenuConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *appearanceGB;
    QGridLayout *gridLayout_2;
    QLabel *baseDirectoryL;
    QPushButton *baseDirectoryB;
    QLabel *iconL;
    QPushButton *iconB;
    QLabel *label;
    QPushButton *labelB;
    QLabel *label_2;
    QComboBox *buttonStyleCB;
    QPushButton *terminalB;
    QLabel *terminalL;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *DirectoryMenuConfiguration)
    {
        if (DirectoryMenuConfiguration->objectName().isEmpty())
            DirectoryMenuConfiguration->setObjectName(QString::fromUtf8("DirectoryMenuConfiguration"));
        DirectoryMenuConfiguration->resize(342, 195);
        verticalLayout = new QVBoxLayout(DirectoryMenuConfiguration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        appearanceGB = new QGroupBox(DirectoryMenuConfiguration);
        appearanceGB->setObjectName(QString::fromUtf8("appearanceGB"));
        gridLayout_2 = new QGridLayout(appearanceGB);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        baseDirectoryL = new QLabel(appearanceGB);
        baseDirectoryL->setObjectName(QString::fromUtf8("baseDirectoryL"));

        gridLayout_2->addWidget(baseDirectoryL, 0, 0, 1, 1);

        baseDirectoryB = new QPushButton(appearanceGB);
        baseDirectoryB->setObjectName(QString::fromUtf8("baseDirectoryB"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(baseDirectoryB->sizePolicy().hasHeightForWidth());
        baseDirectoryB->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(baseDirectoryB, 0, 1, 1, 1);

        iconL = new QLabel(appearanceGB);
        iconL->setObjectName(QString::fromUtf8("iconL"));

        gridLayout_2->addWidget(iconL, 1, 0, 1, 1);

        iconB = new QPushButton(appearanceGB);
        iconB->setObjectName(QString::fromUtf8("iconB"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(iconB->sizePolicy().hasHeightForWidth());
        iconB->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(iconB, 1, 1, 1, 1);

        label = new QLabel(appearanceGB);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        labelB = new QPushButton(appearanceGB);
        labelB->setObjectName(QString::fromUtf8("labelB"));
        sizePolicy1.setHeightForWidth(labelB->sizePolicy().hasHeightForWidth());
        labelB->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(labelB, 2, 1, 1, 1);

        label_2 = new QLabel(appearanceGB);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        buttonStyleCB = new QComboBox(appearanceGB);
        buttonStyleCB->setObjectName(QString::fromUtf8("buttonStyleCB"));

        gridLayout_2->addWidget(buttonStyleCB, 3, 1, 1, 1);

        terminalB = new QPushButton(appearanceGB);
        terminalB->setObjectName(QString::fromUtf8("terminalB"));

        gridLayout_2->addWidget(terminalB, 4, 1, 1, 1);

        terminalL = new QLabel(appearanceGB);
        terminalL->setObjectName(QString::fromUtf8("terminalL"));

        gridLayout_2->addWidget(terminalL, 4, 0, 1, 1);


        verticalLayout->addWidget(appearanceGB);

        buttons = new QDialogButtonBox(DirectoryMenuConfiguration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttons);


        retranslateUi(DirectoryMenuConfiguration);
        QObject::connect(buttons, SIGNAL(accepted()), DirectoryMenuConfiguration, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), DirectoryMenuConfiguration, SLOT(reject()));

        QMetaObject::connectSlotsByName(DirectoryMenuConfiguration);
    } // setupUi

    void retranslateUi(QDialog *DirectoryMenuConfiguration)
    {
        DirectoryMenuConfiguration->setWindowTitle(QCoreApplication::translate("DirectoryMenuConfiguration", "Directory Menu Settings", nullptr));
        appearanceGB->setTitle(QCoreApplication::translate("DirectoryMenuConfiguration", "Appearance", nullptr));
        baseDirectoryL->setText(QCoreApplication::translate("DirectoryMenuConfiguration", "Base directory:", nullptr));
        baseDirectoryB->setText(QCoreApplication::translate("DirectoryMenuConfiguration", "BaseDirectoryName", nullptr));
        iconL->setText(QCoreApplication::translate("DirectoryMenuConfiguration", "Icon:", nullptr));
        iconB->setText(QString());
        label->setText(QCoreApplication::translate("DirectoryMenuConfiguration", "Label", nullptr));
        labelB->setText(QString());
        label_2->setText(QCoreApplication::translate("DirectoryMenuConfiguration", "Button style", nullptr));
        terminalB->setText(QCoreApplication::translate("DirectoryMenuConfiguration", "Choose Default Terminal", nullptr));
        terminalL->setText(QCoreApplication::translate("DirectoryMenuConfiguration", "Terminal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DirectoryMenuConfiguration: public Ui_DirectoryMenuConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIRECTORYMENUCONFIGURATION_H
