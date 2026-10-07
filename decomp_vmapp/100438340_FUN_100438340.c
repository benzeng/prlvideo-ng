
undefined8 * FUN_100438340(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    *param_1 = PTR_shared_null_100ba20d0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined1 *)((long)param_1 + 0xc) = 0;
  }
  else {
    piVar1 = (int *)*param_2;
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)((long)param_2 + 0xc);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  return param_1;
}

