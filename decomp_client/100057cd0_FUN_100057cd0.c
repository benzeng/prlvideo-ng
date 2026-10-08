
undefined1 FUN_100057cd0(long param_1)

{
  QString *pQVar1;
  char cVar2;
  int iVar3;
  QFileInfo *pQVar4;
  long lVar5;
  undefined1 uVar6;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  int local_50;
  QFileInfo local_48 [8];
  QDir local_40 [15];
  undefined1 local_31;
  
  pQVar1 = (QString *)(param_1 + 0x18);
  QDir::QDir(local_40,pQVar1);
  QFileInfo::QFileInfo(local_48,pQVar1);
  cVar2 = QFile::exists(pQVar1);
  if (cVar2 == '\0') {
    uVar6 = 0;
    goto LAB_100057d35;
  }
  cVar2 = FUN_100058370();
  if (cVar2 == '\0') {
    uVar6 = 0;
    goto LAB_100057d35;
  }
  iVar3 = FUN_1000f31c0(param_1 + 8);
  if (iVar3 != 0) {
    uVar6 = 0;
    goto LAB_100057d35;
  }
  QDir::setFilter(local_40,0x6003);
  QDir::entryInfoList(&local_70,local_40,0xffffffff,0xffffffff);
  FUN_100055060(&local_68,&local_70);
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  local_50 = 1;
  if (*(int *)local_70 == -1) {
LAB_100057e43:
    for (; local_60 != local_58; local_60 = local_60 + 8) {
      cVar2 = QFileInfo::operator==(local_48,(QFileInfo *)local_60);
      if (cVar2 == '\0') {
        QFileInfo::filePath();
        QString::toUtf8();
        lVar5 = *(long *)(local_78 + 0x10);
        QString::toUtf8();
        iVar3 = _FSPathMoveObjectSync(local_78 + lVar5,local_88 + *(long *)(local_88 + 0x10),0,0,0);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100057ed6;
          }
          QArrayData::deallocate(local_88,1,8);
        }
LAB_100057ed6:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100057f06;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_100057f06:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100057f36;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100057f36:
        if ((iVar3 != 0) && (0 < DAT_10230ffd0)) {
          QFileInfo::filePath();
          QString::toUtf8();
          lVar5 = *(long *)(local_90 + 0x10);
          QString::toUtf8();
          FUN_100df99c0("SGAC","prl_client_app",1,"FSPathMoveObjectSync() err %i, \"%s\" -> \"%s\"",
                        iVar3,local_90 + lVar5,local_a0 + *(long *)(local_a0 + 0x10));
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100057ffa;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
LAB_100057ffa:
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100058030;
            }
            QArrayData::deallocate(local_90,1,8);
          }
LAB_100058030:
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100057e30;
            }
            QArrayData::deallocate(local_98,2,8);
          }
        }
      }
LAB_100057e30:
      local_50 = 1;
    }
  }
  else {
    if (*(int *)local_70 == 0) {
LAB_100057dd3:
      iVar3 = *(int *)(local_70 + 0xc);
      if (iVar3 != *(int *)(local_70 + 8)) {
        lVar5 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar3 * -8;
        pQVar4 = (QFileInfo *)(local_70 + (long)iVar3 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(pQVar4);
          pQVar4 = pQVar4 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(local_70);
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100057dd3;
    }
    if (local_50 != 0) goto LAB_100057e43;
  }
  uVar6 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100057d35;
    }
    iVar3 = *(int *)(local_68 + 0xc);
    if (iVar3 != *(int *)(local_68 + 8)) {
      lVar5 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar3 * -8;
      pQVar4 = (QFileInfo *)(local_68 + (long)iVar3 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar4);
        pQVar4 = pQVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_68);
  }
LAB_100057d35:
  QFileInfo::~QFileInfo(local_48);
  QDir::~QDir(local_40);
  return uVar6;
}

