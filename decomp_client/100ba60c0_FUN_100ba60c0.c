
void FUN_100ba60c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_3[1] = param_2[1];
  *param_3 = uVar1;
  FUN_100ba5b10(param_1,param_3,0x20);
  return;
}

