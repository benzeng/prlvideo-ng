
undefined8
FUN_100c85400(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_6 != (undefined4 *)0x0) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_6;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_6[1];
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_6[2];
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(param_6 + 6);
    }
    uVar1 = 1;
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = *(undefined8 *)(param_6 + 4);
    }
  }
  return uVar1;
}

