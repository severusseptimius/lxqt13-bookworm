/********************************************************************************
** Form generated from reading UI file 'cardwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDWIDGET_H
#define UI_CARDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CardWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *nameHLayout;
    QLabel *iconImage;
    QLabel *nameLabel;
    QHBoxLayout *profileHLayout;
    QCheckBox *profileCB;
    QLabel *profileLabel;
    QComboBox *profileList;
    QFrame *line;

    void setupUi(QWidget *CardWidget)
    {
        if (CardWidget->objectName().isEmpty())
            CardWidget->setObjectName(QString::fromUtf8("CardWidget"));
        CardWidget->resize(368, 79);
        verticalLayout = new QVBoxLayout(CardWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nameHLayout = new QHBoxLayout();
        nameHLayout->setObjectName(QString::fromUtf8("nameHLayout"));
        iconImage = new QLabel(CardWidget);
        iconImage->setObjectName(QString::fromUtf8("iconImage"));

        nameHLayout->addWidget(iconImage);

        nameLabel = new QLabel(CardWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        nameHLayout->addWidget(nameLabel);

        nameHLayout->setStretch(1, 1);

        verticalLayout->addLayout(nameHLayout);

        profileHLayout = new QHBoxLayout();
        profileHLayout->setObjectName(QString::fromUtf8("profileHLayout"));
        profileCB = new QCheckBox(CardWidget);
        profileCB->setObjectName(QString::fromUtf8("profileCB"));
        profileCB->setChecked(true);

        profileHLayout->addWidget(profileCB);

        profileLabel = new QLabel(CardWidget);
        profileLabel->setObjectName(QString::fromUtf8("profileLabel"));

        profileHLayout->addWidget(profileLabel);

        profileList = new QComboBox(CardWidget);
        profileList->setObjectName(QString::fromUtf8("profileList"));

        profileHLayout->addWidget(profileList);

        profileHLayout->setStretch(2, 1);

        verticalLayout->addLayout(profileHLayout);

        line = new QFrame(CardWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        retranslateUi(CardWidget);
        QObject::connect(profileCB, SIGNAL(toggled(bool)), profileLabel, SLOT(setEnabled(bool)));
        QObject::connect(profileCB, SIGNAL(toggled(bool)), profileList, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(CardWidget);
    } // setupUi

    void retranslateUi(QWidget *CardWidget)
    {
        CardWidget->setWindowTitle(QCoreApplication::translate("CardWidget", "Form", nullptr));
        iconImage->setText(QString());
        nameLabel->setText(QCoreApplication::translate("CardWidget", "Card Name", nullptr));
        profileLabel->setText(QCoreApplication::translate("CardWidget", "Profile:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardWidget: public Ui_CardWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDWIDGET_H
