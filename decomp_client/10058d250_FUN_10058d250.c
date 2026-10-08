
void FUN_10058d250(CWindowInterface *param_1)

{
  *(undefined ***)(param_1 + -0x30) = &PTR_FUN_10221d270;
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_10221d440;
  *(undefined ***)param_1 = &PTR_FUN_10221d490;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  CWindowInterface::~CWindowInterface(param_1);
  QMainWindow::~QMainWindow((QMainWindow *)(param_1 + -0x30));
  return;
}

