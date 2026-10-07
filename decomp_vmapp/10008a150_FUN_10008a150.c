
undefined1 FUN_10008a150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  QArrayData *local_38;
  undefined1 local_2a;
  
  QFileInfo::absoluteFilePath();
  uVar1 = FUN_100545c50(&local_38,param_3,param_4,param_1 + 0x18);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar1;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar1;
}

