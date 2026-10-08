
void FUN_1003809a0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10220f0d0;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

