/****************************************************************************
** Meta object code from reading C++ file 'desktoppreferencesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../pcmanfm/desktoppreferencesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktoppreferencesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PCManFM__DesktopPreferencesDialog_t {
    QByteArrayData data[11];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCManFM__DesktopPreferencesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCManFM__DesktopPreferencesDialog_t qt_meta_stringdata_PCManFM__DesktopPreferencesDialog = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PCManFM::DesktopPreferencesDi..."
QT_MOC_LITERAL(1, 34, 14), // "onApplyClicked"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 22), // "onWallpaperModeChanged"
QT_MOC_LITERAL(4, 73, 5), // "index"
QT_MOC_LITERAL(5, 79, 15), // "onBrowseClicked"
QT_MOC_LITERAL(6, 95, 21), // "onFolderBrowseClicked"
QT_MOC_LITERAL(7, 117, 28), // "onBrowseDesktopFolderClicked"
QT_MOC_LITERAL(8, 146, 11), // "lockMargins"
QT_MOC_LITERAL(9, 158, 4), // "lock"
QT_MOC_LITERAL(10, 163, 13) // "applySettings"

    },
    "PCManFM::DesktopPreferencesDialog\0"
    "onApplyClicked\0\0onWallpaperModeChanged\0"
    "index\0onBrowseClicked\0onFolderBrowseClicked\0"
    "onBrowseDesktopFolderClicked\0lockMargins\0"
    "lock\0applySettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCManFM__DesktopPreferencesDialog[] = {

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
       3,    1,   50,    2, 0x09 /* Protected */,
       5,    0,   53,    2, 0x09 /* Protected */,
       6,    0,   54,    2, 0x09 /* Protected */,
       7,    0,   55,    2, 0x09 /* Protected */,
       8,    1,   56,    2, 0x09 /* Protected */,
      10,    0,   59,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

       0        // eod
};

void PCManFM::DesktopPreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DesktopPreferencesDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onApplyClicked(); break;
        case 1: _t->onWallpaperModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onBrowseClicked(); break;
        case 3: _t->onFolderBrowseClicked(); break;
        case 4: _t->onBrowseDesktopFolderClicked(); break;
        case 5: _t->lockMargins((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->applySettings(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PCManFM::DesktopPreferencesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PCManFM__DesktopPreferencesDialog.data,
    qt_meta_data_PCManFM__DesktopPreferencesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCManFM::DesktopPreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCManFM::DesktopPreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCManFM__DesktopPreferencesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PCManFM::DesktopPreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
