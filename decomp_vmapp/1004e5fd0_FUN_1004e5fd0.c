
undefined4 FUN_1004e5fd0(long param_1,QString *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  QArrayData *local_50;
  QString local_48;
  QFileInfo local_40 [8];
  QDir local_38 [15];
  undefined1 local_29;
  
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x30) != '\0') {
    return 0xf0000007;
  }
  QDir::QDir(local_38,(QString *)(*(long *)(param_1 + 0x10) + 0x18));
  QFileInfo::QFileInfo(local_40,local_38,param_2);
  QFileInfo::absoluteFilePath();
  QDir::toNativeSeparators(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004e6064;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004e6064:
  uVar1 = FUN_1004e4c00(*(undefined8 *)(param_1 + 0x20),&local_48,param_3);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004e60a7;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004e60a7:
  QFileInfo::~QFileInfo(local_40);
  QDir::~QDir(local_38);
  return uVar1;
}

