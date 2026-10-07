
bool FUN_1000a0730(long param_1)

{
  bool bVar1;
  QArrayData *local_58;
  int *local_50;
  QArrayData *local_48;
  int *local_40;
  QArrayData *local_38;
  int *local_30;
  undefined1 local_21;
  
  param_1 = param_1 + 0x10840;
  local_38 = (QArrayData *)QString::fromAscii_helper("parallels.GracefulShutdown.guest.win",0x24);
  FUN_100473b30(&local_30,param_1,&local_38);
  bVar1 = true;
  if (local_30[0x16] == 1) goto LAB_1000a08a4;
  local_48 = (QArrayData *)QString::fromAscii_helper("parallels.GracefulShutdown.guest.lin",0x24);
  FUN_100473b30(&local_40,param_1,&local_48);
  bVar1 = true;
  if (local_40[0x16] != 1) {
    local_58 = (QArrayData *)QString::fromAscii_helper("parallels.GracefulShutdown.guest.mac",0x24);
    FUN_100473b30(&local_50,param_1,&local_58);
    bVar1 = local_50[0x16] == 1;
    if (local_50 != (int *)0x0) {
      LOCK();
      *local_50 = *local_50 + -1;
      local_21 = *local_50 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_50 != (int *)0x0)) {
        FUN_100031ed0(local_50);
        operator_delete(local_50);
      }
    }
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000a0844;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_1000a0844:
  if (local_40 != (int *)0x0) {
    LOCK();
    *local_40 = *local_40 + -1;
    local_21 = *local_40 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_40 != (int *)0x0)) {
      FUN_100031ed0(local_40);
      operator_delete(local_40);
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a08a4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000a08a4:
  if (local_30 != (int *)0x0) {
    LOCK();
    *local_30 = *local_30 + -1;
    local_21 = *local_30 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_30 != (int *)0x0)) {
      FUN_100031ed0(local_30);
      operator_delete(local_30);
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return bVar1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return bVar1;
}

