
void FUN_10058d160(QMainWindow *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221d270;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221d440;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221d490;
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  CWindowInterface::~CWindowInterface((CWindowInterface *)(param_1 + 0x30));
  QMainWindow::~QMainWindow(param_1);
  return;
}

