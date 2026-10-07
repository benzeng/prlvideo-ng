
bool FUN_10059d810(undefined8 param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined4 uVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  uint local_30;
  undefined1 local_29;
  
  local_30 = 0;
  uVar3 = 9;
  while (plVar2 = (long *)FUN_10059ac80(param_1,uVar3,&local_30), plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,&local_30);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if (-1 < (int)local_30) {
      return (bool)uVar1;
    }
    uVar3 = 3;
    if (local_30 != 0x80023000) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error get parameter from disk %s. Error 0x%x",
                    local_40 + *(long *)(local_40 + 0x10),local_30);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return false;
          }
          local_29 = 0;
        }
        QArrayData::deallocate(local_40,1,8);
      }
      return false;
    }
  }
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,
                "Error opening disk %s to get bootable flag. Error 0x%x with flags 0x%x",
                local_38 + *(long *)(local_38 + 0x10),local_30,uVar3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_10059d968;
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10059d968:
  return local_30 != 0;
}

