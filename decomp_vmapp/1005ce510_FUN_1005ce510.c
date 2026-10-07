
undefined8 * FUN_1005ce510(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  param_1[1] = *(undefined8 *)(param_2 + 0x58);
  *param_1 = uVar1;
  return param_1;
}

