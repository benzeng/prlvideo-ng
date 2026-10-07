
undefined8 * FUN_1004797e0(undefined8 *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
    if (param_1 != (undefined8 *)0x0) {
      piVar1 = (int *)*param_1;
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (pvVar2 = (void *)*param_1, pvVar2 != (void *)0x0)) {
          FUN_100031ed0(pvVar2);
          operator_delete(pvVar2);
        }
      }
      operator_delete(param_1);
      puVar3 = (undefined8 *)0x0;
    }
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = param_1;
    *puVar3 = &PTR_FUN_10111c730;
  }
  return puVar3;
}

