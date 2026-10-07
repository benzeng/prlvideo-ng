
undefined8 *
FUN_1003f7cc0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  long *local_28;
  undefined1 local_1a;
  
  if (param_2 == 0) {
    piVar2 = (int *)*param_5;
    *param_1 = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  else {
    FUN_1003f6460(&local_28);
    if ((local_28 != (long *)0x0) && (local_28[2] != 0)) {
      param_5 = (undefined8 *)(local_28[2] + 8);
    }
    piVar2 = (int *)*param_5;
    *param_1 = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_1a = *piVar2 != 0;
      UNLOCK();
    }
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
  }
  return param_1;
}

