/****************************************************************************
** Meta object code from reading C++ file 'UserDefineMapPanel.h'
**
** Created: Fri Feb 1 10:13:38 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../leftlayout/UserDefineMapPanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserDefineMapPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserDefineMapPanel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   20,   19,   19, 0x05,
      45,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   20,   19,   19, 0x0a,
      79,   20,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UserDefineMapPanel[] = {
    "UserDefineMapPanel\0\0idx\0checkboxclicked(int)\0"
    "labelclicked(int)\0checkClick(int)\0"
    "labelClick(int)\0"
};

const QMetaObject UserDefineMapPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UserDefineMapPanel,
      qt_meta_data_UserDefineMapPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserDefineMapPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserDefineMapPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserDefineMapPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserDefineMapPanel))
        return static_cast<void*>(const_cast< UserDefineMapPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int UserDefineMapPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: checkboxclicked((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: labelclicked((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: checkClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: labelClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UserDefineMapPanel::checkboxclicked(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UserDefineMapPanel::labelclicked(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
