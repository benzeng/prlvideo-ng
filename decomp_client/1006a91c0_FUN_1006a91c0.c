
void FUN_1006a91c0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  int local_30;
  _func_void_Node_ptr *local_28;
  undefined1 local_19;
  
  FUN_100693410(&local_28,*(undefined8 *)(param_1 + 0x10));
  FUN_1006a9d10(&local_50,&local_28);
  local_48 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_48);
      lVar2 = (long)*(int *)(local_48 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_48 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_48 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar2 * 8 + 0x10,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  local_30 = 1;
  if (*(int *)local_50 == -1) {
LAB_1006a92c3:
    for (; local_40 != local_38; local_40 = local_40 + 8) {
      FUN_1006a6660(param_1,*(undefined8 *)local_40);
      local_30 = 1;
    }
  }
  else {
    if (*(int *)local_50 == 0) {
LAB_1006a9292:
      QListData::dispose(local_50);
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if (!(bool)local_19) goto LAB_1006a9292;
    }
    if (local_30 != 0) goto LAB_1006a92c3;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006a9327;
    }
    QListData::dispose(local_48);
  }
LAB_1006a9327:
  if (*(int *)(local_28 + 0x10) != -1) {
    if (*(int *)(local_28 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_28 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_19 = 0;
    }
    QHashData::free_helper(local_28);
  }
  return;
}

