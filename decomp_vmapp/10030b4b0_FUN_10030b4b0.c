
undefined8 FUN_10030b4b0(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x54);
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x54) = uVar3;
  if ((iVar1 - iVar2 == param_2[2] - *param_2) &&
     (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58) == param_2[3] - param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)(param_2[2] - *param_2) >> 8),1);
  }
  uVar3 = FUN_10030b0f0(param_1,0,0);
  return uVar3;
}

