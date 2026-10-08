
QString * FUN_1001c7340(QString *param_1)

{
  int iVar1;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  QMetaObject::tr((char *)param_1,PTR_staticMetaObject_1021e1520,0x1dd83ce);
  local_28.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("12.2.1 (41615)",0xe);
  iVar1 = QString::lastIndexOf(&local_28,0x20,0xffffffff,1);
  if (0 < iVar1) {
    QString::left((int)&local_30);
    QString::operator=(&local_28,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001c73e6;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_1001c73e6:
  QString::append(param_1);
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
  return param_1;
}

