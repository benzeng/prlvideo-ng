
long FUN_10055f450(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  FUN_1005607f0(param_1,lVar1 + 0x28);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 0x30);
  return param_1;
}

