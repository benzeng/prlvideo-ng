
void FUN_10098eaf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 local_64;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_60 = *(Data **)(param_1 + 0x28);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar4 = (long)*(int *)(local_60 + 8);
      lVar1 = *(long *)(param_1 + 0x28);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_60 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_60 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    iVar6 = 1;
    do {
      local_48 = 1;
      uVar2 = *(undefined8 *)local_58;
      uVar3 = FUN_1009903b0(uVar2);
      if ((uVar3 & 1) == 0) goto LAB_10098ebfe;
      if (uVar3 >> 0x20 == 1) {
        local_64 = FUN_1009903a0(uVar2);
        FUN_100129840(&local_40,&local_64);
      }
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  iVar6 = 2;
LAB_10098ebfe:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10098ec24;
    }
    QListData::dispose(local_60);
  }
LAB_10098ec24:
  if (iVar6 == 2) {
    FUN_10098ecd0(param_1,&local_40);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

