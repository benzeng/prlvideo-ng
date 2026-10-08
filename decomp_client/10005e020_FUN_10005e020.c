
void FUN_10005e020(QObject *param_1)

{
  *(undefined **)param_1 = &DAT_1021ed560;
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  }
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

