
void FUN_1004e5170(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102219bd0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102219e00;
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  QWidget::~QWidget(param_1);
  return;
}

