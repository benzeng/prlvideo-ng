
undefined4 FUN_10022b6d0(QString *param_1,long *param_2)

{
  undefined4 uVar1;
  QFile local_40 [16];
  QArrayData *local_30;
  QDir local_28 [8];
  QString local_20;
  undefined1 local_11;
  
  QDir::QDir(local_28,param_1);
  local_30 = (QArrayData *)QString::fromAscii_helper("config.pvs",10);
  QDir::absoluteFilePath(&local_20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10022b741;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10022b741:
  QDir::~QDir(local_28);
  QFile::QFile(local_40,&local_20);
  uVar1 = (**(code **)(*param_2 + 0x70))(param_2,local_40,1);
  QFile::~QFile(local_40);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return uVar1;
}

