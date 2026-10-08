
void FUN_1009ea0c0(long param_1)

{
  code *pcVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  QString local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_30.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x268);
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_11 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_30);
  local_28.field0_0x0 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_11 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_20,0x1e3a4b7);
  QString::append(&local_28);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009ea175;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1009ea175:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009ea1a5;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1009ea1a5:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009ea1d5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009ea1d5:
  pcVar1 = *(code **)(*(long *)(param_1 + 0x10) + 0x68);
  local_40 = (QArrayData *)local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_11 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  (*pcVar1)(param_1 + 0x10,&local_40,1,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009ea23d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009ea23d:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

