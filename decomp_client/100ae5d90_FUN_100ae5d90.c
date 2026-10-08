
long FUN_100ae5d90(long param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *param_2 = *(undefined4 *)(lVar1 + 4);
  return lVar1 + *(long *)(lVar1 + 0x10);
}

