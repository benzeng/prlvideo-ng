
void FUN_100413d60(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_100bc0570;
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  QObject::~QObject(param_1);
  return;
}

