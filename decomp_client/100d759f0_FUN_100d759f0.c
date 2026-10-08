
void FUN_100d759f0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10225bb30;
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  QObject::~QObject(param_1);
  return;
}

