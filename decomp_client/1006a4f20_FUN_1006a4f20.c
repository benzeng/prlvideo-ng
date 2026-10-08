
void FUN_1006a4f20(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102224fc0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0x28);
  FUN_1006a1280(pvVar1,param_1,param_2,param_1);
  *(void **)(param_1 + 0x18) = pvVar1;
  auVar2._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar2._0_8_ = PTR_shared_null_1021e15d0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar2;
  FUN_1006a5020(param_1);
  return;
}

