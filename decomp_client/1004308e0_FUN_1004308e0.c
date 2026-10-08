
undefined1 FUN_1004308e0(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  QArrayData *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  local_50 = (Data *)*param_2;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_50);
      lVar3 = (long)*(int *)(local_50 + 8);
      lVar1 = *param_2;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_50 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_50 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      CVmSharedFolder::getName();
      iVar2 = QString::compare(&local_58,param_1,0);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004309da;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1004309da:
      uVar5 = 1;
      if (iVar2 == 0) goto LAB_1004309fd;
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  uVar5 = 0;
LAB_1004309fd:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar5;
      }
      local_29 = 0;
    }
    QListData::dispose(local_50);
  }
  return uVar5;
}

