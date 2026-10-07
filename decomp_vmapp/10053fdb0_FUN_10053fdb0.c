
undefined8 * FUN_10053fdb0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  piVar1 = (int *)*param_3;
  if (piVar1[1] == 0) {
    *param_1 = piVar1;
    if (*piVar1 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return param_1;
  }
  local_28 = *(QArrayData **)(param_2 + 0x18);
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_19 = *(int *)local_28 != 0;
    UNLOCK();
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("%driveletter%",0xd);
  QString::replace(&local_28,&local_30,param_3,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10053fe41;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10053fe41:
  *param_1 = local_28;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_19 = *(int *)local_28 != 0;
    UNLOCK();
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

