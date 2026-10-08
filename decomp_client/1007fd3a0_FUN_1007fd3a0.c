
void FUN_1007fd3a0(undefined8 param_1,int param_2,int param_3,long param_4)

{
  undefined4 uVar1;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (param_2 != 0) {
    return;
  }
  if (param_3 != 1) {
    if (param_3 != 0) {
      return;
    }
    FUN_10014ce00();
    return;
  }
  uVar1 = **(undefined4 **)(param_4 + 8);
  local_20 = (QArrayData *)**(undefined8 **)(param_4 + 0x10);
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_11 = *(int *)local_20 != 0;
    UNLOCK();
  }
  local_28 = (QArrayData *)**(undefined8 **)(param_4 + 0x18);
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_11 = *(int *)local_28 != 0;
    UNLOCK();
  }
  FUN_10014fb50(param_1,uVar1,&local_20,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007fd435;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1007fd435:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

