
undefined8 FUN_1005ffae0(long param_1,undefined8 param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  QString local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined *local_48;
  QFileInfo local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  plVar2 = (long *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x10);
  }
  cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,&local_30);
  uVar3 = 0x80021000;
  if (cVar1 == '\0') goto LAB_1005ffc70;
  QFileInfo::QFileInfo(local_38,&local_30);
  local_68._8_4_ = (int)PTR_shared_null_100ba20d0;
  local_68._0_8_ = PTR_shared_null_100ba20d0;
  local_68._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = PTR_shared_null_100ba2188;
  FUN_1006002d0(&local_70,param_1 + 8);
  QString::operator=((QString *)local_68,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005ffbb2;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1005ffbb2:
  cVar1 = QFile::exists((QString *)local_68);
  if (cVar1 == '\0') {
    uVar3 = 0x80021000;
    FUN_1008e3970("Backup","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                  "BackupFileListBuilder.cpp",0x10c,"processDiskDescriptor");
  }
  else {
    QString::operator=((QString *)(local_68 + 8),&local_30);
    local_58 = QFileInfo::size();
    local_50 = 3;
    local_4c = 0;
    uVar3 = 0;
    FUN_100602b40(param_2,local_68);
  }
  FUN_100603280(local_68);
  QFileInfo::~QFileInfo(local_38);
LAB_1005ffc70:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar3;
}

