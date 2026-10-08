
void FUN_10035db00(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x90) = param_2[1];
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}

