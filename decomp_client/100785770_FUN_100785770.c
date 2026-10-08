
void FUN_100785770(undefined8 param_1)

{
  long in_RAX;
  undefined8 uVar1;
  long local_18;
  
  local_18 = in_RAX;
  uVar1 = FUN_100060bb0();
  QObject::connect(&local_18,uVar1,"2beforeContextRemoved(QPointer<QObject>)",param_1,
                   "1onBeforeContextRemoved(QPointer<QObject>)",0);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return;
}

