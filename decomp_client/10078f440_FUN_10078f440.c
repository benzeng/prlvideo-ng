
void FUN_10078f440(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10222bba0;
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  }
  QObject::~QObject(param_1);
  return;
}

