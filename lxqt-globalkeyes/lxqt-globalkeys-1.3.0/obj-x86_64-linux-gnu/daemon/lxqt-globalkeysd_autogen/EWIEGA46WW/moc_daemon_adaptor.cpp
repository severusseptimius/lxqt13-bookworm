/****************************************************************************
** Meta object code from reading C++ file 'daemon_adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../daemon/daemon_adaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'daemon_adaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DaemonAdaptor_t {
    QByteArrayData data[98];
    char stringdata0[1679];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DaemonAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DaemonAdaptor_t qt_meta_stringdata_DaemonAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DaemonAdaptor"
QT_MOC_LITERAL(1, 14, 11), // "actionAdded"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 2), // "id"
QT_MOC_LITERAL(4, 30, 14), // "actionModified"
QT_MOC_LITERAL(5, 45, 13), // "actionRemoved"
QT_MOC_LITERAL(6, 59, 21), // "actionShortcutChanged"
QT_MOC_LITERAL(7, 81, 13), // "actionEnabled"
QT_MOC_LITERAL(8, 95, 7), // "enabled"
QT_MOC_LITERAL(9, 103, 25), // "clientActionSenderChanged"
QT_MOC_LITERAL(10, 129, 6), // "sender"
QT_MOC_LITERAL(11, 136, 14), // "actionsSwapped"
QT_MOC_LITERAL(12, 151, 3), // "id1"
QT_MOC_LITERAL(13, 155, 3), // "id2"
QT_MOC_LITERAL(14, 159, 31), // "multipleActionsBehaviourChanged"
QT_MOC_LITERAL(15, 191, 9), // "behaviour"
QT_MOC_LITERAL(16, 201, 17), // "onAddMethodAction"
QT_MOC_LITERAL(17, 219, 26), // "QPair<QString,qulonglong>&"
QT_MOC_LITERAL(18, 246, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(19, 262, 18), // "onAddCommandAction"
QT_MOC_LITERAL(20, 281, 25), // "onModifyActionDescription"
QT_MOC_LITERAL(21, 307, 5), // "bool&"
QT_MOC_LITERAL(22, 313, 20), // "onModifyMethodAction"
QT_MOC_LITERAL(23, 334, 21), // "onModifyCommandAction"
QT_MOC_LITERAL(24, 356, 14), // "onEnableAction"
QT_MOC_LITERAL(25, 371, 17), // "onIsActionEnabled"
QT_MOC_LITERAL(26, 389, 23), // "onGetClientActionSender"
QT_MOC_LITERAL(27, 413, 8), // "QString&"
QT_MOC_LITERAL(28, 422, 16), // "onChangeShortcut"
QT_MOC_LITERAL(29, 439, 13), // "onSwapActions"
QT_MOC_LITERAL(30, 453, 14), // "onRemoveAction"
QT_MOC_LITERAL(31, 468, 29), // "onSetMultipleActionsBehaviour"
QT_MOC_LITERAL(32, 498, 24), // "MultipleActionsBehaviour"
QT_MOC_LITERAL(33, 523, 29), // "onGetMultipleActionsBehaviour"
QT_MOC_LITERAL(34, 553, 25), // "MultipleActionsBehaviour&"
QT_MOC_LITERAL(35, 579, 17), // "onGetAllActionIds"
QT_MOC_LITERAL(36, 597, 18), // "QList<qulonglong>&"
QT_MOC_LITERAL(37, 616, 15), // "onGetActionById"
QT_MOC_LITERAL(38, 632, 30), // "QPair<bool,GeneralActionInfo>&"
QT_MOC_LITERAL(39, 663, 15), // "onGetAllActions"
QT_MOC_LITERAL(40, 679, 35), // "QMap<qulonglong,GeneralAction..."
QT_MOC_LITERAL(41, 715, 25), // "onGetClientActionInfoById"
QT_MOC_LITERAL(42, 741, 29), // "QPair<bool,ClientActionInfo>&"
QT_MOC_LITERAL(43, 771, 25), // "onGetMethodActionInfoById"
QT_MOC_LITERAL(44, 797, 29), // "QPair<bool,MethodActionInfo>&"
QT_MOC_LITERAL(45, 827, 26), // "onGetCommandActionInfoById"
QT_MOC_LITERAL(46, 854, 30), // "QPair<bool,CommandActionInfo>&"
QT_MOC_LITERAL(47, 885, 14), // "onGrabShortcut"
QT_MOC_LITERAL(48, 900, 12), // "QDBusMessage"
QT_MOC_LITERAL(49, 913, 20), // "onCancelShortcutGrab"
QT_MOC_LITERAL(50, 934, 6), // "onQuit"
QT_MOC_LITERAL(51, 941, 15), // "addMethodAction"
QT_MOC_LITERAL(52, 957, 8), // "shortcut"
QT_MOC_LITERAL(53, 966, 7), // "service"
QT_MOC_LITERAL(54, 974, 4), // "path"
QT_MOC_LITERAL(55, 979, 9), // "interface"
QT_MOC_LITERAL(56, 989, 6), // "method"
QT_MOC_LITERAL(57, 996, 11), // "description"
QT_MOC_LITERAL(58, 1008, 11), // "qulonglong&"
QT_MOC_LITERAL(59, 1020, 16), // "addCommandAction"
QT_MOC_LITERAL(60, 1037, 7), // "command"
QT_MOC_LITERAL(61, 1045, 9), // "arguments"
QT_MOC_LITERAL(62, 1055, 23), // "modifyActionDescription"
QT_MOC_LITERAL(63, 1079, 18), // "modifyMethodAction"
QT_MOC_LITERAL(64, 1098, 19), // "modifyCommandAction"
QT_MOC_LITERAL(65, 1118, 12), // "enableAction"
QT_MOC_LITERAL(66, 1131, 15), // "isActionEnabled"
QT_MOC_LITERAL(67, 1147, 21), // "getClientActionSender"
QT_MOC_LITERAL(68, 1169, 14), // "changeShortcut"
QT_MOC_LITERAL(69, 1184, 11), // "swapActions"
QT_MOC_LITERAL(70, 1196, 12), // "removeAction"
QT_MOC_LITERAL(71, 1209, 27), // "setMultipleActionsBehaviour"
QT_MOC_LITERAL(72, 1237, 27), // "getMultipleActionsBehaviour"
QT_MOC_LITERAL(73, 1265, 15), // "getAllActionIds"
QT_MOC_LITERAL(74, 1281, 17), // "QList<qulonglong>"
QT_MOC_LITERAL(75, 1299, 13), // "getAllActions"
QT_MOC_LITERAL(76, 1313, 34), // "QMap<qulonglong,GeneralAction..."
QT_MOC_LITERAL(77, 1348, 13), // "getActionById"
QT_MOC_LITERAL(78, 1362, 4), // "type"
QT_MOC_LITERAL(79, 1367, 4), // "info"
QT_MOC_LITERAL(80, 1372, 23), // "getClientActionInfoById"
QT_MOC_LITERAL(81, 1396, 16), // "QDBusObjectPath&"
QT_MOC_LITERAL(82, 1413, 23), // "getMethodActionInfoById"
QT_MOC_LITERAL(83, 1437, 24), // "getCommandActionInfoById"
QT_MOC_LITERAL(84, 1462, 12), // "QStringList&"
QT_MOC_LITERAL(85, 1475, 12), // "grabShortcut"
QT_MOC_LITERAL(86, 1488, 7), // "timeout"
QT_MOC_LITERAL(87, 1496, 6), // "failed"
QT_MOC_LITERAL(88, 1503, 9), // "cancelled"
QT_MOC_LITERAL(89, 1513, 8), // "timedout"
QT_MOC_LITERAL(90, 1522, 18), // "cancelShortcutGrab"
QT_MOC_LITERAL(91, 1541, 4), // "quit"
QT_MOC_LITERAL(92, 1546, 16), // "emit_actionAdded"
QT_MOC_LITERAL(93, 1563, 19), // "emit_actionModified"
QT_MOC_LITERAL(94, 1583, 18), // "emit_actionRemoved"
QT_MOC_LITERAL(95, 1602, 26), // "emit_actionShortcutChanged"
QT_MOC_LITERAL(96, 1629, 18), // "emit_actionEnabled"
QT_MOC_LITERAL(97, 1648, 30) // "emit_clientActionSenderChanged"

    },
    "DaemonAdaptor\0actionAdded\0\0id\0"
    "actionModified\0actionRemoved\0"
    "actionShortcutChanged\0actionEnabled\0"
    "enabled\0clientActionSenderChanged\0"
    "sender\0actionsSwapped\0id1\0id2\0"
    "multipleActionsBehaviourChanged\0"
    "behaviour\0onAddMethodAction\0"
    "QPair<QString,qulonglong>&\0QDBusObjectPath\0"
    "onAddCommandAction\0onModifyActionDescription\0"
    "bool&\0onModifyMethodAction\0"
    "onModifyCommandAction\0onEnableAction\0"
    "onIsActionEnabled\0onGetClientActionSender\0"
    "QString&\0onChangeShortcut\0onSwapActions\0"
    "onRemoveAction\0onSetMultipleActionsBehaviour\0"
    "MultipleActionsBehaviour\0"
    "onGetMultipleActionsBehaviour\0"
    "MultipleActionsBehaviour&\0onGetAllActionIds\0"
    "QList<qulonglong>&\0onGetActionById\0"
    "QPair<bool,GeneralActionInfo>&\0"
    "onGetAllActions\0QMap<qulonglong,GeneralActionInfo>&\0"
    "onGetClientActionInfoById\0"
    "QPair<bool,ClientActionInfo>&\0"
    "onGetMethodActionInfoById\0"
    "QPair<bool,MethodActionInfo>&\0"
    "onGetCommandActionInfoById\0"
    "QPair<bool,CommandActionInfo>&\0"
    "onGrabShortcut\0QDBusMessage\0"
    "onCancelShortcutGrab\0onQuit\0addMethodAction\0"
    "shortcut\0service\0path\0interface\0method\0"
    "description\0qulonglong&\0addCommandAction\0"
    "command\0arguments\0modifyActionDescription\0"
    "modifyMethodAction\0modifyCommandAction\0"
    "enableAction\0isActionEnabled\0"
    "getClientActionSender\0changeShortcut\0"
    "swapActions\0removeAction\0"
    "setMultipleActionsBehaviour\0"
    "getMultipleActionsBehaviour\0getAllActionIds\0"
    "QList<qulonglong>\0getAllActions\0"
    "QMap<qulonglong,GeneralActionInfo>\0"
    "getActionById\0type\0info\0getClientActionInfoById\0"
    "QDBusObjectPath&\0getMethodActionInfoById\0"
    "getCommandActionInfoById\0QStringList&\0"
    "grabShortcut\0timeout\0failed\0cancelled\0"
    "timedout\0cancelShortcutGrab\0quit\0"
    "emit_actionAdded\0emit_actionModified\0"
    "emit_actionRemoved\0emit_actionShortcutChanged\0"
    "emit_actionEnabled\0emit_clientActionSenderChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DaemonAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  304,    2, 0x06 /* Public */,
       4,    1,  307,    2, 0x06 /* Public */,
       5,    1,  310,    2, 0x06 /* Public */,
       6,    1,  313,    2, 0x06 /* Public */,
       7,    2,  316,    2, 0x06 /* Public */,
       9,    2,  321,    2, 0x06 /* Public */,
      11,    2,  326,    2, 0x06 /* Public */,
      14,    1,  331,    2, 0x06 /* Public */,
      16,    7,  334,    2, 0x06 /* Public */,
      19,    5,  349,    2, 0x06 /* Public */,
      20,    3,  360,    2, 0x06 /* Public */,
      22,    7,  367,    2, 0x06 /* Public */,
      23,    5,  382,    2, 0x06 /* Public */,
      24,    3,  393,    2, 0x06 /* Public */,
      25,    2,  400,    2, 0x06 /* Public */,
      26,    2,  405,    2, 0x06 /* Public */,
      28,    3,  410,    2, 0x06 /* Public */,
      29,    3,  417,    2, 0x06 /* Public */,
      30,    2,  424,    2, 0x06 /* Public */,
      31,    1,  429,    2, 0x06 /* Public */,
      33,    1,  432,    2, 0x06 /* Public */,
      35,    1,  435,    2, 0x06 /* Public */,
      37,    2,  438,    2, 0x06 /* Public */,
      39,    1,  443,    2, 0x06 /* Public */,
      41,    2,  446,    2, 0x06 /* Public */,
      43,    2,  451,    2, 0x06 /* Public */,
      45,    2,  456,    2, 0x06 /* Public */,
      47,    6,  461,    2, 0x06 /* Public */,
      49,    0,  474,    2, 0x06 /* Public */,
      50,    0,  475,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      51,    7,  476,    2, 0x0a /* Public */,
      59,    5,  491,    2, 0x0a /* Public */,
      62,    2,  502,    2, 0x0a /* Public */,
      63,    6,  507,    2, 0x0a /* Public */,
      64,    4,  520,    2, 0x0a /* Public */,
      65,    2,  529,    2, 0x0a /* Public */,
      66,    1,  534,    2, 0x0a /* Public */,
      67,    1,  537,    2, 0x0a /* Public */,
      68,    2,  540,    2, 0x0a /* Public */,
      69,    2,  545,    2, 0x0a /* Public */,
      70,    1,  550,    2, 0x0a /* Public */,
      71,    1,  553,    2, 0x0a /* Public */,
      72,    0,  556,    2, 0x0a /* Public */,
      73,    0,  557,    2, 0x0a /* Public */,
      75,    0,  558,    2, 0x0a /* Public */,
      77,    6,  559,    2, 0x0a /* Public */,
      80,    5,  572,    2, 0x0a /* Public */,
      82,    8,  583,    2, 0x0a /* Public */,
      83,    6,  600,    2, 0x0a /* Public */,
      85,    4,  613,    2, 0x0a /* Public */,
      90,    0,  622,    2, 0x0a /* Public */,
      91,    0,  623,    2, 0x0a /* Public */,
      92,    1,  624,    2, 0x0a /* Public */,
      93,    1,  627,    2, 0x0a /* Public */,
      94,    1,  630,    2, 0x0a /* Public */,
      95,    1,  633,    2, 0x0a /* Public */,
      96,    2,  636,    2, 0x0a /* Public */,
      97,    2,  641,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Bool,    3,    8,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString,    3,   10,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   12,   13,
    QMetaType::Void, QMetaType::UInt,   15,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString, QMetaType::QString, 0x80000000 | 18, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString, QMetaType::QString, QMetaType::QStringList, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 21, QMetaType::ULongLong, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 21, QMetaType::ULongLong, QMetaType::QString, 0x80000000 | 18, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 21, QMetaType::ULongLong, QMetaType::QString, QMetaType::QStringList, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 21, QMetaType::ULongLong, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 21, QMetaType::ULongLong,    2,    2,
    QMetaType::Void, 0x80000000 | 27, QMetaType::ULongLong,    2,    2,
    QMetaType::Void, 0x80000000 | 27, QMetaType::ULongLong, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 21, QMetaType::ULongLong, QMetaType::ULongLong,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 21, QMetaType::ULongLong,    2,    2,
    QMetaType::Void, 0x80000000 | 32,    2,
    QMetaType::Void, 0x80000000 | 34,    2,
    QMetaType::Void, 0x80000000 | 36,    2,
    QMetaType::Void, 0x80000000 | 38, QMetaType::ULongLong,    2,    2,
    QMetaType::Void, 0x80000000 | 40,    2,
    QMetaType::Void, 0x80000000 | 42, QMetaType::ULongLong,    2,    2,
    QMetaType::Void, 0x80000000 | 44, QMetaType::ULongLong,    2,    2,
    QMetaType::Void, 0x80000000 | 46, QMetaType::ULongLong,    2,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 27, 0x80000000 | 21, 0x80000000 | 21, 0x80000000 | 21, 0x80000000 | 48,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 18, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 58,   52,   53,   54,   55,   56,   57,    3,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QStringList, QMetaType::QString, 0x80000000 | 58,   52,   60,   61,   57,    3,
    QMetaType::Bool, QMetaType::ULongLong, QMetaType::QString,    3,   57,
    QMetaType::Bool, QMetaType::ULongLong, QMetaType::QString, 0x80000000 | 18, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,   53,   54,   55,   56,   57,
    QMetaType::Bool, QMetaType::ULongLong, QMetaType::QString, QMetaType::QStringList, QMetaType::QString,    3,   60,   61,   57,
    QMetaType::Bool, QMetaType::ULongLong, QMetaType::Bool,    3,    8,
    QMetaType::Bool, QMetaType::ULongLong,    3,
    QMetaType::QString, QMetaType::ULongLong,    3,
    QMetaType::QString, QMetaType::ULongLong, QMetaType::QString,    3,   52,
    QMetaType::Bool, QMetaType::ULongLong, QMetaType::ULongLong,   12,   13,
    QMetaType::Bool, QMetaType::ULongLong,    3,
    QMetaType::Bool, QMetaType::UInt,   15,
    QMetaType::UInt,
    0x80000000 | 74,
    0x80000000 | 76,
    QMetaType::Bool, QMetaType::ULongLong, 0x80000000 | 27, 0x80000000 | 27, 0x80000000 | 21, 0x80000000 | 27, 0x80000000 | 27,    3,   52,   57,    8,   78,   79,
    QMetaType::Bool, QMetaType::ULongLong, 0x80000000 | 27, 0x80000000 | 27, 0x80000000 | 21, 0x80000000 | 81,    3,   52,   57,    8,   54,
    QMetaType::Bool, QMetaType::ULongLong, 0x80000000 | 27, 0x80000000 | 27, 0x80000000 | 21, 0x80000000 | 27, 0x80000000 | 81, 0x80000000 | 27, 0x80000000 | 27,    3,   52,   57,    8,   53,   54,   55,   56,
    QMetaType::Bool, QMetaType::ULongLong, 0x80000000 | 27, 0x80000000 | 27, 0x80000000 | 21, 0x80000000 | 27, 0x80000000 | 84,    3,   52,   57,    8,   60,   61,
    QMetaType::QString, QMetaType::UInt, 0x80000000 | 21, 0x80000000 | 21, 0x80000000 | 21,   86,   87,   88,   89,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Bool,    3,    8,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString,    3,   10,

       0        // eod
};

void DaemonAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DaemonAdaptor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actionAdded((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 1: _t->actionModified((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 2: _t->actionRemoved((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 3: _t->actionShortcutChanged((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 4: _t->actionEnabled((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->clientActionSenderChanged((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->actionsSwapped((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 7: _t->multipleActionsBehaviourChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->onAddMethodAction((*reinterpret_cast< QPair<QString,qulonglong>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 9: _t->onAddCommandAction((*reinterpret_cast< QPair<QString,qulonglong>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 10: _t->onModifyActionDescription((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->onModifyMethodAction((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 12: _t->onModifyCommandAction((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 13: _t->onEnableAction((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 14: _t->onIsActionEnabled((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 15: _t->onGetClientActionSender((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 16: _t->onChangeShortcut((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 17: _t->onSwapActions((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3]))); break;
        case 18: _t->onRemoveAction((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 19: _t->onSetMultipleActionsBehaviour((*reinterpret_cast< const MultipleActionsBehaviour(*)>(_a[1]))); break;
        case 20: _t->onGetMultipleActionsBehaviour((*reinterpret_cast< MultipleActionsBehaviour(*)>(_a[1]))); break;
        case 21: _t->onGetAllActionIds((*reinterpret_cast< QList<qulonglong>(*)>(_a[1]))); break;
        case 22: _t->onGetActionById((*reinterpret_cast< QPair<bool,GeneralActionInfo>(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 23: _t->onGetAllActions((*reinterpret_cast< QMap<qulonglong,GeneralActionInfo>(*)>(_a[1]))); break;
        case 24: _t->onGetClientActionInfoById((*reinterpret_cast< QPair<bool,ClientActionInfo>(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 25: _t->onGetMethodActionInfoById((*reinterpret_cast< QPair<bool,MethodActionInfo>(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 26: _t->onGetCommandActionInfoById((*reinterpret_cast< QPair<bool,CommandActionInfo>(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 27: _t->onGrabShortcut((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const QDBusMessage(*)>(_a[6]))); break;
        case 28: _t->onCancelShortcutGrab(); break;
        case 29: _t->onQuit(); break;
        case 30: { QString _r = _t->addMethodAction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< qulonglong(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 31: { QString _r = _t->addCommandAction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< qulonglong(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->modifyActionDescription((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->modifyMethodAction((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->modifyCommandAction((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { bool _r = _t->enableAction((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->isActionEnabled((*reinterpret_cast< qulonglong(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { QString _r = _t->getClientActionSender((*reinterpret_cast< qulonglong(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 38: { QString _r = _t->changeShortcut((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->swapActions((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { bool _r = _t->removeAction((*reinterpret_cast< qulonglong(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: { bool _r = _t->setMultipleActionsBehaviour((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { uint _r = _t->getMultipleActionsBehaviour();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 43: { QList<qulonglong> _r = _t->getAllActionIds();
            if (_a[0]) *reinterpret_cast< QList<qulonglong>*>(_a[0]) = std::move(_r); }  break;
        case 44: { QMap<qulonglong,GeneralActionInfo> _r = _t->getAllActions();
            if (_a[0]) *reinterpret_cast< QMap<qulonglong,GeneralActionInfo>*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->getActionById((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 46: { bool _r = _t->getClientActionInfoById((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QDBusObjectPath(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: { bool _r = _t->getMethodActionInfoById((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QDBusObjectPath(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 48: { bool _r = _t->getCommandActionInfoById((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QStringList(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: { QString _r = _t->grabShortcut((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->cancelShortcutGrab(); break;
        case 51: _t->quit(); break;
        case 52: _t->emit_actionAdded((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 53: _t->emit_actionModified((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 54: _t->emit_actionRemoved((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 55: _t->emit_actionShortcutChanged((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 56: _t->emit_actionEnabled((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 57: _t->emit_clientActionSenderChanged((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DaemonAdaptor::*)(qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::actionAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::actionModified)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::actionRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::actionShortcutChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(qulonglong , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::actionEnabled)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(qulonglong , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::clientActionSenderChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(qulonglong , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::actionsSwapped)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::multipleActionsBehaviourChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(QPair<QString,qulonglong> & , const QString & , const QString & , const QDBusObjectPath & , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onAddMethodAction)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(QPair<QString,qulonglong> & , const QString & , const QString & , const QStringList & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onAddCommandAction)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(bool & , qulonglong , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onModifyActionDescription)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(bool & , qulonglong , const QString & , const QDBusObjectPath & , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onModifyMethodAction)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(bool & , qulonglong , const QString & , const QStringList & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onModifyCommandAction)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(bool & , qulonglong , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onEnableAction)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(bool & , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onIsActionEnabled)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(QString & , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onGetClientActionSender)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(QString & , qulonglong , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onChangeShortcut)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(bool & , qulonglong , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onSwapActions)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(bool & , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onRemoveAction)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(const MultipleActionsBehaviour & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onSetMultipleActionsBehaviour)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(MultipleActionsBehaviour & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onGetMultipleActionsBehaviour)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(QList<qulonglong> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onGetAllActionIds)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(QPair<bool,GeneralActionInfo> & , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onGetActionById)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(QMap<qulonglong,GeneralActionInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onGetAllActions)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(QPair<bool,ClientActionInfo> & , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onGetClientActionInfoById)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(QPair<bool,MethodActionInfo> & , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onGetMethodActionInfoById)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(QPair<bool,CommandActionInfo> & , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onGetCommandActionInfoById)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)(uint , QString & , bool & , bool & , bool & , const QDBusMessage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onGrabShortcut)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onCancelShortcutGrab)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (DaemonAdaptor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonAdaptor::onQuit)) {
                *result = 29;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DaemonAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DaemonAdaptor.data,
    qt_meta_data_DaemonAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DaemonAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DaemonAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DaemonAdaptor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int DaemonAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    return _id;
}

// SIGNAL 0
void DaemonAdaptor::actionAdded(qulonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DaemonAdaptor::actionModified(qulonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DaemonAdaptor::actionRemoved(qulonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DaemonAdaptor::actionShortcutChanged(qulonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DaemonAdaptor::actionEnabled(qulonglong _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DaemonAdaptor::clientActionSenderChanged(qulonglong _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DaemonAdaptor::actionsSwapped(qulonglong _t1, qulonglong _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DaemonAdaptor::multipleActionsBehaviourChanged(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DaemonAdaptor::onAddMethodAction(QPair<QString,qulonglong> & _t1, const QString & _t2, const QString & _t3, const QDBusObjectPath & _t4, const QString & _t5, const QString & _t6, const QString & _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DaemonAdaptor::onAddCommandAction(QPair<QString,qulonglong> & _t1, const QString & _t2, const QString & _t3, const QStringList & _t4, const QString & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DaemonAdaptor::onModifyActionDescription(bool & _t1, qulonglong _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DaemonAdaptor::onModifyMethodAction(bool & _t1, qulonglong _t2, const QString & _t3, const QDBusObjectPath & _t4, const QString & _t5, const QString & _t6, const QString & _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DaemonAdaptor::onModifyCommandAction(bool & _t1, qulonglong _t2, const QString & _t3, const QStringList & _t4, const QString & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DaemonAdaptor::onEnableAction(bool & _t1, qulonglong _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DaemonAdaptor::onIsActionEnabled(bool & _t1, qulonglong _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DaemonAdaptor::onGetClientActionSender(QString & _t1, qulonglong _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DaemonAdaptor::onChangeShortcut(QString & _t1, qulonglong _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DaemonAdaptor::onSwapActions(bool & _t1, qulonglong _t2, qulonglong _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DaemonAdaptor::onRemoveAction(bool & _t1, qulonglong _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void DaemonAdaptor::onSetMultipleActionsBehaviour(const MultipleActionsBehaviour & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void DaemonAdaptor::onGetMultipleActionsBehaviour(MultipleActionsBehaviour & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void DaemonAdaptor::onGetAllActionIds(QList<qulonglong> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void DaemonAdaptor::onGetActionById(QPair<bool,GeneralActionInfo> & _t1, qulonglong _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void DaemonAdaptor::onGetAllActions(QMap<qulonglong,GeneralActionInfo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void DaemonAdaptor::onGetClientActionInfoById(QPair<bool,ClientActionInfo> & _t1, qulonglong _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void DaemonAdaptor::onGetMethodActionInfoById(QPair<bool,MethodActionInfo> & _t1, qulonglong _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void DaemonAdaptor::onGetCommandActionInfoById(QPair<bool,CommandActionInfo> & _t1, qulonglong _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void DaemonAdaptor::onGrabShortcut(uint _t1, QString & _t2, bool & _t3, bool & _t4, bool & _t5, const QDBusMessage & _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void DaemonAdaptor::onCancelShortcutGrab()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void DaemonAdaptor::onQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
