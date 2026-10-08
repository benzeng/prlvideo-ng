
void FUN_1006ebd20(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102225cd0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102225e80;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  QWidget::~QWidget(param_1);
  return;
}

