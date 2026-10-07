
undefined8 FUN_100581390(undefined8 param_1,long param_2)

{
  QArrayData *pQVar1;
  char cVar2;
  QString *pQVar3;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x18);
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_30);
  pQVar3 = (QString *)(param_2 + 0x18);
  cVar2 = QFile::rename(pQVar3,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10058140c;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10058140c:
  if (cVar2 != '\0') {
    return 0;
  }
  cVar2 = QFile::remove(pQVar3);
  if (cVar2 != '\0') {
    return 0;
  }
  pQVar1 = (QArrayData *)pQVar3->field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"%s file rename failed at rollback after RENAME",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005814a3;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1005814a3:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005814d3;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005814d3:
  FUN_1008e3970("","vdisk",0,"Disk is dead. Sorry.");
  return 0x80021034;
}

