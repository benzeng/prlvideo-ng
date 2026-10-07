
void FUN_10057c650(long *param_1,undefined8 param_2,int param_3,int param_4)

{
  code *pcVar1;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pcVar1 = *(code **)(*param_1 + 0x138);
  local_40 = (QArrayData *)QString::fromAscii_helper("MergeThrottlerType",0x12);
  (*pcVar1)(param_1,&local_40,param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057c6c9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10057c6c9:
  pcVar1 = *(code **)(*param_1 + 0x138);
  local_48 = (QArrayData *)QString::fromAscii_helper("MergeThrottlerLimit",0x13);
  QString::number((uint)&local_50,param_3);
  (*pcVar1)(param_1,&local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057c737;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10057c737:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057c767;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10057c767:
  pcVar1 = *(code **)(*param_1 + 0x138);
  local_58 = (QArrayData *)QString::fromAscii_helper("MergeThrottlerGroup",0x13);
  QString::number((uint)&local_60,param_4);
  (*pcVar1)(param_1,&local_58,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057c7d5;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10057c7d5:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

