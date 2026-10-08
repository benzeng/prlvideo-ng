
void FUN_10034d500(QObject *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021efbb0;
  uVar1 = _CFNotificationCenterGetLocalCenter();
  _CFNotificationCenterRemoveEveryObserver(uVar1,param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    _CFRunLoopTimerInvalidate();
  }
  QDateTime::~QDateTime((QDateTime *)(param_1 + 0x10));
  QObject::~QObject(param_1);
  return;
}

