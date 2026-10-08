
void FUN_1004e4480(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102219360;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102219590;
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  QWidget::~QWidget(param_1);
  return;
}

