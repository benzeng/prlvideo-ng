
undefined8 * FUN_1000765e0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    FUN_100074050(param_1);
  }
  else {
    piVar1 = (int *)*param_2;
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    FUN_100076800(param_1 + 2,param_2 + 2);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    FUN_100076800(param_1 + 3,param_2 + 3);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  return param_1;
}

