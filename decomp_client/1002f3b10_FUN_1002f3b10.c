
void FUN_1002f3b10(QObject *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ef8c0;
  pQVar2 = *(QArrayData **)(param_1 + 0x80);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002f3b5e;
      pQVar2 = *(QArrayData **)(param_1 + 0x80);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002f3b5e:
  pQVar2 = *(QArrayData **)(param_1 + 0x78);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002f3b8e;
      pQVar2 = *(QArrayData **)(param_1 + 0x78);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002f3b8e:
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x68));
    }
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002f3be3;
      pQVar2 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002f3be3:
  pQVar2 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002f3c13;
      pQVar2 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002f3c13:
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x30);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002f3c68;
      pQVar2 = *(QArrayData **)(param_1 + 0x30);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002f3c68:
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  QObject::~QObject(param_1);
  return;
}

