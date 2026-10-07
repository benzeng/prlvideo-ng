
void FUN_100762b60(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) {
    FUN_1008e3970("","etrace",0,"Etrace is not initialized yet...");
    plVar2 = *(long **)(param_1 + 0x10);
  }
  else {
    if ((*plVar2 != 0) && (plVar2[4] == 0)) {
      lVar1 = FUN_1007d87f0();
      plVar2 = *(long **)(param_1 + 0x10);
      plVar2[4] = lVar1;
    }
    *plVar2 = 0;
  }
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[4] = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
  ___bzero(plVar2 + 6,(ulong)*(uint *)(param_1 + 0x18) - 0x30);
  return;
}

