
void FUN_100b5f6a0(QString *param_1,QString *param_2)

{
  int iVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::operator=(param_1,param_2);
  iVar1 = FUN_100b91540(param_2);
  param_1[2].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  param_1[1].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (iVar1 == -1) {
    FUN_100df99c0("","License",0,"Unknown license format.");
  }
  else if (iVar1 == 0) {
    pQVar2 = operator_new(0x130);
    FUN_100b60f40(pQVar2,param_2);
    param_1[2].field0_0x0 = pQVar2;
  }
  else if (iVar1 == 1) {
    pQVar2 = operator_new(0x88);
    FUN_100b7e250(pQVar2,param_2);
    param_1[1].field0_0x0 = pQVar2;
  }
  return;
}

