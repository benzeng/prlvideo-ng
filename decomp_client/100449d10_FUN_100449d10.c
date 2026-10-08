
void FUN_100449d10(QObject *param_1)

{
  int *piVar1;
  QMapNodeBase *pQVar2;
  Data *pDVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f27b0;
  FUN_100449fd0();
  pDVar3 = *(Data **)(param_1 + 0x58);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_100449d55;
      pDVar3 = *(Data **)(param_1 + 0x58);
    }
    QListData::dispose(pDVar3);
  }
LAB_100449d55:
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x50);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100449d9d;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x50);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_10044fa00();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_100449d9d:
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x48);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100449de5;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x48);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_10044f9a0();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_100449de5:
  pDVar3 = *(Data **)(param_1 + 0x40);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_100449e0b;
      pDVar3 = *(Data **)(param_1 + 0x40);
    }
    QListData::dispose(pDVar3);
  }
LAB_100449e0b:
  pDVar3 = *(Data **)(param_1 + 0x38);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_100449e31;
      pDVar3 = *(Data **)(param_1 + 0x38);
    }
    QListData::dispose(pDVar3);
  }
LAB_100449e31:
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  QObject::~QObject(param_1);
  return;
}

