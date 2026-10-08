
void FUN_100853b20(undefined8 *param_1)

{
  int *piVar1;
  
  param_1[-6] = &PTR_FUN_102226fa8;
  param_1[-4] = &PTR_FUN_102227198;
  *param_1 = &PTR_FUN_1022271e8;
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[7] != (void *)0x0)) {
      operator_delete((void *)param_1[7]);
    }
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  operator_delete((CBaseDialog *)(param_1 + -6));
  return;
}

