
undefined1 FUN_10003c460(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  QString local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if ((*(int *)(*(long *)(param_1 + 0x40) + 4) != 0) &&
     (cVar1 = QString::startsWith(param_2,param_1 + 0x40,1), cVar1 != '\0')) {
    return 1;
  }
  FUN_100a4d110(&local_30);
  if (*(int *)(local_30 + 4) == 0) {
    uVar2 = 0;
    goto LAB_10003c566;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_30;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1db6267);
  QString::append(&local_38);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10003c517;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10003c517:
  uVar2 = QString::startsWith(param_2,&local_38,1);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10003c566;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10003c566:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar2;
}

