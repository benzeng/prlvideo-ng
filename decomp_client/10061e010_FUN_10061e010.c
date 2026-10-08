
void FUN_10061e010(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102221470;
  *param_1 = &PTR_FUN_102221620;
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x20))();
  }
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  return;
}

