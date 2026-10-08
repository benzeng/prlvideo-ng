
undefined4 FUN_1009ea410(long param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_38.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x268);
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_19 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_38);
  local_30.field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_19 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1e3a4b7);
  QString::append(&local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ea4c7;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009ea4c7:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ea4f7;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1009ea4f7:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ea527;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009ea527:
  cVar2 = QFile::exists(&local_30);
  uVar3 = 0x80000009;
  if (cVar2 != '\0') {
    pcVar1 = *(code **)(*(long *)(param_1 + 0x10) + 0x58);
    local_48 = (QArrayData *)local_30.field0_0x0;
    if (1 < *(int *)local_30.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
    }
    uVar3 = (*pcVar1)(param_1 + 0x10,&local_48,1);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009ea59e;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1009ea59e:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar3;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar3;
}

