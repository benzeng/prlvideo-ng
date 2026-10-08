
void FUN_10033a340(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Data *pDVar5;
  long lVar6;
  int iVar7;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_1001818c0(&local_48,param_1 + 0x18);
  iVar7 = *(int *)(local_48 + 8);
  lVar6 = (long)iVar7;
  local_40 = local_48 + lVar6 * 8 + 0x10;
  iVar3 = *(int *)(local_48 + 0xc);
  local_38 = local_48 + (long)iVar3 * 8 + 0x10;
  if (iVar7 != iVar3) {
    lVar4 = (long)iVar3 * 8 + lVar6 * -8;
    pDVar5 = local_48 + lVar6 * 8 + 0x18;
    do {
      local_40 = pDVar5;
      iVar1 = **(int **)(local_40 + -8);
      iVar2 = (*(int **)(local_40 + -8))[1];
      if (iVar1 < *(int *)(param_1 + 0x20)) {
        *(int *)(param_1 + 0x20) = iVar1;
      }
      if (iVar2 < *(int *)(param_1 + 0x24)) {
        *(int *)(param_1 + 0x24) = iVar2;
      }
      lVar4 = lVar4 + -8;
      pDVar5 = local_40 + 8;
    } while (lVar4 != 0);
  }
  local_30 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      iVar7 = *(int *)(local_48 + 8);
      iVar3 = *(int *)(local_48 + 0xc);
      local_21 = 0;
    }
    if (iVar3 != iVar7) {
      lVar6 = (long)iVar7 * 8 + (long)iVar3 * -8;
      pDVar5 = local_48 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_48);
  }
  return;
}

