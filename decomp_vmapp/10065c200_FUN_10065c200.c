
void FUN_10065c200(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  Data *local_28;
  undefined1 local_1b;
  undefined1 local_19;
  
  local_28 = (Data *)*param_3;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 == 0) {
      QListData::detach((int)&local_28);
      lVar3 = (long)*(int *)(local_28 + 8);
      lVar1 = *param_3;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_28 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_28 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_28 + 0xc))
         ) {
        _memcpy(local_28 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + 1;
      local_1b = *(int *)local_28 != 0;
      UNLOCK();
    }
  }
  FUN_10065da20(param_3,param_2);
  if (*(int *)(local_28 + 0xc) != *(int *)(local_28 + 8)) {
    do {
      plVar2 = (long *)FUN_10065dae0(&local_28);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x88))(plVar2);
      }
    } while (*(int *)(local_28 + 0xc) != *(int *)(local_28 + 8));
  }
  FUN_10065dc60(&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QListData::dispose(local_28);
  }
  return;
}

