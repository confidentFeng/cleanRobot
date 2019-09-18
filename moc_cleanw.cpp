/****************************************************************************
** Meta object code from reading C++ file 'cleanw.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cleanw.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cleanw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cleanW_t {
    QByteArrayData data[13];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cleanW_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cleanW_t qt_meta_stringdata_cleanW = {
    {
QT_MOC_LITERAL(0, 0, 6), // "cleanW"
QT_MOC_LITERAL(1, 7, 16), // "doProseShowmainw"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 27), // "on_returnMainButton_clicked"
QT_MOC_LITERAL(4, 53, 25), // "on_addBoardButton_clicked"
QT_MOC_LITERAL(5, 79, 26), // "on_lessBoardButton_clicked"
QT_MOC_LITERAL(6, 106, 27), // "on_resetBoardButton_clicked"
QT_MOC_LITERAL(7, 134, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(8, 157, 21), // "on_lockButton_clicked"
QT_MOC_LITERAL(9, 179, 17), // "doProssReciveData"
QT_MOC_LITERAL(10, 197, 11), // "scheduldata"
QT_MOC_LITERAL(11, 209, 9), // "powerdata"
QT_MOC_LITERAL(12, 219, 9) // "waterdata"

    },
    "cleanW\0doProseShowmainw\0\0"
    "on_returnMainButton_clicked\0"
    "on_addBoardButton_clicked\0"
    "on_lessBoardButton_clicked\0"
    "on_resetBoardButton_clicked\0"
    "on_startButton_clicked\0on_lockButton_clicked\0"
    "doProssReciveData\0scheduldata\0powerdata\0"
    "waterdata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cleanW[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    3,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,

       0        // eod
};

void cleanW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cleanW *_t = static_cast<cleanW *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProseShowmainw(); break;
        case 1: _t->on_returnMainButton_clicked(); break;
        case 2: _t->on_addBoardButton_clicked(); break;
        case 3: _t->on_lessBoardButton_clicked(); break;
        case 4: _t->on_resetBoardButton_clicked(); break;
        case 5: _t->on_startButton_clicked(); break;
        case 6: _t->on_lockButton_clicked(); break;
        case 7: _t->doProssReciveData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (cleanW::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cleanW::doProseShowmainw)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cleanW::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cleanW.data,
      qt_meta_data_cleanW,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cleanW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cleanW::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cleanW.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int cleanW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void cleanW::doProseShowmainw()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
