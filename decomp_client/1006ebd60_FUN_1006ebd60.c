
void FUN_1006ebd60(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102225cd0;
  *param_1 = &PTR_FUN_102225e80;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  return;
}

