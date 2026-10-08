
void FUN_100395310(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10220fca0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220fe50;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  QWidget::~QWidget(param_1);
  return;
}

