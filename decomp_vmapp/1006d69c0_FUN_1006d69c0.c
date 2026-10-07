
int FUN_1006d69c0(QString *param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  QFileInfo *pQVar5;
  long lVar6;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QFileInfo local_68 [8];
  Data *local_60;
  QFileInfo *local_58;
  QDir local_50 [8];
  Data *local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  QFileInfo::QFileInfo(local_40,param_1);
  bVar2 = QFileInfo::isDir();
  iVar4 = -0x7ffffffd;
  if ((bVar2 & param_2 != (long *)0x0) == 0) goto LAB_1006d6b1a;
  QDir::QDir(local_50,param_1);
  QDir::entryInfoList(&local_48,local_50,0x610f,4);
  QDir::~QDir(local_50);
  FUN_10005a020(&local_60,&local_48);
  local_58 = (QFileInfo *)(local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10);
  if (*(int *)(local_60 + 8) == *(int *)(local_60 + 0xc)) {
    iVar4 = 0;
  }
  else {
    pQVar5 = local_58;
    do {
      local_58 = pQVar5 + 8;
      cVar3 = QFileInfo::isDir();
      if (cVar3 == '\0') {
        lVar6 = QFileInfo::size();
        *param_2 = *param_2 + lVar6;
      }
      else {
        QFileInfo::QFileInfo(local_68,param_1);
        cVar3 = QFileInfo::operator==(local_68,pQVar5);
        QFileInfo::~QFileInfo(local_68);
        if (cVar3 == '\0') {
          QFileInfo::filePath();
          iVar4 = FUN_1006d69c0(&local_70,param_2);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006d6bc6;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_1006d6bc6:
          if (iVar4 < 0) {
            QFileInfo::filePath();
            QString::toUtf8();
            FUN_1008e3970("","cmn_utils",0,"GetDirSize() failed in dir [%s]",
                          local_78 + *(long *)(local_78 + 0x10));
            if (*(int *)local_78 != -1) {
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                local_31 = *(int *)local_78 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006d6d87;
              }
              QArrayData::deallocate(local_78,1,8);
            }
LAB_1006d6d87:
            if (*(int *)local_80 == -1) goto LAB_1006d6a58;
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006d6a58;
            }
            QArrayData::deallocate(local_80,2,8);
            goto LAB_1006d6a58;
          }
        }
      }
      pQVar5 = local_58;
    } while (local_58 != (QFileInfo *)(local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10));
    iVar4 = 0;
  }
LAB_1006d6a58:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006d6aba;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar6 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pQVar5 = (QFileInfo *)(local_60 + (long)iVar1 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_1006d6aba:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006d6b1a;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pQVar5 = (QFileInfo *)(local_48 + (long)iVar1 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_1006d6b1a:
  QFileInfo::~QFileInfo(local_40);
  return iVar4;
}

