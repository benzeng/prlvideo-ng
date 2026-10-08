
void FUN_1003be860(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102210720;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

