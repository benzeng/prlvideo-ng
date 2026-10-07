
CVmEventParameter * FUN_1001248f0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  QString QVar1;
  CVmEventParameter *pCVar2;
  CVmEventParameter *pCVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QVar1.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar1.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_38 = (QArrayData *)*param_2;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QVar1.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmEvent::getEventParameter(QVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012496b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10012496b:
  if (QVar1.field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) {
    local_40 = (QArrayData *)*param_3;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
    }
    CVmEventParameter::setParamValue(QVar1);
    if (*(int *)local_40 == -1) {
      return (CVmEventParameter *)QVar1.field0_0x0;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return (CVmEventParameter *)QVar1.field0_0x0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
    return (CVmEventParameter *)QVar1.field0_0x0;
  }
  pCVar2 = operator_new(0xd0);
  local_48 = (QArrayData *)*param_3;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_29 = *(int *)local_48 != 0;
    UNLOCK();
  }
  local_50 = (QArrayData *)*param_2;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_29 = *(int *)local_50 != 0;
    UNLOCK();
  }
  CVmEventParameter::CVmEventParameter(pCVar2,1,&local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100124a55;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100124a55:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100124a85;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100124a85:
  pCVar3 = (CVmEventParameter *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    pCVar3 = *(CVmEventParameter **)(*(long *)(param_1 + 8) + 0x10);
  }
  CVmEvent::addEventParameter(pCVar3);
  return pCVar2;
}

