
void FUN_100765750(long param_1)

{
  long lVar1;
  long lVar2;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  Data *local_20;
  undefined1 local_11;
  
  FUN_100765c60(&local_20,param_1 + 0x20);
  local_40 = local_20;
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 == 0) {
      QListData::detach((int)&local_40);
      lVar1 = (long)*(int *)(local_40 + 8);
      if ((local_20 + (long)*(int *)(local_20 + 8) * 8 != local_40 + lVar1 * 8) &&
         (lVar2 = *(int *)(local_40 + 0xc) - lVar1, lVar2 != 0 && lVar1 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar1 * 8 + 0x10,local_20 + (long)*(int *)(local_20 + 8) * 8 + 0x10,
                lVar2 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + 1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
    }
  }
  local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
  local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
  if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
    do {
      local_28 = 1;
      FUN_1007652e0(*(undefined8 *)local_38);
      local_38 = local_38 + 8;
    } while (local_38 != local_30);
  }
  local_28 = 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100765847;
    }
    QListData::dispose(local_40);
  }
LAB_100765847:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QListData::dispose(local_20);
  }
  return;
}

