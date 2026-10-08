
void FUN_1005371a0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10221a9b8;
  *param_1 = &PTR_FUN_10221aba0;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  operator_delete((QWidget *)(param_1 + -2));
  return;
}

