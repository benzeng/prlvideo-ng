
undefined8 FUN_1006b94a0(long *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  lVar1 = *param_1;
  local_40 = *(Data **)(lVar1 + 0x28);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar3 = (long)*(int *)(local_40 + 8);
      lVar1 = *(long *)(lVar1 + 0x28);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_40 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_40 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
  local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
  local_28 = 1;
  uVar5 = 0;
  if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
    do {
      local_28 = 1;
      uVar5 = *(undefined8 *)local_38;
      iVar2 = FUN_1006947d0(uVar5);
      if (iVar2 == param_2) break;
      local_38 = local_38 + 8;
      local_28 = 1;
      uVar5 = 0;
    } while (local_38 != local_30);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar5;
      }
      local_19 = 0;
    }
    QListData::dispose(local_40);
  }
  return uVar5;
}

