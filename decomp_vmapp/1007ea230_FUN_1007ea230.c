
undefined8 FUN_1007ea230(byte *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  if (uVar3 == 0x24) {
    if ((bVar1 & 1) != 0) {
      param_1 = *(byte **)(param_1 + 0x10);
      goto LAB_1007ea273;
    }
  }
  else {
    if (uVar3 != 0x26) {
      return 0;
    }
    if ((bVar1 & 1) == 0) {
      param_1 = param_1 + 2;
      goto LAB_1007ea273;
    }
    param_1 = *(byte **)(param_1 + 0x10);
  }
  param_1 = param_1 + 1;
LAB_1007ea273:
  uVar2 = FUN_1007ea280(param_1);
  return uVar2;
}

