
void FUN_100469440(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  Data *pDVar4;
  Data *pDVar5;
  long lVar6;
  
  pDVar5 = (Data *)*param_1;
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) {
        return;
      }
      pDVar5 = (Data *)*param_1;
    }
    iVar1 = *(int *)(pDVar5 + 0xc);
    if (iVar1 != *(int *)(pDVar5 + 8)) {
      lVar6 = (long)*(int *)(pDVar5 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = pDVar5 + (long)iVar1 * 8 + 8;
      do {
        pvVar2 = *(void **)pDVar4;
        if (pvVar2 != (void *)0x0) {
          pvVar3 = *(void **)((long)pvVar2 + 8);
          if (pvVar3 != (void *)0x0) {
            if (*(void **)((long)pvVar2 + 0x10) != pvVar3) {
              *(void **)((long)pvVar2 + 0x10) = pvVar3;
            }
            operator_delete(pvVar3);
          }
          operator_delete(pvVar2);
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar5);
  }
  return;
}

