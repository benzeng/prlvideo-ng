
void FUN_100376a80(QMapNodeBase *param_1,long param_2)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  pQVar2 = *(QArrayData **)(param_2 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100376ac1;
      pQVar2 = *(QArrayData **)(param_2 + 0x18);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100376ac1:
  piVar1 = *(int **)(param_2 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_2 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_2 + 0x28));
    }
  }
  QMapDataBase::freeNodeAndRebalance(param_1);
  return;
}

