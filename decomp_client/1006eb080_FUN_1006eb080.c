
void FUN_1006eb080(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102225a80;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102225c30;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  QWidget::~QWidget(param_1);
  operator_delete(param_1);
  return;
}

