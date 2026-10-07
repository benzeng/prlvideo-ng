
int FUN_1004e1ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  cVar1 = QString::endsWith(&local_38,0x2f,1);
  if (cVar1 == '\0') {
    QString::append(&local_38,0x2f);
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::append(&local_48);
  iVar2 = FUN_1004e1a30(param_1,&local_40,&local_48);
  if (iVar2 == 0) {
    FUN_1004e18c0(param_1,param_2,param_3);
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004e1dd6;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004e1dd6:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004e1e06;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004e1e06:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return iVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return iVar2;
}

