
void FUN_1000d1d80(long param_1)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  if ((*(byte *)(param_1 + 499) & 8) == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","IsRevertSnapshot()",
                  "SerializationApp.cpp",0x890,"RestoreNVRAM");
  }
  QFileInfo::absolutePath();
  FUN_100561450(&local_28,param_1 + 0x440);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

