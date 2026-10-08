
void FUN_1003e1b40(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1022108c0;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  QObject::~QObject(param_1);
  return;
}

