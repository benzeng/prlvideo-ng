
void FUN_1007fbe90(undefined8 *param_1)

{
  int *piVar1;
  
  param_1[-2] = &PTR_FUN_1021fb550;
  *param_1 = &PTR_FUN_1021fb700;
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[4] != (void *)0x0)) {
      operator_delete((void *)param_1[4]);
    }
  }
  QLineEdit::~QLineEdit((QLineEdit *)(param_1 + -2));
  operator_delete((QLineEdit *)(param_1 + -2));
  return;
}

