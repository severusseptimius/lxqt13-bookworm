/****************************************************************************
** Meta object code from reading C++ file 'lxqtcustomcommand.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-customcommand/lxqtcustomcommand.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtcustomcommand.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtCustomCommand_t {
    QByteArrayData data[14];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtCustomCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtCustomCommand_t qt_meta_stringdata_LXQtCustomCommand = {
    {
QT_MOC_LITERAL(0, 0, 17), // "LXQtCustomCommand"
QT_MOC_LITERAL(1, 18, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "handleClick"
QT_MOC_LITERAL(4, 47, 14), // "handleFinished"
QT_MOC_LITERAL(5, 62, 8), // "exitCode"
QT_MOC_LITERAL(6, 71, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(7, 92, 10), // "exitStatus"
QT_MOC_LITERAL(8, 103, 19), // "handleWheelScrolled"
QT_MOC_LITERAL(9, 123, 6), // "yDelta"
QT_MOC_LITERAL(10, 130, 12), // "updateButton"
QT_MOC_LITERAL(11, 143, 10), // "runCommand"
QT_MOC_LITERAL(12, 154, 11), // "runDetached"
QT_MOC_LITERAL(13, 166, 7) // "command"

    },
    "LXQtCustomCommand\0settingsChanged\0\0"
    "handleClick\0handleFinished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "handleWheelScrolled\0yDelta\0updateButton\0"
    "runCommand\0runDetached\0command"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtCustomCommand[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    2,   51,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,
      11,    0,   60,    2, 0x08 /* Private */,
      12,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void LXQtCustomCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtCustomCommand *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: _t->handleClick(); break;
        case 2: _t->handleFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 3: _t->handleWheelScrolled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateButton(); break;
        case 5: _t->runCommand(); break;
        case 6: _t->runDetached((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LXQtCustomCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LXQtCustomCommand.data,
    qt_meta_data_LXQtCustomCommand,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtCustomCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtCustomCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtCustomCommand.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPlugin"))
        return static_cast< ILXQtPanelPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int LXQtCustomCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_LXQtCustomCommandPluginLibrary_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtCustomCommandPluginLibrary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtCustomCommandPluginLibrary_t qt_meta_stringdata_LXQtCustomCommandPluginLibrary = {
    {
QT_MOC_LITERAL(0, 0, 30) // "LXQtCustomCommandPluginLibrary"

    },
    "LXQtCustomCommandPluginLibrary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtCustomCommandPluginLibrary[] = {

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

void LXQtCustomCommandPluginLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LXQtCustomCommandPluginLibrary::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LXQtCustomCommandPluginLibrary.data,
    qt_meta_data_LXQtCustomCommandPluginLibrary,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtCustomCommandPluginLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtCustomCommandPluginLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtCustomCommandPluginLibrary.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPluginLibrary"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    if (!strcmp(_clname, "lxqt.org/Panel/PluginInterface/3.0"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    return QObject::qt_metacast(_clname);
}

int LXQtCustomCommandPluginLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x22,  'l',  'x',  'q',  't',  '.', 
    'o',  'r',  'g',  '/',  'P',  'a',  'n',  'e', 
    'l',  '/',  'P',  'l',  'u',  'g',  'i',  'n', 
    'I',  'n',  't',  'e',  'r',  'f',  'a',  'c', 
    'e',  '/',  '3',  '.',  '0', 
    // "className"
    0x03,  0x78,  0x1e,  'L',  'X',  'Q',  't',  'C', 
    'u',  's',  't',  'o',  'm',  'C',  'o',  'm', 
    'm',  'a',  'n',  'd',  'P',  'l',  'u',  'g', 
    'i',  'n',  'L',  'i',  'b',  'r',  'a',  'r', 
    'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(LXQtCustomCommandPluginLibrary, LXQtCustomCommandPluginLibrary)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
