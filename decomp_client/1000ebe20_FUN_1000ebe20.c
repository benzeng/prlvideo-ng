
void FUN_1000ebe20(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  iVar2 = (int)param_2;
  QString::fromUtf16((ushort *)&local_38,iVar2 + 0x2c);
  QString::normalized(&local_30,&local_38,0,0);
  QString::fromUtf16((ushort *)&local_48,iVar2 + 0x236);
  QString::normalized(&local_40,&local_48,0,0);
  QString::fromUtf16((ushort *)&local_58,iVar2 + 0x336);
  QString::normalized(&local_50,&local_58,0,0);
  QString::fromUtf16((ushort *)&local_68,iVar2 + 0x436);
  QString::normalized(&local_60,&local_68,0,0);
  FUN_1000cce60(uVar1,&local_30,&local_40,&local_50,&local_60,*(undefined4 *)(param_2 + 0x24),
                *(undefined2 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x2a));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ebf26;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000ebf26:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ebf56;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000ebf56:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ebf86;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000ebf86:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ebfb6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000ebfb6:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ebfe6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000ebfe6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ec016;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000ec016:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000ec046;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000ec046:
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

