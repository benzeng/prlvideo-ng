
QString * FUN_1002a0af0(QString *param_1,long param_2)

{
  QString local_88;
  undefined1 local_80 [8];
  QTypedArrayData<unsigned_short> *local_78;
  undefined1 local_21;
  
  FUN_1002a0c20(local_80,param_2 + 0x18);
  param_1->field0_0x0 = local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_21 = *(int *)local_78 != 0;
    UNLOCK();
    local_78 = param_1->field0_0x0;
  }
  FUN_100252e70(local_80);
  if (*(int *)(local_78 + 4) == 0) {
    CAntivirusInfo::info(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x38));
    CAntivirusInfo::productSimpleName();
    QString::operator=(param_1,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_88.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
  }
  return param_1;
}

