/****************************************************************************
** Meta object code from reading C++ file 'AcademicPushButton.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../AcademicPushButton.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AcademicPushButton.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAcademicPushButtonENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAcademicPushButtonENDCLASS = QtMocHelpers::stringData(
    "AcademicPushButton",
    "mouseEntered",
    "",
    "mouseLeft",
    "buttonPressed",
    "buttonReleased",
    "updateLoadingAnimation",
    "backgroundColor",
    "textColor",
    "borderColor",
    "borderRadius"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAcademicPushButtonENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[19];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[14];
    char stringdata5[15];
    char stringdata6[23];
    char stringdata7[16];
    char stringdata8[10];
    char stringdata9[12];
    char stringdata10[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAcademicPushButtonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAcademicPushButtonENDCLASS_t qt_meta_stringdata_CLASSAcademicPushButtonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "AcademicPushButton"
        QT_MOC_LITERAL(19, 12),  // "mouseEntered"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 9),  // "mouseLeft"
        QT_MOC_LITERAL(43, 13),  // "buttonPressed"
        QT_MOC_LITERAL(57, 14),  // "buttonReleased"
        QT_MOC_LITERAL(72, 22),  // "updateLoadingAnimation"
        QT_MOC_LITERAL(95, 15),  // "backgroundColor"
        QT_MOC_LITERAL(111, 9),  // "textColor"
        QT_MOC_LITERAL(121, 11),  // "borderColor"
        QT_MOC_LITERAL(133, 12)   // "borderRadius"
    },
    "AcademicPushButton",
    "mouseEntered",
    "",
    "mouseLeft",
    "buttonPressed",
    "buttonReleased",
    "updateLoadingAnimation",
    "backgroundColor",
    "textColor",
    "borderColor",
    "borderRadius"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAcademicPushButtonENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    5 /* Public */,
       3,    0,   45,    2, 0x06,    6 /* Public */,
       4,    0,   46,    2, 0x06,    7 /* Public */,
       5,    0,   47,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   48,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QColor, 0x00015103, uint(-1), 0,
       8, QMetaType::QColor, 0x00015103, uint(-1), 0,
       9, QMetaType::QColor, 0x00015103, uint(-1), 0,
      10, QMetaType::Float, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject AcademicPushButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSAcademicPushButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAcademicPushButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAcademicPushButtonENDCLASS_t,
        // property 'backgroundColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'textColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'borderColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'borderRadius'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AcademicPushButton, std::true_type>,
        // method 'mouseEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mouseLeft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buttonPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buttonReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateLoadingAnimation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AcademicPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AcademicPushButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mouseEntered(); break;
        case 1: _t->mouseLeft(); break;
        case 2: _t->buttonPressed(); break;
        case 3: _t->buttonReleased(); break;
        case 4: _t->updateLoadingAnimation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AcademicPushButton::*)();
            if (_t _q_method = &AcademicPushButton::mouseEntered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AcademicPushButton::*)();
            if (_t _q_method = &AcademicPushButton::mouseLeft; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AcademicPushButton::*)();
            if (_t _q_method = &AcademicPushButton::buttonPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AcademicPushButton::*)();
            if (_t _q_method = &AcademicPushButton::buttonReleased; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AcademicPushButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->borderColor(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->borderRadius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AcademicPushButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBorderRadius(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *AcademicPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AcademicPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAcademicPushButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int AcademicPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AcademicPushButton::mouseEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AcademicPushButton::mouseLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AcademicPushButton::buttonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AcademicPushButton::buttonReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
