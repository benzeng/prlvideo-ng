
undefined8 FUN_10034d810(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(uint *)(param_2 + 4) < 8) {
    return 9;
  }
  uVar2 = *(uint *)(param_2 + 8);
  if (uVar2 == 0) {
    *(undefined8 *)(param_1 + 0x2760) = 0;
    *(undefined1 *)(param_1 + 0x2768) = 0;
  }
  else {
    if (*(long **)(param_1 + 0x12870) == (long *)0x0) {
      return 4;
    }
    plVar4 = *(long **)(param_1 + 0x12870);
    plVar6 = (long *)(param_1 + 0x12870);
    do {
      while (plVar5 = plVar4, *(uint *)(plVar5 + 4) < uVar2) {
        plVar1 = plVar5 + 1;
        plVar5 = plVar6;
        plVar4 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10034d870;
      }
      plVar4 = (long *)*plVar5;
      plVar6 = plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_10034d870:
    if (plVar5 == (long *)(param_1 + 0x12870)) {
      return 4;
    }
    if (uVar2 < *(uint *)(plVar5 + 4)) {
      return 4;
    }
    uVar2 = **(uint **)plVar5[5];
    if (0x12 < uVar2) {
      return 4;
    }
    if ((0x40030U >> (uVar2 & 0x1f) & 1) == 0) {
      return 4;
    }
    iVar3 = *(int *)(param_2 + 0xc);
    *(undefined8 **)(param_1 + 0x2760) = (undefined8 *)plVar5[5];
    *(bool *)(param_1 + 0x2768) = iVar3 != 0;
  }
  return 0;
}

