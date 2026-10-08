
undefined1 FUN_1002a8d50(undefined8 param_1)

{
  undefined1 uVar1;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_20 = (QArrayData *)
             QString::fromAscii_helper
                       ("on parallels_script()\ntry\ntell application \"Finder\"\nmove POSIX file \"%1\" to trash\nend tell\nend try\nend parallels_script\n"
                        ,0x78);
  QString::arg(&local_28,&local_20,param_1,0,0x20);
  uVar1 = FUN_100d6fb50(&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1002a8dc4;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1002a8dc4:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar1;
}

