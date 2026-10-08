
void FUN_100842280(QObject *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
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
  pQVar2 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1008422ff;
      pQVar2 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1008422ff:
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

