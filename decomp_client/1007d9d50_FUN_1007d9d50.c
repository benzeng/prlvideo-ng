
QString * FUN_1007d9d50(QString *param_1,undefined4 param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Undefined",9);
  param_1->field0_0x0 = pQVar1;
  switch(param_2) {
  case 1:
    QString::fromUtf8_helper((char *)&local_50,0x1e1923a);
    QString::operator=(param_1,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_50.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
    break;
  case 2:
    QString::fromUtf8_helper((char *)&local_48,0x1e19244);
    QString::operator=(param_1,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_48.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
    break;
  case 3:
    QString::fromUtf8_helper((char *)&local_40,0x1e19252);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_40.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
    break;
  case 4:
    QString::fromUtf8_helper((char *)&local_38,0x1e156bc);
    QString::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
    break;
  case 5:
    QString::fromUtf8_helper((char *)&local_30,0x1e19261);
    QString::operator=(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_30.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  return param_1;
}

