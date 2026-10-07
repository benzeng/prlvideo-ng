
undefined4 FUN_1000546c0(long param_1,QString *param_2)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  QFileInfo *this;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  QArrayData *local_158;
  QFileInfo local_150 [8];
  Data *local_148;
  QString local_140;
  QFileInfo local_138 [8];
  QArrayData *local_130;
  undefined1 local_122;
  undefined1 local_121;
  byte local_120 [152];
  undefined1 local_88 [80];
  ulong local_38;
  
  uVar8 = *(ulong *)PTR____stack_chk_guard_100ba2320;
  uVar7 = 9;
  local_38 = uVar8;
  if (*(int *)(param_1 + 0x38) == 100) goto LAB_100054a0c;
  QFileInfo::QFileInfo(local_138,param_2);
  cVar2 = QFileInfo::exists();
  uVar7 = 0;
  if (cVar2 != '\0') {
    QString::toUtf8();
    if ((1 < *(uint *)local_130) || (*(long *)(local_130 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_130,*(uint *)(local_130 + 4) + 1,*(uint *)(local_130 + 8) >> 0x1f);
    }
    iVar4 = _FSPathMakeRef(local_130 + *(long *)(local_130 + 0x10),local_88,&local_122);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_121 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_121) goto LAB_1000547b2;
      }
      QArrayData::deallocate(local_130,1,8);
    }
LAB_1000547b2:
    if ((iVar4 == 0) && (sVar3 = _FSGetCatalogInfo(local_88,2,local_120,0,0,0), sVar3 == 0)) {
      local_120[0] = local_120[0] & 0xfe;
      _FSSetCatalogInfo(local_88,2,local_120);
    }
    cVar2 = QFileInfo::isDir();
    if ((cVar2 == '\0') || (cVar2 = QFileInfo::isSymLink(), cVar2 != '\0')) {
      cVar2 = QFile::remove(param_2);
      uVar7 = 6;
      if (cVar2 != '\0') {
        uVar7 = 0;
      }
    }
    else {
      QDir::QDir((QDir *)&local_140,param_2);
      QDir::setFilter(&local_140,0x6307);
      QDir::entryInfoList(&local_148,&local_140,0xffffffff,0xffffffff);
      iVar4 = *(int *)(local_148 + 0xc);
      iVar1 = *(int *)(local_148 + 8);
      if (0 < (int)((long)iVar4 - (long)iVar1)) {
        lVar6 = 0;
        do {
          uVar7 = 9;
          if (*(int *)(param_1 + 0x38) == 100) goto LAB_100054975;
          QFileInfo::QFileInfo
                    (local_150,
                     (QFileInfo *)(local_148 + (*(int *)(local_148 + 8) + lVar6) * 8 + 0x10));
          QFileInfo::absoluteFilePath();
          uVar5 = FUN_1000546c0(param_1,&local_158);
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_121 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_121) goto LAB_10005492e;
            }
            QArrayData::deallocate(local_158,2,8);
          }
LAB_10005492e:
          uVar8 = uVar8 & 0xffffffff;
          if (uVar5 != 0) {
            uVar8 = (ulong)uVar5;
          }
          QFileInfo::~QFileInfo(local_150);
          if (uVar5 != 0) {
            uVar7 = (undefined4)uVar8;
            goto LAB_100054975;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < (long)iVar4 - (long)iVar1);
      }
      cVar2 = QDir::rmdir(&local_140);
      uVar7 = 6;
      if (cVar2 != '\0') {
        uVar7 = 0;
      }
LAB_100054975:
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_121 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_121) goto LAB_1000549ea;
        }
        iVar4 = *(int *)(local_148 + 0xc);
        if (iVar4 != *(int *)(local_148 + 8)) {
          lVar6 = (long)*(int *)(local_148 + 8) * 8 + (long)iVar4 * -8;
          this = (QFileInfo *)(local_148 + (long)iVar4 * 8 + 8);
          do {
            QFileInfo::~QFileInfo(this);
            this = this + -8;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0);
        }
        QListData::dispose(local_148);
      }
LAB_1000549ea:
      QDir::~QDir((QDir *)&local_140);
      uVar8 = *(ulong *)PTR____stack_chk_guard_100ba2320;
    }
  }
  QFileInfo::~QFileInfo(local_138);
LAB_100054a0c:
  if (uVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

