
void FUN_100542500(long param_1,int param_2)

{
  Data *pDVar1;
  long lVar2;
  long lVar3;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  if (param_2 != 3) {
    return;
  }
  QMutex::lock();
  pDVar1 = *(Data **)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = PTR_shared_null_100ba2188;
  QMutex::unlock();
  local_48 = pDVar1;
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 == 0) {
      QListData::detach((int)&local_48);
      lVar2 = (long)*(int *)(local_48 + 8);
      if ((pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 != local_48 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_48 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar2 * 8 + 0x10,pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 + 0x10,lVar3 * 8
               );
      }
    }
    else {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + 1;
      local_21 = *(int *)pDVar1 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      local_30 = 1;
      FUN_1004c07d0(param_1,*(undefined8 *)local_40,0xf0000020);
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10054261f;
    }
    QListData::dispose(local_48);
  }
LAB_10054261f:
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      local_21 = *(int *)pDVar1 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return;
      }
    }
    QListData::dispose(pDVar1);
  }
  return;
}

