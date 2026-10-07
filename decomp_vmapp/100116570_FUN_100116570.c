
void FUN_100116570(undefined8 param_1,int param_2,int param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    local_20 = (QArrayData *)**(undefined8 **)(param_4 + 8);
    if (1 < *(int *)local_20 + 1U) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + 1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
    }
    local_28 = (long *)**(long **)(param_4 + 0x10);
    if (local_28 != (long *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    FUN_10003a710(param_1,&local_20,&local_28);
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
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
  }
  return;
}

