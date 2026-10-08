
void FUN_10061df50(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102221470;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102221620;
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  }
  QWidget::~QWidget(param_1);
  return;
}

