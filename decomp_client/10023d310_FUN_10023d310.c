
undefined8 FUN_10023d310(undefined8 param_1)

{
  char cVar1;
  long in_RAX;
  void *pvVar2;
  long local_28;
  
  local_28 = in_RAX;
  if (DAT_102310858 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_10005ea90(pvVar2);
    DAT_1022738a8 = 1;
    DAT_102310858 = pvVar2;
  }
  cVar1 = FUN_10005eaf0(DAT_102310858);
  if (cVar1 != '\0') {
    CAbstractTask::setWaitForSubTaskCompletion();
    if (DAT_102310858 == (void *)0x0) {
      pvVar2 = operator_new(0x18);
      FUN_10005ea90(pvVar2);
      DAT_1022738a8 = 1;
      DAT_102310858 = pvVar2;
    }
    QObject::connect(&local_28,DAT_102310858,"2exposeActiveChanged(bool)",param_1,
                     "1onExposeActivityChanged(bool)",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  return 0;
}

