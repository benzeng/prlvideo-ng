
void FUN_10019dc40(QString *param_1,QString *param_2,undefined4 param_3,undefined1 param_4,
                  QTypedArrayData<unsigned_short> *param_5)

{
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  param_1[1].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e15e8;
  QString::operator=(param_1,param_2);
  *(undefined4 *)&param_1[2].field0_0x0 = param_3;
  *(undefined1 *)((long)&param_1[2].field0_0x0 + 4) = param_4;
  param_1[3].field0_0x0 = param_5;
  param_1[5].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  return;
}

