
void FUN_1004e2d20(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102219070;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022192c0;
  (*(code *)PTR_FUN_102219250)();
  FUN_1004dabf0(param_1);
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  QWidget::~QWidget(param_1);
  return;
}

