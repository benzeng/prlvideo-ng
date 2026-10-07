
void FUN_10004c030(QString *param_1)

{
  Data *pDVar1;
  char cVar2;
  int iVar3;
  QArrayData *pQVar4;
  int iVar5;
  Data *pDVar6;
  QFileInfo *this;
  long lVar7;
  QString local_80;
  QString local_78;
  QFileInfo local_70 [8];
  QString local_68;
  Data *local_60;
  QDir local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  local_38 = (Data *)PTR_shared_null_100ba2188;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("*.dmp",5);
  local_40 = pQVar4;
  FUN_10000c490(&local_38,&local_40);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10004c09d;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10004c09d:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("*.crash",7);
  local_48 = pQVar4;
  FUN_10000c490(&local_38,&local_48);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10004c0ed;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10004c0ed:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("*.dump",6);
  local_50 = pQVar4;
  FUN_10000c490(&local_38,&local_50);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10004c13d;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10004c13d:
  QDir::QDir(local_58,param_1);
  cVar2 = QDir::exists();
  if (cVar2 != '\0') {
    QDir::entryInfoList(&local_60,local_58,&local_38,0x10a,1);
    while( true ) {
      iVar5 = *(int *)(local_60 + 8);
      iVar3 = *(int *)(local_60 + 0xc);
      if (iVar3 - iVar5 < 5) break;
      FUN_10004e0b0(local_70,&local_60);
      QFileInfo::absoluteFilePath();
      QFile::remove(&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_29 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10004c1f5;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_10004c1f5:
      QFileInfo::~QFileInfo(local_70);
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10004c264;
        iVar5 = *(int *)(local_60 + 8);
        iVar3 = *(int *)(local_60 + 0xc);
      }
      if (iVar3 != iVar5) {
        lVar7 = (long)iVar5 * 8 + (long)iVar3 * -8;
        this = (QFileInfo *)(local_60 + (long)iVar3 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(this);
          this = this + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(local_60);
    }
    goto LAB_10004c264;
  }
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QDir::QDir((QDir *)&local_78,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10004c24f;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10004c24f:
  QDir::mkdir(&local_78);
  QDir::~QDir((QDir *)&local_78);
LAB_10004c264:
  QDir::~QDir(local_58);
  pDVar1 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar5 = *(int *)(local_38 + 0xc);
    if (iVar5 != *(int *)(local_38 + 8)) {
      lVar7 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar5 * -8;
      pDVar6 = local_38 + (long)iVar5 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar4 == 0) {
LAB_10004c2e0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar6;
            goto LAB_10004c2e0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar1);
  }
  return;
}

