
undefined1 FUN_1004fc620(long param_1,long *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  QDir local_48 [8];
  QFileInfo local_40 [8];
  QString local_38;
  undefined1 local_29;
  
  iVar3 = QString::indexOf(param_2,0x2f,0,1);
  if (iVar3 < 0) {
    return 0;
  }
  if (((iVar3 != *(int *)(DAT_1011bc278 + 4)) ||
      (cVar1 = QString::startsWith(param_2,&DAT_1011bc278,1), cVar1 == '\0')) &&
     (iVar3 = QString::indexOf(param_2,0x2f,iVar3 + 1,1), iVar3 < 0)) {
    return 0;
  }
  if (iVar3 + 1 == *(int *)(*param_2 + 4)) {
    uVar2 = 0;
  }
  else {
    QString::left((int)&local_38);
    QDir::QDir(local_48,(QString *)(param_1 + 0x30));
    QFileInfo::QFileInfo(local_40,local_48,&local_38);
    uVar2 = QFileInfo::exists();
    QFileInfo::~QFileInfo(local_40);
    QDir::~QDir(local_48);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return uVar2;
        }
        local_29 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  return uVar2;
}

