
void FUN_1000ed0d0(long param_1,int param_2)

{
  undefined8 uVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  QString::fromUtf16((ushort *)&local_38,param_2 + 0x24);
  QString::normalized(&local_30,&local_38,0,0);
  QString::fromUtf16((ushort *)&local_48,param_2 + 0x22e);
  QString::normalized(&local_40,&local_48,0,0);
  FUN_1000cf610(uVar1,&local_30,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ed172;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000ed172:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ed1a2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000ed1a2:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ed1d2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000ed1d2:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

