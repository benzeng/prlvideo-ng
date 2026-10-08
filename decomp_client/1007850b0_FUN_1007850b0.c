
void FUN_1007850b0(QObject *param_1)

{
  void *pvVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10222ae90;
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_100785300(pvVar1);
    operator_delete(pvVar1);
  }
  QObject::~QObject(param_1);
  return;
}

