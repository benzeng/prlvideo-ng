
undefined1 FUN_1003b1e20(int param_1)

{
  int iVar1;
  int iVar2;
  Data *pDVar3;
  undefined1 uVar4;
  long lVar5;
  Data *local_38;
  undefined1 local_29;
  
  FUN_1003b0bd0(&local_38);
  iVar2 = *(int *)(local_38 + 8);
  iVar1 = *(int *)(local_38 + 0xc);
  if (iVar2 == iVar1) {
    uVar4 = 0;
  }
  else {
    pDVar3 = local_38 + (long)iVar2 * 8 + 0x10;
    lVar5 = (long)iVar1 * 8 + (long)iVar2 * -8;
    do {
      uVar4 = 1;
      if (**(int **)pDVar3 == param_1) goto LAB_1003b1e88;
      pDVar3 = pDVar3 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    uVar4 = 0;
  }
LAB_1003b1e88:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar4;
      }
      iVar2 = *(int *)(local_38 + 8);
      iVar1 = *(int *)(local_38 + 0xc);
      local_29 = 0;
    }
    if (iVar1 != iVar2) {
      lVar5 = (long)iVar2 * 8 + (long)iVar1 * -8;
      pDVar3 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_38);
  }
  return uVar4;
}

