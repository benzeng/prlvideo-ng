
void FUN_1004de960(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102218ab0;
  *param_1 = &PTR_FUN_102218ce0;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  param_1[8] = 0;
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  return;
}

