
void FUN_100039d90(undefined8 *param_1,long param_2)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  piVar1 = *(int **)(param_2 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_2 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_2 + 0x18));
    }
  }
  pQVar2 = *(QArrayData **)(param_2 + 0x10);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100039df6;
      pQVar2 = *(QArrayData **)(param_2 + 0x10);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100039df6:
  QHashData::freeNode((void *)*param_1);
  return;
}

