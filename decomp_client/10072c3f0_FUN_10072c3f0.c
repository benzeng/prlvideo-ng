
void FUN_10072c3f0(QObject *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102227290;
  pauVar1 = operator_new(0x30);
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *pauVar1 = auVar2;
  pauVar1[1] = auVar2;
  pauVar1[2] = auVar2;
  *(undefined1 (**) [16])(param_1 + 0x10) = pauVar1;
  return;
}

