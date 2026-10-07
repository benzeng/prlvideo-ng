
uint FUN_1007d7110(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = param_3;
  }
  uVar2 = param_2 - 1;
  if ((param_2 & uVar2) != 0) {
    uVar2 = uVar2 >> 1 | uVar2;
    uVar2 = uVar2 >> 2 | uVar2;
    uVar2 = uVar2 >> 4 | uVar2;
    uVar2 = uVar2 >> 8 | uVar2;
    param_2 = (uVar2 >> 0x10 | uVar2) + 1 >> 1;
  }
  *param_1 = param_2;
  param_1[1] = uVar1;
  uVar1 = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
    uVar2 = param_2 * 2 - 1;
  }
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_2;
}

