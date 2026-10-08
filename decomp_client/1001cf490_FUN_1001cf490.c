
undefined8 * FUN_1001cf490(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    piVar1 = (int *)*param_2;
    uVar2 = param_2[1];
    *param_1 = piVar1;
    param_1[1] = uVar2;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

