
void FUN_10011df90(long param_1,undefined8 param_2,undefined8 *param_3)

{
  CVmEventParameter *pCVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar1 = operator_new(0xd0);
  local_48 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_40,&local_48,param_2,0,10,0x20);
  local_50 = (QArrayData *)*param_3;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  CVmEventParameter::CVmEventParameter(pCVar1,0x11,&local_40,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011e04b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10011e04b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011e07e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10011e07e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011e0ae;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10011e0ae:
  pCVar1 = (CVmEventParameter *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    pCVar1 = *(CVmEventParameter **)(*(long *)(param_1 + 8) + 0x10);
  }
  CVmEvent::addEventParameter(pCVar1);
  return;
}

