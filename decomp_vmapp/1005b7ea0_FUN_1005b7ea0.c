
undefined8 FUN_1005b7ea0(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78 [2];
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  QFileInfo::filePath();
  local_50 = (QArrayData *)QString::fromAscii_helper(".Temp",5);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_29 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b7f37;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005b7f37:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b7f67;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005b7f67:
  QFileInfo::filePath();
  local_68 = (QArrayData *)QString::fromAscii_helper(".Backup",7);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_29 = *(int *)local_60 != 0;
    UNLOCK();
  }
  QString::append(&local_58);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b7fde;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005b7fde:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b800e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005b800e:
  QFile::QFile((QFile *)local_78);
  cVar1 = QFile::exists(&local_58);
  cVar2 = QFile::exists(&local_40);
  if ((cVar2 == '\0') || (cVar2 = QFile::remove(&local_40), cVar2 != '\0')) {
    if (cVar1 == '\0') {
      QFileInfo::filePath();
      cVar1 = QFile::exists(&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_29 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005b80a6;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
    }
    else {
      cVar1 = QFile::rename(&local_58,&local_40);
      if (cVar1 == '\0') {
        uVar5 = 0x80021040;
        FUN_1008e3970("","vdisk",0,"Failed to rename backup file");
        goto LAB_1005b840b;
      }
      cVar1 = '\0';
    }
LAB_1005b80a6:
    QFileInfo::filePath();
    cVar2 = QFile::exists(&local_88);
    if (cVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      QFileInfo::filePath();
      bVar3 = QFile::rename(&local_90,&local_58);
      bVar3 = bVar3 ^ 1;
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_29 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005b8161;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
    }
LAB_1005b8161:
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_29 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005b8191;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_1005b8191:
    if (bVar3 == 0) {
      QFile::setFileName(local_78);
      cVar2 = QFile::open(local_78,3);
      if (cVar2 == '\0') {
        uVar5 = 0x80021004;
        FUN_1008e3970("","vdisk",0,"Write XML: Open XML file failed!");
      }
      else {
        QDomDocument::toByteArray((int)&local_98);
        QByteArray::operator=((QByteArray *)&local_38,(QByteArray *)&local_98);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_29 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005b823a;
          }
          QArrayData::deallocate(local_98,1,8);
        }
LAB_1005b823a:
        QFile::resize((longlong)local_78);
        lVar4 = QIODevice::write((char *)local_78,(longlong)(local_38 + *(long *)(local_38 + 0x10)))
        ;
        if (lVar4 == *(int *)(local_38 + 4)) {
          FUN_100778120(local_78);
          (**(code **)(local_78[0].field0_0x0 + 0x70))(local_78);
          QFileInfo::filePath();
          cVar2 = QFile::rename(&local_40,&local_a0);
          if (*(int *)local_a0.field0_0x0 != -1) {
            if (*(int *)local_a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
              local_29 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1005b82dc;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
          }
LAB_1005b82dc:
          if (cVar2 == '\0') {
            uVar5 = 0x80021040;
            FUN_1008e3970("","vdisk",0,"Failed to rename XML file after writing");
          }
          else {
            uVar5 = 0;
            if (cVar1 != '\0') {
              QFileInfo::filePath();
              FUN_100778630(&local_58,&local_a8);
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 != 0) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + -1;
                  local_29 = *(int *)local_a8 != 0;
                  UNLOCK();
                  if ((bool)local_29) goto LAB_1005b840b;
                }
                QArrayData::deallocate(local_a8,2,8);
                uVar5 = 0;
              }
            }
          }
        }
        else {
          uVar5 = 0x80021004;
          FUN_1008e3970("","vdisk",0,"XML saving failed!");
        }
      }
    }
    else {
      FUN_1008e3970("","vdisk",0,"Failed to rename XML file");
      uVar5 = 0x80021040;
    }
  }
  else {
    uVar5 = 0x80021039;
    FUN_1008e3970("","vdisk",0,"Failed to remove old Temp file");
  }
LAB_1005b840b:
  QFile::~QFile((QFile *)local_78);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b8444;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1005b8444:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b8474;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005b8474:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar5;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return uVar5;
}

