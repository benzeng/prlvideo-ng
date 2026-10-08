
void FUN_1000d0ea0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  Data *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_20 = *(QArrayData **)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_11 = *(int *)local_20 != 0;
    UNLOCK();
  }
  local_28 = (QArrayData *)*param_2;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_11 = *(int *)local_28 != 0;
    UNLOCK();
  }
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000b07c0(uVar1,&local_20,&local_28,*param_3,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000d0f23;
    }
    QListData::dispose(local_30);
  }
LAB_1000d0f23:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000d0f53;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000d0f53:
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

