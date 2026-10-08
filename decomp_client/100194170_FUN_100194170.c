
undefined8 FUN_100194170(long param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  long local_38;
  Data_conflict local_30;
  undefined4 local_28;
  
  cVar1 = FUN_10011cdc0();
  if (cVar1 != '\0') {
    cVar1 = FUN_10018d240(param_1);
    if (cVar1 == '\0') {
      param_2 = param_2 | 0x1000;
    }
  }
  uVar2 = _PrlVm_GetSnapshotsTreeEx(*(undefined8 *)(param_1 + 0x40),param_2);
  local_28 = 0x80000000;
  local_30.field7 = 0;
  uVar2 = FUN_100191960(param_1,uVar2,0x40e,&local_30);
  QVariant::~QVariant((QVariant *)&local_30);
  QObject::connect(&local_38,uVar2,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onSnapshotsTreeRequested(PRL_RESULT)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return uVar2;
}

