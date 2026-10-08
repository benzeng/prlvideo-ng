
uint FUN_100c9aee0(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_30 [10];
  
  uVar1 = param_1 - 1;
  if (7 < uVar1) {
    uVar1 = 0xffffffff;
    if (DAT_102318438 != 0) {
      local_30[0] = param_1;
      iVar2 = FUN_100c60360(DAT_102318438,local_30);
      uVar1 = iVar2 + 8;
      if (iVar2 == -1) {
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}

