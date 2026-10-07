
/* WARNING: Removing unreachable block (ram,0x0001002c8ef3) */

long * FUN_1002c8da0(undefined4 param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = DAT_1011c5620;
  iVar2 = DAT_101116b60;
  if ((long **)DAT_1011c5620 == &DAT_1011c5620) {
    pvVar3 = _valloc((ulong)(DAT_101116b60 + 0x1000));
    if (pvVar3 == (void *)0x0) {
      return (long *)0x0;
    }
    plVar5 = (long *)((long)pvVar3 + 0xb28);
    *(int *)((long)pvVar3 + 0xf60) = iVar2;
  }
  else {
    lVar1 = *DAT_1011c5620;
    plVar4 = (long *)DAT_1011c5620[1];
    *(long **)(lVar1 + 8) = plVar4;
    *plVar4 = lVar1;
    *plVar5 = 0x112233;
    plVar5[1] = (long)&DAT_00445566;
  }
  plVar4 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar5[2] = 0;
    *(undefined4 *)(plVar5 + 0x86) = 0;
    *(undefined4 *)((long)plVar5 + 0x434) = 0;
    *(undefined4 *)((long)plVar5 + 0x43c) = 0;
    *(undefined4 *)(plVar5 + 0x88) = 0;
    *(undefined4 *)((long)plVar5 + 0x444) = 0;
    *(undefined4 *)((long)plVar5 + 0x454) = 0;
    *(undefined4 *)(plVar5 + 0x8d) = 0;
    *(undefined4 *)(plVar5 + 0x8e) = param_1;
    plVar5[0x8f] = 0;
    *(undefined4 *)((long)plVar5 + 0x464) = 0;
    plVar4 = plVar5;
  }
  return plVar4;
}

