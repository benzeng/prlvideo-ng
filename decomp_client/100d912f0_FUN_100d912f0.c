
QString * FUN_100d912f0(QString *param_1)

{
  char cVar1;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = FUN_100d875e0();
  if (cVar1 != '\0') {
    local_38 = (QArrayData *)QString::fromAscii_helper("../../../prl_disk_tool",0x16);
    QDir::absoluteFilePath(param_1);
    if (*(int *)local_38 == -1) {
      return param_1;
    }
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    goto LAB_100d913f5;
  }
  FUN_100d8bea0(&local_40);
  param_1->field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_21 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1efeb7c);
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d913d4;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d913d4:
  if (*(int *)local_40.field0_0x0 == -1) {
    return param_1;
  }
  if (*(int *)local_40.field0_0x0 != 0) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_40.field0_0x0 != 0) {
      return param_1;
    }
    local_21 = 0;
  }
LAB_100d913f5:
  QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  return param_1;
}

