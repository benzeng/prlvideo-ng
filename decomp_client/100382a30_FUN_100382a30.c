
void FUN_100382a30(QObject *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined **)param_1 = &DAT_102273b70;
  pQVar2 = *(QArrayData **)(param_1 + 0x40);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100382a78;
      pQVar2 = *(QArrayData **)(param_1 + 0x40);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100382a78:
  pQVar2 = *(QArrayData **)(param_1 + 0x38);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100382aa8;
      pQVar2 = *(QArrayData **)(param_1 + 0x38);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100382aa8:
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
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

