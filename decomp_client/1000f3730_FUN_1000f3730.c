
bool FUN_1000f3730(QString *param_1,int param_2)

{
  Data *pDVar1;
  Data *pDVar2;
  char cVar3;
  int iVar4;
  QFileInfo *pQVar5;
  QArrayData *pQVar6;
  int iVar7;
  long lVar8;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  Data *local_78;
  QArrayData *local_70;
  int local_64;
  QString local_60;
  Data *local_58;
  QDir local_50 [8];
  QFileInfo local_48 [8];
  Data *local_40;
  undefined1 local_31;
  
  QFileInfo::QFileInfo(local_48,param_1);
  QDir::QDir(local_50,param_1);
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  QDir::setFilter(local_50,0x6107);
  QDir::entryInfoList(&local_78,local_50,0xffffffff,0xffffffff);
  if (local_58 != local_78) {
    FUN_100055060(&local_40,&local_78);
    pDVar2 = local_40;
    pDVar1 = local_58;
    local_40 = local_58;
    local_58 = pDVar2;
    if (*(int *)pDVar1 != -1) {
      if (*(int *)pDVar1 != 0) {
        LOCK();
        *(int *)pDVar1 = *(int *)pDVar1 + -1;
        local_31 = *(int *)pDVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f382a;
      }
      iVar7 = *(int *)(pDVar1 + 0xc);
      if (iVar7 != *(int *)(pDVar1 + 8)) {
        lVar8 = (long)*(int *)(pDVar1 + 8) * 8 + (long)iVar7 * -8;
        pQVar5 = (QFileInfo *)(pDVar1 + (long)iVar7 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(pQVar5);
          pQVar5 = pQVar5 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(pDVar1);
    }
  }
LAB_1000f382a:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f388a;
    }
    iVar7 = *(int *)(local_78 + 0xc);
    if (iVar7 != *(int *)(local_78 + 8)) {
      lVar8 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar7 * -8;
      pQVar5 = (QFileInfo *)(local_78 + (long)iVar7 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_78);
  }
LAB_1000f388a:
  iVar7 = 0;
  if ((int)*(uint *)(local_58 + 8) < (int)*(uint *)(local_58 + 0xc)) {
    lVar8 = 0;
    iVar7 = 0;
    do {
      if (1 < *(uint *)local_58) {
        FUN_1000f7ce0(&local_58,*(uint *)(local_58 + 4));
      }
      pQVar5 = (QFileInfo *)(local_58 + ((int)*(uint *)(local_58 + 8) + lVar8) * 8 + 0x10);
      QFileInfo::absoluteFilePath();
      QString::operator=(&local_60,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f3912;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1000f3912:
      cVar3 = QFileInfo::isDir();
      if (cVar3 == '\0') {
        QFileInfo::fileName();
        QString::toUtf8();
        QByteArray::operator=((QByteArray *)&local_70,(QByteArray *)&local_88);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000f39c1;
          }
          QArrayData::deallocate(local_88,1,8);
        }
LAB_1000f39c1:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000f39f7;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1000f39f7:
        pQVar6 = local_70 + *(long *)(local_70 + 0x10);
        iVar4 = _strcmp((char *)pQVar6,".DS_Store");
        if (((iVar4 != 0) && (iVar4 = _strcmp((char *)pQVar6,".localized"), iVar4 != 0)) &&
           (iVar4 = _strcmp((char *)pQVar6,"Icon\r"), iVar4 != 0)) {
          local_64 = param_2;
          FUN_1000f2480(&local_60,&local_64);
          if (local_64 != param_2) goto LAB_1000f3a8b;
          QFile::remove(&local_60);
        }
      }
      else {
        cVar3 = QFileInfo::operator==(local_48,pQVar5);
        if (cVar3 == '\0') {
          iVar4 = FUN_1000f3730(&local_60,param_2);
          if (iVar4 == 1) {
LAB_1000f3a8b:
            iVar7 = iVar7 + 1;
          }
          else if (iVar4 == 0) {
            FUN_100d9bbb0(&local_60);
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (long)(int)*(uint *)(local_58 + 0xc) - (long)(int)*(uint *)(local_58 + 8));
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f3ae2;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_1000f3ae2:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f3b12;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1000f3b12:
  pDVar1 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f3b7a;
    }
    iVar4 = *(int *)(local_58 + 0xc);
    if (iVar4 != *(int *)(local_58 + 8)) {
      lVar8 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar4 * -8;
      pQVar5 = (QFileInfo *)(local_58 + (long)iVar4 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar1);
  }
LAB_1000f3b7a:
  QDir::~QDir(local_50);
  QFileInfo::~QFileInfo(local_48);
  return iVar7 != 0;
}

