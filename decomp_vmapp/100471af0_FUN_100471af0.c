
void FUN_100471af0(undefined8 param_1)

{
  undefined4 local_38 [2];
  QArrayData *local_30;
  int *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("parallels.TIS.host.cross",0x18);
  FUN_100473c40(&local_28,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100471b50;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100471b50:
  if (*local_28 != 1) {
    FUN_100031c40(&local_28);
  }
  local_28[0x16] = 2;
  local_38[0] = 0x20;
  FUN_1004761a0(param_1,&local_28,local_38,&DAT_1011cc7c0);
  if (local_28 != (int *)0x0) {
    LOCK();
    *local_28 = *local_28 + -1;
    local_19 = *local_28 != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_28 != (int *)0x0)) {
      FUN_100031ed0(local_28);
      operator_delete(local_28);
    }
  }
  return;
}

