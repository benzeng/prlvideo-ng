
void FUN_100219e30(long *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_3 == 0x30000001) {
    return;
  }
  if (((param_2 == 0) || (param_2 == 0x30000001)) || (param_2 == 0x30000007)) {
                    /* WARNING: Could not recover jumptable at 0x000100219e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000325);
    return;
  }
  if (param_2 != 0x30000004) {
    return;
  }
  if (param_3 != 0x3000000b) {
    return;
  }
  if ((char)param_1[0x2f] == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x2f) = 0;
  lVar2 = 0;
  if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar2 = param_1[4];
  }
  uVar1 = FUN_10018c280(lVar2);
  uVar1 = FUN_100319bf0(uVar1);
  local_28 = (QArrayData *)QString::fromAscii_helper("parallels.CopyPasteTool.guest.win",0x21);
  lVar2 = FUN_10032d8b0(uVar1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100219f21;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100219f21:
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  }
  else {
    QObject::connect(&local_30,lVar2,"2tisRecordChanged(SdkHandleWrap, PRL_UINT32)",param_1,
                     "1onCopyPastTisRecordChanged()",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  return;
}

