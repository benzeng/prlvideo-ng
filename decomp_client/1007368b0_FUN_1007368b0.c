
void FUN_1007368b0(QObject *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f5f40;
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x58));
    }
  }
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x38));
  pQVar2 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100736926;
      pQVar2 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100736926:
  pQVar2 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100736956;
      pQVar2 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100736956:
  QObject::~QObject(param_1);
  return;
}

