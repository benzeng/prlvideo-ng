
int FUN_100d9c1e0(QFileInfo *param_1,uid_t param_2,gid_t param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uid_t uVar4;
  int *piVar5;
  uint uVar6;
  QFileInfo *pQVar7;
  long lVar8;
  undefined8 in_stack_fffffffffffffda8;
  undefined4 uVar9;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  undefined1 local_218 [6];
  ushort local_212;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QString local_168;
  QFileInfo local_160 [8];
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  undefined1 local_138 [144];
  QFileInfo local_a8 [8];
  Data *local_a0;
  QFileInfo *local_98;
  QFileInfo *local_90;
  uint local_88;
  Data *local_80;
  QString local_78;
  QDir local_70 [8];
  QString local_68;
  QFileInfo local_60 [8];
  QString local_58;
  QFileInfo local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar9 = (undefined4)((ulong)in_stack_fffffffffffffda8 >> 0x20);
  cVar1 = QFileInfo::exists();
  if (cVar1 != '\0') {
    cVar1 = QFileInfo::isFile();
    if ((cVar1 == '\0') && (cVar1 = QFileInfo::isDir(), cVar1 == '\0')) {
      QFileInfo::filePath();
      QFileInfo::QFileInfo(local_50,&local_58);
      cVar1 = QFileInfo::exists();
      QFileInfo::~QFileInfo(local_50);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d9c293;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_100d9c293:
      if (cVar1 != '\0') {
        FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "fi.isFile() || fi.isDir() || !QFileInfo( fi.filePath() ).exists()",
                      "CFileHelper.cpp",CONCAT44(uVar9,0x5e7),"setRawFileOwner");
      }
    }
    cVar1 = QFileInfo::isFile();
    if ((cVar1 == '\0') && (cVar1 = QFileInfo::isDir(), cVar1 == '\0')) {
      QFileInfo::filePath();
      QFileInfo::QFileInfo(local_60,&local_68);
      cVar1 = QFileInfo::exists();
      QFileInfo::~QFileInfo(local_60);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_68.field0_0x0 != 0) goto LAB_100d9c4e7;
          local_31 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_100d9c4e7:
      if (cVar1 != '\0') {
        return -0x7ffffffd;
      }
      return 0;
    }
    cVar1 = QFileInfo::isDir();
    if ((cVar1 != '\0') && ((char)param_4 != '\0')) {
      QFileInfo::absoluteFilePath();
      QDir::QDir(local_70,&local_78);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d9c36e;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_100d9c36e:
      QDir::entryInfoList(&local_80,local_70,0x650a,0x20);
      FUN_100055060(&local_a0,&local_80);
      local_98 = (QFileInfo *)(local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10);
      local_90 = (QFileInfo *)(local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10);
      local_88 = 1;
      iVar2 = 10;
      if (*(int *)(local_a0 + 8) != *(int *)(local_a0 + 0xc)) {
        do {
          QFileInfo::QFileInfo(local_a8,local_98);
          iVar2 = 0xd;
          if (local_88 != 0) {
            cVar1 = QFileInfo::operator==(param_1,local_a8);
            if (((cVar1 == '\0') && (iVar3 = FUN_100d9c1e0(local_a8,param_2,param_3,1), iVar3 < 0))
               && (QFileInfo::exists(), iVar3 != -0x7ffffff0)) {
              iVar2 = 1;
              param_4 = iVar3;
            }
            else {
              local_88 = 0;
            }
          }
          QFileInfo::~QFileInfo(local_a8);
          if (iVar2 != 0xd) goto LAB_100d9c5d7;
          local_98 = local_98 + 8;
          uVar6 = local_88 ^ 1;
        } while ((local_88 != 1) && (local_88 = uVar6, local_98 != local_90));
        iVar2 = 10;
        local_88 = uVar6;
      }
LAB_100d9c5d7:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d9c660;
        }
        iVar3 = *(int *)(local_a0 + 0xc);
        if (iVar3 != *(int *)(local_a0 + 8)) {
          lVar8 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar3 * -8;
          pQVar7 = (QFileInfo *)(local_a0 + (long)iVar3 * 8 + 8);
          do {
            QFileInfo::~QFileInfo(pQVar7);
            pQVar7 = pQVar7 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose(local_a0);
      }
LAB_100d9c660:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d9c6e0;
        }
        iVar3 = *(int *)(local_80 + 0xc);
        if (iVar3 != *(int *)(local_80 + 8)) {
          lVar8 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar3 * -8;
          pQVar7 = (QFileInfo *)(local_80 + (long)iVar3 * 8 + 8);
          do {
            QFileInfo::~QFileInfo(pQVar7);
            pQVar7 = pQVar7 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose(local_80);
      }
LAB_100d9c6e0:
      QDir::~QDir(local_70);
      if (iVar2 != 10) {
        return param_4;
      }
    }
    QFileInfo::absoluteFilePath();
    QString::toUtf8();
    iVar2 = _stat_INODE64(local_140 + *(long *)(local_140 + 0x10),local_138);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d9c769;
      }
      QArrayData::deallocate(local_140,1,8);
    }
LAB_100d9c769:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d9c79f;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_100d9c79f:
    if (iVar2 == 0) {
      if (((uid_t)local_138._16_8_ == param_2) && (SUB84(local_138._16_8_,4) == param_3)) {
        return 0;
      }
      QFileInfo::absoluteFilePath();
      QString::toUtf8();
      iVar2 = _open((char *)(local_170 + *(long *)(local_170 + 0x10)),0x100);
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_31 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d9c999;
        }
        QArrayData::deallocate(local_170,1,8);
      }
LAB_100d9c999:
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d9c9d5;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_100d9c9d5:
      if (iVar2 != -1) {
        cVar1 = QFileInfo::isDir();
        if (((cVar1 != '\0') || (iVar3 = _fstat_INODE64(iVar2,local_218), iVar3 != 0)) ||
           (local_212 < 2)) {
          iVar3 = _fchown(iVar2,param_2,param_3);
          if (iVar3 == 0) goto LAB_100d9cc9a;
          piVar5 = ___error();
          iVar3 = *piVar5;
          if (iVar3 == 2) {
            _close(iVar2);
            return -0x7ffffff0;
          }
          uVar4 = _getuid();
          if ((iVar3 == 1) && (uVar4 == 0)) goto LAB_100d9cc9a;
          QFileInfo::absoluteFilePath();
          QString::toUtf8();
          FUN_100df99c0("","cmn_utils",0,"Change owner failed for \'%s\' by error %d",
                        local_230 + *(long *)(local_230 + 0x10),iVar3);
          if (*(int *)local_230 != -1) {
            if (*(int *)local_230 != 0) {
              LOCK();
              *(int *)local_230 = *(int *)local_230 + -1;
              local_31 = *(int *)local_230 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d9cd8d;
            }
            QArrayData::deallocate(local_230,1,8);
          }
LAB_100d9cd8d:
          if (*(int *)local_238 != -1) {
            if (*(int *)local_238 != 0) {
              LOCK();
              *(int *)local_238 = *(int *)local_238 + -1;
              local_31 = *(int *)local_238 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d9cdc3;
            }
            QArrayData::deallocate(local_238,2,8);
          }
LAB_100d9cdc3:
          _close(iVar2);
          return -0x7ffffff7;
        }
        if (DAT_10230ffd0 < 3) goto LAB_100d9cc9a;
        QFileInfo::absoluteFilePath();
        QString::toUtf8();
        FUN_100df99c0("","cmn_utils",3,
                      "Change owner: skipping file \'%s\' due it has %lu of hard links",
                      local_220 + *(long *)(local_220 + 0x10),local_212);
        if (*(int *)local_220 != -1) {
          if (*(int *)local_220 != 0) {
            LOCK();
            *(int *)local_220 = *(int *)local_220 + -1;
            local_31 = *(int *)local_220 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d9cab1;
          }
          QArrayData::deallocate(local_220,1,8);
        }
LAB_100d9cab1:
        if (*(int *)local_228 != -1) {
          if (*(int *)local_228 != 0) {
            LOCK();
            *(int *)local_228 = *(int *)local_228 + -1;
            local_31 = *(int *)local_228 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d9cc9a;
          }
          QArrayData::deallocate(local_228,2,8);
        }
LAB_100d9cc9a:
        _close(iVar2);
        return 0;
      }
      piVar5 = ___error();
      iVar2 = *piVar5;
      QFileInfo::absoluteFilePath();
      QString::toUtf8();
      FUN_100df99c0("","cmn_utils",0,"Couldn\'t to open file \'%s\' due error %d",
                    local_180 + *(long *)(local_180 + 0x10),iVar2);
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d9cbba;
        }
        QArrayData::deallocate(local_180,1,8);
      }
LAB_100d9cbba:
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          UNLOCK();
          if (*(int *)local_188 != 0) goto LAB_100d9cbf0;
          local_31 = 0;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_100d9cbf0:
      if (iVar2 != 2) {
        return -0x7ffffff7;
      }
      return -0x7ffffff0;
    }
    piVar5 = ___error();
    iVar2 = *piVar5;
    QFileInfo::absoluteFilePath();
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",0,"%s: stat() failed with errno = %d for file (path=%s)",
                  "setRawFileOwner",iVar2,local_150 + *(long *)(local_150 + 0x10));
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d9c840;
      }
      QArrayData::deallocate(local_150,1,8);
    }
LAB_100d9c840:
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_31 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d9c876;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_100d9c876:
    QFileInfo::absoluteFilePath();
    QFileInfo::QFileInfo(local_160,&local_168);
    cVar1 = QFileInfo::exists();
    QFileInfo::~QFileInfo(local_160);
    iVar2 = -0x7ffffff0;
    if (cVar1 != '\0') {
      iVar2 = -0x7ffffff7;
    }
    if (*(int *)local_168.field0_0x0 == -1) {
      return iVar2;
    }
    if (*(int *)local_168.field0_0x0 != 0) {
      LOCK();
      *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_168.field0_0x0 != 0) {
        return iVar2;
      }
      local_31 = 0;
    }
    goto LAB_100d9c8e9;
  }
  QFileInfo::filePath();
  QString::toUtf8();
  FUN_100df99c0("","cmn_utils",0,"%s: file does not exists (path=%s)","setRawFileOwner",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d9c450;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d9c450:
  iVar2 = -0x7ffffff0;
  if (*(int *)local_48 == -1) {
    return -0x7ffffff0;
  }
  local_168.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return -0x7ffffff0;
    }
    local_31 = 0;
  }
LAB_100d9c8e9:
  QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
  return iVar2;
}

