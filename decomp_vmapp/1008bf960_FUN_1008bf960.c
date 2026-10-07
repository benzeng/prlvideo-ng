
uint FUN_1008bf960(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_30 [10];
  
  uVar1 = param_1 - 1;
  if (7 < uVar1) {
    uVar1 = 0xffffffff;
    if (DAT_1011c29f8 != 0) {
      local_30[0] = param_1;
      iVar2 = FUN_100885160(DAT_1011c29f8,local_30);
      uVar1 = iVar2 + 8;
      if (iVar2 == -1) {
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}

