
undefined8 FUN_1001f1630(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QString local_1a8;
  QString local_1a0;
  QString local_198;
  QFile local_190 [16];
  QString local_180;
  QString local_178;
  QArrayData *local_170;
  QString local_168;
  QString local_160;
  QArrayData *local_158;
  QFileInfo local_150 [8];
  CVmConfiguration local_148 [24];
  int local_130;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_40,uVar4);
  uVar4 = FUN_100152280();
  uVar4 = FUN_1001547d0(uVar4,&local_40);
  FUN_100109c10(&local_50,uVar4);
  FileUtils::browseForFile(&local_48,&local_50,5,1,0,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001f16cd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001f16cd:
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"Vm was deleted or unregistered");
    uVar4 = 0x80000004;
  }
  else if (*(int *)(local_48.field0_0x0 + 4) == 0) {
    uVar4 = 0x80027001;
    FUN_100df99c0("","prl_client_app",0,"New vm path not specified, asking again");
  }
  else {
    CVmConfiguration::CVmConfiguration(local_148);
    QFileInfo::QFileInfo(local_150,&local_48);
    cVar1 = QFileInfo::isDir();
    if (cVar1 == '\0') {
LAB_1001f18d2:
      cVar1 = QFileInfo::isDir();
      if (cVar1 != '\0') {
        local_170 = (QArrayData *)QString::fromAscii_helper(".pvmz",5);
        cVar1 = QString::endsWith(&local_48,&local_170,1);
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 != 0) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + -1;
            local_21 = *(int *)local_170 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1001f194b;
          }
          QArrayData::deallocate(local_170,2,8);
        }
LAB_1001f194b:
        if (cVar1 != '\0') {
          uVar2 = QDir::separator();
          QString::QString(&local_180,uVar2);
          local_178.field0_0x0 = local_180.field0_0x0;
          if (1 < *(int *)local_180.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + 1;
            local_21 = *(int *)local_180.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_30,0x1dd9bcd);
          QString::append(&local_178);
          if (*(int *)local_30 != -1) {
            if (*(int *)local_30 != 0) {
              LOCK();
              *(int *)local_30 = *(int *)local_30 + -1;
              local_21 = *(int *)local_30 != 0;
              UNLOCK();
              if ((bool)local_21) goto LAB_1001f19da;
            }
            QArrayData::deallocate(local_30,2,8);
          }
LAB_1001f19da:
          QString::append(&local_48);
          if (*(int *)local_178.field0_0x0 != -1) {
            if (*(int *)local_178.field0_0x0 != 0) {
              LOCK();
              *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
              local_21 = *(int *)local_178.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_21) goto LAB_1001f1a20;
            }
            QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
          }
LAB_1001f1a20:
          if (*(int *)local_180.field0_0x0 != -1) {
            if (*(int *)local_180.field0_0x0 != 0) {
              LOCK();
              *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
              local_21 = *(int *)local_180.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_21) goto LAB_1001f1a56;
            }
            QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
          }
        }
      }
    }
    else {
      local_158 = (QArrayData *)QString::fromAscii_helper(".pvm",4);
      cVar1 = QString::endsWith(&local_48,&local_158,1);
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_21 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1001f1792;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_1001f1792:
      if (cVar1 == '\0') goto LAB_1001f18d2;
      uVar2 = QDir::separator();
      QString::QString(&local_168,uVar2);
      local_160.field0_0x0 = local_168.field0_0x0;
      if (1 < *(int *)local_168.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + 1;
        local_21 = *(int *)local_168.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_38,0x1dd9bc2);
      QString::append(&local_160);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_21 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1001f1821;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_1001f1821:
      QString::append(&local_48);
      if (*(int *)local_160.field0_0x0 != -1) {
        if (*(int *)local_160.field0_0x0 != 0) {
          LOCK();
          *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
          local_21 = *(int *)local_160.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1001f1867;
        }
        QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
      }
LAB_1001f1867:
      if (*(int *)local_168.field0_0x0 != -1) {
        if (*(int *)local_168.field0_0x0 != 0) {
          LOCK();
          *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
          local_21 = *(int *)local_168.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1001f1a56;
        }
        QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
      }
    }
LAB_1001f1a56:
    QFile::QFile(local_190,&local_48);
    iVar3 = CVmConfiguration::loadFromFile((QFile *)local_148,SUB81(local_190,0));
    if ((iVar3 == 0) && (local_130 == 0)) {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_10018c2b0(uVar4);
      iVar3 = CVmConfiguration::getValidRc();
      if (iVar3 == -0x7ffffa7c) {
        uVar4 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x20);
        }
        FUN_10018c2b0(uVar4);
        CVmConfiguration::getVmIdentification();
        CVmIdentification::getLinkedVmUuid();
      }
      else {
        local_198.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_21 = *(int *)local_40 != 0;
          UNLOCK();
        }
      }
      CVmConfiguration::getVmIdentification();
      CVmIdentification::getVmUuid();
      cVar1 = operator==(&local_1a0,&local_198);
      if (*(int *)local_1a0.field0_0x0 != -1) {
        if (*(int *)local_1a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
          local_21 = *(int *)local_1a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1001f1c64;
        }
        QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
      }
LAB_1001f1c64:
      uVar4 = 0x80015194;
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x38) = 0;
        QString::operator=((QString *)(param_1 + 0x40),&local_48);
        local_1a8.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMS]",5);
        SandboxFileAccessHelpers::saveBookmark(&local_48,&local_1a8);
        uVar4 = 0;
        if (*(int *)local_1a8.field0_0x0 != -1) {
          if (*(int *)local_1a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
            local_21 = *(int *)local_1a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1001f1ce6;
          }
          QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
        }
      }
LAB_1001f1ce6:
      if (*(int *)local_198.field0_0x0 != -1) {
        if (*(int *)local_198.field0_0x0 != 0) {
          LOCK();
          *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
          local_21 = *(int *)local_198.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1001f1ac8;
        }
        QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
      }
    }
    else {
      uVar4 = 0x80000036;
      uVar5 = FUN_100dddcf0(0x80000036);
      FUN_100df99c0("","prl_client_app",0,
                    "(!)Error: failed to load a located VM configuration [%#x (%s)]",0x80000036,
                    uVar5);
    }
LAB_1001f1ac8:
    QFile::~QFile(local_190);
    QFileInfo::~QFileInfo(local_150);
    CVmConfiguration::~CVmConfiguration(local_148);
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001f1b41;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1001f1b41:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar4;
}

