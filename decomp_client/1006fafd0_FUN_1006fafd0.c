
void FUN_1006fafd0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1022267c0;
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  }
  QObject::~QObject(param_1);
  return;
}

