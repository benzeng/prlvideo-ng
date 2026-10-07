
void FUN_10005c380(undefined8 param_1,char param_2,undefined4 param_3)

{
  char *pcVar1;
  QArrayData *local_60;
  QArrayData *local_58;
  QDateTime local_50 [8];
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("%1 LightWeightClient:%2:count=%3",0x20);
  QDateTime::currentDateTime();
  local_58 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_48);
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  pcVar1 = "Detached";
  if (param_2 != '\0') {
    pcVar1 = "Attached";
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(pcVar1,8);
  QString::arg(&local_30,&local_38,&local_60,0,0x20);
  QString::arg(&local_28,&local_30,param_3,0,10,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005c476;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10005c476:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005c4a6;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10005c4a6:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005c4d6;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10005c4d6:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005c506;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10005c506:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005c536;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10005c536:
  QDateTime::~QDateTime(local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005c56f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10005c56f:
  FUN_10005c750(&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

