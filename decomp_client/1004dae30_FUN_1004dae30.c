
long FUN_1004dae30(undefined8 param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  int local_30;
  undefined1 local_21;
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_1004dac60(&local_50,param_1);
  local_48 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_48);
      lVar1 = (long)*(int *)(local_48 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_48 + lVar1 * 8) &&
         (lVar2 = *(int *)(local_48 + 0xc) - lVar1, lVar2 != 0 && lVar1 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar1 * 8 + 0x10,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                lVar2 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  local_30 = 1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
LAB_1004daf05:
      QListData::dispose(local_50);
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if (!(bool)local_21) goto LAB_1004daf05;
    }
    lVar1 = 0;
    if (local_30 == 0) goto LAB_1004daf58;
  }
  for (; (lVar1 = 0, local_40 != local_38 &&
         ((lVar1 = *(long *)local_40, *(int *)(lVar1 + 0x3c) != param_2 ||
          (*(int *)(lVar1 + 0x40) != param_3)))); local_40 = local_40 + 8) {
    local_30 = 1;
  }
LAB_1004daf58:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return lVar1;
      }
      local_21 = 0;
    }
    QListData::dispose(local_48);
  }
  return lVar1;
}

