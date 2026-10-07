
undefined4 FUN_10020000e(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 local_2c;
  undefined8 local_10;
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  local_10 = param_1;
  if (*(long *)(param_1 + 0x58) == 0) {
    local_10 = *(long *)(param_1 + 0x90);
  }
  if (local_10 == 0) {
    local_2c = 0;
  }
  else if (*(long *)(local_10 + 0x58) == 0) {
    local_2c = 0;
  }
  else {
    *param_3 = *(undefined8 *)(local_10 + 0x58);
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(local_10 + 0x88);
    }
    if ((*(uint *)(local_10 + 0x78) >> 9 & 1) != 0) {
      *param_2 = 1;
    }
    local_2c = 1;
  }
  return local_2c;
}

