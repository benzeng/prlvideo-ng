
undefined4 FUN_1006f5b40(undefined8 param_1,QString *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  QFileInfo *this;
  undefined4 uVar3;
  long lVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QFileInfo local_50 [8];
  Data *local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  if ((*(int *)(param_2->field0_0x0 + 4) == 0) &&
     (FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","! qsDest.isEmpty()",
                    "CFileHelper.cpp",0x513,"ChangeDirectoryPermissions"),
     *(int *)(param_2->field0_0x0 + 4) == 0)) {
    return 0x80000009;
  }
  cVar2 = FUN_1006f4ea0(param_2,param_3,0);
  if (cVar2 == '\0') {
    return 0x80000339;
  }
  QDir::QDir(local_40,param_2);
  QDir::setFilter(local_40,0x6107);
  QDir::setSorting(local_40,0x20);
  QDir::entryInfoList(&local_48,local_40,0xffffffff,0xffffffff);
  uVar3 = 0;
  if (*(int *)(local_48 + 8) < *(int *)(local_48 + 0xc)) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      cVar2 = QFileInfo::isDir();
      if (cVar2 == '\0') {
        QFileInfo::filePath();
        cVar2 = FUN_1006f4ea0(&local_60,param_3,0);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006f5d6a;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_1006f5d6a:
        if (cVar2 == '\0') {
          uVar3 = 0x80000339;
          break;
        }
      }
      else {
        QFileInfo::QFileInfo(local_50,param_2);
        cVar2 = QFileInfo::operator==
                          (local_50,(QFileInfo *)
                                    (local_48 + (*(int *)(local_48 + 8) + lVar4) * 8 + 0x10));
        QFileInfo::~QFileInfo(local_50);
        if (cVar2 == '\0') {
          QFileInfo::filePath();
          FUN_1006f5b40(param_1,&local_58,param_3);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006f5d72;
            }
            QArrayData::deallocate(local_58,2,8);
          }
        }
      }
LAB_1006f5d72:
      lVar4 = lVar4 + 1;
    } while (lVar4 < (long)*(int *)(local_48 + 0xc) - (long)*(int *)(local_48 + 8));
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f5eaa;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar4 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      this = (QFileInfo *)(local_48 + (long)iVar1 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_1006f5eaa:
  QDir::~QDir(local_40);
  return uVar3;
}

