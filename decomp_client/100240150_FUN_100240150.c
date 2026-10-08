
undefined8 FUN_100240150(long param_1)

{
  char cVar1;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_28.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x20);
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_11 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  FUN_100109830(&local_28);
  local_48 = (QArrayData *)QString::fromAscii_helper("%1/Desktop",10);
  QDir::homePath();
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_11 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_20,0x1e2468c);
  QString::append(&local_38);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100240220;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_100240220:
  local_30.field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_11 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_11 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100240279;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100240279:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1002402a9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002402a9:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_11 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1002402d9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002402d9:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100240309;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100240309:
  QFile::readLink(&local_58);
  cVar1 = operator==(&local_28,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_11 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100240355;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100240355:
  if ((cVar1 != '\0') && (cVar1 = QFile::remove(&local_30), cVar1 == '\0')) {
    FUN_100df99c0("","prl_client_app",0,"Failed to delete VM Desktop shortcut");
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1002403b4;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1002403b4:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return 0;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return 0;
}

