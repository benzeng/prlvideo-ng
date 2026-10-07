
void FUN_100470880(undefined8 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
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
  return;
}

