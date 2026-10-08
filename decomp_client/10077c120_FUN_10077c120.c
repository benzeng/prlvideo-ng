
void FUN_10077c120(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Data *local_38;
  Data *local_30;
  Data *local_28;
  undefined4 local_20;
  undefined1 local_11;
  
  local_38 = *(Data **)(param_1 + 0x18);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
      QListData::detach((int)&local_38);
      lVar4 = (long)*(int *)(local_38 + 8);
      lVar3 = *(long *)(param_1 + 0x18);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_38 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_38 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  iVar1 = *(int *)(local_38 + 8);
  local_30 = local_38 + (long)iVar1 * 8 + 0x10;
  iVar2 = *(int *)(local_38 + 0xc);
  local_28 = local_38 + (long)iVar2 * 8 + 0x10;
  if (iVar1 != iVar2) {
    lVar3 = (long)iVar1 << 3;
    do {
      local_20 = 1;
      if ((*(byte *)(*(long *)(local_38 + lVar3 + 0x10) + 0x19) & 1) == 0) {
        if (*(int *)local_38 == -1) {
          return;
        }
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
        return;
      }
      local_30 = local_38 + lVar3 + 0x18;
      lVar3 = lVar3 + 8;
    } while ((long)iVar2 * 8 != lVar3);
  }
  local_20 = 1;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10077c206;
    }
    QListData::dispose(local_38);
  }
LAB_10077c206:
  FUN_10077c240(param_1);
  return;
}

