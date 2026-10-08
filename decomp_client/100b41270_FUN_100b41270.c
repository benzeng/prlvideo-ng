
undefined8 * FUN_100b41270(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  Data *local_30;
  undefined1 local_21;
  
  *param_1 = PTR_shared_null_1021e15e8;
  FUN_100b40f90(&local_30);
  local_50 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)&local_50);
      lVar2 = (long)*(int *)(local_50 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_50 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_50 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar2 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      cVar1 = CVirtualNetwork::isEnabled();
      if (((cVar1 != '\0') && (lVar2 = CVirtualNetwork::getHostOnlyNetwork(), lVar2 != 0)) &&
         (local_58 = CHostOnlyNetwork::getParallelsAdapter(), local_58 != 0)) {
        FUN_100b464f0(param_1,&local_58);
      }
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b413af;
    }
    QListData::dispose(local_50);
  }
LAB_100b413af:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return param_1;
}

