
void FUN_100353730(undefined8 *param_1)

{
  int *piVar1;
  
  FUN_1003537a0();
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1);
    }
  }
  return;
}

