
long * FUN_100adb510(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  
  uVar1 = *param_2;
  uVar5 = uVar1 >> 0x10 ^ uVar1;
  uVar2 = (ulong)((uVar5 >> 8 ^ uVar5) & 0xff);
  plVar4 = *(long **)(param_1 + uVar2 * 8);
  if (plVar4 == (long *)0x0) {
    plVar6 = (long *)(param_1 + uVar2 * 8);
  }
  else {
    do {
      plVar6 = plVar4;
      if (*(uint *)(plVar6 + 1) == uVar1) {
        return (long *)0x0;
      }
      plVar4 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
  plVar3 = (long *)FUN_100adb5d0();
  plVar4 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    *plVar3 = *plVar6;
    *plVar6 = (long)plVar3;
    plVar4 = plVar3;
  }
  return plVar4;
}

