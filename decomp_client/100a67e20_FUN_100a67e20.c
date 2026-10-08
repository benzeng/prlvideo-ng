
undefined8 FUN_100a67e20(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    pvVar1 = _malloc((ulong)param_2);
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    *param_1 = pvVar1;
    *(uint *)(param_1 + 1) = param_2;
  }
  return 1;
}

