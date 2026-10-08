
long FUN_10076a0e0(long *param_1)

{
  long lVar1;
  long lVar2;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  Data *local_30;
  undefined1 local_21;
  
  FUN_100769ff0(&local_30,param_1);
  local_50 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)&local_50);
      lVar1 = (long)*(int *)(local_50 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_50 + lVar1 * 8) &&
         (lVar2 = *(int *)(local_50 + 0xc) - lVar1, lVar2 != 0 && lVar1 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar1 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                lVar2 * 8);
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
  lVar1 = 0;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    lVar1 = 0;
    do {
      local_38 = 1;
      lVar2 = (**(code **)(*param_1 + 0x68))(param_1,*(undefined8 *)local_48);
      lVar1 = lVar2 + lVar1;
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
      if ((bool)local_21) goto LAB_10076a1e7;
    }
    QListData::dispose(local_50);
  }
LAB_10076a1e7:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return lVar1;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return lVar1;
}

