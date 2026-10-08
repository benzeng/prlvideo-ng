
QString * FUN_1005fde90(QString *param_1,long param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  pQVar1 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x78);
  param_1->field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_19 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  if (*(int *)(param_2 + 0x80) == 3) {
    QString::fromUtf8_helper((char *)&local_28,0x1e41978);
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
  else if (*(int *)(param_2 + 0x80) == 1) {
    MacUtils::getRealCdMountName(&local_30,(QString *)(param_2 + 0x78));
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
  return param_1;
}

