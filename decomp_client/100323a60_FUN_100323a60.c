
void FUN_100323a60(QObject *param_1)

{
  int *piVar1;
  void *pvVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_10220b920;
  if (((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
     (*(long **)(param_1 + 0x78) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
  }
  if (((*(long *)(param_1 + 0x90) != 0) && (*(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) &&
     (*(long **)(param_1 + 0x98) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x20))();
  }
  pQVar3 = *(QArrayData **)(param_1 + 0xd0);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100323afc;
      pQVar3 = *(QArrayData **)(param_1 + 0xd0);
    }
    QArrayData::deallocate(pQVar3,4,8);
  }
LAB_100323afc:
  QImage::~QImage((QImage *)(param_1 + 0xa0));
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pvVar2 = *(void **)(param_1 + 0x90), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
  }
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x80) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x80));
    }
  }
  piVar1 = *(int **)(param_1 + 0x70);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x70) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x70));
    }
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
}

