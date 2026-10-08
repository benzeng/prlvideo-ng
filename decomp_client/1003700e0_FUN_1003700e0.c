
void FUN_1003700e0(long param_1)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  int *local_40;
  int *local_38;
  int *local_30;
  uint local_28;
  undefined1 local_19;
  
  FUN_100376520(&local_40,param_1 + 0x10);
  local_38 = local_40 + (long)local_40[2] * 2 + 4;
  local_30 = local_40 + (long)local_40[3] * 2 + 4;
  local_28 = 1;
  if (local_40[2] != local_40[3]) {
    do {
      piVar1 = (int *)**(undefined8 **)local_38;
      plVar2 = (long *)(*(undefined8 **)local_38)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_19 = *piVar1 != 0;
        UNLOCK();
      }
      if (local_28 != 0) {
        if (((piVar1 != (int *)0x0) && (plVar2 != (long *)0x0)) && (piVar1[1] != 0)) {
          (**(code **)(*plVar2 + 0x20))();
        }
        local_28 = 0;
      }
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_19 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_19) {
          operator_delete(piVar1);
        }
      }
      local_38 = local_38 + 2;
      uVar3 = local_28 ^ 1;
      bVar4 = local_28 != 1;
      local_28 = uVar3;
    } while ((bVar4) && (local_38 != local_30));
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_19 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003701d6;
    }
    FUN_100375f60(&local_40,local_40);
  }
LAB_1003701d6:
  FUN_100375a80(param_1 + 0x10);
  return;
}

