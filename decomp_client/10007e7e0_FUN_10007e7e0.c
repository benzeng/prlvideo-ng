
void FUN_10007e7e0(QWidget *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10222fa60;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222fc20;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222fc70;
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
  }
  CWindowInterface::~CWindowInterface((CWindowInterface *)(param_1 + 0x30));
  QWidget::~QWidget(param_1);
  return;
}

