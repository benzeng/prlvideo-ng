
undefined4 FUN_1004d86e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QString::QString(&local_40,(QChar *)(param_2 + 0x24),*(uint *)(param_2 + 0x20) >> 1);
  QString::normalized(&local_38,&local_40,0,0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004d8750;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004d8750:
  QString::replace(&local_38,0x5c,0x2f,1);
  uVar1 = FUN_1004d8820(param_1,&local_38,param_2,param_3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar1;
}

