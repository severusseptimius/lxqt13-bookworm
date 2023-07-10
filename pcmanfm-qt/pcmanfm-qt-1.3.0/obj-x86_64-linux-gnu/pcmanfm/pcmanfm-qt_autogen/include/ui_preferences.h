/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *behaviorPage;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_5;
    QCheckBox *singleClick;
    QLabel *label;
    QLabel *label_11;
    QComboBox *viewMode;
    QDoubleSpinBox *autoSelectionDelay;
    QLabel *label_2;
    QComboBox *bookmarkOpenMethod;
    QCheckBox *ctrlRightClick;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *configmDelete;
    QCheckBox *useTrash;
    QCheckBox *noUsbTrash;
    QCheckBox *confirmTrash;
    QCheckBox *quickExec;
    QCheckBox *selectNewFiles;
    QCheckBox *singleWindowMode;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_18;
    QSpinBox *recentFilesSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *displayPage;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *iconThemeLabel;
    QComboBox *iconTheme;
    QLabel *label_6;
    QComboBox *bigIconSize;
    QLabel *label_7;
    QComboBox *smallIconSize;
    QLabel *label_8;
    QComboBox *thumbnailIconSize;
    QLabel *label_9;
    QComboBox *sidePaneIconSize;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout;
    QCheckBox *siUnit;
    QCheckBox *backupAsHidden;
    QCheckBox *showFullNames;
    QCheckBox *shadowHidden;
    QCheckBox *noItemTooltip;
    QCheckBox *noScrollPerPixel;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_15;
    QSpinBox *hMargin;
    QLabel *label_16;
    QSpinBox *vMargin;
    QCheckBox *lockMargins;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_5;
    QWidget *uiPage;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_7;
    QCheckBox *alwaysShowTabs;
    QCheckBox *showTabClose;
    QCheckBox *switchToNewTab;
    QCheckBox *rememberWindowSize;
    QLabel *label_12;
    QSpinBox *fixedWindowWidth;
    QLabel *label_13;
    QSpinBox *fixedWindowHeight;
    QCheckBox *reopenLastTabs;
    QSpacerItem *verticalSpacer_4;
    QWidget *thumbnailPage;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_8;
    QFormLayout *formLayout_3;
    QCheckBox *showThumbnails;
    QCheckBox *thumbnailLocal;
    QLabel *label_10;
    QDoubleSpinBox *maxThumbnailFileSize;
    QLabel *label_17;
    QSpinBox *maxExternalThumbnailFileSize;
    QSpacerItem *verticalSpacer_6;
    QWidget *volumePage;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *mountOnStartup;
    QCheckBox *mountRemovable;
    QCheckBox *autoRun;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *closeOnUnmount;
    QRadioButton *goHomeOnUnmount;
    QSpacerItem *verticalSpacer;
    QWidget *advancedPage;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_14;
    QLabel *label_3;
    QLineEdit *suCommand;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *archiver;
    QComboBox *terminal;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *onlyUserTemplates;
    QCheckBox *templateTypeOnce;
    QCheckBox *templateRunApp;
    QGroupBox *groupBox_10;
    QFormLayout *formLayout_4;
    QLabel *label_19;
    QSpinBox *maxSearchHistory;
    QToolButton *clearSearchHistory;
    QSpacerItem *verticalSpacer_3;
    QLabel *warningLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(685, 440);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(PreferencesDialog);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(PreferencesDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        behaviorPage = new QWidget();
        behaviorPage->setObjectName(QString::fromUtf8("behaviorPage"));
        verticalLayout_3 = new QVBoxLayout(behaviorPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_4 = new QGroupBox(behaviorPage);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_5 = new QFormLayout(groupBox_4);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        singleClick = new QCheckBox(groupBox_4);
        singleClick->setObjectName(QString::fromUtf8("singleClick"));

        formLayout_5->setWidget(0, QFormLayout::SpanningRole, singleClick);

        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, label_11);

        viewMode = new QComboBox(groupBox_4);
        viewMode->setObjectName(QString::fromUtf8("viewMode"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, viewMode);

        autoSelectionDelay = new QDoubleSpinBox(groupBox_4);
        autoSelectionDelay->setObjectName(QString::fromUtf8("autoSelectionDelay"));
        autoSelectionDelay->setEnabled(false);
        autoSelectionDelay->setSingleStep(0.100000000000000);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, autoSelectionDelay);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_2);

        bookmarkOpenMethod = new QComboBox(groupBox_4);
        bookmarkOpenMethod->addItem(QString());
        bookmarkOpenMethod->addItem(QString());
        bookmarkOpenMethod->addItem(QString());
        bookmarkOpenMethod->setObjectName(QString::fromUtf8("bookmarkOpenMethod"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, bookmarkOpenMethod);

        ctrlRightClick = new QCheckBox(groupBox_4);
        ctrlRightClick->setObjectName(QString::fromUtf8("ctrlRightClick"));

        formLayout_5->setWidget(2, QFormLayout::SpanningRole, ctrlRightClick);


        verticalLayout_3->addWidget(groupBox_4);

        groupBox_6 = new QGroupBox(behaviorPage);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_9 = new QVBoxLayout(groupBox_6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        configmDelete = new QCheckBox(groupBox_6);
        configmDelete->setObjectName(QString::fromUtf8("configmDelete"));

        verticalLayout_9->addWidget(configmDelete);

        useTrash = new QCheckBox(groupBox_6);
        useTrash->setObjectName(QString::fromUtf8("useTrash"));

        verticalLayout_9->addWidget(useTrash);

        noUsbTrash = new QCheckBox(groupBox_6);
        noUsbTrash->setObjectName(QString::fromUtf8("noUsbTrash"));

        verticalLayout_9->addWidget(noUsbTrash);

        confirmTrash = new QCheckBox(groupBox_6);
        confirmTrash->setObjectName(QString::fromUtf8("confirmTrash"));

        verticalLayout_9->addWidget(confirmTrash);

        quickExec = new QCheckBox(groupBox_6);
        quickExec->setObjectName(QString::fromUtf8("quickExec"));

        verticalLayout_9->addWidget(quickExec);

        selectNewFiles = new QCheckBox(groupBox_6);
        selectNewFiles->setObjectName(QString::fromUtf8("selectNewFiles"));

        verticalLayout_9->addWidget(selectNewFiles);

        singleWindowMode = new QCheckBox(groupBox_6);
        singleWindowMode->setObjectName(QString::fromUtf8("singleWindowMode"));

        verticalLayout_9->addWidget(singleWindowMode);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_18 = new QLabel(groupBox_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_3->addWidget(label_18);

        recentFilesSpinBox = new QSpinBox(groupBox_6);
        recentFilesSpinBox->setObjectName(QString::fromUtf8("recentFilesSpinBox"));
        recentFilesSpinBox->setMaximum(50);

        horizontalLayout_3->addWidget(recentFilesSpinBox);

        horizontalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_9->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox_6);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout_3->setStretch(2, 1);
        stackedWidget->addWidget(behaviorPage);
        displayPage = new QWidget();
        displayPage->setObjectName(QString::fromUtf8("displayPage"));
        verticalLayout_7 = new QVBoxLayout(displayPage);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_2 = new QGroupBox(displayPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        iconThemeLabel = new QLabel(groupBox_2);
        iconThemeLabel->setObjectName(QString::fromUtf8("iconThemeLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(iconThemeLabel->sizePolicy().hasHeightForWidth());
        iconThemeLabel->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, iconThemeLabel);

        iconTheme = new QComboBox(groupBox_2);
        iconTheme->setObjectName(QString::fromUtf8("iconTheme"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(iconTheme->sizePolicy().hasHeightForWidth());
        iconTheme->setSizePolicy(sizePolicy3);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, iconTheme);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        bigIconSize = new QComboBox(groupBox_2);
        bigIconSize->setObjectName(QString::fromUtf8("bigIconSize"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, bigIconSize);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        smallIconSize = new QComboBox(groupBox_2);
        smallIconSize->setObjectName(QString::fromUtf8("smallIconSize"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, smallIconSize);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        thumbnailIconSize = new QComboBox(groupBox_2);
        thumbnailIconSize->setObjectName(QString::fromUtf8("thumbnailIconSize"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, thumbnailIconSize);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_9);

        sidePaneIconSize = new QComboBox(groupBox_2);
        sidePaneIconSize->setObjectName(QString::fromUtf8("sidePaneIconSize"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, sidePaneIconSize);


        verticalLayout_7->addWidget(groupBox_2);

        groupBox_9 = new QGroupBox(displayPage);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout = new QGridLayout(groupBox_9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        siUnit = new QCheckBox(groupBox_9);
        siUnit->setObjectName(QString::fromUtf8("siUnit"));

        gridLayout->addWidget(siUnit, 0, 0, 1, 6);

        backupAsHidden = new QCheckBox(groupBox_9);
        backupAsHidden->setObjectName(QString::fromUtf8("backupAsHidden"));

        gridLayout->addWidget(backupAsHidden, 1, 0, 1, 6);

        showFullNames = new QCheckBox(groupBox_9);
        showFullNames->setObjectName(QString::fromUtf8("showFullNames"));

        gridLayout->addWidget(showFullNames, 2, 0, 1, 6);

        shadowHidden = new QCheckBox(groupBox_9);
        shadowHidden->setObjectName(QString::fromUtf8("shadowHidden"));

        gridLayout->addWidget(shadowHidden, 3, 0, 1, 6);

        noItemTooltip = new QCheckBox(groupBox_9);
        noItemTooltip->setObjectName(QString::fromUtf8("noItemTooltip"));

        gridLayout->addWidget(noItemTooltip, 4, 0, 1, 6);

        noScrollPerPixel = new QCheckBox(groupBox_9);
        noScrollPerPixel->setObjectName(QString::fromUtf8("noScrollPerPixel"));

        gridLayout->addWidget(noScrollPerPixel, 5, 0, 1, 5);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_7, 6, 0, 1, 1);

        label_15 = new QLabel(groupBox_9);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 7, 0, 1, 1);

        hMargin = new QSpinBox(groupBox_9);
        hMargin->setObjectName(QString::fromUtf8("hMargin"));
        hMargin->setMaximum(48);
        hMargin->setValue(3);

        gridLayout->addWidget(hMargin, 7, 1, 1, 1);

        label_16 = new QLabel(groupBox_9);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 7, 2, 1, 1);

        vMargin = new QSpinBox(groupBox_9);
        vMargin->setObjectName(QString::fromUtf8("vMargin"));
        vMargin->setMaximum(48);
        vMargin->setValue(3);

        gridLayout->addWidget(vMargin, 7, 3, 1, 1);

        lockMargins = new QCheckBox(groupBox_9);
        lockMargins->setObjectName(QString::fromUtf8("lockMargins"));

        gridLayout->addWidget(lockMargins, 7, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 5, 1, 1);


        verticalLayout_7->addWidget(groupBox_9);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);

        verticalLayout_7->setStretch(2, 1);
        stackedWidget->addWidget(displayPage);
        uiPage = new QWidget();
        uiPage->setObjectName(QString::fromUtf8("uiPage"));
        verticalLayout_5 = new QVBoxLayout(uiPage);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_5 = new QGroupBox(uiPage);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        formLayout_7 = new QFormLayout(groupBox_5);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        alwaysShowTabs = new QCheckBox(groupBox_5);
        alwaysShowTabs->setObjectName(QString::fromUtf8("alwaysShowTabs"));

        formLayout_7->setWidget(0, QFormLayout::SpanningRole, alwaysShowTabs);

        showTabClose = new QCheckBox(groupBox_5);
        showTabClose->setObjectName(QString::fromUtf8("showTabClose"));

        formLayout_7->setWidget(1, QFormLayout::SpanningRole, showTabClose);

        switchToNewTab = new QCheckBox(groupBox_5);
        switchToNewTab->setObjectName(QString::fromUtf8("switchToNewTab"));

        formLayout_7->setWidget(2, QFormLayout::SpanningRole, switchToNewTab);

        rememberWindowSize = new QCheckBox(groupBox_5);
        rememberWindowSize->setObjectName(QString::fromUtf8("rememberWindowSize"));

        formLayout_7->setWidget(3, QFormLayout::SpanningRole, rememberWindowSize);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_7->setWidget(4, QFormLayout::LabelRole, label_12);

        fixedWindowWidth = new QSpinBox(groupBox_5);
        fixedWindowWidth->setObjectName(QString::fromUtf8("fixedWindowWidth"));
        fixedWindowWidth->setMaximum(32768);

        formLayout_7->setWidget(4, QFormLayout::FieldRole, fixedWindowWidth);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_7->setWidget(5, QFormLayout::LabelRole, label_13);

        fixedWindowHeight = new QSpinBox(groupBox_5);
        fixedWindowHeight->setObjectName(QString::fromUtf8("fixedWindowHeight"));
        fixedWindowHeight->setMaximum(32768);

        formLayout_7->setWidget(5, QFormLayout::FieldRole, fixedWindowHeight);

        reopenLastTabs = new QCheckBox(groupBox_5);
        reopenLastTabs->setObjectName(QString::fromUtf8("reopenLastTabs"));

        formLayout_7->setWidget(6, QFormLayout::SpanningRole, reopenLastTabs);


        verticalLayout_5->addWidget(groupBox_5);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        verticalLayout_5->setStretch(1, 1);
        stackedWidget->addWidget(uiPage);
        thumbnailPage = new QWidget();
        thumbnailPage->setObjectName(QString::fromUtf8("thumbnailPage"));
        verticalLayout_11 = new QVBoxLayout(thumbnailPage);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        groupBox_8 = new QGroupBox(thumbnailPage);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        formLayout_3 = new QFormLayout(groupBox_8);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        showThumbnails = new QCheckBox(groupBox_8);
        showThumbnails->setObjectName(QString::fromUtf8("showThumbnails"));

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, showThumbnails);

        thumbnailLocal = new QCheckBox(groupBox_8);
        thumbnailLocal->setObjectName(QString::fromUtf8("thumbnailLocal"));

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, thumbnailLocal);

        label_10 = new QLabel(groupBox_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_10);

        maxThumbnailFileSize = new QDoubleSpinBox(groupBox_8);
        maxThumbnailFileSize->setObjectName(QString::fromUtf8("maxThumbnailFileSize"));
        maxThumbnailFileSize->setDecimals(1);
        maxThumbnailFileSize->setMaximum(1024.000000000000000);
        maxThumbnailFileSize->setValue(4.000000000000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, maxThumbnailFileSize);

        label_17 = new QLabel(groupBox_8);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_17);

        maxExternalThumbnailFileSize = new QSpinBox(groupBox_8);
        maxExternalThumbnailFileSize->setObjectName(QString::fromUtf8("maxExternalThumbnailFileSize"));
        maxExternalThumbnailFileSize->setMinimum(-1);
        maxExternalThumbnailFileSize->setMaximum(2048);
        maxExternalThumbnailFileSize->setValue(-1);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, maxExternalThumbnailFileSize);


        verticalLayout_11->addWidget(groupBox_8);

        verticalSpacer_6 = new QSpacerItem(0, 225, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_6);

        stackedWidget->addWidget(thumbnailPage);
        volumePage = new QWidget();
        volumePage->setObjectName(QString::fromUtf8("volumePage"));
        verticalLayout_4 = new QVBoxLayout(volumePage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_3 = new QGroupBox(volumePage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_8 = new QVBoxLayout(groupBox_3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        mountOnStartup = new QCheckBox(groupBox_3);
        mountOnStartup->setObjectName(QString::fromUtf8("mountOnStartup"));

        verticalLayout_8->addWidget(mountOnStartup);

        mountRemovable = new QCheckBox(groupBox_3);
        mountRemovable->setObjectName(QString::fromUtf8("mountRemovable"));

        verticalLayout_8->addWidget(mountRemovable);

        autoRun = new QCheckBox(groupBox_3);
        autoRun->setObjectName(QString::fromUtf8("autoRun"));

        verticalLayout_8->addWidget(autoRun);


        verticalLayout_4->addWidget(groupBox_3);

        groupBox_7 = new QGroupBox(volumePage);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_6 = new QVBoxLayout(groupBox_7);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        closeOnUnmount = new QRadioButton(groupBox_7);
        closeOnUnmount->setObjectName(QString::fromUtf8("closeOnUnmount"));

        verticalLayout_6->addWidget(closeOnUnmount);

        goHomeOnUnmount = new QRadioButton(groupBox_7);
        goHomeOnUnmount->setObjectName(QString::fromUtf8("goHomeOnUnmount"));

        verticalLayout_6->addWidget(goHomeOnUnmount);


        verticalLayout_4->addWidget(groupBox_7);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_4->setStretch(2, 1);
        stackedWidget->addWidget(volumePage);
        advancedPage = new QWidget();
        advancedPage->setObjectName(QString::fromUtf8("advancedPage"));
        verticalLayout_2 = new QVBoxLayout(advancedPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(advancedPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_14);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        suCommand = new QLineEdit(groupBox);
        suCommand->setObjectName(QString::fromUtf8("suCommand"));

        formLayout->setWidget(1, QFormLayout::FieldRole, suCommand);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setTextFormat(Qt::RichText);
        label_4->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::SpanningRole, label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        archiver = new QComboBox(groupBox);
        archiver->setObjectName(QString::fromUtf8("archiver"));

        formLayout->setWidget(3, QFormLayout::FieldRole, archiver);

        terminal = new QComboBox(groupBox);
        terminal->setObjectName(QString::fromUtf8("terminal"));
        terminal->setEditable(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, terminal);


        verticalLayout_2->addWidget(groupBox);

        groupBox_11 = new QGroupBox(advancedPage);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        verticalLayout_12 = new QVBoxLayout(groupBox_11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        onlyUserTemplates = new QCheckBox(groupBox_11);
        onlyUserTemplates->setObjectName(QString::fromUtf8("onlyUserTemplates"));

        verticalLayout_12->addWidget(onlyUserTemplates);

        templateTypeOnce = new QCheckBox(groupBox_11);
        templateTypeOnce->setObjectName(QString::fromUtf8("templateTypeOnce"));

        verticalLayout_12->addWidget(templateTypeOnce);

        templateRunApp = new QCheckBox(groupBox_11);
        templateRunApp->setObjectName(QString::fromUtf8("templateRunApp"));

        verticalLayout_12->addWidget(templateRunApp);


        verticalLayout_2->addWidget(groupBox_11);

        groupBox_10 = new QGroupBox(advancedPage);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        formLayout_4 = new QFormLayout(groupBox_10);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_4->setHorizontalSpacing(5);
        formLayout_4->setVerticalSpacing(5);
        label_19 = new QLabel(groupBox_10);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_19);

        maxSearchHistory = new QSpinBox(groupBox_10);
        maxSearchHistory->setObjectName(QString::fromUtf8("maxSearchHistory"));
        maxSearchHistory->setMaximum(50);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, maxSearchHistory);

        clearSearchHistory = new QToolButton(groupBox_10);
        clearSearchHistory->setObjectName(QString::fromUtf8("clearSearchHistory"));

        formLayout_4->setWidget(1, QFormLayout::SpanningRole, clearSearchHistory);


        verticalLayout_2->addWidget(groupBox_10);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_2->setStretch(3, 1);
        stackedWidget->addWidget(advancedPage);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout->addLayout(horizontalLayout);

        warningLabel = new QLabel(PreferencesDialog);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setStyleSheet(QString::fromUtf8("background-color:#7d0000; color:white; font-weight:bold; border-radius:3px; margin:2px; padding:5px;"));
        warningLabel->setLineWidth(0);
        warningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(warningLabel);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(suCommand);
        label_5->setBuddy(archiver);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(listWidget, alwaysShowTabs);
        QWidget::setTabOrder(alwaysShowTabs, showTabClose);
        QWidget::setTabOrder(showTabClose, rememberWindowSize);
        QWidget::setTabOrder(rememberWindowSize, fixedWindowWidth);
        QWidget::setTabOrder(fixedWindowWidth, fixedWindowHeight);
        QWidget::setTabOrder(fixedWindowHeight, singleClick);
        QWidget::setTabOrder(singleClick, autoSelectionDelay);
        QWidget::setTabOrder(autoSelectionDelay, viewMode);
        QWidget::setTabOrder(viewMode, configmDelete);
        QWidget::setTabOrder(configmDelete, useTrash);
        QWidget::setTabOrder(useTrash, mountOnStartup);
        QWidget::setTabOrder(mountOnStartup, mountRemovable);
        QWidget::setTabOrder(mountRemovable, autoRun);
        QWidget::setTabOrder(autoRun, closeOnUnmount);
        QWidget::setTabOrder(closeOnUnmount, goHomeOnUnmount);
        QWidget::setTabOrder(goHomeOnUnmount, terminal);
        QWidget::setTabOrder(terminal, suCommand);
        QWidget::setTabOrder(suCommand, archiver);

        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(singleClick, SIGNAL(toggled(bool)), label, SLOT(setEnabled(bool)));
        QObject::connect(rememberWindowSize, SIGNAL(toggled(bool)), fixedWindowWidth, SLOT(setDisabled(bool)));
        QObject::connect(singleClick, SIGNAL(toggled(bool)), autoSelectionDelay, SLOT(setEnabled(bool)));
        QObject::connect(rememberWindowSize, SIGNAL(toggled(bool)), fixedWindowHeight, SLOT(setDisabled(bool)));
        QObject::connect(rememberWindowSize, SIGNAL(toggled(bool)), label_12, SLOT(setDisabled(bool)));
        QObject::connect(rememberWindowSize, SIGNAL(toggled(bool)), label_13, SLOT(setDisabled(bool)));

        listWidget->setCurrentRow(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QCoreApplication::translate("PreferencesDialog", "Preferences", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("PreferencesDialog", "Behavior", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("PreferencesDialog", "Display", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("PreferencesDialog", "User Interface", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("PreferencesDialog", "Thumbnail", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("PreferencesDialog", "Volume", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("PreferencesDialog", "Advanced", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        groupBox_4->setTitle(QCoreApplication::translate("PreferencesDialog", "Browsing", nullptr));
#if QT_CONFIG(tooltip)
        singleClick->setToolTip(QCoreApplication::translate("PreferencesDialog", "If this is unchecked, the DE setting will be used.", nullptr));
#endif // QT_CONFIG(tooltip)
        singleClick->setText(QCoreApplication::translate("PreferencesDialog", "Open files with single click", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("PreferencesDialog", "Set to zero to disable auto-selection.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("PreferencesDialog", "Delay of auto-selection in single click mode:", nullptr));
        label_11->setText(QCoreApplication::translate("PreferencesDialog", "Default view mode:", nullptr));
#if QT_CONFIG(tooltip)
        autoSelectionDelay->setToolTip(QCoreApplication::translate("PreferencesDialog", "Set to zero to disable auto-selection.", nullptr));
#endif // QT_CONFIG(tooltip)
        autoSelectionDelay->setSuffix(QCoreApplication::translate("PreferencesDialog", " sec", nullptr));
        label_2->setText(QCoreApplication::translate("PreferencesDialog", "Bookmarks menu:", nullptr));
        bookmarkOpenMethod->setItemText(0, QCoreApplication::translate("PreferencesDialog", "Open in current tab", nullptr));
        bookmarkOpenMethod->setItemText(1, QCoreApplication::translate("PreferencesDialog", "Open in new tab", nullptr));
        bookmarkOpenMethod->setItemText(2, QCoreApplication::translate("PreferencesDialog", "Open in new window", nullptr));

        ctrlRightClick->setText(QCoreApplication::translate("PreferencesDialog", "Show folder context menu with Ctrl + right click", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("PreferencesDialog", "File Operations", nullptr));
        configmDelete->setText(QCoreApplication::translate("PreferencesDialog", "Confirm before deleting files", nullptr));
        useTrash->setText(QCoreApplication::translate("PreferencesDialog", "Move deleted files to \"trash bin\" instead of erasing from disk.", nullptr));
        noUsbTrash->setText(QCoreApplication::translate("PreferencesDialog", "Erase files on removable media instead of \"trash can\" creation", nullptr));
        confirmTrash->setText(QCoreApplication::translate("PreferencesDialog", "Confirm before moving files into \"trash can\"", nullptr));
#if QT_CONFIG(tooltip)
        quickExec->setToolTip(QCoreApplication::translate("PreferencesDialog", "Requires application restart to take effect completely", nullptr));
#endif // QT_CONFIG(tooltip)
        quickExec->setText(QCoreApplication::translate("PreferencesDialog", "Launch executable files without prompt", nullptr));
#if QT_CONFIG(tooltip)
        selectNewFiles->setToolTip(QCoreApplication::translate("PreferencesDialog", "Renamed files will also be selected", nullptr));
#endif // QT_CONFIG(tooltip)
        selectNewFiles->setText(QCoreApplication::translate("PreferencesDialog", "Select newly created files", nullptr));
#if QT_CONFIG(tooltip)
        singleWindowMode->setToolTip(QCoreApplication::translate("PreferencesDialog", "Open folders in new tabs as far as possible", nullptr));
#endif // QT_CONFIG(tooltip)
        singleWindowMode->setText(QCoreApplication::translate("PreferencesDialog", "Single window mode", nullptr));
        label_18->setText(QCoreApplication::translate("PreferencesDialog", "Number of recent files:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PreferencesDialog", "Icons", nullptr));
        iconThemeLabel->setText(QCoreApplication::translate("PreferencesDialog", "Icon theme:", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("PreferencesDialog", "Used by Icon View", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("PreferencesDialog", "Size of big icons:", nullptr));
#if QT_CONFIG(tooltip)
        bigIconSize->setToolTip(QCoreApplication::translate("PreferencesDialog", "Used by Icon View", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("PreferencesDialog", "Used by Compact View and Detailed List View", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("PreferencesDialog", "Size of small icons:", nullptr));
#if QT_CONFIG(tooltip)
        smallIconSize->setToolTip(QCoreApplication::translate("PreferencesDialog", "Used by Compact View and Detailed List View", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("PreferencesDialog", "Used by Thumbnail View", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("PreferencesDialog", "Size of thumbnails:", nullptr));
#if QT_CONFIG(tooltip)
        thumbnailIconSize->setToolTip(QCoreApplication::translate("PreferencesDialog", "Used by Thumbnail View", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("PreferencesDialog", "Size of side pane icons:", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("PreferencesDialog", "User interface", nullptr));
        siUnit->setText(QCoreApplication::translate("PreferencesDialog", "Use SI decimal prefixes instead of IEC binary prefixes", nullptr));
        backupAsHidden->setText(QCoreApplication::translate("PreferencesDialog", "Treat backup files as hidden", nullptr));
#if QT_CONFIG(tooltip)
        showFullNames->setToolTip(QCoreApplication::translate("PreferencesDialog", "Requires application restart to take effect completely", nullptr));
#endif // QT_CONFIG(tooltip)
        showFullNames->setText(QCoreApplication::translate("PreferencesDialog", "Always show real file names", nullptr));
#if QT_CONFIG(tooltip)
        shadowHidden->setToolTip(QCoreApplication::translate("PreferencesDialog", "Requires application restart to take effect completely", nullptr));
#endif // QT_CONFIG(tooltip)
        shadowHidden->setText(QCoreApplication::translate("PreferencesDialog", "Show icons of hidden files shadowed", nullptr));
        noItemTooltip->setText(QCoreApplication::translate("PreferencesDialog", "Do not show file tooltips", nullptr));
        noScrollPerPixel->setText(QCoreApplication::translate("PreferencesDialog", "Disable smooth scrolling", nullptr));
        label_15->setText(QCoreApplication::translate("PreferencesDialog", "Minimum item margins in icon view:", nullptr));
#if QT_CONFIG(tooltip)
        hMargin->setToolTip(QCoreApplication::translate("PreferencesDialog", "3 px by default.", nullptr));
#endif // QT_CONFIG(tooltip)
        hMargin->setSuffix(QCoreApplication::translate("PreferencesDialog", " px", nullptr));
        label_16->setText(QCoreApplication::translate("PreferencesDialog", "x", nullptr));
#if QT_CONFIG(tooltip)
        vMargin->setToolTip(QCoreApplication::translate("PreferencesDialog", "3 px by default.\n"
"A space is also reserved for 3 lines of text.", nullptr));
#endif // QT_CONFIG(tooltip)
        vMargin->setSuffix(QCoreApplication::translate("PreferencesDialog", " px", nullptr));
        lockMargins->setText(QCoreApplication::translate("PreferencesDialog", "Lock", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("PreferencesDialog", "Window", nullptr));
#if QT_CONFIG(tooltip)
        alwaysShowTabs->setToolTip(QCoreApplication::translate("PreferencesDialog", "When unchecked, the tab bar will be shown\n"
"only if there are more than one tab.", nullptr));
#endif // QT_CONFIG(tooltip)
        alwaysShowTabs->setText(QCoreApplication::translate("PreferencesDialog", "Always show the tab bar", nullptr));
        showTabClose->setText(QCoreApplication::translate("PreferencesDialog", "Show 'Close' buttons on tabs	", nullptr));
        switchToNewTab->setText(QCoreApplication::translate("PreferencesDialog", "Switch to newly opened tab", nullptr));
        rememberWindowSize->setText(QCoreApplication::translate("PreferencesDialog", "Remember the size of the last closed window", nullptr));
        label_12->setText(QCoreApplication::translate("PreferencesDialog", "Default width of new windows:", nullptr));
        label_13->setText(QCoreApplication::translate("PreferencesDialog", "Default height of new windows:", nullptr));
        reopenLastTabs->setText(QCoreApplication::translate("PreferencesDialog", "Reopen last window tabs in a new window", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("PreferencesDialog", "Thumbnail", nullptr));
#if QT_CONFIG(tooltip)
        showThumbnails->setToolTip(QCoreApplication::translate("PreferencesDialog", "Needs ffmpegthumbnailer", nullptr));
#endif // QT_CONFIG(tooltip)
        showThumbnails->setText(QCoreApplication::translate("PreferencesDialog", "Show thumbnails of files", nullptr));
        thumbnailLocal->setText(QCoreApplication::translate("PreferencesDialog", "Only show thumbnails for local files", nullptr));
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QCoreApplication::translate("PreferencesDialog", "The built-in thumbnailer makes thumbnails of images that are supported by Qt.\n"
"\n"
"Usually, most image types are supported. The default size limit is 4 MiB.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("PreferencesDialog", "Image size limit for built-in thumbnailer:", nullptr));
#if QT_CONFIG(tooltip)
        maxThumbnailFileSize->setToolTip(QCoreApplication::translate("PreferencesDialog", "The built-in thumbnailer makes thumbnails of images that are supported by Qt.\n"
"\n"
"Usually, most image types are supported. The default size limit is 4 MiB.", nullptr));
#endif // QT_CONFIG(tooltip)
        maxThumbnailFileSize->setSuffix(QCoreApplication::translate("PreferencesDialog", " MiB", nullptr));
#if QT_CONFIG(tooltip)
        label_17->setToolTip(QCoreApplication::translate("PreferencesDialog", "If existing, external thumbnailers are used for videos, PDF documents, etc.\n"
"\n"
"A value of -1 means that there is no limit for the file size (the default).", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("PreferencesDialog", "File size limit for external thumbnailers:", nullptr));
#if QT_CONFIG(tooltip)
        maxExternalThumbnailFileSize->setToolTip(QCoreApplication::translate("PreferencesDialog", "If existing, external thumbnailers are used for videos, PDF documents, etc.\n"
"\n"
"A value of -1 means that there is no limit for the file size (the default).", nullptr));
#endif // QT_CONFIG(tooltip)
        maxExternalThumbnailFileSize->setSpecialValueText(QCoreApplication::translate("PreferencesDialog", "No limit", nullptr));
        maxExternalThumbnailFileSize->setSuffix(QCoreApplication::translate("PreferencesDialog", " MiB", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PreferencesDialog", "Auto Mount", nullptr));
        mountOnStartup->setText(QCoreApplication::translate("PreferencesDialog", "Mount mountable volumes automatically on program startup", nullptr));
        mountRemovable->setText(QCoreApplication::translate("PreferencesDialog", "Mount removable media automatically when they are inserted", nullptr));
        autoRun->setText(QCoreApplication::translate("PreferencesDialog", "Show available options for removable media when they are inserted", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("PreferencesDialog", "When removable medium unmounted:", nullptr));
        closeOnUnmount->setText(QCoreApplication::translate("PreferencesDialog", "Close &tab containing removable medium", nullptr));
        goHomeOnUnmount->setText(QCoreApplication::translate("PreferencesDialog", "Chan&ge folder in the tab to home folder", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Programs", nullptr));
        label_14->setText(QCoreApplication::translate("PreferencesDialog", "Terminal emulator:", nullptr));
        label_3->setText(QCoreApplication::translate("PreferencesDialog", "Switch &user command:", nullptr));
        label_4->setText(QCoreApplication::translate("PreferencesDialog", "Examples:<br>For terminal: <i>xterm -e %s</i><br>For switching user: <i>lxsudo %s</i> or <i>lxsudo dbus-run-session -- %s</i><br><i>%s</i> is the command line you want to execute with terminal or su.<br> Important: Please use lxsudo, sudo alone will wreck permissions of the settings file.", nullptr));
        label_5->setText(QCoreApplication::translate("PreferencesDialog", "Archiver in&tegration:", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("PreferencesDialog", "Templates", nullptr));
        onlyUserTemplates->setText(QCoreApplication::translate("PreferencesDialog", "Show only user defined templates in menu", nullptr));
        templateTypeOnce->setText(QCoreApplication::translate("PreferencesDialog", "Show only one template for each MIME type", nullptr));
        templateRunApp->setText(QCoreApplication::translate("PreferencesDialog", "Run default application after creation from template", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("PreferencesDialog", "Search", nullptr));
        label_19->setText(QCoreApplication::translate("PreferencesDialog", "Maximum search history:", nullptr));
        clearSearchHistory->setText(QCoreApplication::translate("PreferencesDialog", "Clear search history", nullptr));
        warningLabel->setText(QCoreApplication::translate("PreferencesDialog", "Application restart is needed for changes to take effect.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
