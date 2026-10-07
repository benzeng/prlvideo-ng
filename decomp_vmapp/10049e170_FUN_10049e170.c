
undefined4 FUN_10049e170(long param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  byte *pbVar6;
  QFileInfo *this;
  byte *pbVar7;
  undefined4 uVar8;
  long lVar9;
  QArrayData *local_c0;
  QArrayData *local_b8;
  string local_b0 [24];
  QFileInfo local_98 [8];
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  char local_69;
  QFileInfo local_68 [8];
  Data *local_60;
  QString local_58;
  QDir local_50 [8];
  QString local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return 5;
  }
  if ((*param_2 & 1) == 0) {
    pbVar6 = param_2 + 1;
LAB_10049e1b8:
    _strlen((char *)pbVar6);
    pbVar7 = pbVar6;
  }
  else {
    pbVar6 = *(byte **)(param_2 + 0x10);
    pbVar7 = (byte *)0x0;
    if (pbVar6 != (byte *)0x0) goto LAB_10049e1b8;
  }
  QString::fromUtf8_helper((char *)&local_48,(int)pbVar7);
  QFileInfo::QFileInfo(local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e20e;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10049e20e:
  cVar3 = QFileInfo::exists();
  uVar8 = 1;
  if (cVar3 == '\0') goto LAB_10049e723;
  QFileInfo::absoluteFilePath();
  QDir::QDir(local_50,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e26f;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10049e26f:
  QDir::setFilter(local_50,0x6001);
  QDir::entryInfoList(&local_60,local_50,0xffffffff,0xffffffff);
  if (3 < DAT_1011b55f8) {
    if ((*param_2 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    else {
      pbVar6 = *(byte **)(param_2 + 0x10);
    }
    FUN_1008e3970("AppsCollector","prl_sharedapps",4,"Syncing path %s, %d entries",pbVar6,
                  *(int *)(local_60 + 0xc) - *(int *)(local_60 + 8));
  }
  uVar5 = (ulong)*(uint *)(local_60 + 8);
  uVar8 = 2;
  if ((int)*(uint *)(local_60 + 8) < *(int *)(local_60 + 0xc)) {
    uVar8 = 2;
    lVar9 = 0;
    do {
      if (*(char *)(param_1 + 0x20) != '\0') {
        uVar8 = 5;
        break;
      }
      QFileInfo::QFileInfo(local_68,(QFileInfo *)(local_60 + ((int)uVar5 + lVar9) * 8 + 0x10));
      cVar3 = QFileInfo::operator==(local_68,local_40);
      if (cVar3 == '\0') {
        QFileInfo::filePath();
        FUN_1006fa7b0(&local_78,&local_80,1,1,&local_69);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10049e3a7;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10049e3a7:
        if (*(int *)(local_78.field0_0x0 + 4) != 0) {
          local_88 = (QArrayData *)QString::fromAscii_helper(".app",4);
          cVar3 = QString::endsWith(&local_78,&local_88,0);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10049e40c;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_10049e40c:
          if (local_69 != '\0') {
            QFileInfo::filePath();
            cVar4 = operator==(&local_78,&local_90);
            if (*(int *)local_90.field0_0x0 != -1) {
              if (*(int *)local_90.field0_0x0 != 0) {
                LOCK();
                *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                local_31 = *(int *)local_90.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10049e46a;
              }
              QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
            }
LAB_10049e46a:
            if (cVar4 == '\0' && cVar3 == '\0') goto LAB_10049e5e6;
          }
          QFileInfo::QFileInfo(local_98,&local_78);
          QFileInfo::operator=(local_68,local_98);
          QFileInfo::~QFileInfo(local_98);
          cVar4 = QFileInfo::isDir();
          if (cVar4 != '\0') {
            cVar4 = QFileInfo::isBundle();
            if (cVar3 == '\0') {
              if ((cVar4 == '\0') && (*(int *)(param_2 + 0x34) < 3)) {
                QFileInfo::absoluteFilePath();
                QString::toUtf8();
                lVar2 = *(long *)(local_b8 + 0x10);
                _strlen((char *)(local_b8 + lVar2));
                std::string::__init((char *)local_b0,(ulong)(local_b8 + lVar2));
                cVar3 = FUN_10049d590(param_1,local_b0,*(undefined4 *)(param_2 + 0x30),
                                      *(int *)(param_2 + 0x34) + 1);
                std::string::~string(local_b0);
                if (*(int *)local_b8 != -1) {
                  if (*(int *)local_b8 != 0) {
                    LOCK();
                    *(int *)local_b8 = *(int *)local_b8 + -1;
                    local_31 = *(int *)local_b8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10049e5a5;
                  }
                  QArrayData::deallocate(local_b8,1,8);
                }
LAB_10049e5a5:
                if (*(int *)local_c0 != -1) {
                  if (*(int *)local_c0 != 0) {
                    LOCK();
                    *(int *)local_c0 = *(int *)local_c0 + -1;
                    local_31 = *(int *)local_c0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10049e5db;
                  }
                  QArrayData::deallocate(local_c0,2,8);
                }
LAB_10049e5db:
                if (cVar3 != '\0') {
                  uVar8 = 0;
                }
              }
            }
            else if (cVar4 != '\0') {
              FUN_10049eb30(param_1,local_68,param_2 + 0x18,*(undefined4 *)(param_2 + 0x30));
            }
          }
        }
LAB_10049e5e6:
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10049e630;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
      }
LAB_10049e630:
      QFileInfo::~QFileInfo(local_68);
      lVar9 = lVar9 + 1;
      uVar5 = (ulong)*(int *)(local_60 + 8);
    } while (lVar9 < (long)((long)*(int *)(local_60 + 0xc) - uVar5));
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e71a;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar9 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      this = (QFileInfo *)(local_60 + (long)iVar1 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(this);
        this = this + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_10049e71a:
  QDir::~QDir(local_50);
LAB_10049e723:
  QFileInfo::~QFileInfo(local_40);
  return uVar8;
}

