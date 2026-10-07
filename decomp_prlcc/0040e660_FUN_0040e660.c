
undefined8 FUN_0040e660(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  
  if (param_2 == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar1 = 1;
  }
  else {
    pvVar2 = malloc((ulong)param_2);
    uVar1 = 0;
    if (pvVar2 != (void *)0x0) {
      uVar1 = 1;
      *param_1 = pvVar2;
      *(uint *)(param_1 + 1) = param_2;
    }
  }
  return uVar1;
}

