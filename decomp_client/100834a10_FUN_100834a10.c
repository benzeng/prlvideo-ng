
void FUN_100834a10(undefined8 *param_1)

{
  int *piVar1;
  
  param_1[-2] = &PTR_FUN_10220e850;
  *param_1 = &PTR_FUN_10220ea00;
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[4] != (void *)0x0)) {
      operator_delete((void *)param_1[4]);
    }
  }
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  return;
}

