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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *bottomRightRB;
    QRadioButton *centerRightRB;
    QSpacerItem *horizontalSpacer;
    QRadioButton *topCenterRB;
    QRadioButton *bottomCenterRB;
    QRadioButton *topLeftRB;
    QRadioButton *topRightRB;
    QRadioButton *centerLeftRB;
    QRadioButton *bottomLeftRB;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *spacer;
    QSpacerItem *spacer_2;
    QPushButton *previewButton;
    QSpacerItem *verticalSpacer;
    QLabel *warningLabel;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *BasicSettings)
    {
        if (BasicSettings->objectName().isEmpty())
            BasicSettings->setObjectName(QString::fromUtf8("BasicSettings"));
        BasicSettings->resize(398, 354);
        verticalLayout = new QVBoxLayout(BasicSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(BasicSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bottomRightRB = new QRadioButton(groupBox);
        buttonGroup = new QButtonGroup(BasicSettings);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(bottomRightRB);
        bottomRightRB->setObjectName(QString::fromUtf8("bottomRightRB"));
        bottomRightRB->setChecked(true);

        gridLayout->addWidget(bottomRightRB, 2, 4, 1, 1);

        centerRightRB = new QRadioButton(groupBox);
        buttonGroup->addButton(centerRightRB);
        centerRightRB->setObjectName(QString::fromUtf8("centerRightRB"));

        gridLayout->addWidget(centerRightRB, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        topCenterRB = new QRadioButton(groupBox);
        buttonGroup->addButton(topCenterRB);
        topCenterRB->setObjectName(QString::fromUtf8("topCenterRB"));

        gridLayout->addWidget(topCenterRB, 0, 2, 1, 1);

        bottomCenterRB = new QRadioButton(groupBox);
        buttonGroup->addButton(bottomCenterRB);
        bottomCenterRB->setObjectName(QString::fromUtf8("bottomCenterRB"));

        gridLayout->addWidget(bottomCenterRB, 2, 2, 1, 1);

        topLeftRB = new QRadioButton(groupBox);
        buttonGroup->addButton(topLeftRB);
        topLeftRB->setObjectName(QString::fromUtf8("topLeftRB"));

        gridLayout->addWidget(topLeftRB, 0, 0, 1, 1);

        topRightRB = new QRadioButton(groupBox);
        buttonGroup->addButton(topRightRB);
        topRightRB->setObjectName(QString::fromUtf8("topRightRB"));

        gridLayout->addWidget(topRightRB, 0, 4, 1, 1);

        centerLeftRB = new QRadioButton(groupBox);
        buttonGroup->addButton(centerLeftRB);
        centerLeftRB->setObjectName(QString::fromUtf8("centerLeftRB"));

        gridLayout->addWidget(centerLeftRB, 1, 0, 1, 1);

        bottomLeftRB = new QRadioButton(groupBox);
        buttonGroup->addButton(bottomLeftRB);
        bottomLeftRB->setObjectName(QString::fromUtf8("bottomLeftRB"));

        gridLayout->addWidget(bottomLeftRB, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        spacer = new QSpacerItem(100, 90, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacer, 1, 0, 1, 1);

        spacer_2 = new QSpacerItem(100, 90, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacer_2, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        previewButton = new QPushButton(BasicSettings);
        previewButton->setObjectName(QString::fromUtf8("previewButton"));

        verticalLayout->addWidget(previewButton);

        verticalSpacer = new QSpacerItem(105, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        warningLabel = new QLabel(BasicSettings);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setWordWrap(true);

        verticalLayout->addWidget(warningLabel);


        retranslateUi(BasicSettings);

        QMetaObject::connectSlotsByName(BasicSettings);
    } // setupUi

    void retranslateUi(QWidget *BasicSettings)
    {
        groupBox->setTitle(QCoreApplication::translate("BasicSettings", "Position on screen", nullptr));
        bottomRightRB->setText(QString());
        centerRightRB->setText(QString());
        topCenterRB->setText(QString());
        bottomCenterRB->setText(QString());
        topLeftRB->setText(QString());
        topRightRB->setText(QString());
        centerLeftRB->setText(QString());
        bottomLeftRB->setText(QString());
        previewButton->setText(QCoreApplication::translate("BasicSettings", "Preview", nullptr));
        (void)BasicSettings;
    } // retranslateUi

};

namespace Ui {
    class BasicSettings: public Ui_BasicSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICSETTINGS_H
