
undefined8 FUN_100224550(long *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  QStringList *pQVar5;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  ExternalRefCountData *local_38;
  AnonymousUnion0 local_30;
  undefined1 local_21;
  
  cVar1 = FUN_100d9bbb0(param_1 + 4);
  uVar4 = 0;
  if (cVar1 == '\0') {
    local_30.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_38 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    uVar2 = (**(code **)(*param_1 + 200))(param_1,&local_30,&local_38);
    iVar3 = CMessageManager::instance();
    pQVar5 = (QStringList *)0x0;
    if ((param_1[6] != 0) && (pQVar5 = (QStringList *)0x0, *(int *)(param_1[6] + 4) != 0)) {
      pQVar5 = (QStringList *)param_1[7];
    }
    local_78 = (int *)0x0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
    local_50 = 0x80000000;
    local_58.field7 = 0;
    local_48 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)(ulong)uVar2,pQVar5,(QStringList *)&local_30.field0,
               (CSlotInfo *)&local_38,SUB81(&local_78,0));
    QVariant::~QVariant((QVariant *)&local_58);
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_21 = *local_78 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_78 != (int *)0x0)) {
        operator_delete(local_78);
      }
    }
    FUN_100039a80(&local_38);
    FUN_100039a80(&local_30);
    uVar4 = 0x80000009;
  }
  return uVar4;
}

