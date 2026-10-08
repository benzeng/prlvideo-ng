
undefined8 FUN_100cf7980(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QFileInfo local_d8 [8];
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("floppy%1",8);
  local_50 = (QArrayData *)QString::fromAscii_helper("",0);
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7a06;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cf7a06:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7a36;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cf7a36:
  local_70 = (QArrayData *)QString::fromAscii_helper("autoDetect",10);
  pcVar1 = *(code **)*param_2;
  local_68 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_21 = *(int *)local_70 != 0;
    UNLOCK();
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
  local_78 = (QArrayData *)QString::fromAscii_helper("false",5);
  (*pcVar1)(&local_60,param_2,&local_68,&local_70,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7add;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100cf7add:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7b0d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cf7b0d:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7b3d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cf7b3d:
  local_88 = (QArrayData *)QString::fromAscii_helper("floppy%1",8);
  QString::arg(&local_80,&local_88,0,0,10,0x20);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7b9f;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100cf7b9f:
  QString::fromUtf8_helper((char *)&local_38,0x1ef68bf);
  QString::operator=(&local_58,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7bf1;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100cf7bf1:
  pcVar1 = *(code **)*param_2;
  local_98 = local_80;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_21 = *(int *)local_80 != 0;
    UNLOCK();
  }
  local_a0 = (QArrayData *)local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_21 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  local_a8 = (QArrayData *)QString::fromAscii_helper("",0);
  (*pcVar1)(&local_90,param_2,&local_98,&local_a0,&local_a8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7c9b;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100cf7c9b:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7cd1;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100cf7cd1:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7d07;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100cf7d07:
  QString::fromUtf8_helper((char *)&local_30,0x1ef692d);
  QString::operator=(&local_58,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7d59;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100cf7d59:
  pcVar1 = *(code **)*param_2;
  local_b8 = local_80;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_21 = *(int *)local_80 != 0;
    UNLOCK();
  }
  local_c0 = (QArrayData *)local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_21 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  local_c8 = local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_21 = *(int *)local_60 != 0;
    UNLOCK();
  }
  (*pcVar1)(&local_b0,param_2,&local_b8,&local_c0,&local_c8);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7e0a;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100cf7e0a:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7e40;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100cf7e40:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf7e76;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100cf7e76:
  if (*(int *)(local_90.field0_0x0 + 4) == 0) {
    local_d0 = (QArrayData *)QString::fromAscii_helper("false",5);
    iVar4 = QString::compare(&local_b0,&local_d0,1);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_21 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100cf7eeb;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_100cf7eeb:
    if (iVar4 != 0) goto LAB_100cf7ef3;
  }
  else {
LAB_100cf7ef3:
    QFileInfo::QFileInfo(local_d8,&local_90);
    bVar2 = QFileInfo::isRelative();
    *(uint *)(param_1 + 0xfc) = bVar2 + 1;
    *(undefined2 *)(param_1 + 0xf8) = 0x101;
    *(undefined1 *)(param_1 + 0xfa) = 1;
    if (bVar2 == 0) {
      cVar3 = QDir::isRelativePath(&local_90);
      if (cVar3 != '\0') {
        local_f8 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
        QString::arg(&local_f0,&local_f8,param_1 + 0x18,0,0x20);
        QString::arg(&local_e8,&local_f0,&local_90,0,0x20);
        QDir::toNativeSeparators(&local_e0);
        QString::operator=(&local_90,&local_e0);
        if (*(int *)local_e0.field0_0x0 != -1) {
          if (*(int *)local_e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
            local_21 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100cf8019;
          }
          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
        }
LAB_100cf8019:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_21 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100cf804f;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_100cf804f:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_21 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100cf8085;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_100cf8085:
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_21 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100cf80bb;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
      }
LAB_100cf80bb:
      QString::operator=((QString *)(param_1 + 0x100),&local_90);
    }
    else {
      QString::operator=((QString *)(param_1 + 0x108),&local_90);
    }
    QFileInfo::~QFileInfo(local_d8);
  }
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_21 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf8113;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100cf8113:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_21 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf8149;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100cf8149:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf8179;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100cf8179:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf81a9;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cf81a9:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cf81d9;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100cf81d9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0x8000000;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 0x8000000;
}

