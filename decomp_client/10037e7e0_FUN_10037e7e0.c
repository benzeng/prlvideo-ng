
undefined8 * FUN_10037e7e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    param_1[7] = param_2[7];
    param_1[6] = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = param_2[2];
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  return param_1;
}

