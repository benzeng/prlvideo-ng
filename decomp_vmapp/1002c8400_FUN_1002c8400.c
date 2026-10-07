
void FUN_1002c8400(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60 + (param_2 & 0xffffffff) * 8);
  if (lVar1 != 0) {
    FUN_1002d60c0(lVar1,1);
    return;
  }
  return;
}

