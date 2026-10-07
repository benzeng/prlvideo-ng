
void FUN_100117e70(undefined8 param_1,int param_2,int param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  QArrayData *pQVar4;
  long *local_48;
  QArrayData *local_40;
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
  if (param_3 == 2) {
    local_40 = (QArrayData *)**(undefined8 **)(param_4 + 8);
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
    }
    local_48 = (long *)**(long **)(param_4 + 0x10);
    if (local_48 != (long *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    FUN_10010be20(param_1,&local_40,&local_48);
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if (*(int *)local_40 == -1) {
      return;
    }
    pQVar4 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_11 = 0;
    }
  }
  else if (param_3 == 1) {
    puVar2 = *(undefined8 **)(param_4 + 8);
    local_38 = (QArrayData *)*puVar2;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
    }
    local_2c = *(undefined1 *)((long)puVar2 + 0xc);
    local_30 = *(undefined4 *)(puVar2 + 1);
    FUN_10010bd40(param_1,&local_38);
    if (*(int *)local_38 == -1) {
      return;
    }
    pQVar4 = local_38;
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
    puVar2 = *(undefined8 **)(param_4 + 8);
    local_28 = (QArrayData *)*puVar2;
    if (1 < *(int *)local_28 + 1U) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + 1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
    }
    local_1c = *(undefined1 *)((long)puVar2 + 0xc);
    local_20 = *(undefined4 *)(puVar2 + 1);
    FUN_10010bd20(param_1,&local_28);
    if (*(int *)local_28 == -1) {
      return;
    }
    pQVar4 = local_28;
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
  QArrayData::deallocate(pQVar4,2,8);
  return;
}

