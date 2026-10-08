
void FUN_1007900d0(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1021f7380;
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[2] != (void *)0x0)) {
      operator_delete((void *)param_1[2]);
    }
  }
  operator_delete(param_1);
  return;
}

