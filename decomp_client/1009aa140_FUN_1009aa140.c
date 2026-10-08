
void FUN_1009aa140(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == param_2) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x10) = param_2;
    FUN_100d31140(param_1 + 0x18,2);
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  FUN_100d311f0(param_1 + 0x18,param_3);
  iVar1 = FUN_100d313f0(param_1 + 0x18);
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x14) == 1)) {
    *(uint *)(param_1 + 0x14) = (uint)(1 < iVar1) * 2;
  }
  return;
}

