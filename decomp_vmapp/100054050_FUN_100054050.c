
long FUN_100054050(long param_1,QString *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  QFileInfo *pQVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  uint local_50;
  Data *local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  QDir::QDir(local_40,param_2);
  cVar2 = QDir::exists();
  lVar5 = 0;
  if (cVar2 == '\0') goto LAB_1000542ca;
  *param_3 = *param_3 + 1;
  QDir::setFilter(local_40,0x610b);
  QDir::setSorting(local_40,0x20);
  QDir::entryInfoList(&local_48,local_40,0xffffffff,0xffffffff);
  lVar5 = 0x20;
  if (*(int *)(local_48 + 0xc) != *(int *)(local_48 + 8)) {
    FUN_10005a020(&local_68,&local_48);
    local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
    local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
    local_50 = 1;
    lVar5 = 0x20;
    if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
      lVar5 = 0x20;
      do {
        if (local_50 == 0) {
LAB_1000541e6:
          local_60 = local_60 + 8;
          local_50 = 1;
        }
        else {
          if (*(int *)(param_1 + 0x38) != 100) {
            cVar2 = QFileInfo::isDir();
            if (cVar2 == '\0') {
              lVar6 = QFileInfo::size();
              *param_3 = *param_3 + 1;
            }
            else {
              QFileInfo::absoluteFilePath();
              lVar6 = FUN_100054050(param_1,&local_70,param_3);
              if (*(int *)local_70 != -1) {
                if (*(int *)local_70 != 0) {
                  LOCK();
                  *(int *)local_70 = *(int *)local_70 + -1;
                  local_31 = *(int *)local_70 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000541d8;
                }
                QArrayData::deallocate(local_70,2,8);
              }
            }
LAB_1000541d8:
            lVar5 = lVar5 + lVar6;
            goto LAB_1000541e6;
          }
          local_60 = local_60 + 8;
          uVar3 = local_50 ^ 1;
          bVar7 = local_50 == 1;
          local_50 = uVar3;
          if (bVar7) break;
        }
      } while (local_60 != local_58);
    }
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10005426a;
      }
      iVar1 = *(int *)(local_68 + 0xc);
      if (iVar1 != *(int *)(local_68 + 8)) {
        lVar6 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar1 * -8;
        pQVar4 = (QFileInfo *)(local_68 + (long)iVar1 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(pQVar4);
          pQVar4 = pQVar4 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(local_68);
    }
  }
LAB_10005426a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000542ca;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pQVar4 = (QFileInfo *)(local_48 + (long)iVar1 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar4);
        pQVar4 = pQVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_1000542ca:
  QDir::~QDir(local_40);
  return lVar5;
}

