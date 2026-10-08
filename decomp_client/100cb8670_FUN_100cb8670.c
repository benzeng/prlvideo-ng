
undefined8 FUN_100cb8670(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (*param_1 == 1) {
    uVar1 = 1;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 2);
    }
  }
  else {
    uVar1 = 0;
    if (*param_1 == 0) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = **(undefined8 **)(param_1 + 2);
      }
      uVar1 = 1;
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = *(undefined8 *)(*(long *)(param_1 + 2) + 8);
        return uVar1;
      }
    }
  }
  return uVar1;
}

