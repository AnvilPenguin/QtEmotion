/****************************************************************************
** Meta object code from reading C++ file 'pysocket.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../pysocket.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pysocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPySocketENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPySocketENDCLASS = QtMocHelpers::stringData(
    "PySocket",
    "resultChanged",
    "",
    "imageChanged",
    "isSocketConnectedChanged",
    "isPythonRunningChanged",
    "getResult",
    "getImage",
    "socketConnect",
    "socketDisconnect",
    "serverStart",
    "result",
    "image",
    "isSocketConnected",
    "isPythonRunning"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPySocketENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[9];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[25];
    char stringdata5[23];
    char stringdata6[10];
    char stringdata7[9];
    char stringdata8[14];
    char stringdata9[17];
    char stringdata10[12];
    char stringdata11[7];
    char stringdata12[6];
    char stringdata13[18];
    char stringdata14[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPySocketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPySocketENDCLASS_t qt_meta_stringdata_CLASSPySocketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "PySocket"
        QT_MOC_LITERAL(9, 13),  // "resultChanged"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 12),  // "imageChanged"
        QT_MOC_LITERAL(37, 24),  // "isSocketConnectedChanged"
        QT_MOC_LITERAL(62, 22),  // "isPythonRunningChanged"
        QT_MOC_LITERAL(85, 9),  // "getResult"
        QT_MOC_LITERAL(95, 8),  // "getImage"
        QT_MOC_LITERAL(104, 13),  // "socketConnect"
        QT_MOC_LITERAL(118, 16),  // "socketDisconnect"
        QT_MOC_LITERAL(135, 11),  // "serverStart"
        QT_MOC_LITERAL(147, 6),  // "result"
        QT_MOC_LITERAL(154, 5),  // "image"
        QT_MOC_LITERAL(160, 17),  // "isSocketConnected"
        QT_MOC_LITERAL(178, 15)   // "isPythonRunning"
    },
    "PySocket",
    "resultChanged",
    "",
    "imageChanged",
    "isSocketConnectedChanged",
    "isPythonRunningChanged",
    "getResult",
    "getImage",
    "socketConnect",
    "socketDisconnect",
    "serverStart",
    "result",
    "image",
    "isSocketConnected",
    "isPythonRunning"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPySocketENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   77, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    5 /* Public */,
       3,    0,   69,    2, 0x06,    6 /* Public */,
       4,    0,   70,    2, 0x06,    7 /* Public */,
       5,    0,   71,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   72,    2, 0x0a,    9 /* Public */,
       7,    0,   73,    2, 0x0a,   10 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   74,    2, 0x02,   11 /* Public */,
       9,    0,   75,    2, 0x02,   12 /* Public */,
      10,    0,   76,    2, 0x02,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00015801, uint(0), 0,
      12, QMetaType::QImage, 0x00015801, uint(1), 0,
      13, QMetaType::Bool, 0x00015001, uint(2), 0,
      14, QMetaType::Bool, 0x00015001, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject PySocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPySocketENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPySocketENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPySocketENDCLASS_t,
        // property 'result'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'image'
        QtPrivate::TypeAndForceComplete<QImage, std::true_type>,
        // property 'isSocketConnected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isPythonRunning'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PySocket, std::true_type>,
        // method 'resultChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'imageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isSocketConnectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isPythonRunningChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'socketConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'socketDisconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serverStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PySocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PySocket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resultChanged(); break;
        case 1: _t->imageChanged(); break;
        case 2: _t->isSocketConnectedChanged(); break;
        case 3: _t->isPythonRunningChanged(); break;
        case 4: _t->getResult(); break;
        case 5: _t->getImage(); break;
        case 6: _t->socketConnect(); break;
        case 7: _t->socketDisconnect(); break;
        case 8: _t->serverStart(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PySocket::*)();
            if (_t _q_method = &PySocket::resultChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PySocket::*)();
            if (_t _q_method = &PySocket::imageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PySocket::*)();
            if (_t _q_method = &PySocket::isSocketConnectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PySocket::*)();
            if (_t _q_method = &PySocket::isPythonRunningChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PySocket *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->result(); break;
        case 1: *reinterpret_cast< QImage*>(_v) = _t->image(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isSocketConnected(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isPythonRunning(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *PySocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PySocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPySocketENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PySocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PySocket::resultChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PySocket::imageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PySocket::isSocketConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PySocket::isPythonRunningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
