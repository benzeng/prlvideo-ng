
void FUN_1007fa740(undefined8 *param_1)

{
  int *piVar1;
  
  param_1[-2] = &PTR_FUN_1021f98f0;
  *param_1 = &PTR_FUN_1021f9ab0;
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[5] != (void *)0x0)) {
      operator_delete((void *)param_1[5]);
    }
  }
  QComboBox::~QComboBox((QComboBox *)(param_1 + -2));
  operator_delete((QComboBox *)(param_1 + -2));
  return;
}

