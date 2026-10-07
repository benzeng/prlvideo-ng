
undefined4 FUN_1005d1f30(long *param_1,int *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QString::number((int)&local_28,*param_2);
  pcVar1 = *(code **)(*param_1 + 0x160);
  local_30 = (QArrayData *)QString::fromAscii_helper("EnableBackupApi",0xf);
  uVar2 = (*pcVar1)(param_1,&local_30,&local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005d1fad;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005d1fad:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar2;
}

