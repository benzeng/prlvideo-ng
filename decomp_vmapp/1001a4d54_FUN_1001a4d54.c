
undefined4 FUN_1001a4d54(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uStack_14;
  
  *param_2 = (uint)((ulong)param_1 >> 0x3f);
  iVar1 = ___fpclassifyd(param_1);
  if (iVar1 == 2) {
    return 0;
  }
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      return 1;
    }
  }
  else {
    if (iVar1 == 3) {
      return 4;
    }
    if (iVar1 == 5) {
      return 3;
    }
  }
  return 2;
}

