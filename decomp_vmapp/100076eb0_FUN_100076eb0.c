
void FUN_100076eb0(long param_1,undefined8 param_2,CVmEventParameter *param_3,undefined4 param_4)

{
  CVmEventParameter *pCVar1;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmEventBase::setEventCode((int)param_3);
  pCVar1 = operator_new(0xd0);
  local_40 = *(QArrayData **)(*(long *)(param_1 + 0x10) + 0x18);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("vm_uuid",7);
  CVmEventParameter::CVmEventParameter(pCVar1,1,&local_40,&local_48);
  CVmEvent::addEventParameter(param_3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100076f70;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100076f70:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100076fa0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100076fa0:
  pCVar1 = operator_new(0xd0);
  local_58 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_50,&local_58,param_4,0,10,0x20);
  local_60 = (QArrayData *)QString::fromAscii_helper("op_rc",5);
  CVmEventParameter::CVmEventParameter(pCVar1,0,&local_50,&local_60);
  CVmEvent::addEventParameter(param_3);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007704c;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10007704c:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007707e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10007707e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000770ae;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000770ae:
  FUN_10006b720(param_1,param_2,param_3);
  return;
}

