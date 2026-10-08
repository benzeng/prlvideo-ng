
void FUN_10059d600(QObject *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f3d50;
  QVariant::~QVariant((QVariant *)(param_1 + 0x50));
  pQVar2 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10059d651;
      pQVar2 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10059d651:
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
  }
  QVariant::~QVariant((QVariant *)(param_1 + 0x28));
  pQVar2 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10059d6af;
      pQVar2 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10059d6af:
  pQVar2 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10059d6df;
      pQVar2 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10059d6df:
  QObject::~QObject(param_1);
  return;
}

