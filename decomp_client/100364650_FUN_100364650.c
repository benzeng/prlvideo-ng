
void FUN_100364650(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1021efe00;
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[3] != (void *)0x0)) {
      operator_delete((void *)param_1[3]);
    }
  }
  return;
}

