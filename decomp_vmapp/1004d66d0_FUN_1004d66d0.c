
void FUN_1004d66d0(long param_1)

{
  int *piVar1;
  Data *pDVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1004d6702;
      piVar1 = *(int **)(param_1 + 0x18);
    }
    FUN_1004d6230((undefined8 *)(param_1 + 0x18),piVar1);
  }
LAB_1004d6702:
  pDVar2 = *(Data **)(param_1 + 0x10);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_1004d6728;
      pDVar2 = *(Data **)(param_1 + 0x10);
    }
    QListData::dispose(pDVar2);
  }
LAB_1004d6728:
  QMutex::~QMutex((QMutex *)(param_1 + 8));
  return;
}

