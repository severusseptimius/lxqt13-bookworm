/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../config/main_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "daemonDisappeared"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "daemonAppeared"
QT_MOC_LITERAL(4, 45, 31), // "multipleActionsBehaviourChanged"
QT_MOC_LITERAL(5, 77, 24), // "MultipleActionsBehaviour"
QT_MOC_LITERAL(6, 102, 9), // "behaviour"
QT_MOC_LITERAL(7, 112, 16), // "selectionChanged"
QT_MOC_LITERAL(8, 129, 14), // "QItemSelection"
QT_MOC_LITERAL(9, 144, 17), // "on_add_PB_clicked"
QT_MOC_LITERAL(10, 162, 20), // "on_modify_PB_clicked"
QT_MOC_LITERAL(11, 183, 18), // "on_swap_PB_clicked"
QT_MOC_LITERAL(12, 202, 20), // "on_remove_PB_clicked"
QT_MOC_LITERAL(13, 223, 21), // "on_default_PB_clicked"
QT_MOC_LITERAL(14, 245, 50), // "on_multipleActionsBehaviour_C..."
QT_MOC_LITERAL(15, 296, 27), // "on_actions_TV_doubleClicked"
QT_MOC_LITERAL(16, 324, 11) // "QModelIndex"

    },
    "MainWindow\0daemonDisappeared\0\0"
    "daemonAppeared\0multipleActionsBehaviourChanged\0"
    "MultipleActionsBehaviour\0behaviour\0"
    "selectionChanged\0QItemSelection\0"
    "on_add_PB_clicked\0on_modify_PB_clicked\0"
    "on_swap_PB_clicked\0on_remove_PB_clicked\0"
    "on_default_PB_clicked\0"
    "on_multipleActionsBehaviour_CB_currentIndexChanged\0"
    "on_actions_TV_doubleClicked\0QModelIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    1,   71,    2, 0x0a /* Public */,
       7,    2,   74,    2, 0x09 /* Protected */,
       9,    0,   79,    2, 0x09 /* Protected */,
      10,    0,   80,    2, 0x09 /* Protected */,
      11,    0,   81,    2, 0x09 /* Protected */,
      12,    0,   82,    2, 0x09 /* Protected */,
      13,    0,   83,    2, 0x09 /* Protected */,
      14,    1,   84,    2, 0x09 /* Protected */,
      15,    1,   87,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 16,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->daemonDisappeared(); break;
        case 1: _t->daemonAppeared(); break;
        case 2: _t->multipleActionsBehaviourChanged((*reinterpret_cast< MultipleActionsBehaviour(*)>(_a[1]))); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 4: _t->on_add_PB_clicked(); break;
        case 5: _t->on_modify_PB_clicked(); break;
        case 6: _t->on_swap_PB_clicked(); break;
        case 7: _t->on_remove_PB_clicked(); break;
        case 8: _t->on_default_PB_clicked(); break;
        case 9: _t->on_multipleActionsBehaviour_CB_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_actions_TV_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
