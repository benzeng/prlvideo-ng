
undefined8 FUN_1004da380(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QString local_38;
  QFileInfo local_30 [8];
  QFileInfo local_28 [15];
  undefined1 local_19;
  
  QFileInfo::QFileInfo(local_28,(QString *)(param_1 + 0x18));
  QFileInfo::absolutePath();
  QFileInfo::QFileInfo(local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004da3e7;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1004da3e7:
  uVar2 = 0xf000000a;
  if ((((*(char *)(*(long *)(param_1 + 0x10) + 0x30) == '\0') &&
       (cVar1 = QFileInfo::isExecutable(), cVar1 != '\0')) &&
      (cVar1 = QFileInfo::isWritable(), cVar1 != '\0')) &&
     ((cVar1 = QFileInfo::isDir(), cVar1 == '\0' || (cVar1 = QFileInfo::isRoot(), cVar1 == '\0'))))
  {
    uVar2 = 0;
  }
  QFileInfo::~QFileInfo(local_30);
  QFileInfo::~QFileInfo(local_28);
  return uVar2;
}

