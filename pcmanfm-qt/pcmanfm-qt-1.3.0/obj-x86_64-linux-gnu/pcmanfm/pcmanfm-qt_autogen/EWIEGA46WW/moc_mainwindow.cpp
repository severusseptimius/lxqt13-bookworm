/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../pcmanfm/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PCManFM__ViewFrame_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCManFM__ViewFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCManFM__ViewFrame_t qt_meta_stringdata_PCManFM__ViewFrame = {
    {
QT_MOC_LITERAL(0, 0, 18) // "PCManFM::ViewFrame"

    },
    "PCManFM::ViewFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCManFM__ViewFrame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PCManFM::ViewFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PCManFM::ViewFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_PCManFM__ViewFrame.data,
    qt_meta_data_PCManFM__ViewFrame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCManFM::ViewFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCManFM::ViewFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCManFM__ViewFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int PCManFM::ViewFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PCManFM__MainWindow_t {
    QByteArrayData data[124];
    char stringdata0[3006];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCManFM__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCManFM__MainWindow_t qt_meta_stringdata_PCManFM__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PCManFM::MainWindow"
QT_MOC_LITERAL(1, 20, 24), // "onPathEntryReturnPressed"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "onPathBarChdir"
QT_MOC_LITERAL(4, 61, 12), // "Fm::FilePath"
QT_MOC_LITERAL(5, 74, 7), // "dirPath"
QT_MOC_LITERAL(6, 82, 25), // "onPathBarMiddleClickChdir"
QT_MOC_LITERAL(7, 108, 25), // "on_actionNewTab_triggered"
QT_MOC_LITERAL(8, 134, 25), // "on_actionNewWin_triggered"
QT_MOC_LITERAL(9, 160, 28), // "on_actionNewFolder_triggered"
QT_MOC_LITERAL(10, 189, 31), // "on_actionNewBlankFile_triggered"
QT_MOC_LITERAL(11, 221, 27), // "on_actionCloseTab_triggered"
QT_MOC_LITERAL(12, 249, 30), // "on_actionCloseWindow_triggered"
QT_MOC_LITERAL(13, 280, 33), // "on_actionFileProperties_trigg..."
QT_MOC_LITERAL(14, 314, 35), // "on_actionFolderProperties_tri..."
QT_MOC_LITERAL(15, 350, 22), // "on_actionCut_triggered"
QT_MOC_LITERAL(16, 373, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(17, 397, 24), // "on_actionPaste_triggered"
QT_MOC_LITERAL(18, 422, 25), // "on_actionDelete_triggered"
QT_MOC_LITERAL(19, 448, 25), // "on_actionRename_triggered"
QT_MOC_LITERAL(20, 474, 29), // "on_actionBulkRename_triggered"
QT_MOC_LITERAL(21, 504, 28), // "on_actionSelectAll_triggered"
QT_MOC_LITERAL(22, 533, 30), // "on_actionDeselectAll_triggered"
QT_MOC_LITERAL(23, 564, 34), // "on_actionInvertSelection_trig..."
QT_MOC_LITERAL(24, 599, 30), // "on_actionPreferences_triggered"
QT_MOC_LITERAL(25, 630, 25), // "on_actionGoBack_triggered"
QT_MOC_LITERAL(26, 656, 28), // "on_actionGoForward_triggered"
QT_MOC_LITERAL(27, 685, 23), // "on_actionGoUp_triggered"
QT_MOC_LITERAL(28, 709, 23), // "on_actionHome_triggered"
QT_MOC_LITERAL(29, 733, 25), // "on_actionReload_triggered"
QT_MOC_LITERAL(30, 759, 34), // "on_actionConnectToServer_trig..."
QT_MOC_LITERAL(31, 794, 27), // "on_actionIconView_triggered"
QT_MOC_LITERAL(32, 822, 30), // "on_actionCompactView_triggered"
QT_MOC_LITERAL(33, 853, 31), // "on_actionDetailedList_triggered"
QT_MOC_LITERAL(34, 885, 32), // "on_actionThumbnailView_triggered"
QT_MOC_LITERAL(35, 918, 21), // "on_actionGo_triggered"
QT_MOC_LITERAL(36, 940, 29), // "on_actionShowHidden_triggered"
QT_MOC_LITERAL(37, 970, 5), // "check"
QT_MOC_LITERAL(38, 976, 33), // "on_actionShowThumbnails_trigg..."
QT_MOC_LITERAL(39, 1010, 28), // "on_actionSplitView_triggered"
QT_MOC_LITERAL(40, 1039, 31), // "on_actionPreserveView_triggered"
QT_MOC_LITERAL(41, 1071, 7), // "checked"
QT_MOC_LITERAL(42, 1079, 40), // "on_actionPreserveViewRecursiv..."
QT_MOC_LITERAL(43, 1120, 43), // "on_actionGoToCustomizedViewSo..."
QT_MOC_LITERAL(44, 1164, 29), // "on_actionByFileName_triggered"
QT_MOC_LITERAL(45, 1194, 26), // "on_actionByMTime_triggered"
QT_MOC_LITERAL(46, 1221, 27), // "on_actionByCrTime_triggered"
QT_MOC_LITERAL(47, 1249, 26), // "on_actionByDTime_triggered"
QT_MOC_LITERAL(48, 1276, 26), // "on_actionByOwner_triggered"
QT_MOC_LITERAL(49, 1303, 26), // "on_actionByGroup_triggered"
QT_MOC_LITERAL(50, 1330, 29), // "on_actionByFileType_triggered"
QT_MOC_LITERAL(51, 1360, 29), // "on_actionByFileSize_triggered"
QT_MOC_LITERAL(52, 1390, 28), // "on_actionAscending_triggered"
QT_MOC_LITERAL(53, 1419, 29), // "on_actionDescending_triggered"
QT_MOC_LITERAL(54, 1449, 30), // "on_actionFolderFirst_triggered"
QT_MOC_LITERAL(55, 1480, 29), // "on_actionHiddenLast_triggered"
QT_MOC_LITERAL(56, 1510, 32), // "on_actionCaseSensitive_triggered"
QT_MOC_LITERAL(57, 1543, 25), // "on_actionFilter_triggered"
QT_MOC_LITERAL(58, 1569, 27), // "on_actionUnfilter_triggered"
QT_MOC_LITERAL(59, 1597, 29), // "on_actionShowFilter_triggered"
QT_MOC_LITERAL(60, 1627, 30), // "on_actionLocationBar_triggered"
QT_MOC_LITERAL(61, 1658, 30), // "on_actionPathButtons_triggered"
QT_MOC_LITERAL(62, 1689, 31), // "on_actionApplications_triggered"
QT_MOC_LITERAL(63, 1721, 27), // "on_actionComputer_triggered"
QT_MOC_LITERAL(64, 1749, 24), // "on_actionTrash_triggered"
QT_MOC_LITERAL(65, 1774, 26), // "on_actionNetwork_triggered"
QT_MOC_LITERAL(66, 1801, 26), // "on_actionDesktop_triggered"
QT_MOC_LITERAL(67, 1828, 33), // "on_actionAddToBookmarks_trigg..."
QT_MOC_LITERAL(68, 1862, 32), // "on_actionEditBookmarks_triggered"
QT_MOC_LITERAL(69, 1895, 31), // "on_actionOpenTerminal_triggered"
QT_MOC_LITERAL(70, 1927, 33), // "on_actionCreateLauncher_trigg..."
QT_MOC_LITERAL(71, 1961, 30), // "on_actionOpenAsAdmin_triggered"
QT_MOC_LITERAL(72, 1992, 29), // "on_actionOpenAsRoot_triggered"
QT_MOC_LITERAL(73, 2022, 31), // "on_actionCopyFullPath_triggered"
QT_MOC_LITERAL(74, 2054, 28), // "on_actionFindFiles_triggered"
QT_MOC_LITERAL(75, 2083, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(76, 2108, 34), // "on_actionHiddenShortcuts_trig..."
QT_MOC_LITERAL(77, 2143, 25), // "onBookmarkActionTriggered"
QT_MOC_LITERAL(78, 2169, 22), // "onTabBarCloseRequested"
QT_MOC_LITERAL(79, 2192, 5), // "index"
QT_MOC_LITERAL(80, 2198, 22), // "onTabBarCurrentChanged"
QT_MOC_LITERAL(81, 2221, 16), // "onTabBarTabMoved"
QT_MOC_LITERAL(82, 2238, 4), // "from"
QT_MOC_LITERAL(83, 2243, 2), // "to"
QT_MOC_LITERAL(84, 2246, 17), // "onShortcutPrevTab"
QT_MOC_LITERAL(85, 2264, 17), // "onShortcutNextTab"
QT_MOC_LITERAL(86, 2282, 19), // "onShortcutJumpToTab"
QT_MOC_LITERAL(87, 2302, 28), // "onStackedWidgetWidgetRemoved"
QT_MOC_LITERAL(88, 2331, 21), // "onTabPageTitleChanged"
QT_MOC_LITERAL(89, 2353, 22), // "onTabPageStatusChanged"
QT_MOC_LITERAL(90, 2376, 4), // "type"
QT_MOC_LITERAL(91, 2381, 10), // "statusText"
QT_MOC_LITERAL(92, 2392, 26), // "onTabPageSortFilterChanged"
QT_MOC_LITERAL(93, 2419, 24), // "onSidePaneChdirRequested"
QT_MOC_LITERAL(94, 2444, 4), // "path"
QT_MOC_LITERAL(95, 2449, 40), // "onSidePaneOpenFolderInNewWind..."
QT_MOC_LITERAL(96, 2490, 37), // "onSidePaneOpenFolderInNewTabR..."
QT_MOC_LITERAL(97, 2528, 39), // "onSidePaneOpenFolderInTermina..."
QT_MOC_LITERAL(98, 2568, 34), // "onSidePaneCreateNewFolderRequ..."
QT_MOC_LITERAL(99, 2603, 21), // "onSidePaneModeChanged"
QT_MOC_LITERAL(100, 2625, 18), // "Fm::SidePane::Mode"
QT_MOC_LITERAL(101, 2644, 4), // "mode"
QT_MOC_LITERAL(102, 2649, 27), // "on_actionSidePane_triggered"
QT_MOC_LITERAL(103, 2677, 15), // "onSplitterMoved"
QT_MOC_LITERAL(104, 2693, 3), // "pos"
QT_MOC_LITERAL(105, 2697, 12), // "onResetFocus"
QT_MOC_LITERAL(106, 2710, 24), // "onBackForwardContextMenu"
QT_MOC_LITERAL(107, 2735, 17), // "onFolderUnmounted"
QT_MOC_LITERAL(108, 2753, 14), // "tabContextMenu"
QT_MOC_LITERAL(109, 2768, 15), // "onTabBarClicked"
QT_MOC_LITERAL(110, 2784, 13), // "closeLeftTabs"
QT_MOC_LITERAL(111, 2798, 14), // "closeRightTabs"
QT_MOC_LITERAL(112, 2813, 14), // "closeOtherTabs"
QT_MOC_LITERAL(113, 2828, 14), // "focusPathEntry"
QT_MOC_LITERAL(114, 2843, 13), // "toggleMenuBar"
QT_MOC_LITERAL(115, 2857, 15), // "updateRecenMenu"
QT_MOC_LITERAL(116, 2873, 15), // "clearRecentMenu"
QT_MOC_LITERAL(117, 2889, 17), // "lanunchRecentFile"
QT_MOC_LITERAL(118, 2907, 9), // "detachTab"
QT_MOC_LITERAL(119, 2917, 18), // "onBookmarksChanged"
QT_MOC_LITERAL(120, 2936, 20), // "onSettingHiddenPlace"
QT_MOC_LITERAL(121, 2957, 3), // "str"
QT_MOC_LITERAL(122, 2961, 4), // "hide"
QT_MOC_LITERAL(123, 2966, 39) // "on_actionCleanPerFolderConfig..."

    },
    "PCManFM::MainWindow\0onPathEntryReturnPressed\0"
    "\0onPathBarChdir\0Fm::FilePath\0dirPath\0"
    "onPathBarMiddleClickChdir\0"
    "on_actionNewTab_triggered\0"
    "on_actionNewWin_triggered\0"
    "on_actionNewFolder_triggered\0"
    "on_actionNewBlankFile_triggered\0"
    "on_actionCloseTab_triggered\0"
    "on_actionCloseWindow_triggered\0"
    "on_actionFileProperties_triggered\0"
    "on_actionFolderProperties_triggered\0"
    "on_actionCut_triggered\0on_actionCopy_triggered\0"
    "on_actionPaste_triggered\0"
    "on_actionDelete_triggered\0"
    "on_actionRename_triggered\0"
    "on_actionBulkRename_triggered\0"
    "on_actionSelectAll_triggered\0"
    "on_actionDeselectAll_triggered\0"
    "on_actionInvertSelection_triggered\0"
    "on_actionPreferences_triggered\0"
    "on_actionGoBack_triggered\0"
    "on_actionGoForward_triggered\0"
    "on_actionGoUp_triggered\0on_actionHome_triggered\0"
    "on_actionReload_triggered\0"
    "on_actionConnectToServer_triggered\0"
    "on_actionIconView_triggered\0"
    "on_actionCompactView_triggered\0"
    "on_actionDetailedList_triggered\0"
    "on_actionThumbnailView_triggered\0"
    "on_actionGo_triggered\0"
    "on_actionShowHidden_triggered\0check\0"
    "on_actionShowThumbnails_triggered\0"
    "on_actionSplitView_triggered\0"
    "on_actionPreserveView_triggered\0checked\0"
    "on_actionPreserveViewRecursive_triggered\0"
    "on_actionGoToCustomizedViewSource_triggered\0"
    "on_actionByFileName_triggered\0"
    "on_actionByMTime_triggered\0"
    "on_actionByCrTime_triggered\0"
    "on_actionByDTime_triggered\0"
    "on_actionByOwner_triggered\0"
    "on_actionByGroup_triggered\0"
    "on_actionByFileType_triggered\0"
    "on_actionByFileSize_triggered\0"
    "on_actionAscending_triggered\0"
    "on_actionDescending_triggered\0"
    "on_actionFolderFirst_triggered\0"
    "on_actionHiddenLast_triggered\0"
    "on_actionCaseSensitive_triggered\0"
    "on_actionFilter_triggered\0"
    "on_actionUnfilter_triggered\0"
    "on_actionShowFilter_triggered\0"
    "on_actionLocationBar_triggered\0"
    "on_actionPathButtons_triggered\0"
    "on_actionApplications_triggered\0"
    "on_actionComputer_triggered\0"
    "on_actionTrash_triggered\0"
    "on_actionNetwork_triggered\0"
    "on_actionDesktop_triggered\0"
    "on_actionAddToBookmarks_triggered\0"
    "on_actionEditBookmarks_triggered\0"
    "on_actionOpenTerminal_triggered\0"
    "on_actionCreateLauncher_triggered\0"
    "on_actionOpenAsAdmin_triggered\0"
    "on_actionOpenAsRoot_triggered\0"
    "on_actionCopyFullPath_triggered\0"
    "on_actionFindFiles_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionHiddenShortcuts_triggered\0"
    "onBookmarkActionTriggered\0"
    "onTabBarCloseRequested\0index\0"
    "onTabBarCurrentChanged\0onTabBarTabMoved\0"
    "from\0to\0onShortcutPrevTab\0onShortcutNextTab\0"
    "onShortcutJumpToTab\0onStackedWidgetWidgetRemoved\0"
    "onTabPageTitleChanged\0onTabPageStatusChanged\0"
    "type\0statusText\0onTabPageSortFilterChanged\0"
    "onSidePaneChdirRequested\0path\0"
    "onSidePaneOpenFolderInNewWindowRequested\0"
    "onSidePaneOpenFolderInNewTabRequested\0"
    "onSidePaneOpenFolderInTerminalRequested\0"
    "onSidePaneCreateNewFolderRequested\0"
    "onSidePaneModeChanged\0Fm::SidePane::Mode\0"
    "mode\0on_actionSidePane_triggered\0"
    "onSplitterMoved\0pos\0onResetFocus\0"
    "onBackForwardContextMenu\0onFolderUnmounted\0"
    "tabContextMenu\0onTabBarClicked\0"
    "closeLeftTabs\0closeRightTabs\0"
    "closeOtherTabs\0focusPathEntry\0"
    "toggleMenuBar\0updateRecenMenu\0"
    "clearRecentMenu\0lanunchRecentFile\0"
    "detachTab\0onBookmarksChanged\0"
    "onSettingHiddenPlace\0str\0hide\0"
    "on_actionCleanPerFolderConfig_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCManFM__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     107,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  549,    2, 0x09 /* Protected */,
       3,    1,  550,    2, 0x09 /* Protected */,
       6,    1,  553,    2, 0x09 /* Protected */,
       7,    0,  556,    2, 0x09 /* Protected */,
       8,    0,  557,    2, 0x09 /* Protected */,
       9,    0,  558,    2, 0x09 /* Protected */,
      10,    0,  559,    2, 0x09 /* Protected */,
      11,    0,  560,    2, 0x09 /* Protected */,
      12,    0,  561,    2, 0x09 /* Protected */,
      13,    0,  562,    2, 0x09 /* Protected */,
      14,    0,  563,    2, 0x09 /* Protected */,
      15,    0,  564,    2, 0x09 /* Protected */,
      16,    0,  565,    2, 0x09 /* Protected */,
      17,    0,  566,    2, 0x09 /* Protected */,
      18,    0,  567,    2, 0x09 /* Protected */,
      19,    0,  568,    2, 0x09 /* Protected */,
      20,    0,  569,    2, 0x09 /* Protected */,
      21,    0,  570,    2, 0x09 /* Protected */,
      22,    0,  571,    2, 0x09 /* Protected */,
      23,    0,  572,    2, 0x09 /* Protected */,
      24,    0,  573,    2, 0x09 /* Protected */,
      25,    0,  574,    2, 0x09 /* Protected */,
      26,    0,  575,    2, 0x09 /* Protected */,
      27,    0,  576,    2, 0x09 /* Protected */,
      28,    0,  577,    2, 0x09 /* Protected */,
      29,    0,  578,    2, 0x09 /* Protected */,
      30,    0,  579,    2, 0x09 /* Protected */,
      31,    0,  580,    2, 0x09 /* Protected */,
      32,    0,  581,    2, 0x09 /* Protected */,
      33,    0,  582,    2, 0x09 /* Protected */,
      34,    0,  583,    2, 0x09 /* Protected */,
      35,    0,  584,    2, 0x09 /* Protected */,
      36,    1,  585,    2, 0x09 /* Protected */,
      38,    1,  588,    2, 0x09 /* Protected */,
      39,    1,  591,    2, 0x09 /* Protected */,
      40,    1,  594,    2, 0x09 /* Protected */,
      42,    1,  597,    2, 0x09 /* Protected */,
      43,    0,  600,    2, 0x09 /* Protected */,
      44,    1,  601,    2, 0x09 /* Protected */,
      45,    1,  604,    2, 0x09 /* Protected */,
      46,    1,  607,    2, 0x09 /* Protected */,
      47,    1,  610,    2, 0x09 /* Protected */,
      48,    1,  613,    2, 0x09 /* Protected */,
      49,    1,  616,    2, 0x09 /* Protected */,
      50,    1,  619,    2, 0x09 /* Protected */,
      51,    1,  622,    2, 0x09 /* Protected */,
      52,    1,  625,    2, 0x09 /* Protected */,
      53,    1,  628,    2, 0x09 /* Protected */,
      54,    1,  631,    2, 0x09 /* Protected */,
      55,    1,  634,    2, 0x09 /* Protected */,
      56,    1,  637,    2, 0x09 /* Protected */,
      57,    1,  640,    2, 0x09 /* Protected */,
      58,    0,  643,    2, 0x09 /* Protected */,
      59,    0,  644,    2, 0x09 /* Protected */,
      60,    1,  645,    2, 0x09 /* Protected */,
      61,    1,  648,    2, 0x09 /* Protected */,
      62,    0,  651,    2, 0x09 /* Protected */,
      63,    0,  652,    2, 0x09 /* Protected */,
      64,    0,  653,    2, 0x09 /* Protected */,
      65,    0,  654,    2, 0x09 /* Protected */,
      66,    0,  655,    2, 0x09 /* Protected */,
      67,    0,  656,    2, 0x09 /* Protected */,
      68,    0,  657,    2, 0x09 /* Protected */,
      69,    0,  658,    2, 0x09 /* Protected */,
      70,    0,  659,    2, 0x09 /* Protected */,
      71,    0,  660,    2, 0x09 /* Protected */,
      72,    0,  661,    2, 0x09 /* Protected */,
      73,    0,  662,    2, 0x09 /* Protected */,
      74,    0,  663,    2, 0x09 /* Protected */,
      75,    0,  664,    2, 0x09 /* Protected */,
      76,    0,  665,    2, 0x09 /* Protected */,
      77,    0,  666,    2, 0x09 /* Protected */,
      78,    1,  667,    2, 0x09 /* Protected */,
      80,    1,  670,    2, 0x09 /* Protected */,
      81,    2,  673,    2, 0x09 /* Protected */,
      84,    0,  678,    2, 0x09 /* Protected */,
      85,    0,  679,    2, 0x09 /* Protected */,
      86,    0,  680,    2, 0x09 /* Protected */,
      87,    1,  681,    2, 0x09 /* Protected */,
      88,    0,  684,    2, 0x09 /* Protected */,
      89,    2,  685,    2, 0x09 /* Protected */,
      92,    0,  690,    2, 0x09 /* Protected */,
      93,    2,  691,    2, 0x09 /* Protected */,
      95,    1,  696,    2, 0x09 /* Protected */,
      96,    1,  699,    2, 0x09 /* Protected */,
      97,    1,  702,    2, 0x09 /* Protected */,
      98,    1,  705,    2, 0x09 /* Protected */,
      99,    1,  708,    2, 0x09 /* Protected */,
     102,    1,  711,    2, 0x09 /* Protected */,
     103,    2,  714,    2, 0x09 /* Protected */,
     105,    0,  719,    2, 0x09 /* Protected */,
     106,    1,  720,    2, 0x09 /* Protected */,
     107,    0,  723,    2, 0x09 /* Protected */,
     108,    1,  724,    2, 0x09 /* Protected */,
     109,    1,  727,    2, 0x09 /* Protected */,
     110,    0,  730,    2, 0x09 /* Protected */,
     111,    0,  731,    2, 0x09 /* Protected */,
     112,    0,  732,    2, 0x09 /* Protected */,
     113,    0,  733,    2, 0x09 /* Protected */,
     114,    1,  734,    2, 0x09 /* Protected */,
     115,    0,  737,    2, 0x09 /* Protected */,
     116,    0,  738,    2, 0x09 /* Protected */,
     117,    0,  739,    2, 0x09 /* Protected */,
     118,    0,  740,    2, 0x09 /* Protected */,
     119,    0,  741,    2, 0x09 /* Protected */,
     120,    2,  742,    2, 0x09 /* Protected */,
     123,    0,  747,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   82,   83,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   90,   91,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,   90,   94,
    QMetaType::Void, 0x80000000 | 4,   94,
    QMetaType::Void, 0x80000000 | 4,   94,
    QMetaType::Void, 0x80000000 | 4,   94,
    QMetaType::Void, 0x80000000 | 4,   94,
    QMetaType::Void, 0x80000000 | 100,  101,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  104,   79,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  104,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  104,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,  121,  122,
    QMetaType::Void,

       0        // eod
};

void PCManFM::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPathEntryReturnPressed(); break;
        case 1: _t->onPathBarChdir((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 2: _t->onPathBarMiddleClickChdir((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 3: _t->on_actionNewTab_triggered(); break;
        case 4: _t->on_actionNewWin_triggered(); break;
        case 5: _t->on_actionNewFolder_triggered(); break;
        case 6: _t->on_actionNewBlankFile_triggered(); break;
        case 7: _t->on_actionCloseTab_triggered(); break;
        case 8: _t->on_actionCloseWindow_triggered(); break;
        case 9: _t->on_actionFileProperties_triggered(); break;
        case 10: _t->on_actionFolderProperties_triggered(); break;
        case 11: _t->on_actionCut_triggered(); break;
        case 12: _t->on_actionCopy_triggered(); break;
        case 13: _t->on_actionPaste_triggered(); break;
        case 14: _t->on_actionDelete_triggered(); break;
        case 15: _t->on_actionRename_triggered(); break;
        case 16: _t->on_actionBulkRename_triggered(); break;
        case 17: _t->on_actionSelectAll_triggered(); break;
        case 18: _t->on_actionDeselectAll_triggered(); break;
        case 19: _t->on_actionInvertSelection_triggered(); break;
        case 20: _t->on_actionPreferences_triggered(); break;
        case 21: _t->on_actionGoBack_triggered(); break;
        case 22: _t->on_actionGoForward_triggered(); break;
        case 23: _t->on_actionGoUp_triggered(); break;
        case 24: _t->on_actionHome_triggered(); break;
        case 25: _t->on_actionReload_triggered(); break;
        case 26: _t->on_actionConnectToServer_triggered(); break;
        case 27: _t->on_actionIconView_triggered(); break;
        case 28: _t->on_actionCompactView_triggered(); break;
        case 29: _t->on_actionDetailedList_triggered(); break;
        case 30: _t->on_actionThumbnailView_triggered(); break;
        case 31: _t->on_actionGo_triggered(); break;
        case 32: _t->on_actionShowHidden_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->on_actionShowThumbnails_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->on_actionSplitView_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->on_actionPreserveView_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->on_actionPreserveViewRecursive_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_actionGoToCustomizedViewSource_triggered(); break;
        case 38: _t->on_actionByFileName_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_actionByMTime_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->on_actionByCrTime_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->on_actionByDTime_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->on_actionByOwner_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->on_actionByGroup_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_actionByFileType_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->on_actionByFileSize_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->on_actionAscending_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->on_actionDescending_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->on_actionFolderFirst_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->on_actionHiddenLast_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->on_actionCaseSensitive_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->on_actionFilter_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->on_actionUnfilter_triggered(); break;
        case 53: _t->on_actionShowFilter_triggered(); break;
        case 54: _t->on_actionLocationBar_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->on_actionPathButtons_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->on_actionApplications_triggered(); break;
        case 57: _t->on_actionComputer_triggered(); break;
        case 58: _t->on_actionTrash_triggered(); break;
        case 59: _t->on_actionNetwork_triggered(); break;
        case 60: _t->on_actionDesktop_triggered(); break;
        case 61: _t->on_actionAddToBookmarks_triggered(); break;
        case 62: _t->on_actionEditBookmarks_triggered(); break;
        case 63: _t->on_actionOpenTerminal_triggered(); break;
        case 64: _t->on_actionCreateLauncher_triggered(); break;
        case 65: _t->on_actionOpenAsAdmin_triggered(); break;
        case 66: _t->on_actionOpenAsRoot_triggered(); break;
        case 67: _t->on_actionCopyFullPath_triggered(); break;
        case 68: _t->on_actionFindFiles_triggered(); break;
        case 69: _t->on_actionAbout_triggered(); break;
        case 70: _t->on_actionHiddenShortcuts_triggered(); break;
        case 71: _t->onBookmarkActionTriggered(); break;
        case 72: _t->onTabBarCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 73: _t->onTabBarCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 74: _t->onTabBarTabMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 75: _t->onShortcutPrevTab(); break;
        case 76: _t->onShortcutNextTab(); break;
        case 77: _t->onShortcutJumpToTab(); break;
        case 78: _t->onStackedWidgetWidgetRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: _t->onTabPageTitleChanged(); break;
        case 80: _t->onTabPageStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 81: _t->onTabPageSortFilterChanged(); break;
        case 82: _t->onSidePaneChdirRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const Fm::FilePath(*)>(_a[2]))); break;
        case 83: _t->onSidePaneOpenFolderInNewWindowRequested((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 84: _t->onSidePaneOpenFolderInNewTabRequested((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 85: _t->onSidePaneOpenFolderInTerminalRequested((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 86: _t->onSidePaneCreateNewFolderRequested((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 87: _t->onSidePaneModeChanged((*reinterpret_cast< Fm::SidePane::Mode(*)>(_a[1]))); break;
        case 88: _t->on_actionSidePane_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: _t->onSplitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 90: _t->onResetFocus(); break;
        case 91: _t->onBackForwardContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 92: _t->onFolderUnmounted(); break;
        case 93: _t->tabContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 94: _t->onTabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 95: _t->closeLeftTabs(); break;
        case 96: _t->closeRightTabs(); break;
        case 97: _t->closeOtherTabs(); break;
        case 98: _t->focusPathEntry(); break;
        case 99: _t->toggleMenuBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 100: _t->updateRecenMenu(); break;
        case 101: _t->clearRecentMenu(); break;
        case 102: _t->lanunchRecentFile(); break;
        case 103: _t->detachTab(); break;
        case 104: _t->onBookmarksChanged(); break;
        case 105: _t->onSettingHiddenPlace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 106: _t->on_actionCleanPerFolderConfig_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 83:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 84:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PCManFM::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_PCManFM__MainWindow.data,
    qt_meta_data_PCManFM__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCManFM::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCManFM::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCManFM__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PCManFM::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 107)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 107;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 107)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 107;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
