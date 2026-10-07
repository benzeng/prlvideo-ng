
void FUN_1005186c0(long param_1,int param_2)

{
  Data *pDVar1;
  Data *pDVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  if (param_2 != 3) {
    return;
  }
  QMutex::lock();
  pDVar1 = *(Data **)(param_1 + 0x70);
  pDVar2 = *(Data **)(param_1 + 0x78);
  auVar5._8_4_ = (int)PTR_shared_null_100ba2188;
  auVar5._0_8_ = PTR_shared_null_100ba2188;
  auVar5._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar5;
  QMutex::unlock();
  local_50 = pDVar1;
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 == 0) {
      QListData::detach((int)&local_50);
      lVar3 = (long)*(int *)(local_50 + 8);
      if ((pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 != local_50 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_50 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar3 * 8 + 0x10,pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 + 0x10,lVar4 * 8
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
      FUN_1004c07d0(param_1,*(undefined8 *)local_48,0xf0000020);
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
      if ((bool)local_29) goto LAB_1005187ef;
    }
    QListData::dispose(local_50);
  }
LAB_1005187ef:
  local_70 = pDVar2;
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 == 0) {
      QListData::detach((int)&local_70);
      lVar3 = (long)*(int *)(local_70 + 8);
      if ((pDVar2 + (long)*(int *)(pDVar2 + 8) * 8 != local_70 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_70 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar3 * 8 + 0x10,pDVar2 + (long)*(int *)(pDVar2 + 8) * 8 + 0x10,lVar4 * 8
               );
      }
    }
    else {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + 1;
      local_29 = *(int *)pDVar2 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_58 = 1;
      FUN_1004c07d0(param_1,*(undefined8 *)local_68,0xf0000020);
      local_68 = local_68 + 8;
    } while (local_68 != local_60);
  }
  local_58 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005188cf;
    }
    QListData::dispose(local_70);
  }
LAB_1005188cf:
  if (*(char *)(param_1 + 0x68) != '\0') {
    *(undefined1 *)(param_1 + 0x68) = 0;
    local_30 = 1;
    FUN_100518f50(param_1,&local_30,4);
  }
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      local_29 = *(int *)pDVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100518914;
    }
    QListData::dispose(pDVar2);
  }
LAB_100518914:
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

