
void FUN_100537070(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221a9b8;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221aba0;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  QWidget::~QWidget(param_1);
  return;
}

