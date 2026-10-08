
void FUN_1000eb9d0(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  iVar2 = (int)param_2;
  QString::fromUtf16((ushort *)&local_38,iVar2 + 0x28);
  QString::normalized(&local_30,&local_38,0,0);
  QString::fromUtf16((ushort *)&local_48,iVar2 + 0x12a);
  QString::normalized(&local_40,&local_48,0,0);
  QString::fromUtf16((ushort *)&local_58,iVar2 + 0x32a);
  QString::normalized(&local_50,&local_58,0,0);
  FUN_1000cc9a0(uVar1,&local_30,&local_40,&local_50,*(undefined4 *)(param_2 + 0x24));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000eba9d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000eba9d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ebacd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000ebacd:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ebafd;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000ebafd:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ebb2d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000ebb2d:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ebb5d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000ebb5d:
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

