
QString * FUN_100d88dc0(QString *param_1,uint param_2)

{
  uint uVar1;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar1 = param_2 >> 8;
  if ((param_2 < 0x806) || (uVar1 != 8)) {
    if ((uVar1 - 0xf < 2) || (uVar1 == 9)) {
      QString::fromUtf8_helper((char *)&local_28,0x1efe4f9);
      QString::operator=(param_1,&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_28.field0_0x0 != 0) {
            return param_1;
          }
          local_19 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
    }
    else if (uVar1 == 7) {
      QString::fromUtf8_helper((char *)&local_30,0x1efe4e7);
      QString::operator=(param_1,&local_30);
      if (*(int *)local_30.field0_0x0 != -1) {
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_30.field0_0x0 != 0) {
            return param_1;
          }
          local_19 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
      }
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_38,0x1efe51f);
    QString::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return param_1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  return param_1;
}

