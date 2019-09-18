/****************************************************************************
** Meta object code from reading C++ file 'mainW.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainW.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainW.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainW_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainW_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainW_t qt_meta_stringdata_MainW = {
    {
QT_MOC_LITERAL(0, 0, 5), // "MainW"
QT_MOC_LITERAL(1, 6, 22), // "on_cleanButton_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(4, 52, 21), // "on_moreButton_clicked"
QT_MOC_LITERAL(5, 74, 15), // "doProssShowthis"
QT_MOC_LITERAL(6, 90, 17), // "doProssReciveData"
QT_MOC_LITERAL(7, 108, 9), // "powerdata"
QT_MOC_LITERAL(8, 118, 9), // "waterdata"
QT_MOC_LITERAL(9, 128, 11) // "scheduldata"

    },
    "MainW\0on_cleanButton_clicked\0\0"
    "on_toolButton_clicked\0on_moreButton_clicked\0"
    "doProssShowthis\0doProssReciveData\0"
    "powerdata\0waterdata\0scheduldata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainW[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    3,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,

       0        // eod
};

void MainW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainW *_t = static_cast<MainW *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cleanButton_clicked(); break;
        case 1: _t->on_toolButton_clicked(); break;
        case 2: _t->on_moreButton_clicked(); break;
        case 3: _t->doProssShowthis(); break;
        case 4: _t->doProssReciveData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject MainW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainW.data,
      qt_meta_data_MainW,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainW::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainW.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
