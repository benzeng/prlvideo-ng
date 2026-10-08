
void FUN_10053da70(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10221ac40;
  *param_1 = &PTR_FUN_10221ae28;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  operator_delete((QWidget *)(param_1 + -2));
  return;
}

