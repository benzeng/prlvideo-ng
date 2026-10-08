
void FUN_100b12800(long *param_1,long *param_2)

{
  long lVar1;
  
  FUN_100b20280(param_1,param_2 + 1);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[0x3020] = 0;
  return;
}

