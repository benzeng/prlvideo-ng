
uint FUN_1007d7280(uint *param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1[3] - param_1[2] & param_1[5];
  if (param_2 <= uVar2) {
    uVar2 = param_2;
  }
  uVar3 = param_1[2] & param_1[4];
  uVar1 = *param_1 - uVar3;
  if (uVar2 + uVar3 <= *param_1) {
    uVar1 = uVar2;
  }
  *param_3 = (long)param_1 + (ulong)(uVar3 * param_1[1]) + 0x18;
  return uVar1;
}

