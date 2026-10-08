
void FUN_100814b90(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_102202c78;
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[9] != (void *)0x0)) {
      operator_delete((void *)param_1[9]);
    }
  }
  FUN_100327dc0(param_1);
  operator_delete(param_1);
  return;
}

