
undefined4 FUN_10011d510(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  QString QVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar3.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_28 = (QArrayData *)*param_2;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_19 = *(int *)local_28 != 0;
    UNLOCK();
  }
  lVar2 = CVmEvent::getEventParameter(QVar3);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10011d57e;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10011d57e:
  uVar1 = 0;
  if (lVar2 != 0) {
    CVmEventParameter::getParamValue();
    uVar1 = QString::toUInt((bool *)&local_30,0);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return uVar1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return uVar1;
}

