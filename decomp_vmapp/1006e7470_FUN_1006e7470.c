
QString * FUN_1006e7470(QString *param_1)

{
  undefined8 uVar1;
  QTypedArrayData<unsigned_short> *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("%1.%2",5);
  local_48 = (QArrayData *)QString::fromAscii_helper("Parallels Desktop",0x11);
  uVar1 = QString::remove(&local_48,0x20,1);
  QString::arg(&local_38,&local_40,uVar1,0,0x20);
  local_50 = (QArrayData *)QString::fromAscii_helper("12.2.1-41615",0xc);
  QString::arg(&local_30,&local_38,&local_50,0,0x20);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e7531;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006e7531:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e7561;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006e7561:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e7591;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006e7591:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e75c1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006e75c1:
  FUN_1006e72d0(&local_60);
  local_58.field0_0x0 = local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_19 = *(int *)local_60 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0xa02eac);
  QString::append(&local_58);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e7635;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006e7635:
  param_1->field0_0x0 = local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_19 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_19 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e7689;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1006e7689:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e76b9;
    }
    QArrayData::deallocate((QArrayData *)local_60,2,8);
  }
LAB_1006e76b9:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

