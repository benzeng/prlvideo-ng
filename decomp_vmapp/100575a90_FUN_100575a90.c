
long FUN_100575a90(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = (ulong)*(uint *)(param_1 + 0x1120) * (ulong)param_2 - (ulong)*(uint *)(param_1 + 0x1158)
    ;
  }
  return lVar1;
}

