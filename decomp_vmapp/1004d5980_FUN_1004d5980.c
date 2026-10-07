
void FUN_1004d5980(undefined8 *param_1,undefined4 param_2)

{
  Data *pDVar1;
  long lVar2;
  long lVar3;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  QMutex::lock();
  pDVar1 = (Data *)param_1[2];
  param_1[2] = PTR_shared_null_100ba2188;
  QMutex::unlock();
  local_50 = pDVar1;
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 == 0) {
      QListData::detach((int)&local_50);
      lVar2 = (long)*(int *)(local_50 + 8);
      if ((pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 != local_50 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_50 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar2 * 8 + 0x10,pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 + 0x10,lVar3 * 8
               );
      }
    }
    else {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + 1;
      local_29 = *(int *)pDVar1 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      FUN_1004c07d0(*param_1,*(undefined8 *)local_48,param_2);
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004d5a9d;
    }
    QListData::dispose(local_50);
  }
LAB_1004d5a9d:
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      local_29 = *(int *)pDVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return;
      }
    }
    QListData::dispose(pDVar1);
  }
  return;
}

