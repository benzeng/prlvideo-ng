
void FUN_1004727f0(undefined8 param_1,int param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  QArrayData *pQVar2;
  QArrayData *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  QArrayData *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_11;
  
  if (param_2 != 0) {
    return;
  }
  if (param_3 == 1) {
    puVar1 = *(undefined8 **)(param_4 + 8);
    local_38 = (QArrayData *)*puVar1;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
    }
    local_2c = *(undefined1 *)((long)puVar1 + 0xc);
    local_30 = *(undefined4 *)(puVar1 + 1);
    FUN_100471c90(param_1,&local_38);
    if (*(int *)local_38 == -1) {
      return;
    }
    pQVar2 = local_38;
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_11 = 0;
    }
  }
  else {
    if (param_3 != 0) {
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
    local_1c = *(undefined1 *)((long)puVar1 + 0xc);
    local_20 = *(undefined4 *)(puVar1 + 1);
    FUN_100471c60(param_1,&local_28);
    if (*(int *)local_28 == -1) {
      return;
    }
    pQVar2 = local_28;
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_11 = 0;
    }
  }
  QArrayData::deallocate(pQVar2,2,8);
  return;
}

