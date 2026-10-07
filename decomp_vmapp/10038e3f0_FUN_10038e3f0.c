
ulong FUN_10038e3f0(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(DAT_1011c8478 + 0x14);
  uVar4 = *param_1 / uVar3;
  param_1[1] = uVar4;
  uVar1 = ((uVar3 - 1) + param_1[2]) / uVar3;
  param_1[3] = uVar1;
  uVar1 = uVar1 - uVar4;
  uVar2 = (ulong)uVar1;
  if (uVar1 == 1) {
    *param_1 = *param_1 % uVar3;
    uVar1 = param_1[2] - 1;
    uVar2 = (ulong)uVar1 / (ulong)uVar3;
    uVar3 = uVar1 % uVar3 + 1;
  }
  else {
    *param_1 = 0;
  }
  param_1[2] = uVar3;
  return uVar2;
}

