
QString * FUN_10059f600(QString *param_1,undefined8 param_2)

{
  int iVar1;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QMutex::lock();
  iVar1 = QRegExp::indexIn(&DAT_1011bc6f0,param_2,0,0);
  if (iVar1 < 0) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Can\'t extract disk name from %s",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10059f6f9;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  else {
    QRegExp::cap((int)&local_38);
    QString::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10059f6f9;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_10059f6f9:
  QMutex::unlock();
  return param_1;
}

