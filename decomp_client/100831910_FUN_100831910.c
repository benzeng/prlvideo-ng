
void FUN_100831910(undefined8 param_1,int param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (param_2 != 0 || param_3 != 0) {
    return;
  }
  puVar1 = *(undefined8 **)(param_4 + 8);
  local_28 = (QArrayData *)*puVar1;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_11 = *(int *)local_28 != 0;
    UNLOCK();
  }
  local_20 = (QArrayData *)puVar1[1];
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_11 = *(int *)local_20 != 0;
    UNLOCK();
  }
  FUN_10006a190(param_1,&local_28,**(undefined4 **)(param_4 + 0x10),
                **(undefined4 **)(param_4 + 0x18));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10083199b;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_10083199b:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

