
void FUN_1005451a0(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221aed0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221b0b8;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  QWidget::~QWidget(param_1);
  return;
}

