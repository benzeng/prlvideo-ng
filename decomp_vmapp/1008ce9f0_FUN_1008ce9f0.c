
long FUN_1008ce9f0(long *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (((param_1 != (long *)0x0) && (-1 < param_2)) && (lVar1 = 0, param_2 < (int)param_1[1])) {
    lVar1 = (long)param_2 * 0x20 + *param_1;
  }
  return lVar1;
}

