
void FUN_100052300(QString *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  QFileInfo *this;
  long lVar3;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QFileInfo local_50 [8];
  Data *local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  QDir::QDir(local_40,param_1);
  QDir::setFilter(local_40,0x6107);
  QDir::setSorting(local_40,4);
  QDir::entryInfoList(&local_48,local_40,0xffffffff,0xffffffff);
  if (*(int *)(local_48 + 8) < *(int *)(local_48 + 0xc)) {
    lVar3 = 0;
    do {
      cVar2 = QFileInfo::isDir();
      if (cVar2 == '\0') {
        QFileInfo::filePath();
        QFile::setPermissions(&local_68,param_2);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100052510;
          }
          QArrayData::deallocate(local_68,2,8);
        }
      }
      else {
        cVar2 = QFileInfo::isSymLink();
        if (cVar2 == '\0') {
          QFileInfo::QFileInfo(local_50,param_1);
          cVar2 = QFileInfo::operator==
                            (local_50,(QFileInfo *)
                                      (local_48 + (*(int *)(local_48 + 8) + lVar3) * 8 + 0x10));
          QFileInfo::~QFileInfo(local_50);
          if (cVar2 == '\0') {
            QFileInfo::filePath();
            FUN_100052300(&local_58,param_2);
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_31 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100052510;
              }
              QArrayData::deallocate(local_58,2,8);
            }
          }
        }
        else {
          QFileInfo::filePath();
          QFile::setPermissions(&local_60,param_2);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100052510;
            }
            QArrayData::deallocate(local_60,2,8);
          }
        }
      }
LAB_100052510:
      lVar3 = lVar3 + 1;
    } while (lVar3 < (long)*(int *)(local_48 + 0xc) - (long)*(int *)(local_48 + 8));
  }
  QFile::setPermissions(param_1,param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005259a;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar3 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      this = (QFileInfo *)(local_48 + (long)iVar1 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(this);
        this = this + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_10005259a:
  QDir::~QDir(local_40);
  return;
}

