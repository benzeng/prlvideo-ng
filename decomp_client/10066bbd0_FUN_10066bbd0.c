
void FUN_10066bbd0(QObject *param_1)

{
  int *piVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_102224100;
  FUN_100035ea0(param_1 + 0x50);
  pQVar3 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10066bc25;
      pQVar3 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10066bc25:
  pDVar2 = *(Data **)(param_1 + 0x38);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_10066bc4b;
      pDVar2 = *(Data **)(param_1 + 0x38);
    }
    QListData::dispose(pDVar2);
  }
LAB_10066bc4b:
  *(undefined **)param_1 = PTR_vtable_1021e17f8 + 0x10;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  *(undefined **)param_1 = PTR_vtable_1021e17d8 + 0x10;
  pQVar3 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10066bcbc;
      pQVar3 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10066bcbc:
  QObject::~QObject(param_1);
  return;
}

