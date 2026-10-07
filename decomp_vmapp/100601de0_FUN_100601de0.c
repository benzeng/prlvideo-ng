
undefined4 FUN_100601de0(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 local_48;
  long alStack_40 [2];
  QArrayData *local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  local_28 = 0;
  plVar1 = (long *)FUN_100684400(param_2,0x401,2,&local_28,0);
  if (plVar1 == (long *)0x0) {
    QString::toUtf8();
    FUN_1008e3970("Backup","vdisk",0,"Unable open image [%s], err = 0x%X",
                  local_30 + *(long *)(local_30 + 0x10),local_28);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return local_28;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  else {
    local_48 = 0;
    alStack_40[0] = 0;
    (**(code **)(*plVar1 + 0x148))(plVar1,&local_48,alStack_40);
    if (alStack_40[0] == -1) {
      FUN_1008e3970("Backup","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "PRL_UINT64(-1) != metaData.size","BackupFileListBuilder.cpp",0x349,
                    "addMetadata");
    }
    FUN_100603680(param_2 + 0x20,&local_48);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return local_28;
}

