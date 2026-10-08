
void FUN_100818290(long param_1)

{
  int *piVar1;
  QMapNodeBase *pQVar2;
  QArrayData *pQVar3;
  
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x98) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x98));
    }
  }
  QVariant::~QVariant((QVariant *)(param_1 + 0x70));
  piVar1 = *(int **)(param_1 + 0x50);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x50));
    }
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100818329;
      pQVar3 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100818329:
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x40);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100818371;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x40);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_1001f3f70();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_100818371:
  if (*(long *)(param_1 + 0x38) != 0) {
    _PrlHandle_Free();
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1008183af;
      pQVar3 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1008183af:
  pQVar3 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1008183df;
      pQVar3 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1008183df:
  pQVar3 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10081840f;
      pQVar3 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10081840f:
  pQVar3 = *(QArrayData **)(param_1 + 8);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = *(QArrayData **)(param_1 + 8);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

