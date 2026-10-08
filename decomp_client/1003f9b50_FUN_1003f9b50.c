
void FUN_1003f9b50(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102210ab0;
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  }
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

