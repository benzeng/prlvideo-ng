
void FUN_10036fc50(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10220e460;
  puVar1 = PTR_shared_null_1021e15e8;
  auVar2._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar2._0_8_ = PTR_shared_null_1021e15e8;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar2;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e15d0;
  *(undefined **)(param_1 + 0x30) = puVar1;
  FUN_10036fde0(param_1);
  return;
}

