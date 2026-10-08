
void FUN_100ad9bc0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10223a9f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10223aa80;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x60))();
  }
  FUN_100adad00(param_1 + 0x38);
  QObject::~QObject(param_1);
  return;
}

