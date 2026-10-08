
void FUN_1001cdba0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  size_t sVar4;
  int iVar5;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_38 [8];
  QArrayData *local_30;
  undefined1 local_28 [15];
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("##",2);
  QString::split(local_28,param_2,&local_30,0,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001cdc0e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001cdc0e:
  FUN_100df1ef0(local_38,local_28);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar3 = FUN_1001c9320(local_38);
  *(undefined4 *)(lVar1 + 0x5c) = uVar3;
  puVar2 = PTR_s___openvm_10230fed8;
  lVar1 = *(long *)(param_1 + 0x10);
  iVar5 = -1;
  if (PTR_s___openvm_10230fed8 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s___openvm_10230fed8);
    iVar5 = (int)sVar4;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  FUN_100df1f90(&local_40,local_38,&local_48);
  QString::operator=((QString *)(lVar1 + 0x40),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001cdcab;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001cdcab:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001cdcdb;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001cdcdb:
  FUN_100039a80(local_38);
  FUN_100039a80(local_28);
  return;
}

