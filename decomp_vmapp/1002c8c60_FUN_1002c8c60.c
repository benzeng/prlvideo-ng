
/* WARNING: Removing unreachable block (ram,0x0001002c8d27) */

long * FUN_1002c8c60(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if (plVar4 == param_1) {
    pvVar3 = _valloc((ulong)(param_2 + 0x1000));
    plVar4 = (long *)0x0;
    if (pvVar3 != (void *)0x0) {
      plVar4 = (long *)((long)pvVar3 + 0xb28);
      *(int *)((long)pvVar3 + 0xf60) = param_2;
    }
  }
  else {
    lVar1 = *plVar4;
    plVar2 = (long *)plVar4[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar4 = 0x112233;
    plVar4[1] = (long)&DAT_00445566;
  }
  return plVar4;
}

