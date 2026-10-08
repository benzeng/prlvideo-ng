
void FUN_1001cd800(QObject *param_1,undefined4 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ff420;
  pvVar1 = operator_new(0x80);
  FUN_1001cc3f0(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  DAT_102310918 = param_1;
  FUN_1001cc7f0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return;
}

