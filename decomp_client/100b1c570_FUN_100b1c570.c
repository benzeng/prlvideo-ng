
void FUN_100b1c570(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[1];
  ___bzero(param_1 + 0x41,0x200);
  return;
}

