
undefined8 FUN_100580cd0(undefined8 param_1,long param_2)

{
  QArrayData *pQVar1;
  char cVar2;
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
  cVar2 = QFile::rename((QString *)(param_2 + 0x18),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100580d4c;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100580d4c:
  if (cVar2 != '\0') {
    return 0;
  }
  pQVar1 = (QArrayData *)((QString *)(param_2 + 0x18))->field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"%s adding .rem via rename failed",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100580dd3;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100580dd3:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return 0x80021034;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return 0x80021034;
}

