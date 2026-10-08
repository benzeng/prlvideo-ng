
void FUN_100d80290(QString *param_1,QString *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar1._0_8_ = PTR_shared_null_1021e1288;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar1;
  QString::operator=(param_1,param_2);
  QString::operator=(param_1 + 1,param_2 + 1);
  return;
}

