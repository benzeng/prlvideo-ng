
long FUN_100081240(long param_1,long *param_2)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  Data *pDVar4;
  long lVar5;
  long lVar6;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  local_40 = (Data *)*param_2;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar3 = (long)*(int *)(local_40 + 8);
      lVar6 = *param_2;
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_40 + lVar3 * 8) &&
         (lVar5 = *(int *)(local_40 + 0xc) - lVar3, lVar5 != 0 && lVar3 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar3 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  lVar3 = (long)*(int *)(local_40 + 8);
  iVar1 = *(int *)(local_40 + 0xc);
  local_30 = local_40 + (long)iVar1 * 8 + 0x10;
  lVar6 = 0;
  local_38 = local_40 + lVar3 * 8 + 0x10;
  if (*(int *)(local_40 + 8) != iVar1) {
    lVar5 = (long)iVar1 * 8 + lVar3 * -8;
    pDVar2 = local_40 + lVar3 * 8 + 0x18;
    do {
      pDVar4 = pDVar2;
      lVar6 = *(long *)(pDVar4 + -8);
      if (*(int *)(lVar6 + 0x68) == *(int *)(param_1 + 0x68)) break;
      lVar5 = lVar5 + -8;
      lVar6 = 0;
      pDVar2 = pDVar4 + 8;
      local_38 = pDVar4;
    } while (lVar5 != 0);
  }
  local_28 = 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return lVar6;
      }
      local_19 = 0;
    }
    QListData::dispose(local_40);
  }
  return lVar6;
}

