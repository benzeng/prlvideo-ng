
undefined8 * FUN_100230900(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[2] = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  return param_1;
}

