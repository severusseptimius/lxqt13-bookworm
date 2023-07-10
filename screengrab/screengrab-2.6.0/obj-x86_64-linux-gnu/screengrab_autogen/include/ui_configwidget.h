/********************************************************************************
** Form generated from reading UI file 'configwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWIDGET_H
#define UI_CONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qkeysequencewidget.h"

QT_BEGIN_NAMESPACE

class Ui_configwidget
{
public:
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_6;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *editDir;
    QPushButton *buttonBrowse;
    QGroupBox *groupBox_1;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_7;
    QLabel *labFilename;
    QLineEdit *editFileName;
    QVBoxLayout *verticalLayout_9;
    QLabel *labFormat;
    QComboBox *cbxFormat;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labCopyFileName;
    QComboBox *cbxCopyFileName;
    QGroupBox *groupQuality;
    QHBoxLayout *horizontalLayout_2;
    QSlider *slideImgQuality;
    QLabel *labImgQualityCurrent;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkIncDate;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labMask;
    QLineEdit *editDateTmeTpl;
    QLabel *labMaskExample;
    QCheckBox *checkAutoSave;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *checkAutoSaveFirst;
    QCheckBox *checkAllowCopies;
    QCheckBox *cbxEnableExtView;
    QCheckBox *checkFitInside;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkShowTray;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labTrayMessages;
    QComboBox *cbxTrayMsg;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labTimeTrayMess;
    QSpinBox *timeTrayMess;
    QCheckBox *checkInTray;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_14;
    QTreeWidget *treeKeys;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labUsedShortcut;
    QKeySequenceWidget *keyWidget;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *configwidget)
    {
        if (configwidget->objectName().isEmpty())
            configwidget->setObjectName(QString::fromUtf8("configwidget"));
        configwidget->resize(770, 335);
        configwidget->setMinimumSize(QSize(0, 0));
        configwidget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_8 = new QVBoxLayout(configwidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        listWidget = new QListWidget(configwidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(100, 0));
        listWidget->setMaximumSize(QSize(160, 16777215));
        listWidget->setIconSize(QSize(32, 32));
        listWidget->setTextElideMode(Qt::ElideNone);
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setResizeMode(QListView::Adjust);
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setUniformItemSizes(false);
        listWidget->setWordWrap(true);

        horizontalLayout_3->addWidget(listWidget);

        stackedWidget = new QStackedWidget(configwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        verticalLayout = new QVBoxLayout(page_6);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(page_6);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        editDir = new QLineEdit(groupBox);
        editDir->setObjectName(QString::fromUtf8("editDir"));

        horizontalLayout_4->addWidget(editDir);

        buttonBrowse = new QPushButton(groupBox);
        buttonBrowse->setObjectName(QString::fromUtf8("buttonBrowse"));
        buttonBrowse->setMinimumSize(QSize(112, 0));

        horizontalLayout_4->addWidget(buttonBrowse);


        verticalLayout->addWidget(groupBox);

        groupBox_1 = new QGroupBox(page_6);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, -1, 0, -1);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        labFilename = new QLabel(groupBox_1);
        labFilename->setObjectName(QString::fromUtf8("labFilename"));

        verticalLayout_7->addWidget(labFilename);

        editFileName = new QLineEdit(groupBox_1);
        editFileName->setObjectName(QString::fromUtf8("editFileName"));

        verticalLayout_7->addWidget(editFileName);


        horizontalLayout_14->addLayout(verticalLayout_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        labFormat = new QLabel(groupBox_1);
        labFormat->setObjectName(QString::fromUtf8("labFormat"));

        verticalLayout_9->addWidget(labFormat);

        cbxFormat = new QComboBox(groupBox_1);
        cbxFormat->setObjectName(QString::fromUtf8("cbxFormat"));
        cbxFormat->setMinimumSize(QSize(112, 0));

        verticalLayout_9->addWidget(cbxFormat);


        horizontalLayout_14->addLayout(verticalLayout_9);


        horizontalLayout_5->addLayout(horizontalLayout_14);


        verticalLayout->addWidget(groupBox_1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(4, -1, -1, -1);
        labCopyFileName = new QLabel(page_6);
        labCopyFileName->setObjectName(QString::fromUtf8("labCopyFileName"));

        horizontalLayout_11->addWidget(labCopyFileName);

        cbxCopyFileName = new QComboBox(page_6);
        cbxCopyFileName->addItem(QString());
        cbxCopyFileName->addItem(QString());
        cbxCopyFileName->addItem(QString());
        cbxCopyFileName->setObjectName(QString::fromUtf8("cbxCopyFileName"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbxCopyFileName->sizePolicy().hasHeightForWidth());
        cbxCopyFileName->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(cbxCopyFileName);


        verticalLayout->addLayout(horizontalLayout_11);

        groupQuality = new QGroupBox(page_6);
        groupQuality->setObjectName(QString::fromUtf8("groupQuality"));
        horizontalLayout_2 = new QHBoxLayout(groupQuality);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        slideImgQuality = new QSlider(groupQuality);
        slideImgQuality->setObjectName(QString::fromUtf8("slideImgQuality"));
        slideImgQuality->setMaximum(100);
        slideImgQuality->setSingleStep(1);
        slideImgQuality->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slideImgQuality);

        labImgQualityCurrent = new QLabel(groupQuality);
        labImgQualityCurrent->setObjectName(QString::fromUtf8("labImgQualityCurrent"));
        labImgQualityCurrent->setText(QString::fromUtf8("Current"));
        labImgQualityCurrent->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labImgQualityCurrent);


        verticalLayout->addWidget(groupQuality);

        verticalSpacer_5 = new QSpacerItem(20, 298, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        stackedWidget->addWidget(page_6);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(16, -1, -1, -1);

        verticalLayout_3->addLayout(horizontalLayout_10);

        checkIncDate = new QCheckBox(page_2);
        checkIncDate->setObjectName(QString::fromUtf8("checkIncDate"));

        verticalLayout_3->addWidget(checkIncDate);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        labMask = new QLabel(page_2);
        labMask->setObjectName(QString::fromUtf8("labMask"));

        horizontalLayout_8->addWidget(labMask);

        editDateTmeTpl = new QLineEdit(page_2);
        editDateTmeTpl->setObjectName(QString::fromUtf8("editDateTmeTpl"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(editDateTmeTpl->sizePolicy().hasHeightForWidth());
        editDateTmeTpl->setSizePolicy(sizePolicy2);
        editDateTmeTpl->setMinimumSize(QSize(256, 0));

        horizontalLayout_8->addWidget(editDateTmeTpl);


        verticalLayout_3->addLayout(horizontalLayout_8);

        labMaskExample = new QLabel(page_2);
        labMaskExample->setObjectName(QString::fromUtf8("labMaskExample"));
        labMaskExample->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labMaskExample);

        checkAutoSave = new QCheckBox(page_2);
        checkAutoSave->setObjectName(QString::fromUtf8("checkAutoSave"));

        verticalLayout_3->addWidget(checkAutoSave);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(16, -1, -1, -1);
        checkAutoSaveFirst = new QCheckBox(page_2);
        checkAutoSaveFirst->setObjectName(QString::fromUtf8("checkAutoSaveFirst"));

        horizontalLayout_12->addWidget(checkAutoSaveFirst);


        verticalLayout_3->addLayout(horizontalLayout_12);

        checkAllowCopies = new QCheckBox(page_2);
        checkAllowCopies->setObjectName(QString::fromUtf8("checkAllowCopies"));

        verticalLayout_3->addWidget(checkAllowCopies);

        cbxEnableExtView = new QCheckBox(page_2);
        cbxEnableExtView->setObjectName(QString::fromUtf8("cbxEnableExtView"));

        verticalLayout_3->addWidget(cbxEnableExtView);

        checkFitInside = new QCheckBox(page_2);
        checkFitInside->setObjectName(QString::fromUtf8("checkFitInside"));

        verticalLayout_3->addWidget(checkFitInside);

        verticalSpacer_2 = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_13 = new QVBoxLayout(page_4);
        verticalLayout_13->setSpacing(5);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(-1, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkShowTray = new QCheckBox(page_4);
        checkShowTray->setObjectName(QString::fromUtf8("checkShowTray"));

        verticalLayout_4->addWidget(checkShowTray);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labTrayMessages = new QLabel(page_4);
        labTrayMessages->setObjectName(QString::fromUtf8("labTrayMessages"));

        horizontalLayout_6->addWidget(labTrayMessages);

        cbxTrayMsg = new QComboBox(page_4);
        cbxTrayMsg->addItem(QString());
        cbxTrayMsg->addItem(QString());
        cbxTrayMsg->addItem(QString());
        cbxTrayMsg->setObjectName(QString::fromUtf8("cbxTrayMsg"));
        sizePolicy1.setHeightForWidth(cbxTrayMsg->sizePolicy().hasHeightForWidth());
        cbxTrayMsg->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(cbxTrayMsg);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        labTimeTrayMess = new QLabel(page_4);
        labTimeTrayMess->setObjectName(QString::fromUtf8("labTimeTrayMess"));
        labTimeTrayMess->setTextFormat(Qt::PlainText);

        horizontalLayout_7->addWidget(labTimeTrayMess);

        timeTrayMess = new QSpinBox(page_4);
        timeTrayMess->setObjectName(QString::fromUtf8("timeTrayMess"));
        sizePolicy1.setHeightForWidth(timeTrayMess->sizePolicy().hasHeightForWidth());
        timeTrayMess->setSizePolicy(sizePolicy1);
        timeTrayMess->setMinimum(1);
        timeTrayMess->setMaximum(10);
        timeTrayMess->setValue(5);

        horizontalLayout_7->addWidget(timeTrayMess);


        verticalLayout_4->addLayout(horizontalLayout_7);

        checkInTray = new QCheckBox(page_4);
        checkInTray->setObjectName(QString::fromUtf8("checkInTray"));

        verticalLayout_4->addWidget(checkInTray);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        verticalLayout_13->addLayout(verticalLayout_4);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_14 = new QVBoxLayout(page_5);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(-1, 0, 0, 0);
        treeKeys = new QTreeWidget(page_5);
        new QTreeWidgetItem(treeKeys);
        new QTreeWidgetItem(treeKeys);
        new QTreeWidgetItem(treeKeys);
        new QTreeWidgetItem(treeKeys);
        new QTreeWidgetItem(treeKeys);
        new QTreeWidgetItem(treeKeys);
        treeKeys->setObjectName(QString::fromUtf8("treeKeys"));
        treeKeys->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_14->addWidget(treeKeys);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        labUsedShortcut = new QLabel(page_5);
        labUsedShortcut->setObjectName(QString::fromUtf8("labUsedShortcut"));

        horizontalLayout_9->addWidget(labUsedShortcut);

        keyWidget = new QKeySequenceWidget(page_5);
        keyWidget->setObjectName(QString::fromUtf8("keyWidget"));

        horizontalLayout_9->addWidget(keyWidget);


        verticalLayout_14->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(page_5);

        horizontalLayout_3->addWidget(stackedWidget);


        verticalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(configwidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_8->addLayout(horizontalLayout);


        retranslateUi(configwidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(configwidget);
    } // setupUi

    void retranslateUi(QWidget *configwidget)
    {
        configwidget->setWindowTitle(QCoreApplication::translate("configwidget", "Options", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("configwidget", "Main", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("configwidget", "Advanced", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("configwidget", "System tray", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("configwidget", "Shortcuts", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        groupBox->setTitle(QCoreApplication::translate("configwidget", "Default save directory", nullptr));
#if QT_CONFIG(tooltip)
        editDir->setToolTip(QCoreApplication::translate("configwidget", "Path to default selection dir for saving", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        buttonBrowse->setToolTip(QCoreApplication::translate("configwidget", "Browse filesystem", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonBrowse->setText(QCoreApplication::translate("configwidget", "Browse", nullptr));
        groupBox_1->setTitle(QCoreApplication::translate("configwidget", "Default file", nullptr));
        labFilename->setText(QCoreApplication::translate("configwidget", "Name:", nullptr));
#if QT_CONFIG(tooltip)
        editFileName->setToolTip(QCoreApplication::translate("configwidget", "Default filename", nullptr));
#endif // QT_CONFIG(tooltip)
        labFormat->setText(QCoreApplication::translate("configwidget", "Format", nullptr));
#if QT_CONFIG(tooltip)
        cbxFormat->setToolTip(QCoreApplication::translate("configwidget", "Default saving image format", nullptr));
#endif // QT_CONFIG(tooltip)
        labCopyFileName->setText(QCoreApplication::translate("configwidget", "Copy file name to the clipboard when saving", nullptr));
        cbxCopyFileName->setItemText(0, QCoreApplication::translate("configwidget", "Do not copy", nullptr));
        cbxCopyFileName->setItemText(1, QCoreApplication::translate("configwidget", "Copy file name only", nullptr));
        cbxCopyFileName->setItemText(2, QCoreApplication::translate("configwidget", "Copy full file path", nullptr));

        groupQuality->setTitle(QCoreApplication::translate("configwidget", "Image quality", nullptr));
#if QT_CONFIG(tooltip)
        slideImgQuality->setToolTip(QCoreApplication::translate("configwidget", "Image quality (1 - small file, 100 - high quality)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkIncDate->setToolTip(QCoreApplication::translate("configwidget", "Inserting current date time into saved filename", nullptr));
#endif // QT_CONFIG(tooltip)
        checkIncDate->setText(QCoreApplication::translate("configwidget", "Insert current date and time in file name", nullptr));
        labMask->setText(QCoreApplication::translate("configwidget", "Template: ", nullptr));
        labMaskExample->setText(QCoreApplication::translate("configwidget", "Example: ", nullptr));
#if QT_CONFIG(tooltip)
        checkAutoSave->setToolTip(QCoreApplication::translate("configwidget", "Automatically saving screenshots in grabbing process", nullptr));
#endif // QT_CONFIG(tooltip)
        checkAutoSave->setText(QCoreApplication::translate("configwidget", "Autosave screenshot", nullptr));
        checkAutoSaveFirst->setText(QCoreApplication::translate("configwidget", "Save first screenshot", nullptr));
#if QT_CONFIG(tooltip)
        checkAllowCopies->setToolTip(QCoreApplication::translate("configwidget", "Allow run multiplies copy of ScreenGrab", nullptr));
#endif // QT_CONFIG(tooltip)
        checkAllowCopies->setText(QCoreApplication::translate("configwidget", "Allow multiple instances of ScreenGrab", nullptr));
#if QT_CONFIG(tooltip)
        cbxEnableExtView->setToolTip(QCoreApplication::translate("configwidget", "Open in external viewer on double click", nullptr));
#endif // QT_CONFIG(tooltip)
        cbxEnableExtView->setText(QCoreApplication::translate("configwidget", "Enable external viewer", nullptr));
#if QT_CONFIG(tooltip)
        checkFitInside->setToolTip(QCoreApplication::translate("configwidget", "If this is unchecked, the selected area\n"
"might become larger to fit to outer edges", nullptr));
#endif // QT_CONFIG(tooltip)
        checkFitInside->setText(QCoreApplication::translate("configwidget", "Fit to edges inside selected area by right clicking", nullptr));
        checkShowTray->setText(QCoreApplication::translate("configwidget", "Show ScreenGrab in the system tray", nullptr));
        labTrayMessages->setText(QCoreApplication::translate("configwidget", "Tray messages:", nullptr));
        cbxTrayMsg->setItemText(0, QCoreApplication::translate("configwidget", "Never", nullptr));
        cbxTrayMsg->setItemText(1, QCoreApplication::translate("configwidget", "Tray mode", nullptr));
        cbxTrayMsg->setItemText(2, QCoreApplication::translate("configwidget", "Always", nullptr));

#if QT_CONFIG(tooltip)
        cbxTrayMsg->setToolTip(QCoreApplication::translate("configwidget", "Tray messages display mode", nullptr));
#endif // QT_CONFIG(tooltip)
        labTimeTrayMess->setText(QCoreApplication::translate("configwidget", "Time of display tray messages", nullptr));
#if QT_CONFIG(tooltip)
        timeTrayMess->setToolTip(QCoreApplication::translate("configwidget", "Time to display tray messages", nullptr));
#endif // QT_CONFIG(tooltip)
        timeTrayMess->setSuffix(QCoreApplication::translate("configwidget", " sec", nullptr));
#if QT_CONFIG(tooltip)
        checkInTray->setToolTip(QCoreApplication::translate("configwidget", "Minimize to tray on click close button", nullptr));
#endif // QT_CONFIG(tooltip)
        checkInTray->setText(QCoreApplication::translate("configwidget", "Minimize to tray when closing", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeKeys->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("configwidget", "Shortcut", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("configwidget", "Action", nullptr));

        const bool __sortingEnabled1 = treeKeys->isSortingEnabled();
        treeKeys->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeKeys->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("configwidget", "New screen", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeKeys->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("configwidget", "Save screen", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeKeys->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("configwidget", "Copy screen", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeKeys->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("configwidget", "Options", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeKeys->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("configwidget", "Help", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = treeKeys->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("configwidget", "Quit", nullptr));
        treeKeys->setSortingEnabled(__sortingEnabled1);

        labUsedShortcut->setText(QCoreApplication::translate("configwidget", "Selected shortcut:", nullptr));
        keyWidget->setProperty("noneText", QVariant(QCoreApplication::translate("configwidget", "Not defined", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class configwidget: public Ui_configwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWIDGET_H
