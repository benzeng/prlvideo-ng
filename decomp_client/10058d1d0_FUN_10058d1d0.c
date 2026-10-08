
void FUN_10058d1d0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10221d270;
  *param_1 = &PTR_FUN_10221d440;
  param_1[4] = &PTR_FUN_10221d490;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  CWindowInterface::~CWindowInterface((CWindowInterface *)(param_1 + 4));
  QMainWindow::~QMainWindow((QMainWindow *)(param_1 + -2));
  return;
}

