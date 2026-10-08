
bool FUN_100d96a20(QString *param_1,QString *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  bool bVar2;
  
  if (param_1 == param_2) {
    bVar2 = false;
  }
  else {
    QString::operator=(param_1,param_2);
    QString::operator=(param_1 + 1,param_2 + 1);
    QString::operator=(param_1 + 2,param_2 + 2);
    if (param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) {
      (**(code **)(*(long *)param_1[3].field0_0x0 + 8))();
    }
    pQVar1 = (QTypedArrayData<unsigned_short> *)FUN_100dafe90(param_2[3].field0_0x0);
    param_1[3].field0_0x0 = pQVar1;
    bVar2 = pQVar1 != (QTypedArrayData<unsigned_short> *)0x0;
  }
  return bVar2;
}

