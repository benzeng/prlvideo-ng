
void FUN_10075af30(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102228a70;
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    QObject::deleteLater();
  }
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

