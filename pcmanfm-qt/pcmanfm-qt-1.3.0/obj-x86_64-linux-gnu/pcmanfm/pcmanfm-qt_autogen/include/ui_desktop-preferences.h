/********************************************************************************
** Form generated from reading UI file 'desktop-preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESKTOP_2D_PREFERENCES_H
#define UI_DESKTOP_2D_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <libfm-qt/colorbutton.h>
#include <libfm-qt/fontbutton.h>

QT_BEGIN_NAMESPACE

class Ui_DesktopPreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *generalPage;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout;
    QLabel *label_9;
    QComboBox *iconSize;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    Fm::FontButton *font;
    QLabel *label_3;
    Fm::ColorButton *textColor;
    QLabel *label_4;
    Fm::ColorButton *shadowColor;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *lockMargins;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QSpinBox *vMargin;
    QSpinBox *hMargin;
    QLabel *label_8;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_13;
    QSpinBox *topMargin;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *leftMargin;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *rightMargin;
    QSpinBox *bottomMargin;
    QCheckBox *defaultFileManager;
    QCheckBox *allSticky;
    QSpacerItem *verticalSpacer_2;
    QWidget *bgPage;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    Fm::ColorButton *backgroundColor;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QComboBox *wallpaperMode;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLineEdit *imageFile;
    QPushButton *browse;
    QCheckBox *transformImage;
    QCheckBox *perScreenWallpaper;
    QSpacerItem *verticalSpacer_4;
    QWidget *slidePage;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *slideShow;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QPushButton *folderBrowse;
    QSpinBox *hours;
    QLabel *label_12;
    QLabel *label_11;
    QSpinBox *minutes;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *imageFolder;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *randomize;
    QSpacerItem *verticalSpacer_3;
    QWidget *advancedPage;
    QVBoxLayout *advancedPageLayout;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *homeBox;
    QCheckBox *trashBox;
    QCheckBox *computerBox;
    QCheckBox *networkBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DesktopPreferencesDialog)
    {
        if (DesktopPreferencesDialog->objectName().isEmpty())
            DesktopPreferencesDialog->setObjectName(QString::fromUtf8("DesktopPreferencesDialog"));
        DesktopPreferencesDialog->resize(534, 434);
        verticalLayout = new QVBoxLayout(DesktopPreferencesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(DesktopPreferencesDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        generalPage = new QWidget();
        generalPage->setObjectName(QString::fromUtf8("generalPage"));
        verticalLayout_2 = new QVBoxLayout(generalPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_5 = new QGroupBox(generalPage);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        formLayout = new QFormLayout(groupBox_5);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        iconSize = new QComboBox(groupBox_5);
        iconSize->setObjectName(QString::fromUtf8("iconSize"));

        formLayout->setWidget(0, QFormLayout::FieldRole, iconSize);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox = new QGroupBox(generalPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        font = new Fm::FontButton(groupBox);
        font->setObjectName(QString::fromUtf8("font"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(font->sizePolicy().hasHeightForWidth());
        font->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(font, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        textColor = new Fm::ColorButton(groupBox);
        textColor->setObjectName(QString::fromUtf8("textColor"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textColor->sizePolicy().hasHeightForWidth());
        textColor->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(textColor, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        shadowColor = new Fm::ColorButton(groupBox);
        shadowColor->setObjectName(QString::fromUtf8("shadowColor"));
        sizePolicy2.setHeightForWidth(shadowColor->sizePolicy().hasHeightForWidth());
        shadowColor->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(shadowColor, 3, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_3 = new QGroupBox(generalPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(10);
        lockMargins = new QCheckBox(groupBox_3);
        lockMargins->setObjectName(QString::fromUtf8("lockMargins"));

        gridLayout_3->addWidget(lockMargins, 0, 4, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 5, 1, 1);

        vMargin = new QSpinBox(groupBox_3);
        vMargin->setObjectName(QString::fromUtf8("vMargin"));
        vMargin->setMaximum(48);
        vMargin->setValue(1);

        gridLayout_3->addWidget(vMargin, 0, 3, 1, 1);

        hMargin = new QSpinBox(groupBox_3);
        hMargin->setObjectName(QString::fromUtf8("hMargin"));
        hMargin->setMaximum(48);
        hMargin->setValue(3);

        gridLayout_3->addWidget(hMargin, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 2, 1, 1);

        groupBox_7 = new QGroupBox(groupBox_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_6 = new QVBoxLayout(groupBox_7);
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_6->addWidget(label_13, 0, Qt::AlignHCenter);

        topMargin = new QSpinBox(groupBox_7);
        topMargin->setObjectName(QString::fromUtf8("topMargin"));
        topMargin->setMaximum(200);

        verticalLayout_6->addWidget(topMargin, 0, Qt::AlignHCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leftMargin = new QSpinBox(groupBox_7);
        leftMargin->setObjectName(QString::fromUtf8("leftMargin"));
        leftMargin->setMaximum(200);

        horizontalLayout_2->addWidget(leftMargin);

        horizontalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        rightMargin = new QSpinBox(groupBox_7);
        rightMargin->setObjectName(QString::fromUtf8("rightMargin"));
        rightMargin->setMaximum(200);

        horizontalLayout_2->addWidget(rightMargin);


        verticalLayout_6->addLayout(horizontalLayout_2);

        bottomMargin = new QSpinBox(groupBox_7);
        bottomMargin->setObjectName(QString::fromUtf8("bottomMargin"));
        bottomMargin->setMaximum(200);

        verticalLayout_6->addWidget(bottomMargin, 0, Qt::AlignHCenter);


        gridLayout_3->addWidget(groupBox_7, 1, 0, 1, 6, Qt::AlignLeft);


        verticalLayout_2->addWidget(groupBox_3);

        defaultFileManager = new QCheckBox(generalPage);
        defaultFileManager->setObjectName(QString::fromUtf8("defaultFileManager"));

        verticalLayout_2->addWidget(defaultFileManager);

        allSticky = new QCheckBox(generalPage);
        allSticky->setObjectName(QString::fromUtf8("allSticky"));

        verticalLayout_2->addWidget(allSticky);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(generalPage, QString());
        bgPage = new QWidget();
        bgPage->setObjectName(QString::fromUtf8("bgPage"));
        verticalLayout_3 = new QVBoxLayout(bgPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(bgPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        backgroundColor = new Fm::ColorButton(groupBox_2);
        backgroundColor->setObjectName(QString::fromUtf8("backgroundColor"));
        sizePolicy2.setHeightForWidth(backgroundColor->sizePolicy().hasHeightForWidth());
        backgroundColor->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, backgroundColor);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(bgPage);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        wallpaperMode = new QComboBox(groupBox_4);
        wallpaperMode->setObjectName(QString::fromUtf8("wallpaperMode"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(wallpaperMode->sizePolicy().hasHeightForWidth());
        wallpaperMode->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(wallpaperMode, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(label_6, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        imageFile = new QLineEdit(groupBox_4);
        imageFile->setObjectName(QString::fromUtf8("imageFile"));

        horizontalLayout->addWidget(imageFile);

        browse = new QPushButton(groupBox_4);
        browse->setObjectName(QString::fromUtf8("browse"));

        horizontalLayout->addWidget(browse);


        gridLayout_5->addLayout(horizontalLayout, 2, 0, 1, 2);

        transformImage = new QCheckBox(groupBox_4);
        transformImage->setObjectName(QString::fromUtf8("transformImage"));

        gridLayout_5->addWidget(transformImage, 3, 0, 1, 2);

        perScreenWallpaper = new QCheckBox(groupBox_4);
        perScreenWallpaper->setObjectName(QString::fromUtf8("perScreenWallpaper"));

        gridLayout_5->addWidget(perScreenWallpaper, 4, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox_4);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        tabWidget->addTab(bgPage, QString());
        slidePage = new QWidget();
        slidePage->setObjectName(QString::fromUtf8("slidePage"));
        verticalLayout_4 = new QVBoxLayout(slidePage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        slideShow = new QGroupBox(slidePage);
        slideShow->setObjectName(QString::fromUtf8("slideShow"));
        slideShow->setCheckable(true);
        slideShow->setChecked(false);
        gridLayout_4 = new QGridLayout(slideShow);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_10 = new QLabel(slideShow);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 0, 0, 1, 7);

        folderBrowse = new QPushButton(slideShow);
        folderBrowse->setObjectName(QString::fromUtf8("folderBrowse"));

        gridLayout_4->addWidget(folderBrowse, 1, 6, 1, 1);

        hours = new QSpinBox(slideShow);
        hours->setObjectName(QString::fromUtf8("hours"));
        hours->setMaximum(24);

        gridLayout_4->addWidget(hours, 2, 2, 1, 1);

        label_12 = new QLabel(slideShow);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);
        label_12->setMargin(5);

        gridLayout_4->addWidget(label_12, 2, 3, 1, 1);

        label_11 = new QLabel(slideShow);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        minutes = new QSpinBox(slideShow);
        minutes->setObjectName(QString::fromUtf8("minutes"));
        minutes->setMaximum(55);
        minutes->setSingleStep(5);

        gridLayout_4->addWidget(minutes, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 2, 5, 1, 1);

        imageFolder = new QLineEdit(slideShow);
        imageFolder->setObjectName(QString::fromUtf8("imageFolder"));

        gridLayout_4->addWidget(imageFolder, 1, 0, 1, 6);

        horizontalSpacer_3 = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        randomize = new QCheckBox(slideShow);
        randomize->setObjectName(QString::fromUtf8("randomize"));

        gridLayout_4->addWidget(randomize, 3, 0, 1, 6);


        verticalLayout_4->addWidget(slideShow);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(slidePage, QString());
        advancedPage = new QWidget();
        advancedPage->setObjectName(QString::fromUtf8("advancedPage"));
        advancedPageLayout = new QVBoxLayout(advancedPage);
        advancedPageLayout->setObjectName(QString::fromUtf8("advancedPageLayout"));
        groupBox_6 = new QGroupBox(advancedPage);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_5 = new QVBoxLayout(groupBox_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        homeBox = new QCheckBox(groupBox_6);
        homeBox->setObjectName(QString::fromUtf8("homeBox"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("user-home");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        homeBox->setIcon(icon);

        verticalLayout_5->addWidget(homeBox);

        trashBox = new QCheckBox(groupBox_6);
        trashBox->setObjectName(QString::fromUtf8("trashBox"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("user-trash");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        trashBox->setIcon(icon1);

        verticalLayout_5->addWidget(trashBox);

        computerBox = new QCheckBox(groupBox_6);
        computerBox->setObjectName(QString::fromUtf8("computerBox"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("computer");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        computerBox->setIcon(icon2);

        verticalLayout_5->addWidget(computerBox);

        networkBox = new QCheckBox(groupBox_6);
        networkBox->setObjectName(QString::fromUtf8("networkBox"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("folder-network");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        networkBox->setIcon(icon3);

        verticalLayout_5->addWidget(networkBox);


        advancedPageLayout->addWidget(groupBox_6);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        advancedPageLayout->addItem(verticalSpacer);

        tabWidget->addTab(advancedPage, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(DesktopPreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DesktopPreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DesktopPreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DesktopPreferencesDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DesktopPreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *DesktopPreferencesDialog)
    {
        DesktopPreferencesDialog->setWindowTitle(QCoreApplication::translate("DesktopPreferencesDialog", "Desktop Preferences", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("DesktopPreferencesDialog", "Icons", nullptr));
        label_9->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Icon size:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DesktopPreferencesDialog", "Label Text", nullptr));
        label_2->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Select font:", nullptr));
        font->setText(QString());
        label_3->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Select text color:", nullptr));
        textColor->setText(QString());
        label_4->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Select shadow color:", nullptr));
        shadowColor->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("DesktopPreferencesDialog", "Spacing", nullptr));
        lockMargins->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Lock", nullptr));
        label_7->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Minimum item margins:", nullptr));
#if QT_CONFIG(tooltip)
        vMargin->setToolTip(QCoreApplication::translate("DesktopPreferencesDialog", "1 px by default.\n"
"A space is also reserved for 3 lines of text.", nullptr));
#endif // QT_CONFIG(tooltip)
        vMargin->setSuffix(QCoreApplication::translate("DesktopPreferencesDialog", " px", nullptr));
#if QT_CONFIG(tooltip)
        hMargin->setToolTip(QCoreApplication::translate("DesktopPreferencesDialog", "3 px by default.", nullptr));
#endif // QT_CONFIG(tooltip)
        hMargin->setSuffix(QCoreApplication::translate("DesktopPreferencesDialog", " px", nullptr));
        label_8->setText(QCoreApplication::translate("DesktopPreferencesDialog", "x", nullptr));
        label_13->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Margins of work area:", nullptr));
        topMargin->setSuffix(QCoreApplication::translate("DesktopPreferencesDialog", " px", nullptr));
        leftMargin->setSuffix(QCoreApplication::translate("DesktopPreferencesDialog", " px", nullptr));
        rightMargin->setSuffix(QCoreApplication::translate("DesktopPreferencesDialog", " px", nullptr));
        bottomMargin->setSuffix(QCoreApplication::translate("DesktopPreferencesDialog", " px", nullptr));
#if QT_CONFIG(tooltip)
        defaultFileManager->setToolTip(QCoreApplication::translate("DesktopPreferencesDialog", "By default, desktop folders will be opened in PCManFM-Qt if they\n"
"are left clicked, even when it is not the default file manager.", nullptr));
#endif // QT_CONFIG(tooltip)
        defaultFileManager->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Open desktop folders in default file manager by left clicking", nullptr));
        allSticky->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Make all items stick to their positions", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(generalPage), QCoreApplication::translate("DesktopPreferencesDialog", "General", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DesktopPreferencesDialog", "Background", nullptr));
        label_5->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Select background color:", nullptr));
        backgroundColor->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("DesktopPreferencesDialog", "Wallpaper", nullptr));
        label->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Wallpaper mode:", nullptr));
        label_6->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Wallpaper image file:", nullptr));
#if QT_CONFIG(tooltip)
        imageFile->setToolTip(QCoreApplication::translate("DesktopPreferencesDialog", "Image file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        imageFile->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        imageFile->setPlaceholderText(QCoreApplication::translate("DesktopPreferencesDialog", "Image file path", nullptr));
        browse->setText(QCoreApplication::translate("DesktopPreferencesDialog", "&Browse", nullptr));
        transformImage->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Transform image based on EXIF data", nullptr));
        perScreenWallpaper->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Individual wallpaper for each monitor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(bgPage), QCoreApplication::translate("DesktopPreferencesDialog", "Background", nullptr));
        slideShow->setTitle(QCoreApplication::translate("DesktopPreferencesDialog", "Enable Slide Show", nullptr));
        label_10->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Wallpaper image folder:", nullptr));
        folderBrowse->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Browse", nullptr));
        hours->setSuffix(QCoreApplication::translate("DesktopPreferencesDialog", " hour(s)", nullptr));
        label_12->setText(QCoreApplication::translate("DesktopPreferencesDialog", "and", nullptr));
#if QT_CONFIG(tooltip)
        label_11->setToolTip(QCoreApplication::translate("DesktopPreferencesDialog", "Intervals less than 5min will be ignored", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Interval:", nullptr));
        minutes->setSuffix(QCoreApplication::translate("DesktopPreferencesDialog", " minute(s)", nullptr));
        imageFolder->setPlaceholderText(QCoreApplication::translate("DesktopPreferencesDialog", "Wallpaper folder", nullptr));
        randomize->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Randomize the slide show", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(slidePage), QCoreApplication::translate("DesktopPreferencesDialog", "Slide Show", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("DesktopPreferencesDialog", "Visible Shortcuts", nullptr));
        homeBox->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Home", nullptr));
        trashBox->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Trash", nullptr));
        computerBox->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Computer", nullptr));
        networkBox->setText(QCoreApplication::translate("DesktopPreferencesDialog", "Network", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(advancedPage), QCoreApplication::translate("DesktopPreferencesDialog", "Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DesktopPreferencesDialog: public Ui_DesktopPreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOP_2D_PREFERENCES_H
