
undefined8 * FUN_100cdebb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    param_1[3] = param_2[3];
    param_1[2] = param_2[2];
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  return param_1;
}

