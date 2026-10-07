
void FUN_1000a7080(void)

{
  char cVar1;
  QFileInfo local_88 [8];
  QString local_80;
  QString local_78;
  QString local_70;
  QFileInfo local_68 [8];
  QString local_60;
  QString local_58;
  QString local_50;
  QFileInfo local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QFileInfo::QFileInfo(local_48,&local_50);
  QFileInfo::absolutePath();
  QFileInfo::~QFileInfo(local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_11 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000a70f6;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1000a70f6:
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_11 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0xa02eac);
  QString::append(&local_60);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000a7161;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000a7161:
  local_58.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_11 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x9e81e9);
  QString::append(&local_58);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000a71cc;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000a71cc:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_11 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000a71fc;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1000a71fc:
  QFileInfo::QFileInfo(local_68,&local_58);
  cVar1 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_68);
  if (cVar1 == '\0') {
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_28,0xa02eac);
    QString::append(&local_80);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_11 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1000a7290;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_1000a7290:
    local_78.field0_0x0 = local_80.field0_0x0;
    if (1 < *(int *)local_80.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
      local_11 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_78);
    local_70.field0_0x0 = local_78.field0_0x0;
    if (1 < *(int *)local_78.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
      local_11 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_20,0x9e81f7);
    QString::append(&local_70);
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        local_11 = *(int *)local_20 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1000a732b;
      }
      QArrayData::deallocate(local_20,2,8);
    }
LAB_1000a732b:
    QString::operator=(&local_58,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_11 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1000a7368;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_1000a7368:
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_11 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1000a7398;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_1000a7398:
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_11 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1000a73c8;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
  }
LAB_1000a73c8:
  QFileInfo::QFileInfo(local_88,&local_58);
  cVar1 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_88);
  if (cVar1 != '\0') {
    QFile::remove(&local_58);
  }
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_11 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000a7426;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1000a7426:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

