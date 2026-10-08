
void FUN_1001e96d0(QObject *param_1)

{
  undefined8 uVar1;
  Connection local_28 [8];
  Connection local_20 [8];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ff910;
  uVar1 = FUN_1001d50a0();
  QObject::connect(local_20,uVar1,"2activeStateChanged( bool )",param_1,
                   "1onAppActiveStateChanged(bool)",0);
  QMetaObject::Connection::~Connection(local_20);
  uVar1 = FUN_100060bb0();
  QObject::connect(local_28,uVar1,"2contextChanged(QPointer<QObject>, QPointer<QObject>)",param_1,
                   "1onAppContextChanged(QPointer<QObject>, QPointer<QObject>)",0);
  QMetaObject::Connection::~Connection(local_28);
  return;
}

