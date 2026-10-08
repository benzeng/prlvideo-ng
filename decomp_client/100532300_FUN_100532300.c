
void FUN_100532300(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10221a600;
  *param_1 = &PTR_FUN_10221a7e8;
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0x20))();
  }
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  return;
}

