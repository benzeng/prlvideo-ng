
void FUN_1009ab5f0(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &DAT_102233790;
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[8] != (void *)0x0)) {
      operator_delete((void *)param_1[8]);
    }
  }
  FUN_1001eebd0(param_1);
  return;
}

