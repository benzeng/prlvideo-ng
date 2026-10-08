
void FUN_1009ab230(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_102235410;
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[0xb] != (void *)0x0)) {
      operator_delete((void *)param_1[0xb]);
    }
  }
  FUN_1009a7b30(param_1);
  return;
}

