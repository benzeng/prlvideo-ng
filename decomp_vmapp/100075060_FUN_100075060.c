
void FUN_100075060(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QMutex::lock();
  local_30 = (QArrayData *)*param_2;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  FUN_100072f40(param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000750da;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000750da:
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x1ab8) == '\0') goto LAB_1000751b6;
  local_38 = (QArrayData *)*param_2;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  FUN_10009fb40(lVar1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10007513c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10007513c:
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1a38);
  local_40 = (QArrayData *)*param_2;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  FUN_1002af490(uVar2,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100075198;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100075198:
  lVar1 = *(long *)(param_1 + 0x20);
  *(int *)(lVar1 + 0x1abc) = *(int *)(lVar1 + 0x1abc) + -1;
  FUN_1002af430(*(undefined8 *)(lVar1 + 0x1a38));
LAB_1000751b6:
  QMutex::unlock();
  return;
}

