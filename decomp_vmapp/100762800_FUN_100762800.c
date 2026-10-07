
void FUN_100762800(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 == (long *)0x0) {
    FUN_1008e3970("","etrace",0,"Etrace is not initialized yet...");
    return;
  }
  lVar2 = *plVar3;
  if ((param_2 != 0) && (lVar2 == 0)) {
    if (plVar3[2] != 0) goto LAB_100762878;
    uVar1 = rdtsc();
    *(ulong *)(*(long *)(param_1 + 0x10) + 0x10) = uVar1 & 0xffffffffffff00;
    lVar2 = FUN_1007d87f0();
    plVar3 = *(long **)(param_1 + 0x10);
    plVar3[3] = lVar2;
    lVar2 = *plVar3;
  }
  if (((param_2 == 0) && (lVar2 != 0)) && (plVar3[4] == 0)) {
    lVar2 = FUN_1007d87f0();
    plVar3 = *(long **)(param_1 + 0x10);
    plVar3[4] = lVar2;
  }
LAB_100762878:
  *plVar3 = param_2;
  return;
}

