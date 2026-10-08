
undefined8 FUN_100cb9390(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (*piVar1 == 1) {
    uVar2 = 1;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(piVar1 + 2);
    }
  }
  else {
    uVar2 = 0;
    if (*piVar1 == 0) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = **(undefined8 **)(piVar1 + 2);
      }
      uVar2 = 1;
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = *(undefined8 *)(*(long *)(piVar1 + 2) + 8);
        return uVar2;
      }
    }
  }
  return uVar2;
}

