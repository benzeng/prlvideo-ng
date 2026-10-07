
void FUN_1002c8c00(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((int)param_1[0xb] != 0) {
    uVar2 = 0;
    do {
      uVar1 = (**(code **)(*param_1 + 0x48))(param_1,uVar2 & 0xffffffff);
      if (uVar1 != (param_1[uVar2 + 0xc] != 0)) {
        (**(code **)(*param_1 + 0x50))(param_1,uVar2 & 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while ((uint)uVar2 < *(uint *)(param_1 + 0xb));
  }
  return;
}

