
undefined8 FUN_100b962a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != (undefined8 *)0x0) {
    param_1[3] = DAT_1023118e8;
    param_1[2] = DAT_1023118e0;
    param_1[1] = DAT_1023118d8;
    *param_1 = DAT_1023118d0;
    uVar1 = 0;
  }
  return uVar1;
}

