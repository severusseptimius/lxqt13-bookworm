/********************************************************************************
** Form generated from reading UI file 'main-win.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_2D_WIN_H
#define UI_MAIN_2D_WIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <libfm-qt/sidepane.h>
#include "statusbar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGoUp;
    QAction *actionHome;
    QAction *actionReload;
    QAction *actionGo;
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionNewWin;
    QAction *actionShowHidden;
    QAction *actionComputer;
    QAction *actionTrash;
    QAction *actionNetwork;
    QAction *actionDesktop;
    QAction *actionAddToBookmarks;
    QAction *actionApplications;
    QAction *actionReload_2;
    QAction *actionIconView;
    QAction *actionCompactView;
    QAction *actionDetailedList;
    QAction *actionThumbnailView;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelectAll;
    QAction *actionDeselectAll;
    QAction *actionPreferences;
    QAction *actionAscending;
    QAction *actionDescending;
    QAction *actionByFileName;
    QAction *actionByMTime;
    QAction *actionByCrTime;
    QAction *actionByDTime;
    QAction *actionByFileType;
    QAction *actionByOwner;
    QAction *actionByGroup;
    QAction *actionFolderFirst;
    QAction *actionHiddenLast;
    QAction *actionNewTab;
    QAction *actionGoBack;
    QAction *actionGoForward;
    QAction *actionInvertSelection;
    QAction *actionDelete;
    QAction *actionRename;
    QAction *actionCloseTab;
    QAction *actionFileProperties;
    QAction *actionFolderProperties;
    QAction *actionCaseSensitive;
    QAction *actionByFileSize;
    QAction *actionCloseWindow;
    QAction *actionEdit_Bookmarks;
    QAction *actionOpenTerminal;
    QAction *actionOpenAsRoot;
    QAction *actionEditBookmarks;
    QAction *actionNewFolder;
    QAction *actionNewBlankFile;
    QAction *actionFindFiles;
    QAction *actionFilter;
    QAction *actionUnfilter;
    QAction *actionCloseLeft;
    QAction *actionCloseRight;
    QAction *actionCloseOther;
    QAction *actionMenu_bar;
    QAction *actionMenu;
    QAction *actionPreserveView;
    QAction *actionConnectToServer;
    QAction *actionLocationBar;
    QAction *actionPathButtons;
    QAction *actionBulkRename;
    QAction *actionShowFilter;
    QAction *actionSplitView;
    QAction *actionCopyFullPath;
    QAction *actionShowThumbnails;
    QAction *actionSidePane;
    QAction *actionHiddenShortcuts;
    QAction *actionOpenAsAdmin;
    QAction *actionCreateLauncher;
    QAction *actionPreserveViewRecursive;
    QAction *actionGoToCustomizedViewSource;
    QAction *actionCleanPerFolderConfig;
    QAction *actionClearRecent;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    Fm::SidePane *sidePane;
    QSplitter *viewSplitter;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuCreateNew;
    QMenu *menuRecentFiles;
    QMenu *menu_Help;
    QMenu *menu_View;
    QMenu *menuSorting;
    QMenu *menu_View_2;
    QMenu *menuToolbars;
    QMenu *menuPathBarStyle;
    QMenu *menuFiltering;
    QMenu *menuView_Settings;
    QMenu *menu_Edit;
    QMenu *menu_Bookmarks;
    QMenu *menu_Go;
    QMenu *menu_Tool;
    PCManFM::StatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(460, 369);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("folder");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        actionGoUp = new QAction(MainWindow);
        actionGoUp->setObjectName(QString::fromUtf8("actionGoUp"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("go-up");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGoUp->setIcon(icon1);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("user-home");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionHome->setIcon(icon2);
        actionReload = new QAction(MainWindow);
        actionReload->setObjectName(QString::fromUtf8("actionReload"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("view-refresh");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionReload->setIcon(icon3);
        actionGo = new QAction(MainWindow);
        actionGo->setObjectName(QString::fromUtf8("actionGo"));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("go-jump");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGo->setIcon(icon4);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon5;
        iconThemeName = QString::fromUtf8("application-exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionQuit->setIcon(icon5);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("help-about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAbout->setIcon(icon6);
        actionNewWin = new QAction(MainWindow);
        actionNewWin->setObjectName(QString::fromUtf8("actionNewWin"));
        QIcon icon7;
        iconThemeName = QString::fromUtf8("window-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionNewWin->setIcon(icon7);
        actionShowHidden = new QAction(MainWindow);
        actionShowHidden->setObjectName(QString::fromUtf8("actionShowHidden"));
        actionShowHidden->setCheckable(true);
        actionComputer = new QAction(MainWindow);
        actionComputer->setObjectName(QString::fromUtf8("actionComputer"));
        QIcon icon8;
        iconThemeName = QString::fromUtf8("computer");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionComputer->setIcon(icon8);
        actionTrash = new QAction(MainWindow);
        actionTrash->setObjectName(QString::fromUtf8("actionTrash"));
        QIcon icon9;
        iconThemeName = QString::fromUtf8("user-trash");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTrash->setIcon(icon9);
        actionNetwork = new QAction(MainWindow);
        actionNetwork->setObjectName(QString::fromUtf8("actionNetwork"));
        actionDesktop = new QAction(MainWindow);
        actionDesktop->setObjectName(QString::fromUtf8("actionDesktop"));
        QIcon icon10;
        iconThemeName = QString::fromUtf8("user-desktop");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDesktop->setIcon(icon10);
        actionAddToBookmarks = new QAction(MainWindow);
        actionAddToBookmarks->setObjectName(QString::fromUtf8("actionAddToBookmarks"));
        QIcon icon11;
        iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon11 = QIcon::fromTheme(iconThemeName);
        } else {
            icon11.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAddToBookmarks->setIcon(icon11);
        actionApplications = new QAction(MainWindow);
        actionApplications->setObjectName(QString::fromUtf8("actionApplications"));
        actionReload_2 = new QAction(MainWindow);
        actionReload_2->setObjectName(QString::fromUtf8("actionReload_2"));
        actionIconView = new QAction(MainWindow);
        actionIconView->setObjectName(QString::fromUtf8("actionIconView"));
        actionIconView->setCheckable(true);
        actionCompactView = new QAction(MainWindow);
        actionCompactView->setObjectName(QString::fromUtf8("actionCompactView"));
        actionCompactView->setCheckable(true);
        actionDetailedList = new QAction(MainWindow);
        actionDetailedList->setObjectName(QString::fromUtf8("actionDetailedList"));
        actionDetailedList->setCheckable(true);
        actionThumbnailView = new QAction(MainWindow);
        actionThumbnailView->setObjectName(QString::fromUtf8("actionThumbnailView"));
        actionThumbnailView->setCheckable(true);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon12;
        iconThemeName = QString::fromUtf8("edit-cut");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon12 = QIcon::fromTheme(iconThemeName);
        } else {
            icon12.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCut->setIcon(icon12);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon13;
        iconThemeName = QString::fromUtf8("edit-copy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon13 = QIcon::fromTheme(iconThemeName);
        } else {
            icon13.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCopy->setIcon(icon13);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon14;
        iconThemeName = QString::fromUtf8("edit-paste");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon14 = QIcon::fromTheme(iconThemeName);
        } else {
            icon14.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionPaste->setIcon(icon14);
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));
        actionDeselectAll = new QAction(MainWindow);
        actionDeselectAll->setObjectName(QString::fromUtf8("actionDeselectAll"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionAscending = new QAction(MainWindow);
        actionAscending->setObjectName(QString::fromUtf8("actionAscending"));
        actionAscending->setCheckable(true);
        actionDescending = new QAction(MainWindow);
        actionDescending->setObjectName(QString::fromUtf8("actionDescending"));
        actionDescending->setCheckable(true);
        actionByFileName = new QAction(MainWindow);
        actionByFileName->setObjectName(QString::fromUtf8("actionByFileName"));
        actionByFileName->setCheckable(true);
        actionByMTime = new QAction(MainWindow);
        actionByMTime->setObjectName(QString::fromUtf8("actionByMTime"));
        actionByMTime->setCheckable(true);
        actionByCrTime = new QAction(MainWindow);
        actionByCrTime->setObjectName(QString::fromUtf8("actionByCrTime"));
        actionByCrTime->setCheckable(true);
        actionByDTime = new QAction(MainWindow);
        actionByDTime->setObjectName(QString::fromUtf8("actionByDTime"));
        actionByDTime->setCheckable(true);
        actionByFileType = new QAction(MainWindow);
        actionByFileType->setObjectName(QString::fromUtf8("actionByFileType"));
        actionByFileType->setCheckable(true);
        actionByOwner = new QAction(MainWindow);
        actionByOwner->setObjectName(QString::fromUtf8("actionByOwner"));
        actionByOwner->setCheckable(true);
        actionByGroup = new QAction(MainWindow);
        actionByGroup->setObjectName(QString::fromUtf8("actionByGroup"));
        actionByGroup->setCheckable(true);
        actionFolderFirst = new QAction(MainWindow);
        actionFolderFirst->setObjectName(QString::fromUtf8("actionFolderFirst"));
        actionFolderFirst->setCheckable(true);
        actionHiddenLast = new QAction(MainWindow);
        actionHiddenLast->setObjectName(QString::fromUtf8("actionHiddenLast"));
        actionHiddenLast->setCheckable(true);
        actionNewTab = new QAction(MainWindow);
        actionNewTab->setObjectName(QString::fromUtf8("actionNewTab"));
        QIcon icon15;
        iconThemeName = QString::fromUtf8("tab-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon15 = QIcon::fromTheme(iconThemeName);
        } else {
            icon15.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionNewTab->setIcon(icon15);
        actionGoBack = new QAction(MainWindow);
        actionGoBack->setObjectName(QString::fromUtf8("actionGoBack"));
        QIcon icon16;
        iconThemeName = QString::fromUtf8("go-previous");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon16 = QIcon::fromTheme(iconThemeName);
        } else {
            icon16.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGoBack->setIcon(icon16);
        actionGoForward = new QAction(MainWindow);
        actionGoForward->setObjectName(QString::fromUtf8("actionGoForward"));
        QIcon icon17;
        iconThemeName = QString::fromUtf8("go-next");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon17 = QIcon::fromTheme(iconThemeName);
        } else {
            icon17.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGoForward->setIcon(icon17);
        actionInvertSelection = new QAction(MainWindow);
        actionInvertSelection->setObjectName(QString::fromUtf8("actionInvertSelection"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon18;
        iconThemeName = QString::fromUtf8("edit-delete");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon18 = QIcon::fromTheme(iconThemeName);
        } else {
            icon18.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDelete->setIcon(icon18);
        actionRename = new QAction(MainWindow);
        actionRename->setObjectName(QString::fromUtf8("actionRename"));
        actionCloseTab = new QAction(MainWindow);
        actionCloseTab->setObjectName(QString::fromUtf8("actionCloseTab"));
        actionFileProperties = new QAction(MainWindow);
        actionFileProperties->setObjectName(QString::fromUtf8("actionFileProperties"));
        actionFolderProperties = new QAction(MainWindow);
        actionFolderProperties->setObjectName(QString::fromUtf8("actionFolderProperties"));
        actionCaseSensitive = new QAction(MainWindow);
        actionCaseSensitive->setObjectName(QString::fromUtf8("actionCaseSensitive"));
        actionCaseSensitive->setCheckable(true);
        actionByFileSize = new QAction(MainWindow);
        actionByFileSize->setObjectName(QString::fromUtf8("actionByFileSize"));
        actionByFileSize->setCheckable(true);
        actionCloseWindow = new QAction(MainWindow);
        actionCloseWindow->setObjectName(QString::fromUtf8("actionCloseWindow"));
        actionEdit_Bookmarks = new QAction(MainWindow);
        actionEdit_Bookmarks->setObjectName(QString::fromUtf8("actionEdit_Bookmarks"));
        actionOpenTerminal = new QAction(MainWindow);
        actionOpenTerminal->setObjectName(QString::fromUtf8("actionOpenTerminal"));
        actionOpenAsRoot = new QAction(MainWindow);
        actionOpenAsRoot->setObjectName(QString::fromUtf8("actionOpenAsRoot"));
        actionEditBookmarks = new QAction(MainWindow);
        actionEditBookmarks->setObjectName(QString::fromUtf8("actionEditBookmarks"));
        actionNewFolder = new QAction(MainWindow);
        actionNewFolder->setObjectName(QString::fromUtf8("actionNewFolder"));
        QIcon icon19;
        iconThemeName = QString::fromUtf8("folder-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon19 = QIcon::fromTheme(iconThemeName);
        } else {
            icon19.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionNewFolder->setIcon(icon19);
        actionNewBlankFile = new QAction(MainWindow);
        actionNewBlankFile->setObjectName(QString::fromUtf8("actionNewBlankFile"));
        QIcon icon20;
        iconThemeName = QString::fromUtf8("document-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon20 = QIcon::fromTheme(iconThemeName);
        } else {
            icon20.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionNewBlankFile->setIcon(icon20);
        actionFindFiles = new QAction(MainWindow);
        actionFindFiles->setObjectName(QString::fromUtf8("actionFindFiles"));
        actionFilter = new QAction(MainWindow);
        actionFilter->setObjectName(QString::fromUtf8("actionFilter"));
        actionFilter->setCheckable(true);
        actionUnfilter = new QAction(MainWindow);
        actionUnfilter->setObjectName(QString::fromUtf8("actionUnfilter"));
        actionCloseLeft = new QAction(MainWindow);
        actionCloseLeft->setObjectName(QString::fromUtf8("actionCloseLeft"));
        actionCloseLeft->setIcon(icon16);
        actionCloseRight = new QAction(MainWindow);
        actionCloseRight->setObjectName(QString::fromUtf8("actionCloseRight"));
        actionCloseRight->setIcon(icon17);
        actionCloseOther = new QAction(MainWindow);
        actionCloseOther->setObjectName(QString::fromUtf8("actionCloseOther"));
        actionMenu_bar = new QAction(MainWindow);
        actionMenu_bar->setObjectName(QString::fromUtf8("actionMenu_bar"));
        actionMenu_bar->setCheckable(true);
        actionMenu = new QAction(MainWindow);
        actionMenu->setObjectName(QString::fromUtf8("actionMenu"));
        QIcon icon21;
        iconThemeName = QString::fromUtf8("application-menu");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon21 = QIcon::fromTheme(iconThemeName);
        } else {
            icon21.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionMenu->setIcon(icon21);
        actionPreserveView = new QAction(MainWindow);
        actionPreserveView->setObjectName(QString::fromUtf8("actionPreserveView"));
        actionPreserveView->setCheckable(true);
        actionConnectToServer = new QAction(MainWindow);
        actionConnectToServer->setObjectName(QString::fromUtf8("actionConnectToServer"));
        actionLocationBar = new QAction(MainWindow);
        actionLocationBar->setObjectName(QString::fromUtf8("actionLocationBar"));
        actionLocationBar->setCheckable(true);
        actionPathButtons = new QAction(MainWindow);
        actionPathButtons->setObjectName(QString::fromUtf8("actionPathButtons"));
        actionPathButtons->setCheckable(true);
        actionBulkRename = new QAction(MainWindow);
        actionBulkRename->setObjectName(QString::fromUtf8("actionBulkRename"));
        actionShowFilter = new QAction(MainWindow);
        actionShowFilter->setObjectName(QString::fromUtf8("actionShowFilter"));
        actionSplitView = new QAction(MainWindow);
        actionSplitView->setObjectName(QString::fromUtf8("actionSplitView"));
        actionSplitView->setCheckable(true);
        actionCopyFullPath = new QAction(MainWindow);
        actionCopyFullPath->setObjectName(QString::fromUtf8("actionCopyFullPath"));
        actionShowThumbnails = new QAction(MainWindow);
        actionShowThumbnails->setObjectName(QString::fromUtf8("actionShowThumbnails"));
        actionShowThumbnails->setCheckable(true);
        actionShowThumbnails->setChecked(true);
        actionSidePane = new QAction(MainWindow);
        actionSidePane->setObjectName(QString::fromUtf8("actionSidePane"));
        actionSidePane->setCheckable(true);
        actionHiddenShortcuts = new QAction(MainWindow);
        actionHiddenShortcuts->setObjectName(QString::fromUtf8("actionHiddenShortcuts"));
        actionOpenAsAdmin = new QAction(MainWindow);
        actionOpenAsAdmin->setObjectName(QString::fromUtf8("actionOpenAsAdmin"));
        actionCreateLauncher = new QAction(MainWindow);
        actionCreateLauncher->setObjectName(QString::fromUtf8("actionCreateLauncher"));
        actionPreserveViewRecursive = new QAction(MainWindow);
        actionPreserveViewRecursive->setObjectName(QString::fromUtf8("actionPreserveViewRecursive"));
        actionPreserveViewRecursive->setCheckable(true);
        actionGoToCustomizedViewSource = new QAction(MainWindow);
        actionGoToCustomizedViewSource->setObjectName(QString::fromUtf8("actionGoToCustomizedViewSource"));
        actionCleanPerFolderConfig = new QAction(MainWindow);
        actionCleanPerFolderConfig->setObjectName(QString::fromUtf8("actionCleanPerFolderConfig"));
        actionClearRecent = new QAction(MainWindow);
        actionClearRecent->setObjectName(QString::fromUtf8("actionClearRecent"));
        QIcon icon22(QIcon::fromTheme(QString::fromUtf8("edit-clear")));
        actionClearRecent->setIcon(icon22);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        sidePane = new Fm::SidePane(splitter);
        sidePane->setObjectName(QString::fromUtf8("sidePane"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sidePane->sizePolicy().hasHeightForWidth());
        sidePane->setSizePolicy(sizePolicy);
        splitter->addWidget(sidePane);
        viewSplitter = new QSplitter(splitter);
        viewSplitter->setObjectName(QString::fromUtf8("viewSplitter"));
        viewSplitter->setOrientation(Qt::Horizontal);
        splitter->addWidget(viewSplitter);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 460, 30));
        menubar->setContextMenuPolicy(Qt::PreventContextMenu);
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuCreateNew = new QMenu(menu_File);
        menuCreateNew->setObjectName(QString::fromUtf8("menuCreateNew"));
        menuRecentFiles = new QMenu(menu_File);
        menuRecentFiles->setObjectName(QString::fromUtf8("menuRecentFiles"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menuSorting = new QMenu(menu_View);
        menuSorting->setObjectName(QString::fromUtf8("menuSorting"));
        menu_View_2 = new QMenu(menu_View);
        menu_View_2->setObjectName(QString::fromUtf8("menu_View_2"));
        menuToolbars = new QMenu(menu_View);
        menuToolbars->setObjectName(QString::fromUtf8("menuToolbars"));
        menuPathBarStyle = new QMenu(menu_View);
        menuPathBarStyle->setObjectName(QString::fromUtf8("menuPathBarStyle"));
        menuFiltering = new QMenu(menu_View);
        menuFiltering->setObjectName(QString::fromUtf8("menuFiltering"));
        menuView_Settings = new QMenu(menu_View);
        menuView_Settings->setObjectName(QString::fromUtf8("menuView_Settings"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menu_Bookmarks = new QMenu(menubar);
        menu_Bookmarks->setObjectName(QString::fromUtf8("menu_Bookmarks"));
        menu_Go = new QMenu(menubar);
        menu_Go->setObjectName(QString::fromUtf8("menu_Go"));
        menu_Tool = new QMenu(menubar);
        menu_Tool->setObjectName(QString::fromUtf8("menu_Tool"));
        MainWindow->setMenuBar(menubar);
        statusbar = new PCManFM::StatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        toolBar->setMovable(false);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menu_Go->menuAction());
        menubar->addAction(menu_Bookmarks->menuAction());
        menubar->addAction(menu_Tool->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionNewTab);
        menu_File->addAction(actionNewWin);
        menu_File->addSeparator();
        menu_File->addAction(menuCreateNew->menuAction());
        menu_File->addAction(menuRecentFiles->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(actionFileProperties);
        menu_File->addAction(actionFolderProperties);
        menu_File->addSeparator();
        menu_File->addAction(actionCloseTab);
        menu_File->addAction(actionCloseWindow);
        menuCreateNew->addAction(actionNewFolder);
        menuCreateNew->addAction(actionNewBlankFile);
        menu_Help->addAction(actionAbout);
        menu_Help->addAction(actionHiddenShortcuts);
        menu_View->addAction(actionReload);
        menu_View->addSeparator();
        menu_View->addAction(actionShowHidden);
        menu_View->addAction(actionShowThumbnails);
        menu_View->addAction(actionSplitView);
        menu_View->addAction(menuSorting->menuAction());
        menu_View->addAction(menu_View_2->menuAction());
        menu_View->addAction(menuView_Settings->menuAction());
        menu_View->addSeparator();
        menu_View->addAction(actionSidePane);
        menu_View->addAction(menuToolbars->menuAction());
        menu_View->addAction(menuPathBarStyle->menuAction());
        menu_View->addSeparator();
        menu_View->addAction(menuFiltering->menuAction());
        menuSorting->addAction(actionByFileName);
        menuSorting->addAction(actionByMTime);
        menuSorting->addAction(actionByCrTime);
        menuSorting->addAction(actionByDTime);
        menuSorting->addAction(actionByFileSize);
        menuSorting->addAction(actionByFileType);
        menuSorting->addAction(actionByOwner);
        menuSorting->addAction(actionByGroup);
        menuSorting->addSeparator();
        menuSorting->addAction(actionAscending);
        menuSorting->addAction(actionDescending);
        menuSorting->addSeparator();
        menuSorting->addAction(actionFolderFirst);
        menuSorting->addAction(actionHiddenLast);
        menuSorting->addAction(actionCaseSensitive);
        menu_View_2->addAction(actionIconView);
        menu_View_2->addAction(actionThumbnailView);
        menu_View_2->addAction(actionCompactView);
        menu_View_2->addAction(actionDetailedList);
        menu_View_2->addSeparator();
        menuToolbars->addAction(actionFilter);
        menuToolbars->addAction(actionMenu_bar);
        menuPathBarStyle->addAction(actionLocationBar);
        menuPathBarStyle->addAction(actionPathButtons);
        menuFiltering->addAction(actionShowFilter);
        menuFiltering->addAction(actionUnfilter);
        menuView_Settings->addAction(actionPreserveView);
        menuView_Settings->addAction(actionPreserveViewRecursive);
        menuView_Settings->addSeparator();
        menuView_Settings->addAction(actionGoToCustomizedViewSource);
        menuView_Settings->addAction(actionCleanPerFolderConfig);
        menu_Edit->addAction(actionCut);
        menu_Edit->addAction(actionCopy);
        menu_Edit->addAction(actionPaste);
        menu_Edit->addAction(actionRename);
        menu_Edit->addAction(actionDelete);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionSelectAll);
        menu_Edit->addAction(actionDeselectAll);
        menu_Edit->addAction(actionInvertSelection);
        menu_Edit->addSeparator();
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionBulkRename);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionPreferences);
        menu_Bookmarks->addAction(actionAddToBookmarks);
        menu_Bookmarks->addAction(actionEditBookmarks);
        menu_Go->addAction(actionHome);
        menu_Go->addAction(actionDesktop);
        menu_Go->addAction(actionComputer);
        menu_Go->addAction(actionTrash);
        menu_Go->addAction(actionNetwork);
        menu_Go->addAction(actionApplications);
        menu_Go->addSeparator();
        menu_Go->addAction(actionGoBack);
        menu_Go->addAction(actionGoForward);
        menu_Go->addAction(actionGoUp);
        menu_Go->addSeparator();
        menu_Go->addAction(actionConnectToServer);
        menu_Tool->addAction(actionOpenTerminal);
        menu_Tool->addAction(actionCreateLauncher);
        menu_Tool->addSeparator();
        menu_Tool->addAction(actionOpenAsAdmin);
        menu_Tool->addAction(actionOpenAsRoot);
        menu_Tool->addSeparator();
        menu_Tool->addAction(actionCopyFullPath);
        menu_Tool->addAction(actionFindFiles);
        toolBar->addAction(actionNewTab);
        toolBar->addAction(actionGoBack);
        toolBar->addAction(actionGoForward);
        toolBar->addAction(actionGoUp);
        toolBar->addAction(actionReload);
        toolBar->addSeparator();
        toolBar->addAction(actionIconView);
        toolBar->addAction(actionThumbnailView);
        toolBar->addAction(actionCompactView);
        toolBar->addAction(actionDetailedList);
        toolBar->addSeparator();
        toolBar->addAction(actionGo);
        toolBar->addAction(actionMenu);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "File Manager", nullptr));
        actionGoUp->setText(QCoreApplication::translate("MainWindow", "Go &Up", nullptr));
#if QT_CONFIG(tooltip)
        actionGoUp->setToolTip(QCoreApplication::translate("MainWindow", "Go Up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoUp->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHome->setText(QCoreApplication::translate("MainWindow", "&Home", nullptr));
#if QT_CONFIG(shortcut)
        actionHome->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Home", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReload->setText(QCoreApplication::translate("MainWindow", "&Reload", nullptr));
#if QT_CONFIG(shortcut)
        actionReload->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGo->setText(QCoreApplication::translate("MainWindow", "Go", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionNewWin->setText(QCoreApplication::translate("MainWindow", "&New Window", nullptr));
#if QT_CONFIG(tooltip)
        actionNewWin->setToolTip(QCoreApplication::translate("MainWindow", "New Window", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNewWin->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowHidden->setText(QCoreApplication::translate("MainWindow", "Show &Hidden", nullptr));
#if QT_CONFIG(shortcut)
        actionShowHidden->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionComputer->setText(QCoreApplication::translate("MainWindow", "&Computer", nullptr));
        actionTrash->setText(QCoreApplication::translate("MainWindow", "&Trash", nullptr));
        actionNetwork->setText(QCoreApplication::translate("MainWindow", "&Network", nullptr));
        actionDesktop->setText(QCoreApplication::translate("MainWindow", "&Desktop", nullptr));
        actionAddToBookmarks->setText(QCoreApplication::translate("MainWindow", "&Add to Bookmarks", nullptr));
        actionApplications->setText(QCoreApplication::translate("MainWindow", "&Applications", nullptr));
        actionReload_2->setText(QCoreApplication::translate("MainWindow", "Reload", nullptr));
        actionIconView->setText(QCoreApplication::translate("MainWindow", "&Icon View", nullptr));
        actionCompactView->setText(QCoreApplication::translate("MainWindow", "&Compact View", nullptr));
        actionDetailedList->setText(QCoreApplication::translate("MainWindow", "&Detailed List", nullptr));
        actionThumbnailView->setText(QCoreApplication::translate("MainWindow", "&Thumbnail View", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cu&t", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "&Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "&Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectAll->setText(QCoreApplication::translate("MainWindow", "Select &All", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDeselectAll->setText(QCoreApplication::translate("MainWindow", "De&select All", nullptr));
#if QT_CONFIG(shortcut)
        actionDeselectAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Pr&eferences", nullptr));
        actionAscending->setText(QCoreApplication::translate("MainWindow", "&Ascending", nullptr));
        actionDescending->setText(QCoreApplication::translate("MainWindow", "&Descending", nullptr));
        actionByFileName->setText(QCoreApplication::translate("MainWindow", "&By File Name", nullptr));
        actionByMTime->setText(QCoreApplication::translate("MainWindow", "By &Modification Time", nullptr));
        actionByCrTime->setText(QCoreApplication::translate("MainWindow", "By C&reation Time", nullptr));
        actionByDTime->setText(QCoreApplication::translate("MainWindow", "By Deletio&n Time", nullptr));
        actionByFileType->setText(QCoreApplication::translate("MainWindow", "By File &Type", nullptr));
        actionByOwner->setText(QCoreApplication::translate("MainWindow", "By &Owner", nullptr));
        actionByGroup->setText(QCoreApplication::translate("MainWindow", "By &Group", nullptr));
        actionFolderFirst->setText(QCoreApplication::translate("MainWindow", "&Folder First", nullptr));
        actionHiddenLast->setText(QCoreApplication::translate("MainWindow", "&Hidden Last", nullptr));
        actionNewTab->setText(QCoreApplication::translate("MainWindow", "New &Tab", nullptr));
#if QT_CONFIG(tooltip)
        actionNewTab->setToolTip(QCoreApplication::translate("MainWindow", "New Tab", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNewTab->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoBack->setText(QCoreApplication::translate("MainWindow", "Go &Back", nullptr));
#if QT_CONFIG(tooltip)
        actionGoBack->setToolTip(QCoreApplication::translate("MainWindow", "Go Back", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoBack->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoForward->setText(QCoreApplication::translate("MainWindow", "Go &Forward", nullptr));
#if QT_CONFIG(tooltip)
        actionGoForward->setToolTip(QCoreApplication::translate("MainWindow", "Go Forward", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoForward->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInvertSelection->setText(QCoreApplication::translate("MainWindow", "&Invert Selection", nullptr));
#if QT_CONFIG(shortcut)
        actionInvertSelection->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "&Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRename->setText(QCoreApplication::translate("MainWindow", "&Rename", nullptr));
#if QT_CONFIG(shortcut)
        actionRename->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCloseTab->setText(QCoreApplication::translate("MainWindow", "C&lose Tab", nullptr));
#if QT_CONFIG(shortcut)
        actionCloseTab->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFileProperties->setText(QCoreApplication::translate("MainWindow", "File &Properties", nullptr));
#if QT_CONFIG(shortcut)
        actionFileProperties->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFolderProperties->setText(QCoreApplication::translate("MainWindow", "&Folder Properties", nullptr));
        actionCaseSensitive->setText(QCoreApplication::translate("MainWindow", "&Case Sensitive", nullptr));
        actionByFileSize->setText(QCoreApplication::translate("MainWindow", "By File &Size", nullptr));
        actionCloseWindow->setText(QCoreApplication::translate("MainWindow", "&Close Window", nullptr));
#if QT_CONFIG(shortcut)
        actionCloseWindow->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEdit_Bookmarks->setText(QCoreApplication::translate("MainWindow", "Edit Bookmarks", nullptr));
        actionOpenTerminal->setText(QCoreApplication::translate("MainWindow", "Open &Terminal", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenTerminal->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenAsRoot->setText(QCoreApplication::translate("MainWindow", "Open Tab in &Root Instance", nullptr));
        actionEditBookmarks->setText(QCoreApplication::translate("MainWindow", "&Edit Bookmarks", nullptr));
        actionNewFolder->setText(QCoreApplication::translate("MainWindow", "&Folder", nullptr));
#if QT_CONFIG(shortcut)
        actionNewFolder->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewBlankFile->setText(QCoreApplication::translate("MainWindow", "&Blank File", nullptr));
#if QT_CONFIG(shortcut)
        actionNewBlankFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFindFiles->setText(QCoreApplication::translate("MainWindow", "&Find Files", nullptr));
#if QT_CONFIG(shortcut)
        actionFindFiles->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFilter->setText(QCoreApplication::translate("MainWindow", "Permanent &filter bar", nullptr));
#if QT_CONFIG(shortcut)
        actionFilter->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnfilter->setText(QCoreApplication::translate("MainWindow", "&Clear All Filters", nullptr));
#if QT_CONFIG(shortcut)
        actionUnfilter->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCloseLeft->setText(QCoreApplication::translate("MainWindow", "Close &previous tabs", nullptr));
        actionCloseRight->setText(QCoreApplication::translate("MainWindow", "Close &next tabs", nullptr));
        actionCloseOther->setText(QCoreApplication::translate("MainWindow", "Close &other tabs", nullptr));
        actionMenu_bar->setText(QCoreApplication::translate("MainWindow", "&Menu bar", nullptr));
#if QT_CONFIG(tooltip)
        actionMenu_bar->setToolTip(QCoreApplication::translate("MainWindow", "Menu bar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMenu_bar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMenu->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
#if QT_CONFIG(tooltip)
        actionMenu->setToolTip(QCoreApplication::translate("MainWindow", "Menu", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPreserveView->setText(QCoreApplication::translate("MainWindow", "Preserve Settings for &This Folder", nullptr));
        actionConnectToServer->setText(QCoreApplication::translate("MainWindow", "Connect to &Server", nullptr));
        actionLocationBar->setText(QCoreApplication::translate("MainWindow", "&Location", nullptr));
        actionPathButtons->setText(QCoreApplication::translate("MainWindow", "&Path Buttons", nullptr));
        actionBulkRename->setText(QCoreApplication::translate("MainWindow", "&Bulk Rename", nullptr));
#if QT_CONFIG(tooltip)
        actionBulkRename->setToolTip(QCoreApplication::translate("MainWindow", "Bulk Rename", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionBulkRename->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowFilter->setText(QCoreApplication::translate("MainWindow", "&Show/Focus Filter Bar", nullptr));
#if QT_CONFIG(tooltip)
        actionShowFilter->setToolTip(QCoreApplication::translate("MainWindow", "Show Filter Bar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowFilter->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSplitView->setText(QCoreApplication::translate("MainWindow", "S&plit View", nullptr));
#if QT_CONFIG(tooltip)
        actionSplitView->setToolTip(QCoreApplication::translate("MainWindow", "Split View", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSplitView->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopyFullPath->setText(QCoreApplication::translate("MainWindow", "&Copy Full Path", nullptr));
#if QT_CONFIG(shortcut)
        actionCopyFullPath->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowThumbnails->setText(QCoreApplication::translate("MainWindow", "Show Thumb&nails", nullptr));
#if QT_CONFIG(tooltip)
        actionShowThumbnails->setToolTip(QCoreApplication::translate("MainWindow", "Show Thumbnails", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSidePane->setText(QCoreApplication::translate("MainWindow", "S&ide Pane", nullptr));
#if QT_CONFIG(shortcut)
        actionSidePane->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHiddenShortcuts->setText(QCoreApplication::translate("MainWindow", "Hidden &Shortcuts", nullptr));
        actionOpenAsAdmin->setText(QCoreApplication::translate("MainWindow", "Open Tab in &Admin Mode", nullptr));
        actionCreateLauncher->setText(QCoreApplication::translate("MainWindow", "Create Launcher", nullptr));
#if QT_CONFIG(tooltip)
        actionCreateLauncher->setToolTip(QCoreApplication::translate("MainWindow", "Create Launcher", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPreserveViewRecursive->setText(QCoreApplication::translate("MainWindow", "Preserve Settings Recursively from &Here", nullptr));
        actionGoToCustomizedViewSource->setText(QCoreApplication::translate("MainWindow", "&Go to Source of Inherited Settings", nullptr));
        actionCleanPerFolderConfig->setText(QCoreApplication::translate("MainWindow", "&Remove Settings of Nonexistent Folders", nullptr));
        actionClearRecent->setText(QCoreApplication::translate("MainWindow", "&Clear", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuCreateNew->setTitle(QCoreApplication::translate("MainWindow", "C&reate New", nullptr));
        menuRecentFiles->setTitle(QCoreApplication::translate("MainWindow", "Recent F&iles", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menu_View->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menuSorting->setTitle(QCoreApplication::translate("MainWindow", "&Sorting", nullptr));
        menu_View_2->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menuToolbars->setTitle(QCoreApplication::translate("MainWindow", "&Toolbars", nullptr));
        menuPathBarStyle->setTitle(QCoreApplication::translate("MainWindow", "Path &Bar", nullptr));
        menuFiltering->setTitle(QCoreApplication::translate("MainWindow", "&Filtering", nullptr));
        menuView_Settings->setTitle(QCoreApplication::translate("MainWindow", "&Customized View Settings", nullptr));
        menu_Edit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menu_Bookmarks->setTitle(QCoreApplication::translate("MainWindow", "&Bookmarks", nullptr));
        menu_Go->setTitle(QCoreApplication::translate("MainWindow", "&Go", nullptr));
        menu_Tool->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Main Toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_2D_WIN_H
