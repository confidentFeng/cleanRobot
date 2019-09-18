/****************************************************************************
** Meta object code from reading C++ file 'specificpointd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../specificpointd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'specificpointd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpecificPointD_t {
    QByteArrayData data[10];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpecificPointD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpecificPointD_t qt_meta_stringdata_SpecificPointD = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SpecificPointD"
QT_MOC_LITERAL(1, 15, 16), // "doProseShowMoreW"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 23), // "doProssChangTheMainText"
QT_MOC_LITERAL(4, 57, 3), // "str"
QT_MOC_LITERAL(5, 61, 27), // "on_returnMoreButton_clicked"
QT_MOC_LITERAL(6, 89, 22), // "on_chargButton_clicked"
QT_MOC_LITERAL(7, 112, 22), // "on_drainButton_clicked"
QT_MOC_LITERAL(8, 135, 25), // "on_addWaterButton_clicked"
QT_MOC_LITERAL(9, 161, 16) // "doProessShowThis"

    },
    "SpecificPointD\0doProseShowMoreW\0\0"
    "doProssChangTheMainText\0str\0"
    "on_returnMoreButton_clicked\0"
    "on_chargButton_clicked\0on_drainButton_clicked\0"
    "on_addWaterButton_clicked\0doProessShowThis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpecificPointD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SpecificPointD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpecificPointD *_t = static_cast<SpecificPointD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProseShowMoreW(); break;
        case 1: _t->doProssChangTheMainText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_returnMoreButton_clicked(); break;
        case 3: _t->on_chargButton_clicked(); break;
        case 4: _t->on_drainButton_clicked(); break;
        case 5: _t->on_addWaterButton_clicked(); break;
        case 6: _t->doProessShowThis(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SpecificPointD::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpecificPointD::doProseShowMoreW)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SpecificPointD::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpecificPointD::doProssChangTheMainText)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SpecificPointD::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SpecificPointD.data,
      qt_meta_data_SpecificPointD,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpecificPointD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpecificPointD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpecificPointD.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SpecificPointD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SpecificPointD::doProseShowMoreW()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SpecificPointD::doProssChangTheMainText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
