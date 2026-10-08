
void FUN_1004a9eb0(undefined8 *param_1)

{
  int *piVar1;
  
  param_1[-2] = &PTR_FUN_102215f50;
  *param_1 = &PTR_FUN_102216158;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[6] != (void *)0x0)) {
      operator_delete((void *)param_1[6]);
    }
  }
  FUN_10044e270(param_1 + -2);
  return;
}

