
void FUN_1000814c0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021edb50;
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

