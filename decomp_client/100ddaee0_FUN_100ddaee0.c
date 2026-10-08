
QString * FUN_100ddaee0(QString *param_1,long *param_2)

{
  QArrayData *pQVar1;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(int *)(*param_2 + 4) == 0) {
    return param_1;
  }
  QString::toLocal8Bit();
  qgetenv((char *)&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100ddaf51;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100ddaf51:
  if (*(int *)(local_30 + 4) != 0) {
    pQVar1 = local_30 + *(long *)(local_30 + 0x10);
    if (pQVar1 != (QArrayData *)0x0) {
      _strlen((char *)pQVar1);
    }
    QString::fromLocal8Bit_helper((char *)&local_40,(int)pQVar1);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100ddafb9;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100ddafb9:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return param_1;
}

