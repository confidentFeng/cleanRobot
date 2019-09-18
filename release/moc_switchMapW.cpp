/****************************************************************************
** Meta object code from reading C++ file 'switchMapW.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../switchMapW.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'switchMapW.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SwitchMapW_t {
    QByteArrayData data[10];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SwitchMapW_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SwitchMapW_t qt_meta_stringdata_SwitchMapW = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SwitchMapW"
QT_MOC_LITERAL(1, 11, 16), // "doProseShowMoreW"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "doProssSendMapPath"
QT_MOC_LITERAL(4, 48, 4), // "path"
QT_MOC_LITERAL(5, 53, 27), // "on_returnMoreButton_clicked"
QT_MOC_LITERAL(6, 81, 21), // "on_listWidget_clicked"
QT_MOC_LITERAL(7, 103, 5), // "index"
QT_MOC_LITERAL(8, 109, 26), // "on_returnMapButton_clicked"
QT_MOC_LITERAL(9, 136, 21) // "doProcessReciverMapOk"

    },
    "SwitchMapW\0doProseShowMoreW\0\0"
    "doProssSendMapPath\0path\0"
    "on_returnMoreButton_clicked\0"
    "on_listWidget_clicked\0index\0"
    "on_returnMapButton_clicked\0"
    "doProcessReciverMapOk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SwitchMapW[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SwitchMapW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SwitchMapW *_t = static_cast<SwitchMapW *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProseShowMoreW(); break;
        case 1: _t->doProssSendMapPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_returnMoreButton_clicked(); break;
        case 3: _t->on_listWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_returnMapButton_clicked(); break;
        case 5: _t->doProcessReciverMapOk(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SwitchMapW::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SwitchMapW::doProseShowMoreW)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SwitchMapW::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SwitchMapW::doProssSendMapPath)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SwitchMapW::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SwitchMapW.data,
      qt_meta_data_SwitchMapW,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SwitchMapW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SwitchMapW::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SwitchMapW.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SwitchMapW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SwitchMapW::doProseShowMoreW()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SwitchMapW::doProssSendMapPath(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
