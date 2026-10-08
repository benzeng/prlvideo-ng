
void FUN_100395390(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10220fca0;
  *param_1 = &PTR_FUN_10220fe50;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  return;
}

