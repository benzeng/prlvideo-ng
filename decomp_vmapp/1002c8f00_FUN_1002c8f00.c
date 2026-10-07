
/* WARNING: Removing unreachable block (ram,0x0001002c905f) */

long * FUN_1002c8f00(uint param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = DAT_1011c5630;
  if ((long **)DAT_1011c5630 == &DAT_1011c5630) {
    pvVar2 = _valloc(0x9000);
    if (pvVar2 == (void *)0x0) {
      return (long *)0x0;
    }
    plVar4 = (long *)((long)pvVar2 + 0xb28);
    *(undefined4 *)((long)pvVar2 + 0xf60) = 0x8000;
  }
  else {
    lVar1 = *DAT_1011c5630;
    plVar3 = (long *)DAT_1011c5630[1];
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    *plVar4 = 0x112233;
    plVar4[1] = (long)&DAT_00445566;
  }
  plVar3 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar4[2] = 0;
    *(undefined4 *)(plVar4 + 0x86) = 0;
    *(undefined4 *)((long)plVar4 + 0x434) = 0;
    *(undefined4 *)((long)plVar4 + 0x43c) = 0;
    *(undefined4 *)(plVar4 + 0x88) = 0;
    *(undefined4 *)((long)plVar4 + 0x444) = 0;
    *(undefined4 *)((long)plVar4 + 0x454) = 0;
    *(undefined4 *)(plVar4 + 0x8d) = 0;
    *(uint *)(plVar4 + 0x8e) = param_1 | 2;
    plVar4[0x8f] = 0;
    *(undefined4 *)((long)plVar4 + 0x464) = 0;
    plVar4[0x91] = 0;
    *(undefined4 *)((long)plVar4 + 0x494) = 0;
    plVar3 = plVar4;
  }
  return plVar3;
}

