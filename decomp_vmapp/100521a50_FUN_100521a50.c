
undefined8
FUN_100521a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *local_60;
  void *local_58;
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  local_48 = (void *)0x0;
  pvStack_40 = (void *)0x0;
  local_38 = 0;
  FUN_100521830(&local_48);
  FUN_100522780(&local_60,&local_48);
  FUN_100521c40(param_1,param_2,&local_60,param_3,param_4);
  pvVar5 = local_60;
  pvVar3 = local_58;
  if (local_60 != (void *)0x0) {
    while (pvVar3 != pvVar5) {
      local_58 = (void *)((long)pvVar3 + -8);
      plVar2 = *(long **)((long)pvVar3 + -8);
      pvVar3 = local_58;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar2 + 0x10))();
          pvVar3 = local_58;
        }
      }
    }
    local_58 = pvVar3;
    operator_delete(local_60);
  }
  pvVar5 = local_48;
  pvVar3 = pvStack_40;
  if (local_48 != (void *)0x0) {
    while (pvVar3 != pvVar5) {
      pvStack_40 = (void *)((long)pvVar3 + -8);
      plVar2 = *(long **)((long)pvVar3 + -8);
      pvVar3 = pvStack_40;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar2 + 0x10))();
          pvVar3 = pvStack_40;
        }
      }
    }
    pvStack_40 = pvVar3;
    operator_delete(local_48);
  }
  return param_1;
}

