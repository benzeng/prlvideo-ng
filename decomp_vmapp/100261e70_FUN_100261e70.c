
long FUN_100261e70(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x144) != 0) {
    iVar1 = FUN_1003dfe90(*(undefined4 *)(param_1 + 0x148));
    lVar2 = 0;
    if (-1 < iVar1) {
      lVar2 = (long)iVar1;
    }
    return lVar2;
  }
  return param_3;
}

