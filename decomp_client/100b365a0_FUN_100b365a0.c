
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b365a0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  int *local_40;
  int *local_38;
  int *local_30;
  uint local_28;
  undefined1 local_19;
  
  FUN_100b3c730(&local_40,param_1 + 0x10);
  local_38 = local_40 + (long)local_40[2] * 2 + 4;
  local_30 = local_40 + (long)local_40[3] * 2 + 4;
  local_28 = 1;
  if (local_40[2] != local_40[3]) {
    do {
      plVar3 = (long *)**(long **)local_38;
      if (plVar3 != (long *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (local_28 != 0) {
        if (plVar3 == (long *)0x0) {
          _DAT_00000070 = 0;
          _DAT_00000078 = 0;
          lVar4 = 0;
        }
        else {
          lVar4 = plVar3[2];
          *(undefined8 *)(lVar4 + 0x78) = 0;
          *(undefined8 *)(lVar4 + 0x70) = 0;
        }
        FUN_100b3b8a0(lVar4 + 0x80);
        local_28 = 0;
      }
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_38 = local_38 + 2;
      uVar2 = local_28 ^ 1;
      bVar5 = local_28 != 1;
      local_28 = uVar2;
    } while ((bVar5) && (local_38 != local_30));
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_19 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100b366ca;
    }
    FUN_100b3be40(&local_40,local_40);
  }
LAB_100b366ca:
  plVar3 = *(long **)(param_1 + 0x18);
  while (plVar3 != (long *)(param_1 + 0x18)) {
    lVar4 = *plVar3;
    plVar1 = (long *)plVar3[1];
    *(long **)(lVar4 + 8) = plVar1;
    *plVar1 = lVar4;
    *plVar3 = 0x112233;
    plVar3[1] = (long)&DAT_00445566;
    if (plVar3 != (long *)0x0) {
      FUN_100b3bae0(plVar3);
      operator_delete(plVar3);
    }
    plVar3 = *(long **)(param_1 + 0x18);
  }
  return;
}

