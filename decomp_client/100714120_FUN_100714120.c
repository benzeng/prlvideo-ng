
long * FUN_100714120(long *param_1,long *param_2)

{
  int iVar1;
  Data *pDVar2;
  Data *pDVar3;
  long lVar4;
  Data *local_38;
  undefined1 local_29;
  
  if (*param_1 != *param_2) {
    FUN_10055d1a0(&local_38);
    pDVar2 = (Data *)*param_1;
    *param_1 = (long)local_38;
    if (*(int *)pDVar2 != -1) {
      if (*(int *)pDVar2 != 0) {
        LOCK();
        *(int *)pDVar2 = *(int *)pDVar2 + -1;
        UNLOCK();
        if (*(int *)pDVar2 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(pDVar2 + 0xc);
      local_38 = pDVar2;
      if (iVar1 != *(int *)(pDVar2 + 8)) {
        lVar4 = (long)*(int *)(pDVar2 + 8) * 8 + (long)iVar1 * -8;
        pDVar3 = pDVar2 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar3 != (void *)0x0) {
            operator_delete(*(void **)pDVar3);
          }
          pDVar3 = pDVar3 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(pDVar2);
    }
  }
  return param_1;
}

