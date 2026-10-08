
undefined8 FUN_100201e80(long param_1)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_a0;
  long local_98;
  QArrayData *local_90;
  QVariant local_88;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  QVariant local_40 [2];
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  cVar2 = FUN_10018ff40(uVar4);
  if (cVar2 != '\0') {
    return 0x80000009;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10018ff30(uVar4);
  CAbstractTask::setWaitForSubTaskCompletion();
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    local_28 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(&local_28);
  }
  local_68 = (QArrayData *)QString::fromAscii_helper("onMessageFromDisp",0x11);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  FUN_100a1c6b0(&local_60,&local_68,param_1);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100201f89;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100201f89:
  if (DAT_102271690 == 0) {
    DAT_102271690 = FUN_1002032b0("CSlotInfo",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_88,DAT_102271690,&local_60,0);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x60) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x68);
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10018d980(&local_90,uVar5);
  lVar3 = FUN_10015e4c0(uVar4,&local_90,param_1 + 0x40,0,&local_28,&local_88);
  *(long *)(param_1 + 0x70) = lVar3;
  if (*(int *)local_90 == -1) goto LAB_100202057;
  if (*(int *)local_90 == 0) {
LAB_100202044:
    QArrayData::deallocate(local_90,2,8);
  }
  else {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + -1;
    local_19 = *(int *)local_90 != 0;
    UNLOCK();
    if (!(bool)local_19) goto LAB_100202044;
  }
  lVar3 = *(long *)(param_1 + 0x70);
LAB_100202057:
  if (lVar3 != 0) {
    QObject::connect(&local_98,lVar3,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onConvertFinished(PRL_RESULT)",0);
    if (local_98 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_98);
    QObject::connect(&local_a0,*(undefined8 *)(param_1 + 0x70),"2jobProgressChanged(uint)",param_1,
                     "2convertProgressChanged(uint)",0);
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else if (local_a0 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    if (cVar2 == '\0') {
      FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                    "Tasks/CTaskConvertThirdPartyVm.cpp",0xc1,"convertVm");
    }
  }
  FUN_10080dda0(param_1,0);
  QVariant::~QVariant(&local_88);
  QVariant::~QVariant(local_40);
  piVar1 = (int *)CONCAT71(uStack_5f,local_60);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_19 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_19) && ((void *)CONCAT71(uStack_5f,local_60) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(uStack_5f,local_60));
    }
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 0;
      }
      local_60 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return 0;
}

