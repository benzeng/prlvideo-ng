
undefined8
FUN_1008b1d10(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  int iVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = **(undefined8 **)(param_5 + 4);
  }
  iVar1 = **(int **)(param_5 + 6);
  if (iVar1 == 0x10) {
    *param_5 = 1;
  }
  else {
    if (iVar1 != 4) {
      return 0;
    }
    *param_5 = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(*(long *)(*(int **)(param_5 + 6) + 2) + 8);
    *param_3 = **(undefined4 **)(*(long *)(param_5 + 6) + 8);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_5 + 4);
  }
  return 1;
}

