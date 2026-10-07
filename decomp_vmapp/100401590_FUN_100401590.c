
void FUN_100401590(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  iVar3 = FUN_1007da300("devices.hdd.rh",1);
  if (((iVar3 == 0) || ((*(uint *)(param_1 + 0x16c) & 9) != 8)) || (*(int *)(param_1 + 0x50) != 1))
  {
    FUN_100067920(DAT_1011c3650);
    return;
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  FUN_1008e3970("","HddUtils",0,"hdd: RH enabled on disk %d",*(undefined4 *)(param_1 + 0x40));
  plVar1 = *(long **)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  (**(code **)(*plVar1 + 0x178))(&local_48,plVar1);
  local_50 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_29 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x170))(&local_58);
  local_38.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_29 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_38);
  FUN_1003fcc20(uVar2,plVar1,&local_38,*(undefined8 *)(param_1 + 0xd0),
                *(undefined4 *)(param_1 + 200));
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004016e5;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1004016e5:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100401715;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100401715:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100401745;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100401745:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100401775;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100401775:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

