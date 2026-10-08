
void FUN_10038fd80(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021f1a40;
  if (*(long **)(param_1 + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x160) + 0x20))();
  }
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

