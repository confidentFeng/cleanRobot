/****************************************************************************
** Meta object code from reading C++ file 'switchMapShowW.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../switchMapShowW.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'switchMapShowW.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SwitchMapShowW_t {
    QByteArrayData data[7];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SwitchMapShowW_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SwitchMapShowW_t qt_meta_stringdata_SwitchMapShowW = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SwitchMapShowW"
QT_MOC_LITERAL(1, 15, 18), // "doProcessSendMapOK"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "RrciveMapPath"
QT_MOC_LITERAL(4, 49, 4), // "path"
QT_MOC_LITERAL(5, 54, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(6, 74, 23) // "on_cancelButton_clicked"

    },
    "SwitchMapShowW\0doProcessSendMapOK\0\0"
    "RrciveMapPath\0path\0on_okButton_clicked\0"
    "on_cancelButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SwitchMapShowW[] = {

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
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SwitchMapShowW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SwitchMapShowW *_t = static_cast<SwitchMapShowW *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProcessSendMapOK(); break;
        case 1: _t->RrciveMapPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_okButton_clicked(); break;
        case 3: _t->on_cancelButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SwitchMapShowW::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SwitchMapShowW::doProcessSendMapOK)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SwitchMapShowW::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SwitchMapShowW.data,
      qt_meta_data_SwitchMapShowW,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SwitchMapShowW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SwitchMapShowW::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SwitchMapShowW.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SwitchMapShowW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SwitchMapShowW::doProcessSendMapOK()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
