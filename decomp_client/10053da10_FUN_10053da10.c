
void FUN_10053da10(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221ac40;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221ae28;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  QWidget::~QWidget(param_1);
  operator_delete(param_1);
  return;
}

