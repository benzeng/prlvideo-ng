
void FUN_1000f9820(QObject *param_1)

{
  int *piVar1;
  QMapNodeBase *pQVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f9150;
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    QObject::deleteLater();
  }
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x38);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000f989a;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x38);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar2,(int)*(long *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_1000f989a:
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x20);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000f9907;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x20);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_1000e5aa0();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_1000f9907:
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000f994f;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x18);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_1000e5b20();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_1000f994f:
  pQVar3 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000f997f;
      pQVar3 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000f997f:
  QObject::~QObject(param_1);
  return;
}

