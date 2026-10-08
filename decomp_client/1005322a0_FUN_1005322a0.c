
void FUN_1005322a0(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221a600;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221a7e8;
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
  }
  QWidget::~QWidget(param_1);
  return;
}

