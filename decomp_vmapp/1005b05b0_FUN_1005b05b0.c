
undefined1 FUN_1005b05b0(long param_1)

{
  char cVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  
  if (*(int *)(param_1 + 0x30) == -1) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","isOpen()","BlockGroup.cpp",
                  0x5d9,"Load");
  }
  cVar1 = FUN_1005af260(param_1);
  if (cVar1 == '\0') {
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",3,"Unable to read cache file [%s]",
                    local_30 + *(long *)(local_30 + 0x10));
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) {
            return 0;
          }
        }
        QArrayData::deallocate(local_30,1,8);
      }
    }
    return 0;
  }
  if (DAT_1011b55f8 < 3) {
    return 1;
  }
  QString::toUtf8();
  FUN_1008e3970("","vdisk",3,"Loaded [%s]",local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 1;
      }
    }
    QArrayData::deallocate(local_28,1,8);
    return 1;
  }
  return 1;
}

