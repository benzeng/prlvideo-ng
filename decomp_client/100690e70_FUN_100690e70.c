
void FUN_100690e70(long param_1)

{
  undefined8 uVar1;
  Connection local_30 [8];
  Connection local_28 [8];
  Connection local_20 [8];
  
  uVar1 = FUN_100060bb0();
  QObject::connect(local_20,uVar1,"2afterContextAdded(QPointer<QObject>)",param_1,
                   "1onAfterContextAdded(QPointer<QObject>)",0);
  QMetaObject::Connection::~Connection(local_20);
  uVar1 = FUN_100060bb0();
  QObject::connect(local_28,uVar1,"2beforeContextRemoved(QPointer<QObject>)",param_1,
                   "1onBeforeContextRemoved(QPointer<QObject>)",0);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(local_30,*(undefined8 *)(param_1 + 0x18),"2actionTriggered(QAction*)",param_1,
                   "1onActionTriggered(QAction*)",0);
  QMetaObject::Connection::~Connection(local_30);
  return;
}

