
void FUN_100341250(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  uVar1 = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 4) = uVar1;
  param_1[6] = param_2[5];
  param_1[7] = param_2[6];
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 7);
  return;
}

