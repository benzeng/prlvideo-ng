
void FUN_100ac1ad0(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1022828f0;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[1] != (void *)0x0)) {
      operator_delete((void *)param_1[1]);
    }
  }
  return;
}

