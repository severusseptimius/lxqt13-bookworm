/****************************************************************************
** Meta object code from reading C++ file 'lxqtsysstatcolours.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-sysstat/lxqtsysstatcolours.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtsysstatcolours.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtSysStatColours_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtSysStatColours_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtSysStatColours_t qt_meta_stringdata_LXQtSysStatColours = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LXQtSysStatColours"
QT_MOC_LITERAL(1, 19, 14), // "coloursChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "on_buttons_clicked"
QT_MOC_LITERAL(4, 54, 16), // "QAbstractButton*"
QT_MOC_LITERAL(5, 71, 12), // "selectColour"
QT_MOC_LITERAL(6, 84, 15), // "restoreDefaults"
QT_MOC_LITERAL(7, 100, 5), // "reset"
QT_MOC_LITERAL(8, 106, 5) // "apply"

    },
    "LXQtSysStatColours\0coloursChanged\0\0"
    "on_buttons_clicked\0QAbstractButton*\0"
    "selectColour\0restoreDefaults\0reset\0"
    "apply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtSysStatColours[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       6,    0,   51,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LXQtSysStatColours::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtSysStatColours *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->coloursChanged(); break;
        case 1: _t->on_buttons_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->selectColour((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->restoreDefaults(); break;
        case 4: _t->reset(); break;
        case 5: _t->apply(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LXQtSysStatColours::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LXQtSysStatColours::coloursChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LXQtSysStatColours::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_LXQtSysStatColours.data,
    qt_meta_data_LXQtSysStatColours,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtSysStatColours::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtSysStatColours::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtSysStatColours.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LXQtSysStatColours::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void LXQtSysStatColours::coloursChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
