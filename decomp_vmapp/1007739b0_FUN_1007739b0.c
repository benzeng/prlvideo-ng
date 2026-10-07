
QString * FUN_1007739b0(QString *param_1)

{
  char cVar1;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_38 = (QArrayData *)QString::fromAscii_helper("mount",5);
  cVar1 = FUN_100770460(&local_38,&local_30,0,0,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100773a29;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100773a29:
  if (cVar1 != '\0') {
    QString::append(param_1);
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("df -h",5);
  cVar1 = FUN_100770460(&local_40,&local_30,0,0,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100773a94;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100773a94:
  if (cVar1 != '\0') {
    QString::fromUtf8_helper((char *)&local_48,0xb21a30);
    QString::append(&local_48);
    QString::append(param_1);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100773af6;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_100773af6:
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
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

