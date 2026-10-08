
void FUN_1002eaa50(undefined8 param_1)

{
  void *pvVar1;
  Connection local_30 [8];
  
  if (DAT_1023109b0 == (void *)0x0) {
    pvVar1 = operator_new(0x20);
    FUN_100751470(pvVar1);
    DAT_102271388 = 1;
    DAT_1023109b0 = pvVar1;
  }
  QObject::connect(local_30,DAT_1023109b0,"2searchFinished()",param_1,
                   "1onThirdPartyVmSearchFinished()",0);
  QMetaObject::Connection::~Connection(local_30);
  if (DAT_1023109b0 == (void *)0x0) {
    pvVar1 = operator_new(0x20);
    FUN_100751470(pvVar1);
    DAT_102271388 = 1;
    DAT_1023109b0 = pvVar1;
  }
  FUN_1007515c0(DAT_1023109b0);
  return;
}

