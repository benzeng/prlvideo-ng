
bool FUN_100af1190(long *param_1)

{
  int iVar1;
  bool bVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (*(int *)(*param_1 + 4) == 0) {
    return false;
  }
  local_20 = (QArrayData *)QString::fromAscii_helper("composite device",0x10);
  iVar1 = QString::indexOf(param_1,&local_20,0,0);
  if (iVar1 != -1) {
    bVar2 = false;
    goto LAB_100af1296;
  }
  local_28 = (QArrayData *)QString::fromAscii_helper("port_#",6);
  iVar1 = QString::indexOf(param_1,&local_28,0,0);
  if (iVar1 == -1) {
    local_30 = (QArrayData *)QString::fromAscii_helper("parallels usb device",0x14);
    iVar1 = QString::indexOf(param_1,&local_30,0,0);
    bVar2 = iVar1 == -1;
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_11 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100af1266;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  else {
    bVar2 = false;
  }
LAB_100af1266:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100af1296;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100af1296:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return bVar2;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return bVar2;
}

