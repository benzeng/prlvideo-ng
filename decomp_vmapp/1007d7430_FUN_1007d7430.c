
uint FUN_1007d7430(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_2 - 1;
  if ((param_2 & uVar1) != 0) {
    uVar1 = uVar1 >> 1 | uVar1;
    uVar1 = uVar1 >> 2 | uVar1;
    uVar1 = uVar1 >> 4 | uVar1;
    uVar1 = uVar1 >> 8 | uVar1;
    param_2 = (uVar1 >> 0x10 | uVar1) + 1 >> 1;
  }
  *(uint *)(param_1 + 3) = param_2;
  iVar2 = 0;
  iVar3 = 0;
  if (param_2 != 0) {
    iVar2 = param_2 - 1;
    iVar3 = param_2 * 2 + -1;
  }
  *(int *)(param_1 + 2) = iVar2;
  *(int *)((long)param_1 + 0x14) = iVar3;
  param_1[1] = 0;
  *param_1 = 0;
  return param_2;
}

