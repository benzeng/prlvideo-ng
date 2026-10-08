
undefined8 FUN_10026d160(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_48;
  QString local_40;
  QFileInfo local_38 [8];
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  FUN_10026ca90(&local_28,param_1);
  uVar1 = 0x80000009;
  if (*(int *)(local_28.field0_0x0 + 4) == 0) goto LAB_10026d287;
  QFileInfo::QFileInfo(local_38,&local_28);
  QFileInfo::completeBaseName();
  QString::operator=((QString *)(param_1 + 0x48),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10026d1e5;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10026d1e5:
  QFileInfo::~QFileInfo(local_38);
  local_48 = (QArrayData *)local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  FUN_100d98ee0(&local_40,&local_48);
  QString::operator=((QString *)(param_1 + 0x50),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10026d254;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10026d254:
  uVar1 = 0;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10026d287;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10026d287:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return uVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return uVar1;
}

