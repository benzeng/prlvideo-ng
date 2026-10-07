
undefined8 FUN_1003469b0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(uint *)(param_2 + 4) < 0xc) {
    return 9;
  }
  uVar2 = *(uint *)(param_2 + 8);
  lVar4 = 0;
  if (uVar2 != 0) {
    if (*(long **)(param_1 + 0xa818) == (long *)0x0) {
      return 7;
    }
    plVar3 = *(long **)(param_1 + 0xa818);
    plVar6 = (long *)(param_1 + 0xa818);
    do {
      while (plVar5 = plVar3, *(uint *)(plVar5 + 4) < uVar2) {
        plVar1 = plVar5 + 1;
        plVar5 = plVar6;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_100346a10;
      }
      plVar3 = (long *)*plVar5;
      plVar6 = plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_100346a10:
    if (plVar5 == (long *)(param_1 + 0xa818)) {
      return 7;
    }
    if (uVar2 < *(uint *)(plVar5 + 4)) {
      return 7;
    }
    lVar4 = plVar5[5];
  }
  if (*(long *)(param_1 + 0x648) != lVar4) {
    *(long *)(param_1 + 0x648) = lVar4;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
  }
  return 0;
}

