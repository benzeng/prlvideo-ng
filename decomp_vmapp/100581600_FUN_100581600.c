
undefined8 FUN_100581600(undefined8 param_1,long param_2)

{
  QArrayData *pQVar1;
  char cVar2;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x18);
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_28);
  cVar2 = QFile::rename(&local_28,(QString *)(param_2 + 0x18));
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10058167a;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_10058167a:
  if (cVar2 != '\0') {
    return 0;
  }
  pQVar1 = (QArrayData *)((QString *)(param_2 + 0x18))->field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_19 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"%s.rem file rename failed at rollback",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100581700;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100581700:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_19 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100581730;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100581730:
  FUN_1008e3970("","vdisk",0,"Disk is dead. Sorry.");
  return 0x80021034;
}

