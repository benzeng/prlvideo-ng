
void FUN_1007281e0(undefined8 *param_1)

{
  int *piVar1;
  
  param_1[-6] = &PTR_FUN_102226c10;
  param_1[-4] = &PTR_FUN_102226e00;
  *param_1 = &PTR_FUN_102226e50;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
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
  return;
}

