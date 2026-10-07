
long FUN_10042d060(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 < *(int *)(param_1 + 0x18)) {
    lVar1 = param_1 + 0x1c + (long)param_2 * 0xc;
  }
  return lVar1;
}

