
void FUN_10034d670(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar1 = FUN_100319bf0(uVar1);
  local_28 = (QArrayData *)QString::fromAscii_helper("parallels.OSEvaluation.guest.win",0x20);
  lVar2 = FUN_10032d8b0(uVar1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10034d6f1;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10034d6f1:
  if (lVar2 != 0) {
    QObject::connect(&local_30,lVar2,"2tisRecordChanged(SdkHandleWrap, PRL_UINT32)",param_1,
                     "1onTrialWindowsRecordChanged(SdkHandleWrap, PRL_UINT32)",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  return;
}

