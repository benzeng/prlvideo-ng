
void FUN_1000ebcf0(long param_1,long param_2)

{
  undefined8 uVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  QString::fromUtf16((ushort *)&local_38,(int)param_2 + 0x28);
  QString::normalized(&local_30,&local_38,0,0);
  FUN_1000ccd30(uVar1,&local_30,*(undefined4 *)(param_2 + 0x24));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ebd68;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000ebd68:
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

