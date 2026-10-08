
QString * FUN_100152fb0(QString *param_1,undefined8 param_2,undefined8 *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  long lVar2;
  long lVar3;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_3;
  param_1->field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("%1 (%2)",7);
  QString::arg(&local_40,&local_48,param_3,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015303e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10015303e:
  lVar3 = 1;
  do {
    lVar2 = FUN_100152d60(param_2,param_1);
    if (lVar2 == 0) {
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return param_1;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_40,2,8);
      }
      return param_1;
    }
    QString::arg(&local_50,&local_40,lVar3,0,10,0x20);
    QString::operator=(param_1,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100153050;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100153050:
    lVar3 = lVar3 + 1;
  } while( true );
}

