/********************************************************************************
** Form generated from reading UI file 'lxqtmainmenuconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTMAINMENUCONFIGURATION_H
#define UI_LXQTMAINMENUCONFIGURATION_H

#include <LXQtGlobalKeysUi/ShortcutSelector>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LXQtMainMenuConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *generalGB;
    QGridLayout *gridLayout;
    QCheckBox *iconCB;
    QLineEdit *iconLE;
    QPushButton *iconPB;
    QCheckBox *showTextCB;
    QLineEdit *textLE;
    QCheckBox *customFontCB;
    QSpinBox *customFontSizeSB;
    QGroupBox *menuGB;
    QGridLayout *gridLayout_2;
    QLabel *menuFileL;
    QLineEdit *menuFilePathLE;
    QPushButton *chooseMenuFilePB;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    ShortcutSelector *shortcutEd;
    QLabel *label;
    QGroupBox *searchGB;
    QGridLayout *gridLayout_4;
    QLabel *filterShowMaxWidthL;
    QCheckBox *filterShowCB;
    QSpinBox *filterShowMaxItemsSB;
    QLabel *filterShowMaxItemsL;
    QCheckBox *filterMenuCB;
    QSpinBox *filterShowMaxWidthSB;
    QCheckBox *filterShowHideMenuCB;
    QCheckBox *filterClearCB;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *LXQtMainMenuConfiguration)
    {
        if (LXQtMainMenuConfiguration->objectName().isEmpty())
            LXQtMainMenuConfiguration->setObjectName(QString::fromUtf8("LXQtMainMenuConfiguration"));
        LXQtMainMenuConfiguration->resize(481, 501);
        verticalLayout = new QVBoxLayout(LXQtMainMenuConfiguration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        generalGB = new QGroupBox(LXQtMainMenuConfiguration);
        generalGB->setObjectName(QString::fromUtf8("generalGB"));
        generalGB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        generalGB->setFlat(false);
        generalGB->setCheckable(false);
        gridLayout = new QGridLayout(generalGB);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        iconCB = new QCheckBox(generalGB);
        iconCB->setObjectName(QString::fromUtf8("iconCB"));

        gridLayout->addWidget(iconCB, 0, 0, 1, 1);

        iconLE = new QLineEdit(generalGB);
        iconLE->setObjectName(QString::fromUtf8("iconLE"));
        iconLE->setEnabled(false);

        gridLayout->addWidget(iconLE, 0, 1, 1, 1);

        iconPB = new QPushButton(generalGB);
        iconPB->setObjectName(QString::fromUtf8("iconPB"));
        iconPB->setEnabled(false);

        gridLayout->addWidget(iconPB, 0, 2, 1, 1);

        showTextCB = new QCheckBox(generalGB);
        showTextCB->setObjectName(QString::fromUtf8("showTextCB"));

        gridLayout->addWidget(showTextCB, 1, 0, 1, 1);

        textLE = new QLineEdit(generalGB);
        textLE->setObjectName(QString::fromUtf8("textLE"));
        textLE->setEnabled(false);

        gridLayout->addWidget(textLE, 1, 1, 1, 1);

        customFontCB = new QCheckBox(generalGB);
        customFontCB->setObjectName(QString::fromUtf8("customFontCB"));
        customFontCB->setEnabled(true);

        gridLayout->addWidget(customFontCB, 2, 0, 1, 1);

        customFontSizeSB = new QSpinBox(generalGB);
        customFontSizeSB->setObjectName(QString::fromUtf8("customFontSizeSB"));
        customFontSizeSB->setEnabled(false);
        customFontSizeSB->setMinimum(1);
        customFontSizeSB->setValue(11);

        gridLayout->addWidget(customFontSizeSB, 2, 1, 1, 1);


        verticalLayout->addWidget(generalGB);

        menuGB = new QGroupBox(LXQtMainMenuConfiguration);
        menuGB->setObjectName(QString::fromUtf8("menuGB"));
        menuGB->setEnabled(true);
        gridLayout_2 = new QGridLayout(menuGB);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        menuFileL = new QLabel(menuGB);
        menuFileL->setObjectName(QString::fromUtf8("menuFileL"));

        gridLayout_2->addWidget(menuFileL, 0, 0, 1, 1);

        menuFilePathLE = new QLineEdit(menuGB);
        menuFilePathLE->setObjectName(QString::fromUtf8("menuFilePathLE"));

        gridLayout_2->addWidget(menuFilePathLE, 0, 1, 1, 1);

        chooseMenuFilePB = new QPushButton(menuGB);
        chooseMenuFilePB->setObjectName(QString::fromUtf8("chooseMenuFilePB"));

        gridLayout_2->addWidget(chooseMenuFilePB, 0, 2, 1, 1);


        verticalLayout->addWidget(menuGB);

        groupBox = new QGroupBox(LXQtMainMenuConfiguration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        shortcutEd = new ShortcutSelector(groupBox);
        shortcutEd->setObjectName(QString::fromUtf8("shortcutEd"));
        shortcutEd->setMinimumSize(QSize(200, 0));

        gridLayout_3->addWidget(shortcutEd, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        searchGB = new QGroupBox(LXQtMainMenuConfiguration);
        searchGB->setObjectName(QString::fromUtf8("searchGB"));
        gridLayout_4 = new QGridLayout(searchGB);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        filterShowMaxWidthL = new QLabel(searchGB);
        filterShowMaxWidthL->setObjectName(QString::fromUtf8("filterShowMaxWidthL"));

        gridLayout_4->addWidget(filterShowMaxWidthL, 2, 1, 1, 1);

        filterShowCB = new QCheckBox(searchGB);
        filterShowCB->setObjectName(QString::fromUtf8("filterShowCB"));

        gridLayout_4->addWidget(filterShowCB, 1, 0, 1, 1);

        filterShowMaxItemsSB = new QSpinBox(searchGB);
        filterShowMaxItemsSB->setObjectName(QString::fromUtf8("filterShowMaxItemsSB"));
        filterShowMaxItemsSB->setMaximum(20);

        gridLayout_4->addWidget(filterShowMaxItemsSB, 1, 2, 1, 1);

        filterShowMaxItemsL = new QLabel(searchGB);
        filterShowMaxItemsL->setObjectName(QString::fromUtf8("filterShowMaxItemsL"));

        gridLayout_4->addWidget(filterShowMaxItemsL, 1, 1, 1, 1);

        filterMenuCB = new QCheckBox(searchGB);
        filterMenuCB->setObjectName(QString::fromUtf8("filterMenuCB"));

        gridLayout_4->addWidget(filterMenuCB, 0, 0, 1, 3);

        filterShowMaxWidthSB = new QSpinBox(searchGB);
        filterShowMaxWidthSB->setObjectName(QString::fromUtf8("filterShowMaxWidthSB"));
        filterShowMaxWidthSB->setMinimum(40);
        filterShowMaxWidthSB->setMaximum(1000);

        gridLayout_4->addWidget(filterShowMaxWidthSB, 2, 2, 1, 1);

        filterShowHideMenuCB = new QCheckBox(searchGB);
        filterShowHideMenuCB->setObjectName(QString::fromUtf8("filterShowHideMenuCB"));

        gridLayout_4->addWidget(filterShowHideMenuCB, 3, 1, 1, 2);

        filterClearCB = new QCheckBox(searchGB);
        filterClearCB->setObjectName(QString::fromUtf8("filterClearCB"));

        gridLayout_4->addWidget(filterClearCB, 4, 0, 1, 3);


        verticalLayout->addWidget(searchGB);

        verticalSpacer = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttons = new QDialogButtonBox(LXQtMainMenuConfiguration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttons);


        retranslateUi(LXQtMainMenuConfiguration);
        QObject::connect(customFontCB, SIGNAL(toggled(bool)), customFontSizeSB, SLOT(setEnabled(bool)));
        QObject::connect(showTextCB, SIGNAL(toggled(bool)), textLE, SLOT(setEnabled(bool)));
        QObject::connect(iconCB, SIGNAL(toggled(bool)), iconLE, SLOT(setEnabled(bool)));
        QObject::connect(iconCB, SIGNAL(toggled(bool)), iconPB, SLOT(setEnabled(bool)));
        QObject::connect(filterShowCB, SIGNAL(toggled(bool)), filterShowMaxItemsSB, SLOT(setEnabled(bool)));
        QObject::connect(filterShowCB, SIGNAL(toggled(bool)), filterShowMaxItemsL, SLOT(setEnabled(bool)));
        QObject::connect(filterShowCB, SIGNAL(toggled(bool)), filterShowMaxWidthSB, SLOT(setEnabled(bool)));
        QObject::connect(filterShowCB, SIGNAL(toggled(bool)), filterShowMaxWidthL, SLOT(setEnabled(bool)));
        QObject::connect(filterShowCB, SIGNAL(toggled(bool)), filterShowHideMenuCB, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(LXQtMainMenuConfiguration);
    } // setupUi

    void retranslateUi(QDialog *LXQtMainMenuConfiguration)
    {
        LXQtMainMenuConfiguration->setWindowTitle(QCoreApplication::translate("LXQtMainMenuConfiguration", "Main Menu settings", nullptr));
        generalGB->setTitle(QCoreApplication::translate("LXQtMainMenuConfiguration", "General", nullptr));
        iconCB->setText(QCoreApplication::translate("LXQtMainMenuConfiguration", "Icon:", nullptr));
        iconPB->setText(QString());
        showTextCB->setText(QCoreApplication::translate("LXQtMainMenuConfiguration", "Button text:", nullptr));
        customFontCB->setText(QCoreApplication::translate("LXQtMainMenuConfiguration", "Custom font size:", nullptr));
        customFontSizeSB->setSuffix(QCoreApplication::translate("LXQtMainMenuConfiguration", " pt", nullptr));
        menuGB->setTitle(QCoreApplication::translate("LXQtMainMenuConfiguration", "Menu file", nullptr));
        menuFileL->setText(QCoreApplication::translate("LXQtMainMenuConfiguration", "Menu file:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LXQtMainMenuConfiguration", "Keyboard Shortcut", nullptr));
        shortcutEd->setText(QString());
        label->setText(QCoreApplication::translate("LXQtMainMenuConfiguration", "Click the button to record shortcut:", nullptr));
        searchGB->setTitle(QCoreApplication::translate("LXQtMainMenuConfiguration", "Search", nullptr));
        filterShowMaxWidthL->setText(QCoreApplication::translate("LXQtMainMenuConfiguration", "Max. item width:", nullptr));
        filterShowCB->setText(QCoreApplication::translate("LXQtMainMenuConfiguration", "Show matching entries:", nullptr));
        filterShowMaxItemsL->setText(QCoreApplication::translate("LXQtMainMenuConfiguration", "Maximum visible items:", nullptr));
        filterMenuCB->setText(QCoreApplication::translate("LXQtMainMenuConfiguration", "Filter menu entries", nullptr));
        filterShowMaxWidthSB->setSuffix(QCoreApplication::translate("LXQtMainMenuConfiguration", " px", nullptr));
        filterShowHideMenuCB->setText(QCoreApplication::translate("LXQtMainMenuConfiguration", "Hide menu entries while searching", nullptr));
        filterClearCB->setText(QCoreApplication::translate("LXQtMainMenuConfiguration", "Clear search upon showing menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtMainMenuConfiguration: public Ui_LXQtMainMenuConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTMAINMENUCONFIGURATION_H
