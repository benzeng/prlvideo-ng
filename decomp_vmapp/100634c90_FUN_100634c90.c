
undefined1 FUN_100634c90(long param_1,undefined8 param_2,QString *param_3,char param_4)

{
  char cVar1;
  long lVar2;
  undefined1 uVar3;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if (param_4 != '\0') {
    QFileInfo::fileName();
    QFileInfo::fileName();
    cVar1 = operator==(&local_38,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100634d08;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100634d08:
    if (*(int *)local_38.field0_0x0 == -1) {
LAB_100634d25:
      if (cVar1 != '\0') {
        return 0;
      }
    }
    else {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100634d25;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar1 = FUN_1006348f0(param_1,param_2,&local_48);
  if (cVar1 == '\0') {
    uVar3 = 0;
    goto LAB_100634e99;
  }
  cVar1 = FUN_100634b80();
  if ((cVar1 != '\0') && (lVar2 = QFileInfo::size(), *(int *)(param_1 + 0x18) <= lVar2)) {
    uVar3 = 0;
    goto LAB_100634e99;
  }
  local_58.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 8);
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_29 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_58);
  local_50.field0_0x0 = local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_29 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_50);
  QString::operator=(param_3,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100634e1f;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100634e1f:
  uVar3 = 1;
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100634e99;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100634e99:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return uVar3;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return uVar3;
}

