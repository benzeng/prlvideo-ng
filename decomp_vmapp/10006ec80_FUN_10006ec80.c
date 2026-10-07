
void FUN_10006ec80(long *param_1,CVmEventParameter *param_2)

{
  int iVar1;
  CVmEventParameter *pCVar2;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar1 = (**(code **)(*param_1 + 0x68))();
  if ((iVar1 == 10) || (iVar1 = (**(code **)(*param_1 + 0x68))(param_1), iVar1 == 0xb)) {
    pCVar2 = operator_new(0xd0);
    iVar1 = CVmDevice::getIndex();
    QString::number((uint)&local_38,iVar1);
    local_40 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
    CVmEventParameter::CVmEventParameter(pCVar2,1,&local_38,&local_40);
    CVmEvent::addEventParameter(param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10006ed44;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10006ed44:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
    return;
  }
  pCVar2 = operator_new(0xd0);
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  QString::number((int)&local_48,iVar1);
  local_50 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
  CVmEventParameter::CVmEventParameter(pCVar2,1,&local_48,&local_50);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006ee20;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10006ee20:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006ee50;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10006ee50:
  pCVar2 = operator_new(0xd0);
  iVar1 = CVmDevice::getIndex();
  QString::number((uint)&local_58,iVar1);
  local_60 = (QArrayData *)QString::fromAscii_helper("vm_message_param_1",0x12);
  CVmEventParameter::CVmEventParameter(pCVar2,1,&local_58,&local_60);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006eee2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10006eee2:
  if (*(int *)local_58 == -1) {
    return;
  }
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
  return;
}

