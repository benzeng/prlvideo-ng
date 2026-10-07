
void FUN_10032fc60(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_100bbbaa0;
  FUN_1002a53f0(param_1[2],0x400,0x41f);
  FUN_10032fdc0(param_1);
  if (*(long *)(param_1[2] + 0x868) != 0) {
    FUN_1002adb30();
    pvVar1 = (void *)param_1[7];
    if (pvVar1 != (void *)0x0) {
      FUN_10032efc0(pvVar1);
      operator_delete(pvVar1);
    }
  }
  FUN_10038ec80();
  pvVar1 = (void *)param_1[0xf];
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[0x10] != pvVar1) {
      param_1[0x10] = pvVar1;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[0xc] != pvVar1) {
      param_1[0xc] = pvVar1;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[8];
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[9] != pvVar1) {
      param_1[9] = pvVar1;
    }
    operator_delete(pvVar1);
  }
  FUN_100332380(param_1 + 4,param_1[5]);
  FUN_1002a6e00(param_1);
  return;
}

