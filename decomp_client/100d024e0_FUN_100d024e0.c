
void FUN_100d024e0(long param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pcVar1 = *(code **)(*param_2 + 8);
  local_38 = (QArrayData *)QString::fromAscii_helper("firmware",8);
  local_40 = (QArrayData *)QString::fromAscii_helper("bios",4);
  (*pcVar1)(&local_30,param_2,&local_38,&local_40);
  local_48 = (QArrayData *)QString::fromAscii_helper("efi",3);
  iVar2 = QString::compare(&local_30,&local_48,0);
  *(bool *)(param_1 + 0x2f8) = iVar2 == 0;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d02594;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d02594:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d025c4;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d025c4:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d025f4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d025f4:
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

