
void FUN_1000ffad0(QObject *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f92d0;
  puVar1 = PTR_shared_null_1021e15e8;
  auVar2._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar2._0_8_ = PTR_shared_null_1021e15e8;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar2;
  *(undefined **)(param_1 + 0x20) = puVar1;
  FUN_1000ffc20(param_1);
  return;
}

