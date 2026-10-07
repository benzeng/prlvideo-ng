
undefined8 FUN_100404c00(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = param_2;
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar1 = param_2 & 0xfffffffffffff000;
    param_3 = (((int)param_2 + 0xfff) - (int)uVar1) + param_3 & 0xfffff000;
  }
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)(param_1 + 0x20)) {
    do {
      if (((ulong)plVar2[-2] < param_3 + uVar1) &&
         (uVar1 < (ulong)*(uint *)(plVar2 + -1) + plVar2[-2])) {
        return 0;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)(param_1 + 0x20));
  }
  return 1;
}

