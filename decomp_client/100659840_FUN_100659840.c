
void FUN_100659840(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Data *local_38;
  Data *local_30;
  Data *local_28;
  undefined4 local_20;
  undefined1 local_11;
  
  local_38 = *(Data **)(param_1 + 0x108);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
      QListData::detach((int)&local_38);
      lVar2 = (long)*(int *)(local_38 + 8);
      lVar1 = *(long *)(param_1 + 0x108);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_38 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_38 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  local_30 = local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10;
  local_28 = local_38 + (long)*(int *)(local_38 + 0xc) * 8 + 0x10;
  if (*(int *)(local_38 + 8) != *(int *)(local_38 + 0xc)) {
    do {
      local_20 = 1;
      QLabel::clear();
      local_30 = local_30 + 8;
    } while (local_30 != local_28);
  }
  local_20 = 1;
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

