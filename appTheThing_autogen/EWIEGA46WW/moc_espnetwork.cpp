/****************************************************************************
** Meta object code from reading C++ file 'espnetwork.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../espnetwork.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'espnetwork.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSEspNetworkENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSEspNetworkENDCLASS = QtMocHelpers::stringData(
    "EspNetwork",
    "esp32IpChanged",
    "",
    "speedChanged",
    "commandAccepted",
    "setEsp32Ip",
    "esp32Ip",
    "setSpeed",
    "speed",
    "sendSpeed",
    "sendCommand",
    "command"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEspNetworkENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[16];
    char stringdata5[11];
    char stringdata6[8];
    char stringdata7[9];
    char stringdata8[6];
    char stringdata9[10];
    char stringdata10[12];
    char stringdata11[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEspNetworkENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEspNetworkENDCLASS_t qt_meta_stringdata_CLASSEspNetworkENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "EspNetwork"
        QT_MOC_LITERAL(11, 14),  // "esp32IpChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 12),  // "speedChanged"
        QT_MOC_LITERAL(40, 15),  // "commandAccepted"
        QT_MOC_LITERAL(56, 10),  // "setEsp32Ip"
        QT_MOC_LITERAL(67, 7),  // "esp32Ip"
        QT_MOC_LITERAL(75, 8),  // "setSpeed"
        QT_MOC_LITERAL(84, 5),  // "speed"
        QT_MOC_LITERAL(90, 9),  // "sendSpeed"
        QT_MOC_LITERAL(100, 11),  // "sendCommand"
        QT_MOC_LITERAL(112, 7)   // "command"
    },
    "EspNetwork",
    "esp32IpChanged",
    "",
    "speedChanged",
    "commandAccepted",
    "setEsp32Ip",
    "esp32Ip",
    "setSpeed",
    "speed",
    "sendSpeed",
    "sendCommand",
    "command"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEspNetworkENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    3 /* Public */,
       3,    0,   57,    2, 0x06,    4 /* Public */,
       4,    0,   58,    2, 0x06,    5 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   59,    2, 0x02,    6 /* Public */,
       7,    1,   62,    2, 0x02,    8 /* Public */,
       9,    0,   65,    2, 0x02,   10 /* Public */,
      10,    1,   66,    2, 0x02,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00015903, uint(0), 0,
       8, QMetaType::Int, 0x00015903, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject EspNetwork::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSEspNetworkENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEspNetworkENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEspNetworkENDCLASS_t,
        // property 'esp32Ip'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'speed'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EspNetwork, std::true_type>,
        // method 'esp32IpChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'speedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'commandAccepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setEsp32Ip'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'sendSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void EspNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EspNetwork *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->esp32IpChanged(); break;
        case 1: _t->speedChanged(); break;
        case 2: _t->commandAccepted(); break;
        case 3: _t->setEsp32Ip((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->setSpeed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->sendSpeed(); break;
        case 6: _t->sendCommand((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EspNetwork::*)();
            if (_t _q_method = &EspNetwork::esp32IpChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EspNetwork::*)();
            if (_t _q_method = &EspNetwork::speedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EspNetwork::*)();
            if (_t _q_method = &EspNetwork::commandAccepted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EspNetwork *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->esp32Ip(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->speed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<EspNetwork *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEsp32Ip(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSpeed(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *EspNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EspNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEspNetworkENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EspNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void EspNetwork::esp32IpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EspNetwork::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EspNetwork::commandAccepted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
