
void FUN_10011da30(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  CVmEventParameter *pCVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pCVar1 = operator_new(0xd0);
  local_38 = (QArrayData *)*param_2;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  local_40 = (QArrayData *)*param_3;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  CVmEventParameter::CVmEventParameter(pCVar1,1,&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011dacb;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10011dacb:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011dafb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10011dafb:
  pCVar1 = (CVmEventParameter *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    pCVar1 = *(CVmEventParameter **)(*(long *)(param_1 + 8) + 0x10);
  }
  CVmEvent::addEventParameter(pCVar1);
  return;
}

