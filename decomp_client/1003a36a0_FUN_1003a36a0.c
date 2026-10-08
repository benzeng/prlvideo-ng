
void FUN_1003a36a0(QMainWindow *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102210200;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022103d0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102210420;
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  CWindowInterface::~CWindowInterface((CWindowInterface *)(param_1 + 0x30));
  QMainWindow::~QMainWindow(param_1);
  return;
}

