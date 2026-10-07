
undefined4 FUN_1004dae00(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  QArrayData *local_38;
  QString local_30;
  QString local_28;
  QFileInfo local_20 [15];
  undefined1 local_11;
  
  QFileInfo::QFileInfo(local_20,(QString *)(param_1 + 0x18));
  QFileInfo::dir();
  QFileInfo::absoluteFilePath();
  QDir::toNativeSeparators(&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004dae6f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004dae6f:
  cVar1 = QDir::rmdir(&local_28);
  uVar2 = 0xf000000a;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004daeb8;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1004daeb8:
  QDir::~QDir((QDir *)&local_28);
  QFileInfo::~QFileInfo(local_20);
  return uVar2;
}

