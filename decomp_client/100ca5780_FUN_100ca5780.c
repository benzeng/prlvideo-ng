
uint FUN_100ca5780(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_38 [12];
  
  uVar1 = param_1 - 1;
  if (8 < uVar1) {
    uVar1 = 0xffffffff;
    if (DAT_102318450 != 0) {
      local_38[0] = param_1;
      iVar2 = FUN_100c60360(DAT_102318450,local_38);
      uVar1 = iVar2 + 9;
      if (iVar2 == -1) {
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}

