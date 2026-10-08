
void FUN_10055b9e0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10221b8d0;
  *param_1 = &PTR_FUN_10221ba80;
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x20))();
  }
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  return;
}

