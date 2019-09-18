/****************************************************************************
** Meta object code from reading C++ file 'toolw.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toolw.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_toolW_t {
    QByteArrayData data[12];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_toolW_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_toolW_t qt_meta_stringdata_toolW = {
    {
QT_MOC_LITERAL(0, 0, 5), // "toolW"
QT_MOC_LITERAL(1, 6, 16), // "doProseShowmainw"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 20), // "doProssChangeTheText"
QT_MOC_LITERAL(4, 45, 3), // "str"
QT_MOC_LITERAL(5, 49, 27), // "on_returnMainButton_clicked"
QT_MOC_LITERAL(6, 77, 20), // "on_fanButton_clicked"
QT_MOC_LITERAL(7, 98, 24), // "on_suckingButton_clicked"
QT_MOC_LITERAL(8, 123, 22), // "on_brushButton_clicked"
QT_MOC_LITERAL(9, 146, 24), // "on_brushUpButton_clicked"
QT_MOC_LITERAL(10, 171, 19), // "on_adButton_clicked"
QT_MOC_LITERAL(11, 191, 27) // "on_brushSpeedButton_clicked"

    },
    "toolW\0doProseShowmainw\0\0doProssChangeTheText\0"
    "str\0on_returnMainButton_clicked\0"
    "on_fanButton_clicked\0on_suckingButton_clicked\0"
    "on_brushButton_clicked\0on_brushUpButton_clicked\0"
    "on_adButton_clicked\0on_brushSpeedButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_toolW[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void toolW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        toolW *_t = static_cast<toolW *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProseShowmainw(); break;
        case 1: _t->doProssChangeTheText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_returnMainButton_clicked(); break;
        case 3: _t->on_fanButton_clicked(); break;
        case 4: _t->on_suckingButton_clicked(); break;
        case 5: _t->on_brushButton_clicked(); break;
        case 6: _t->on_brushUpButton_clicked(); break;
        case 7: _t->on_adButton_clicked(); break;
        case 8: _t->on_brushSpeedButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (toolW::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&toolW::doProseShowmainw)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (toolW::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&toolW::doProssChangeTheText)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject toolW::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toolW.data,
      qt_meta_data_toolW,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *toolW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *toolW::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_toolW.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int toolW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void toolW::doProseShowmainw()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void toolW::doProssChangeTheText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
