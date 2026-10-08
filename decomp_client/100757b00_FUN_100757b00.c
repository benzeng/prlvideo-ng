
undefined8 FUN_100757b00(QString *param_1,undefined8 param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  QFileInfo *pQVar6;
  QFileInfo local_60 [8];
  Data *local_58;
  Data *local_50;
  QDir local_48 [8];
  Data *local_40;
  QFileInfo local_38 [15];
  undefined1 local_29;
  
  iVar4 = FUN_100db9710(param_2);
  if (1 < iVar4 - 1U) {
    return 1;
  }
  pQVar1 = param_1->field0_0x0;
  iVar4 = QString::compare_helper
                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),"\\",0xffffffff,1
                    );
  if (iVar4 == 0) {
    return 0;
  }
  QFileInfo::QFileInfo(local_38,param_1);
  cVar3 = QFileInfo::isDir();
  QFileInfo::~QFileInfo(local_38);
  if (cVar3 == '\0') {
    QFileInfo::QFileInfo(local_60,param_1);
    lVar5 = QFileInfo::size();
    QFileInfo::~QFileInfo(local_60);
    if (lVar5 < 0x100000000) {
      return 1;
    }
    return 0;
  }
  QDir::QDir(local_48,param_1);
  QDir::entryInfoList(&local_40,local_48,0x600a,0xffffffff);
  QDir::~QDir(local_48);
  FUN_100055060(&local_58,&local_40);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    bVar2 = true;
    do {
      local_50 = local_50 + 8;
      lVar5 = QFileInfo::size();
      if (0xffffffff < lVar5) goto LAB_100757c0b;
    } while (local_50 != local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10);
  }
  bVar2 = false;
LAB_100757c0b:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100757c6a;
    }
    iVar4 = *(int *)(local_58 + 0xc);
    if (iVar4 != *(int *)(local_58 + 8)) {
      lVar5 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar4 * -8;
      pQVar6 = (QFileInfo *)(local_58 + (long)iVar4 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_100757c6a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100757cca;
      local_29 = 0;
    }
    iVar4 = *(int *)(local_40 + 0xc);
    if (iVar4 != *(int *)(local_40 + 8)) {
      lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar4 * -8;
      pQVar6 = (QFileInfo *)(local_40 + (long)iVar4 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_40);
  }
LAB_100757cca:
  if (!bVar2) {
    return 1;
  }
  return 0;
}

