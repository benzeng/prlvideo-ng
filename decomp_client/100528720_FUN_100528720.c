
void FUN_100528720(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221a370;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221a558;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  QWidget::~QWidget(param_1);
  return;
}

