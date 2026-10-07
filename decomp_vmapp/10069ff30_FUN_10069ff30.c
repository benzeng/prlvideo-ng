
void FUN_10069ff30(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  (**(code **)(*param_1 + 0x178))();
  FUN_100698030(param_1,param_2 + 1);
  return;
}

