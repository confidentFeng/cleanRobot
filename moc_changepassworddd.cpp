/****************************************************************************
** Meta object code from reading C++ file 'changepassworddd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "changepassworddd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changepassworddd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChangePasswordDD_t {
    QByteArrayData data[6];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChangePasswordDD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChangePasswordDD_t qt_meta_stringdata_ChangePasswordDD = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ChangePasswordDD"
QT_MOC_LITERAL(1, 17, 22), // "doProseShowlockscreend"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 27), // "on_returnMoreButton_clicked"
QT_MOC_LITERAL(4, 69, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(5, 89, 19) // "on_okButton_pressed"

    },
    "ChangePasswordDD\0doProseShowlockscreend\0"
    "\0on_returnMoreButton_clicked\0"
    "on_okButton_clicked\0on_okButton_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChangePasswordDD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChangePasswordDD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChangePasswordDD *_t = static_cast<ChangePasswordDD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProseShowlockscreend(); break;
        case 1: _t->on_returnMoreButton_clicked(); break;
        case 2: _t->on_okButton_clicked(); break;
        case 3: _t->on_okButton_pressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ChangePasswordDD::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChangePasswordDD::doProseShowlockscreend)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ChangePasswordDD::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChangePasswordDD.data,
      qt_meta_data_ChangePasswordDD,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ChangePasswordDD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChangePasswordDD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChangePasswordDD.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChangePasswordDD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ChangePasswordDD::doProseShowlockscreend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
