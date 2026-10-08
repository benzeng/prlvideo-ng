
void FUN_1000aed60(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)*param_2;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_19 = *(int *)local_28 != 0;
    UNLOCK();
  }
  FUN_1000aeee0(param_1,&local_28,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000aedc7;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000aedc7:
  local_30 = (QArrayData *)*param_2;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
  }
  lVar2 = FUN_1000a9690(&local_30);
  iVar1 = FUN_1000a97b0(param_1,2);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x28) = *(byte *)(lVar2 + 0x28) & 0xfd;
  }
  if ((0 < iVar1) && (iVar1 = FUN_1000a97b0(param_1,2), iVar1 == 0)) {
    FUN_10005a280(param_1 + 0x95);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

