
void FUN_100106fc0(long param_1,int *param_2)

{
  CVmEventParameter *pCVar1;
  QArrayData *local_60;
  QArrayData *local_58;
  CVmEventParameter *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  CVmEventParameter *local_38;
  undefined1 local_29;
  
  pCVar1 = operator_new(0xd0);
  QString::number((uint)&local_40,*param_2);
  local_48 = (QArrayData *)QString::fromAscii_helper("vmcfg_guest_os_type",0x13);
  CVmEventParameter::CVmEventParameter(pCVar1,0,&local_40,&local_48);
  local_38 = pCVar1;
  if (*(undefined8 **)(param_1 + 8) == *(undefined8 **)(param_1 + 0x10)) {
    FUN_10002da50(param_1,&local_38);
  }
  else {
    **(undefined8 **)(param_1 + 8) = pCVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010707a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10010707a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001070aa;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001070aa:
  pCVar1 = operator_new(0xd0);
  QString::number((uint)&local_58,param_2[1]);
  local_60 = (QArrayData *)QString::fromAscii_helper("vmcfg_guest_os_version",0x16);
  CVmEventParameter::CVmEventParameter(pCVar1,0,&local_58,&local_60);
  local_50 = pCVar1;
  if (*(undefined8 **)(param_1 + 8) == *(undefined8 **)(param_1 + 0x10)) {
    FUN_10002da50(param_1,&local_50);
  }
  else {
    **(undefined8 **)(param_1 + 8) = pCVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100107150;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100107150:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

