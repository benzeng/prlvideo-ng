
void FUN_1005451e0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10221aed0;
  *param_1 = &PTR_FUN_10221b0b8;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  return;
}

