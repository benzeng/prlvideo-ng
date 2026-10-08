
void FUN_10055f330(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10221bb20;
  *param_1 = &PTR_FUN_10221bcd0;
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x20))();
  }
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  return;
}

