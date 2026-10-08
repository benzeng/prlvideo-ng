
void FUN_10018edd0(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  Data *local_28;
  int local_20;
  undefined1 local_11;
  
  FUN_100190aa0(&local_40,param_1 + 0x78);
  local_38 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_38);
      lVar2 = (long)*(int *)(local_38 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_38 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_38 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar2 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_30 = local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10;
  local_28 = local_38 + (long)*(int *)(local_38 + 0xc) * 8 + 0x10;
  local_20 = 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
LAB_10018ee8e:
      QListData::dispose(local_40);
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if (!(bool)local_11) goto LAB_10018ee8e;
    }
    if (local_20 == 0) goto LAB_10018ef17;
  }
  for (; local_30 != local_28; local_30 = local_30 + 8) {
    lVar2 = *(long *)local_30;
    if ((lVar2 != 0) && (lVar3 = FUN_100146b20(lVar2), lVar3 != 0)) {
      FUN_100146b20(lVar2);
      cVar1 = CVmDevice::isRemote();
      if (cVar1 != '\0') {
        FUN_100147630(lVar2);
      }
    }
    local_20 = 1;
  }
LAB_10018ef17:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_11 = 0;
    }
    QListData::dispose(local_38);
  }
  return;
}

