
void FUN_100567a10(undefined8 *param_1)

{
  int iVar1;
  Data *pDVar2;
  Data *pDVar3;
  long lVar4;
  
  pDVar3 = (Data *)*param_1;
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) {
        return;
      }
      pDVar3 = (Data *)*param_1;
    }
    iVar1 = *(int *)(pDVar3 + 0xc);
    if (iVar1 != *(int *)(pDVar3 + 8)) {
      lVar4 = (long)*(int *)(pDVar3 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar3 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar2 != (void *)0x0) {
          operator_delete(*(void **)pDVar2);
        }
        pDVar2 = pDVar2 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return;
}

