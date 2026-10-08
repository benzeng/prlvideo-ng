
void FUN_100764fc0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = uVar2;
  return;
}

