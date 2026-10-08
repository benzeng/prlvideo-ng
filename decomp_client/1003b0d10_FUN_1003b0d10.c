
uint FUN_1003b0d10(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Data *pDVar5;
  long lVar6;
  Data *local_40;
  undefined1 local_31;
  
  FUN_1003b0bd0(&local_40);
  iVar4 = *(int *)(local_40 + 8);
  iVar2 = *(int *)(local_40 + 0xc);
  if (iVar4 == iVar2) {
    bVar1 = false;
  }
  else {
    pDVar5 = local_40 + (long)iVar4 * 8 + 0x10;
    lVar6 = (long)iVar2 * 8 + (long)iVar4 * -8;
    do {
      bVar1 = true;
      if (**(int **)pDVar5 == param_1) goto LAB_1003b0d78;
      pDVar5 = pDVar5 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    bVar1 = false;
  }
LAB_1003b0d78:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1003b0ddf;
      iVar4 = *(int *)(local_40 + 8);
      iVar2 = *(int *)(local_40 + 0xc);
      local_31 = 0;
    }
    if (iVar2 != iVar4) {
      lVar6 = (long)iVar4 * 8 + (long)iVar2 * -8;
      pDVar5 = local_40 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_40);
  }
LAB_1003b0ddf:
  uVar3 = 1;
  if (!bVar1) {
    if (param_1 - 2U < 0x16) {
      uVar3 = 0x380101U >> ((byte)(param_1 - 2U) & 0x1f) & 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

