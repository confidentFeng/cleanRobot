/****************************************************************************
** Meta object code from reading C++ file 'morew.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "morew.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'morew.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moreW_t {
    QByteArrayData data[12];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moreW_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moreW_t qt_meta_stringdata_moreW = {
    {
QT_MOC_LITERAL(0, 0, 5), // "moreW"
QT_MOC_LITERAL(1, 6, 16), // "doProseShowmainw"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 27), // "on_returnMainButton_clicked"
QT_MOC_LITERAL(4, 52, 24), // "on_genRoadButton_clicked"
QT_MOC_LITERAL(5, 77, 26), // "on_switchMapButton_clicked"
QT_MOC_LITERAL(6, 104, 27), // "on_lockScreenButton_clicked"
QT_MOC_LITERAL(7, 132, 28), // "on_cleanReportButton_clicked"
QT_MOC_LITERAL(8, 161, 23), // "on_adModeButton_clicked"
QT_MOC_LITERAL(9, 185, 25), // "on_spePointButton_clicked"
QT_MOC_LITERAL(10, 211, 23), // "on_systemButton_clicked"
QT_MOC_LITERAL(11, 235, 15) // "doProssShowthis"

    },
    "moreW\0doProseShowmainw\0\0"
    "on_returnMainButton_clicked\0"
    "on_genRoadButton_clicked\0"
    "on_switchMapButton_clicked\0"
    "on_lockScreenButton_clicked\0"
    "on_cleanReportButton_clicked\0"
    "on_adModeButton_clicked\0"
    "on_spePointButton_clicked\0"
    "on_systemButton_clicked\0doProssShowthis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moreW[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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

       0        // eod
};

void moreW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        moreW *_t = static_cast<moreW *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProseShowmainw(); break;
        case 1: _t->on_returnMainButton_clicked(); break;
        case 2: _t->on_genRoadButton_clicked(); break;
        case 3: _t->on_switchMapButton_clicked(); break;
        case 4: _t->on_lockScreenButton_clicked(); break;
        case 5: _t->on_cleanReportButton_clicked(); break;
        case 6: _t->on_adModeButton_clicked(); break;
        case 7: _t->on_spePointButton_clicked(); break;
        case 8: _t->on_systemButton_clicked(); break;
        case 9: _t->doProssShowthis(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (moreW::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&moreW::doProseShowmainw)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject moreW::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_moreW.data,
      qt_meta_data_moreW,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *moreW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moreW::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moreW.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int moreW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void moreW::doProseShowmainw()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
