
void FUN_100b5b6c0(QMutex *param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  QMutex::~QMutex(param_1);
  return;
}

