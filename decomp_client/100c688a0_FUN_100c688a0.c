
undefined8 FUN_100c688a0(long param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_2 == 6) {
    iVar1 = FUN_100c62100(param_4,*(undefined4 *)(param_1 + 0x68));
    uVar2 = 0;
    if (0 < iVar1) {
      FUN_100c05b10(param_4);
      uVar2 = 1;
      if (0xf < *(int *)(param_1 + 0x68)) {
        FUN_100c05b10(param_4 + 8);
        if (0x17 < *(int *)(param_1 + 0x68)) {
          FUN_100c05b10(param_4 + 0x10);
        }
      }
    }
  }
  return uVar2;
}

