
void FUN_1005d6390(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021f4340;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  QObject::~QObject(param_1);
  return;
}

