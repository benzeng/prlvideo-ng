
QString * FUN_1006e92d0(QString *param_1)

{
  char cVar1;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = FUN_1006df1a0();
  if (cVar1 == '\0') {
    FUN_1006e3a60(&local_50);
    param_1->field0_0x0 = local_50.field0_0x0;
    if (1 < *(int *)local_50.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_30,0xae981f);
    QString::append(param_1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006e9452;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_1006e9452:
    if (*(int *)local_50.field0_0x0 == -1) {
      return param_1;
    }
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    goto LAB_1006e9473;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("/../PlugIns",0xb);
  QDir::filePath(&local_40);
  param_1->field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_21 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0xae96f1);
  QString::append(param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e937e;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006e937e:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e93ae;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006e93ae:
  if (*(int *)local_48 == -1) {
    return param_1;
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return param_1;
    }
    local_21 = 0;
  }
LAB_1006e9473:
  QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  return param_1;
}

