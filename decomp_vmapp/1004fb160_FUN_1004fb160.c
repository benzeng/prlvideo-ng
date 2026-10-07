
undefined8 FUN_1004fb160(long param_1,QString *param_2)

{
  int iVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  char cVar4;
  long lVar5;
  QString QVar6;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QDir local_60 [8];
  QFileInfo local_58 [8];
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QString::indexOf(param_2,0x2f,0,1);
  QString::left((int)&local_48);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QMutex::lock();
  lVar5 = FUN_100502100((long *)(param_1 + 0x20),&local_48);
  if (*(long *)(param_1 + 0x20) == lVar5) {
    QMutex::unlock();
    QDir::QDir(local_60,(QString *)(param_1 + 0x30));
    QFileInfo::QFileInfo(local_58,local_60,(QString *)&DAT_1011bc278);
    cVar4 = QFileInfo::exists();
    QFileInfo::~QFileInfo(local_58);
    QDir::~QDir(local_60);
    pQVar3 = DAT_1011bc278;
    pQVar2 = DAT_1011bc270;
    if (cVar4 == '\0') {
      local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)DAT_1011bc270;
      if (1 < *(int *)DAT_1011bc270 + 1U) {
        LOCK();
        *(int *)DAT_1011bc270 = *(int *)DAT_1011bc270 + 1;
        local_29 = *(int *)pQVar2 != 0;
        UNLOCK();
      }
      QString::append(&local_70);
      QString::operator=(&local_50,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_29 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004fb1e3;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
      goto LAB_1004fb1e3;
    }
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)DAT_1011bc278;
    if (1 < *(int *)DAT_1011bc278 + 1U) {
      LOCK();
      *(int *)DAT_1011bc278 = *(int *)DAT_1011bc278 + 1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0xa02eac);
    QString::append(&local_68);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004fb44f;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1004fb44f:
    QString::insert((int)param_2,(QChar *)0x0,
                    (int)*(undefined8 *)(local_68.field0_0x0 + 0x10) + (int)local_68.field0_0x0);
    if (*(int *)local_68.field0_0x0 != -1) {
      QVar6.field0_0x0 = local_68.field0_0x0;
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        iVar1 = *(int *)local_68.field0_0x0;
        UNLOCK();
        goto joined_r0x0001004fb482;
      }
      goto LAB_1004fb488;
    }
  }
  else {
    QString::operator=(&local_50,(QString *)(lVar5 + 0x18));
    QMutex::unlock();
LAB_1004fb1e3:
    local_88.field0_0x0 = local_50.field0_0x0;
    if (1 < *(int *)local_50.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_38,0xa02eac);
    QString::append(&local_88);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004fb24e;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1004fb24e:
    local_80.field0_0x0 = local_88.field0_0x0;
    if (1 < *(int *)local_88.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_80);
    QString::mid((int)&local_90,(int)param_2);
    local_78.field0_0x0 = local_80.field0_0x0;
    if (1 < *(int *)local_80.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_78);
    QString::operator=(param_2,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_29 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004fb2f7;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_1004fb2f7:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004fb32d;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1004fb32d:
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_29 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004fb35d;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_1004fb35d:
    if (*(int *)local_88.field0_0x0 != -1) {
      QVar6.field0_0x0 = local_88.field0_0x0;
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        iVar1 = *(int *)local_88.field0_0x0;
        UNLOCK();
joined_r0x0001004fb482:
        local_29 = iVar1 != 0;
        if ((bool)local_29) goto LAB_1004fb497;
      }
LAB_1004fb488:
      QArrayData::deallocate((QArrayData *)QVar6.field0_0x0,2,8);
    }
  }
LAB_1004fb497:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004fb4c7;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1004fb4c7:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return 1;
}

