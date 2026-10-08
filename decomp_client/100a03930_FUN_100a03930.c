
QFileInfo * FUN_100a03930(QFileInfo *param_1,QString *param_2)

{
  int iVar1;
  QArrayData *pQVar2;
  uint uVar3;
  QFileInfo *this;
  long lVar4;
  QArrayData *local_50;
  undefined *local_48;
  Data *local_40;
  QDir local_38 [15];
  undefined1 local_29;
  
  QDir::QDir(local_38,param_2);
  local_48 = PTR_shared_null_1021e15e8;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("*.panic",7);
  local_50 = pQVar2;
  FUN_1000341d0(&local_48,&local_50);
  QDir::entryInfoList(&local_40,local_38,&local_48,0x10a,1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a039c5;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a039c5:
  FUN_100039a80(&local_48);
  uVar3 = *(uint *)(local_40 + 8);
  if (*(uint *)(local_40 + 0xc) == uVar3) {
    QFileInfo::QFileInfo(param_1);
  }
  else {
    if (1 < *(uint *)local_40) {
      FUN_1000f7ce0(&local_40,*(uint *)(local_40 + 4));
      uVar3 = *(uint *)(local_40 + 8);
    }
    QFileInfo::QFileInfo(param_1,(QFileInfo *)(local_40 + (long)(int)uVar3 * 8 + 0x10));
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a03a6a;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar4 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      this = (QFileInfo *)(local_40 + (long)iVar1 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_40);
  }
LAB_100a03a6a:
  QDir::~QDir(local_38);
  return param_1;
}

