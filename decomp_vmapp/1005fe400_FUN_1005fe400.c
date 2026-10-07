
undefined8 FUN_1005fe400(undefined8 param_1,undefined8 param_2,long param_3)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  QFileInfo::absoluteFilePath();
  FUN_10000c490(param_3 + 0x40,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 0;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return 0;
}

