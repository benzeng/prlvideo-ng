
undefined8 FUN_1006f7e50(long *param_1,uint param_2,undefined2 *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  
  param_1 = (long *)*param_1;
  if (*(uint *)(param_1 + 4) == 0) {
    return 0;
  }
  uVar4 = *(uint *)((long)param_1 + 0x24) ^ param_2;
  plVar1 = *(long **)(param_1[1] + ((ulong)uVar4 % (ulong)*(uint *)(param_1 + 4)) * 8);
  plVar3 = plVar1;
  if (plVar1 == param_1) {
    return 0;
  }
  while ((*(uint *)(plVar3 + 1) != uVar4 || (*(uint *)((long)plVar3 + 0xc) != param_2))) {
    plVar3 = (long *)*plVar3;
    if (plVar3 == param_1) {
      return 0;
    }
  }
  if (plVar3 == param_1) {
    return 0;
  }
  if (*(int *)((long)param_1 + 0x14) == 0) {
    uVar2 = 0;
  }
  else {
    do {
      if ((*(uint *)(plVar1 + 1) == uVar4) && (*(uint *)((long)plVar1 + 0xc) == param_2)) {
        if (plVar1 == param_1) {
          uVar2 = 0;
        }
        else {
          uVar2 = (ulong)*(ushort *)(plVar1 + 2);
        }
        goto LAB_1006f7edb;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != param_1);
    uVar2 = 0;
  }
LAB_1006f7edb:
  *param_3 = (short)uVar2;
  return CONCAT71((int7)(uVar2 >> 8),1);
}

