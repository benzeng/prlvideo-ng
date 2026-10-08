
void FUN_100d79760(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10225bdc0;
  _IOObjectRelease(*(undefined4 *)(*(long *)(param_1 + 0x18) + 8));
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  QObject::~QObject(param_1);
  return;
}

