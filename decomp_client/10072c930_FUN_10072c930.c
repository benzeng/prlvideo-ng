
void FUN_10072c930(QObject *param_1)

{
  void *pvVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102227290;
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_10072cc00(pvVar1);
    operator_delete(pvVar1);
  }
  QObject::~QObject(param_1);
  return;
}

