
undefined8 FUN_1003435b0(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 0) {
    uVar2 = FUN_10034f7b0(param_1,param_2);
    if ((int)uVar2 == 0) {
      iVar1 = param_2[1];
      uVar2 = 0;
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x20) = iVar1 - *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar1;
      }
    }
  }
  return uVar2;
}

