
uint FUN_1004e1610(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  QFile local_70 [16];
  QDir local_60 [8];
  long local_58;
  QString local_50;
  QString local_48;
  QFileInfo local_40 [8];
  QString local_38;
  undefined1 local_29;
  
  local_38.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x18);
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_29 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  cVar3 = QString::endsWith(&local_38,0x2f,1);
  if (cVar3 == '\0') {
    QString::append(&local_38,0x2f);
  }
  QString::append(&local_38);
  QFileInfo::QFileInfo(local_40,&local_38);
  cVar3 = QFileInfo::exists();
  if (cVar3 == '\0') {
    cVar3 = QFileInfo::isSymLink();
    uVar4 = 0xf0000018;
    if (cVar3 != '\0') goto LAB_1004e169f;
  }
  else {
LAB_1004e169f:
    uVar4 = 0xf0000007;
    if (*(char *)(param_1 + 0x30) == '\0') {
      cVar3 = QFileInfo::isDir();
      if ((cVar3 == '\0') || (cVar3 = QFileInfo::isSymLink(), cVar3 != '\0')) {
        QFile::QFile(local_70,&local_38);
        cVar3 = QFile::remove();
        QFile::~QFile(local_70);
        uVar4 = 0xf000000a;
        if (cVar3 != '\0') goto LAB_1004e175e;
      }
      else {
        local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        QDir::QDir((QDir *)&local_48,&local_50);
        cVar3 = QDir::rmdir(&local_48);
        QDir::~QDir((QDir *)&local_48);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_29 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1004e175a;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_1004e175a:
        if (cVar3 != '\0') {
LAB_1004e175e:
          QFileInfo::~QFileInfo(local_40);
          uVar4 = 0;
          FUN_1004e18c0(param_1,param_2,0);
          goto LAB_1004e17d8;
        }
        QDir::QDir(local_60,&local_38);
        QDir::entryList(&local_58,local_60,0x707,0xffffffff);
        iVar1 = *(int *)(local_58 + 0xc);
        iVar2 = *(int *)(local_58 + 8);
        FUN_100013180(&local_58);
        QDir::~QDir(local_60);
        uVar4 = iVar1 - iVar2 != 2 | 0xf000000a;
      }
    }
  }
  QFileInfo::~QFileInfo(local_40);
LAB_1004e17d8:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar4;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar4;
}

