
void FUN_100471d80(long param_1)

{
  int *piVar1;
  void *pvVar2;
  QArrayData *pQVar3;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pvVar2 = *(void **)(param_1 + 0x18), pvVar2 != (void *)0x0)) {
      FUN_100031ed0(pvVar2);
      operator_delete(pvVar2);
    }
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

