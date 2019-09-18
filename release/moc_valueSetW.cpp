/****************************************************************************
** Meta object code from reading C++ file 'valueSetW.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../valueSetW.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valueSetW.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ValueSetW_t {
    QByteArrayData data[13];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ValueSetW_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ValueSetW_t qt_meta_stringdata_ValueSetW = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ValueSetW"
QT_MOC_LITERAL(1, 10, 17), // "doProseShowParent"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 29), // "on_returnParentButton_clicked"
QT_MOC_LITERAL(4, 59, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(5, 80, 20), // "on_addButton_pressed"
QT_MOC_LITERAL(6, 101, 21), // "on_addButton_released"
QT_MOC_LITERAL(7, 123, 21), // "on_lessButton_clicked"
QT_MOC_LITERAL(8, 145, 21), // "on_lessButton_pressed"
QT_MOC_LITERAL(9, 167, 22), // "on_lessButton_released"
QT_MOC_LITERAL(10, 190, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(11, 210, 19), // "on_okButton_pressed"
QT_MOC_LITERAL(12, 230, 17) // "halfSecondTimeout"

    },
    "ValueSetW\0doProseShowParent\0\0"
    "on_returnParentButton_clicked\0"
    "on_addButton_clicked\0on_addButton_pressed\0"
    "on_addButton_released\0on_lessButton_clicked\0"
    "on_lessButton_pressed\0on_lessButton_released\0"
    "on_okButton_clicked\0on_okButton_pressed\0"
    "halfSecondTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ValueSetW[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
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

       0        // eod
};

void ValueSetW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ValueSetW *_t = static_cast<ValueSetW *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProseShowParent(); break;
        case 1: _t->on_returnParentButton_clicked(); break;
        case 2: _t->on_addButton_clicked(); break;
        case 3: _t->on_addButton_pressed(); break;
        case 4: _t->on_addButton_released(); break;
        case 5: _t->on_lessButton_clicked(); break;
        case 6: _t->on_lessButton_pressed(); break;
        case 7: _t->on_lessButton_released(); break;
        case 8: _t->on_okButton_clicked(); break;
        case 9: _t->on_okButton_pressed(); break;
        case 10: _t->halfSecondTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ValueSetW::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValueSetW::doProseShowParent)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ValueSetW::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ValueSetW.data,
      qt_meta_data_ValueSetW,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ValueSetW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ValueSetW::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ValueSetW.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ValueSetW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ValueSetW::doProseShowParent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
