
undefined8 FUN_1007174c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != (undefined8 *)0x0) {
    param_1[3] = DAT_1011ccb60;
    param_1[2] = DAT_1011ccb58;
    param_1[1] = DAT_1011ccb50;
    *param_1 = DAT_1011ccb48;
    uVar1 = 0;
  }
  return uVar1;
}

