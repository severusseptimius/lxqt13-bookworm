/****************************************************************************
** Meta object code from reading C++ file 'lxqtnetworkmonitorplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-networkmonitor/lxqtnetworkmonitorplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtnetworkmonitorplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtNetworkMonitorPlugin_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtNetworkMonitorPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtNetworkMonitorPlugin_t qt_meta_stringdata_LXQtNetworkMonitorPlugin = {
    {
QT_MOC_LITERAL(0, 0, 24) // "LXQtNetworkMonitorPlugin"

    },
    "LXQtNetworkMonitorPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtNetworkMonitorPlugin[] = {

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

void LXQtNetworkMonitorPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LXQtNetworkMonitorPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LXQtNetworkMonitorPlugin.data,
    qt_meta_data_LXQtNetworkMonitorPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtNetworkMonitorPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtNetworkMonitorPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtNetworkMonitorPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPlugin"))
        return static_cast< ILXQtPanelPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int LXQtNetworkMonitorPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LXQtNetworkMonitorPluginLibrary_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtNetworkMonitorPluginLibrary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtNetworkMonitorPluginLibrary_t qt_meta_stringdata_LXQtNetworkMonitorPluginLibrary = {
    {
QT_MOC_LITERAL(0, 0, 31) // "LXQtNetworkMonitorPluginLibrary"

    },
    "LXQtNetworkMonitorPluginLibrary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtNetworkMonitorPluginLibrary[] = {

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

void LXQtNetworkMonitorPluginLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LXQtNetworkMonitorPluginLibrary::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LXQtNetworkMonitorPluginLibrary.data,
    qt_meta_data_LXQtNetworkMonitorPluginLibrary,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtNetworkMonitorPluginLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtNetworkMonitorPluginLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtNetworkMonitorPluginLibrary.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPluginLibrary"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    if (!strcmp(_clname, "lxqt.org/Panel/PluginInterface/3.0"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    return QObject::qt_metacast(_clname);
}

int LXQtNetworkMonitorPluginLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x03,  0x78,  0x1f,  'L',  'X',  'Q',  't',  'N', 
    'e',  't',  'w',  'o',  'r',  'k',  'M',  'o', 
    'n',  'i',  't',  'o',  'r',  'P',  'l',  'u', 
    'g',  'i',  'n',  'L',  'i',  'b',  'r',  'a', 
    'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(LXQtNetworkMonitorPluginLibrary, LXQtNetworkMonitorPluginLibrary)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
