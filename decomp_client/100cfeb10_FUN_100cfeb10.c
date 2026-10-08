
undefined8 FUN_100cfeb10(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QFileInfo local_98 [8];
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("floppy%1",8);
  QString::arg(&local_38,&local_40,0,0,10,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cfeb88;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cfeb88:
  local_60 = (QArrayData *)QString::fromAscii_helper("enabled",7);
  pcVar1 = *(code **)*param_2;
  local_58 = local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_21 = *(int *)local_60 != 0;
    UNLOCK();
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  local_68 = (QArrayData *)QString::fromAscii_helper("false",5);
  (*pcVar1)(&local_50,param_2,&local_58,&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cfec2f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cfec2f:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cfec5f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cfec5f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cfec8f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cfec8f:
  local_70 = (QArrayData *)QString::fromAscii_helper("true",4);
  iVar3 = QString::compare(&local_50,&local_70,0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cfece5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cfece5:
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 0xf8) = 0x101;
    *(undefined1 *)(param_1 + 0xfa) = 1;
    QString::fromUtf8_helper((char *)&local_30,0x1e28bd6);
    QString::operator=(&local_48,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100cfed51;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_100cfed51:
    pcVar1 = *(code **)*param_2;
    local_80 = local_38;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
    }
    local_88 = (QArrayData *)local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    local_90 = (QArrayData *)QString::fromAscii_helper("",0);
    (*pcVar1)(&local_78,param_2,&local_80,&local_88,&local_90);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100cfedec;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100cfedec:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100cfee1c;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100cfee1c:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100cfee4c;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100cfee4c:
    QFileInfo::QFileInfo(local_98,&local_78);
    cVar2 = QFileInfo::isFile();
    *(uint *)(param_1 + 0xfc) = (cVar2 == '\0') + 1;
    if (cVar2 == '\0') {
      QString::operator=((QString *)(param_1 + 0x108),&local_78);
    }
    else {
      cVar2 = QDir::isRelativePath(&local_78);
      if (cVar2 != '\0') {
        local_b8 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
        QString::arg(&local_b0,&local_b8,param_1 + 0x18,0,0x20);
        QString::arg(&local_a8,&local_b0,&local_78,0,0x20);
        QDir::toNativeSeparators(&local_a0);
        QString::operator=(&local_78,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_21 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100cfef41;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_100cfef41:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_21 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100cfef77;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_100cfef77:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_21 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100cfefad;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_100cfefad:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_21 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100cfefe3;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
      }
LAB_100cfefe3:
      QString::operator=((QString *)(param_1 + 0x100),&local_78);
    }
    QFileInfo::~QFileInfo(local_98);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_21 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100cff047;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
  }
LAB_100cff047:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cff077;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cff077:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cff0a7;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100cff0a7:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0x8000000;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0x8000000;
}

