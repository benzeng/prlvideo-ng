
QString * FUN_10039f310(QString *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  lVar1 = FUN_1003b0a30(param_2 + 0x20);
  if (lVar1 == 0) {
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  }
  else {
    uVar2 = FUN_1003b0a30(param_2 + 0x20);
    FUN_100188480(&local_30,uVar2);
    QString::fromUtf8_helper((char *)param_1,0x1df14c0);
    QString::append(param_1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return param_1;
        }
        local_22 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return param_1;
}

