
void FUN_1000fff20(QObject *param_1)

{
  int iVar1;
  void *pvVar2;
  Data *pDVar3;
  int *piVar4;
  long lVar5;
  Data *pDVar6;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f92d0;
  piVar4 = *(int **)(param_1 + 0x20);
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 != 0) goto LAB_1000fff6b;
      piVar4 = *(int **)(param_1 + 0x20);
    }
    FUN_100101670(param_1 + 0x20,piVar4);
  }
LAB_1000fff6b:
  FUN_100039a80(param_1 + 0x18);
  pDVar6 = *(Data **)(param_1 + 0x10);
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_1000fffea;
      pDVar6 = *(Data **)(param_1 + 0x10);
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        pvVar2 = *(void **)pDVar3;
        if (pvVar2 != (void *)0x0) {
          FUN_100101550(pvVar2);
          operator_delete(pvVar2);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1000fffea:
  QObject::~QObject(param_1);
  return;
}

