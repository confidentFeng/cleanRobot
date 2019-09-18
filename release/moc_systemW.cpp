/****************************************************************************
** Meta object code from reading C++ file 'systemW.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../systemW.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemW.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemW_t {
    QByteArrayData data[8];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemW_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemW_t qt_meta_stringdata_SystemW = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SystemW"
QT_MOC_LITERAL(1, 8, 16), // "doProseShowMoreW"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 27), // "on_returnMoreButton_clicked"
QT_MOC_LITERAL(4, 54, 20), // "doProssRecivThisShow"
QT_MOC_LITERAL(5, 75, 25), // "on_shutdownButton_clicked"
QT_MOC_LITERAL(6, 101, 23), // "on_rebootButton_clicked"
QT_MOC_LITERAL(7, 125, 22) // "on_aboutButton_clicked"

    },
    "SystemW\0doProseShowMoreW\0\0"
    "on_returnMoreButton_clicked\0"
    "doProssRecivThisShow\0on_shutdownButton_clicked\0"
    "on_rebootButton_clicked\0on_aboutButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemW[] = {

 // content:
       7,       // revision
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
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SystemW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SystemW *_t = static_cast<SystemW *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProseShowMoreW(); break;
        case 1: _t->on_returnMoreButton_clicked(); break;
        case 2: _t->doProssRecivThisShow(); break;
        case 3: _t->on_shutdownButton_clicked(); break;
        case 4: _t->on_rebootButton_clicked(); break;
        case 5: _t->on_aboutButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SystemW::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemW::doProseShowMoreW)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SystemW::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SystemW.data,
      qt_meta_data_SystemW,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SystemW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemW::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemW.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SystemW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SystemW::doProseShowMoreW()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
