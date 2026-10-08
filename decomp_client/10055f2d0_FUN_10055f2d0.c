
void FUN_10055f2d0(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221bb20;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221bcd0;
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  }
  QWidget::~QWidget(param_1);
  return;
}

