
bool FUN_100758230(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QFileInfo local_70 [8];
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100109d60(&local_40,param_1,0);
  lVar3 = CVmConfiguration::getVmHardwareList();
  local_60 = *(Data **)(lVar3 + 0x1b0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar4 = (long)*(int *)(local_60 + 8);
      lVar3 = *(long *)(lVar3 + 0x1b0);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_60 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_60 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      iVar2 = CVmDevice::getEmulatedType();
      if (iVar2 == 1) {
        CVmDevice::getSystemName();
        QFileInfo::QFileInfo(local_70,&local_68);
        cVar1 = QFileInfo::isRelative();
        QFileInfo::~QFileInfo(local_70);
        if (cVar1 != '\0') {
          local_88 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
          QString::arg(&local_80,&local_88,&local_40,0,0x20);
          QString::arg(&local_78,&local_80,&local_68,0,0x20);
          QString::operator=(&local_68,&local_78);
          if (*(int *)local_78.field0_0x0 != -1) {
            if (*(int *)local_78.field0_0x0 != 0) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007583d6;
            }
            QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
          }
LAB_1007583d6:
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100758406;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_100758406:
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100758440;
            }
            QArrayData::deallocate(local_88,2,8);
          }
        }
LAB_100758440:
        cVar1 = FUN_100757b00(&local_68,param_2);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100758482;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_100758482:
        iVar2 = 1;
        if (cVar1 == '\0') goto LAB_1007584ae;
      }
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  iVar2 = 2;
LAB_1007584ae:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007584d4;
    }
    QListData::dispose(local_60);
  }
LAB_1007584d4:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100758504;
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100758504:
  return iVar2 == 2;
}

