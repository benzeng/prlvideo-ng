
long FUN_100705920(long param_1,long param_2,char param_3)

{
  long lVar1;
  
  if (param_3 == '\0') {
    lVar1 = *(long *)(param_2 + 0x10);
    FUN_1005607f0(param_1,lVar1 + 0x20);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 0x28);
  }
  else {
    FUN_100701590(param_1);
  }
  return param_1;
}

