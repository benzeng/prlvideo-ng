
undefined8 FUN_0040ee90(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = 0x5f9e652;
  local_30 = 0x5f9e652;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0040ee50(&local_38);
  if (((((int)local_38 == 0xb36af47) && ((int)local_20 == 0)) && ((int)local_18 == 0)) &&
     ((int)local_10 == 0)) {
    uVar1 = 0xfffffffa;
    if (((int)local_30 == 2) && (uVar1 = 0, param_1 != (undefined4 *)0x0)) {
      *param_1 = 2;
      param_1[1] = (int)local_28;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

