
void FUN_1006eb0e0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102225a80;
  *param_1 = &PTR_FUN_102225c30;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  operator_delete((QWidget *)(param_1 + -2));
  return;
}

