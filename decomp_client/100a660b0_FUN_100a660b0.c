
void FUN_100a660b0(QObject *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102238f10;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102238fa0;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_102238fd8;
  FUN_100a4a070(param_1 + 0x10);
  FUN_100a65d10(param_1 + 0x48);
  pQVar2 = *(QArrayData **)(param_1 + 0x40);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100a66125;
      pQVar2 = *(QArrayData **)(param_1 + 0x40);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a66125:
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
  }
  FUN_100a4a040(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

