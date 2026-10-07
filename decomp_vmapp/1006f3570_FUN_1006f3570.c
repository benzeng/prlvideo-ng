
undefined8 FUN_1006f3570(long *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  QString local_68;
  QDir local_60 [8];
  QFileInfo local_58 [8];
  QFile local_50 [16];
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  lVar2 = *param_1;
  uVar3 = (ulong)*(uint *)(lVar2 + 8);
  iVar4 = *(int *)(lVar2 + 0xc);
  lVar5 = 0;
  if ((int)*(uint *)(lVar2 + 8) < iVar4) {
    do {
      QFileInfo::QFileInfo(local_40,(QString *)(lVar2 + 0x10 + ((int)uVar3 + lVar5) * 8));
      cVar1 = QFileInfo::isDir();
      if (cVar1 == '\0') {
        QFile::QFile(local_50,(QString *)(*param_1 + 0x10 + (*(int *)(*param_1 + 8) + lVar5) * 8));
        QFile::remove();
        QFile::~QFile(local_50);
      }
      QFileInfo::~QFileInfo(local_40);
      lVar5 = lVar5 + 1;
      lVar2 = *param_1;
      uVar3 = (ulong)*(uint *)(lVar2 + 8);
      iVar4 = *(int *)(lVar2 + 0xc);
    } while (lVar5 < (int)(iVar4 - *(uint *)(lVar2 + 8)));
  }
  if ((int)uVar3 < iVar4) {
    lVar5 = 0;
    do {
      QFileInfo::QFileInfo(local_58,(QString *)(lVar2 + 0x10 + ((int)uVar3 + lVar5) * 8));
      cVar1 = QFileInfo::isDir();
      if (cVar1 != '\0') {
        local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        QDir::QDir(local_60,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006f3685;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_1006f3685:
        QDir::setPath((QString *)local_60);
        QDir::rmdir((QString *)local_60);
        QDir::~QDir(local_60);
      }
      QFileInfo::~QFileInfo(local_58);
      lVar5 = lVar5 + 1;
      lVar2 = *param_1;
      uVar3 = (ulong)*(int *)(lVar2 + 8);
    } while (lVar5 < (long)((long)*(int *)(lVar2 + 0xc) - uVar3));
  }
  return CONCAT71((int7)((ulong)lVar2 >> 8),1);
}

