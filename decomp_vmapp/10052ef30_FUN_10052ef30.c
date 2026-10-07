
void FUN_10052ef30(undefined8 *param_1)

{
  int iVar1;
  Data *pDVar2;
  int *piVar3;
  Data *pDVar4;
  long lVar5;
  
  pDVar4 = (Data *)*param_1;
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) {
        return;
      }
      pDVar4 = (Data *)*param_1;
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar5 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        piVar3 = *(int **)pDVar2;
        if (*piVar3 == 0) {
LAB_10052efa0:
          FUN_10052ea90(pDVar2,piVar3);
        }
        else if (*piVar3 != -1) {
          LOCK();
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            piVar3 = *(int **)pDVar2;
            goto LAB_10052efa0;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar4);
  }
  return;
}

