
CHwHardDisk * FUN_100b055e0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  CHwHardDisk *this;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  this = operator_new(0xd0,(nothrow_t *)PTR_nothrow_1021e1620);
  if (this == (CHwHardDisk *)0x0) {
    return (CHwHardDisk *)0x0;
  }
  local_30 = (QArrayData *)*param_2;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  lVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar1 = *(uint *)(param_2 + 2);
  local_38 = (QArrayData *)param_2[1];
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  CHwHardDisk::CHwHardDisk
            (this,(QTypedArrayData<unsigned_short> *)&local_30,lVar2,uVar3,uVar1,
             (QTypedArrayData<unsigned_short> *)&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b05693;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b05693:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b056c3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100b056c3:
  CHwHardDisk::setRemovable(SUB81(this,0));
  CHwHardDisk::setExternal(SUB81(this,0));
  return this;
}

