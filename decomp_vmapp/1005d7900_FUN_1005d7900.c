
QString * FUN_1005d7900(QString *param_1)

{
  char cVar1;
  QArrayData *pQVar2;
  QArrayData *local_48;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  QDir::path();
  pQVar2 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::append(&local_30);
  QDir::dirName();
  param_1->field0_0x0 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005d79b7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005d79b7:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005d79e7;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1005d79e7:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005d7a17;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1005d7a17:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005d7a47;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005d7a47:
  cVar1 = QString::endsWith(param_1,&DAT_1011bc900,1);
  if (cVar1 == '\0') {
    QString::append(param_1);
  }
  return param_1;
}

