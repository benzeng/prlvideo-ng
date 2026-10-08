
void FUN_1004607c0(QObject *param_1)

{
  void *pvVar1;
  
  FUN_10044e1e0();
  *(undefined ***)param_1 = &PTR_FUN_102213f10;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102214118;
  pvVar1 = operator_new(0x208);
  *(void **)(param_1 + 0x38) = pvVar1;
  pvVar1 = operator_new(0x38);
  FUN_10045e100(pvVar1,param_1);
  *(void **)(param_1 + 0x40) = pvVar1;
  QObject::installEventFilter(param_1);
  FUN_100461560(*(undefined8 *)(param_1 + 0x38),param_1);
  FUN_10045f650(*(undefined8 *)(param_1 + 0x40));
  return;
}

