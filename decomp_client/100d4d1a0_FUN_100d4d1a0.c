
void FUN_100d4d1a0(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  Data *pDVar4;
  Data *pDVar5;
  long lVar6;
  
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar6 + 8);
  pDVar4 = (Data *)QListData::detach((int)param_1);
  lVar2 = *param_1;
  FUN_10014a880(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,lVar6 + 0x10 + (long)iVar1 * 8);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) {
        return;
      }
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar6 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        plVar3 = *(long **)pDVar5;
        if (plVar3 != (long *)0x0) {
          if (*plVar3 != 0) {
            _PrlHandle_Free();
          }
          operator_delete(plVar3);
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar4);
  }
  return;
}

