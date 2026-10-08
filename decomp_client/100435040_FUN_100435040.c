
undefined1 FUN_100435040(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  lVar1 = *(long *)(param_1 + 0x120);
  local_58 = *(Data **)(lVar1 + 0xa8);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar3 = (long)*(int *)(local_58 + 8);
      lVar1 = *(long *)(lVar1 + 0xa8);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      CVmSharedFolder::getPath();
      QDir::cleanPath(&local_60);
      QDir::cleanPath(&local_70);
      cVar2 = operator==(&local_60,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10043515f;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_10043515f:
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10043518f;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_10043518f:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004351bf;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1004351bf:
      uVar5 = 1;
      if (cVar2 != '\0') goto LAB_1004351e6;
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  uVar5 = 0;
LAB_1004351e6:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return uVar5;
}

