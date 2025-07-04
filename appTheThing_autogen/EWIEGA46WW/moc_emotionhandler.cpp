/****************************************************************************
** Meta object code from reading C++ file 'emotionhandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../emotionhandler.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emotionhandler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSEmotionHandlerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSEmotionHandlerENDCLASS = QtMocHelpers::stringData(
    "EmotionHandler",
    "emotionChanged",
    "",
    "distanceChanged",
    "isManualChanged",
    "onEmotionChanged",
    "onCommandAccepted",
    "setDistance",
    "distance",
    "setIsManual",
    "state",
    "emotion",
    "isManual"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEmotionHandlerENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[15];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[16];
    char stringdata5[17];
    char stringdata6[18];
    char stringdata7[12];
    char stringdata8[9];
    char stringdata9[12];
    char stringdata10[6];
    char stringdata11[8];
    char stringdata12[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEmotionHandlerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEmotionHandlerENDCLASS_t qt_meta_stringdata_CLASSEmotionHandlerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "EmotionHandler"
        QT_MOC_LITERAL(15, 14),  // "emotionChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 15),  // "distanceChanged"
        QT_MOC_LITERAL(47, 15),  // "isManualChanged"
        QT_MOC_LITERAL(63, 16),  // "onEmotionChanged"
        QT_MOC_LITERAL(80, 17),  // "onCommandAccepted"
        QT_MOC_LITERAL(98, 11),  // "setDistance"
        QT_MOC_LITERAL(110, 8),  // "distance"
        QT_MOC_LITERAL(119, 11),  // "setIsManual"
        QT_MOC_LITERAL(131, 5),  // "state"
        QT_MOC_LITERAL(137, 7),  // "emotion"
        QT_MOC_LITERAL(145, 8)   // "isManual"
    },
    "EmotionHandler",
    "emotionChanged",
    "",
    "distanceChanged",
    "isManualChanged",
    "onEmotionChanged",
    "onCommandAccepted",
    "setDistance",
    "distance",
    "setIsManual",
    "state",
    "emotion",
    "isManual"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEmotionHandlerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   67, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    4 /* Public */,
       3,    0,   57,    2, 0x06,    5 /* Public */,
       4,    0,   58,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   59,    2, 0x0a,    7 /* Public */,
       6,    0,   60,    2, 0x0a,    8 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   61,    2, 0x02,    9 /* Public */,
       9,    1,   64,    2, 0x02,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00015801, uint(0), 0,
       8, QMetaType::Int, 0x00015103, uint(1), 0,
      12, QMetaType::Bool, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject EmotionHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSEmotionHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEmotionHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEmotionHandlerENDCLASS_t,
        // property 'emotion'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'distance'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'isManual'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EmotionHandler, std::true_type>,
        // method 'emotionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'distanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isManualChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEmotionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCommandAccepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDistance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'setIsManual'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void EmotionHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EmotionHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emotionChanged(); break;
        case 1: _t->distanceChanged(); break;
        case 2: _t->isManualChanged(); break;
        case 3: _t->onEmotionChanged(); break;
        case 4: _t->onCommandAccepted(); break;
        case 5: _t->setDistance((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setIsManual((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EmotionHandler::*)();
            if (_t _q_method = &EmotionHandler::emotionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EmotionHandler::*)();
            if (_t _q_method = &EmotionHandler::distanceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EmotionHandler::*)();
            if (_t _q_method = &EmotionHandler::isManualChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EmotionHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->emotion(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->distance(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isManual(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<EmotionHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDistance(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setIsManual(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *EmotionHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmotionHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEmotionHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EmotionHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void EmotionHandler::emotionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EmotionHandler::distanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EmotionHandler::isManualChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
