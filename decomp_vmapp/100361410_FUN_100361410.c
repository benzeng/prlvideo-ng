
void FUN_100361410(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = param_3;
  return;
}

