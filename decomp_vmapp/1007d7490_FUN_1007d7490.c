
uint FUN_1007d7490(uint *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1[4] & *param_1;
  uVar3 = param_1[1] - *param_1 & param_1[5];
  uVar1 = param_1[6] - uVar2;
  if (uVar3 + uVar2 <= param_1[6]) {
    uVar1 = uVar3;
  }
  *param_2 = (long)param_1 + (ulong)uVar2 + 0x20;
  return uVar1;
}

