
void FUN_100334140(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10220c320;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  QObject::~QObject(param_1);
  return;
}

