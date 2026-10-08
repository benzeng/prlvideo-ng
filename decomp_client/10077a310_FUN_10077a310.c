
undefined1 FUN_10077a310(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48 [2];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = FUN_100774d90();
  if (cVar1 != '\0') {
    return 1;
  }
  uVar3 = FUN_100152280();
  uVar3 = FUN_1001554a0(uVar3);
  uVar4 = FUN_10016f500(uVar3);
  cVar1 = FUN_10061b500(uVar4,2);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar3 = FUN_10016f500(uVar3);
  cVar1 = FUN_10061c2b0(uVar3);
  if (cVar1 != '\0') {
    return 1;
  }
  cVar1 = FUN_100124e00();
  if (cVar1 == '\0') {
    return 1;
  }
  QSettings::QSettings((QSettings *)local_48,(QObject *)0x0);
  local_60.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_21 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
  QString::append(&local_60);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077a3fd;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10077a3fd:
  local_58.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_21 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_58);
  local_50.field0_0x0 = local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_21 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1dec7bd);
  QString::append(&local_50);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077a491;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10077a491:
  uVar2 = QSettings::contains(local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077a4d1;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10077a4d1:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077a501;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10077a501:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077a531;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10077a531:
  QSettings::~QSettings((QSettings *)local_48);
  return uVar2;
}

