
void FUN_1003451f0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10220d120;
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  QObject::~QObject(param_1);
  return;
}

