
void FUN_10055ba40(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221b8d0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221ba80;
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  }
  QWidget::~QWidget(param_1);
  operator_delete(param_1);
  return;
}

