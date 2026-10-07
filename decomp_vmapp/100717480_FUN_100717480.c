
undefined8 FUN_100717480(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != (undefined8 *)0x0) {
    DAT_1011ccb60 = param_1[3];
    DAT_1011ccb58 = param_1[2];
    DAT_1011ccb48 = *param_1;
    DAT_1011ccb50 = param_1[1];
    uVar1 = 0;
  }
  return uVar1;
}

