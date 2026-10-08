
void FUN_100303830(long param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  pQVar2 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100303869;
      pQVar2 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100303869:
  piVar1 = *(int **)(param_1 + 0x20);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100303892;
      piVar1 = *(int **)(param_1 + 0x20);
    }
    FUN_1003034e0((undefined8 *)(param_1 + 0x20),piVar1);
  }
LAB_100303892:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100303830();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100303830();
  }
  return;
}

