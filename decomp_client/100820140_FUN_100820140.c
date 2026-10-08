
void FUN_100820140(CAbstractTask *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102207930;
  pQVar2 = *(QArrayData **)(param_1 + 0xc0);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10082018e;
      pQVar2 = *(QArrayData **)(param_1 + 0xc0);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10082018e:
  pQVar2 = *(QArrayData **)(param_1 + 0xb0);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1008201c4;
      pQVar2 = *(QArrayData **)(param_1 + 0xb0);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1008201c4:
  pQVar2 = *(QArrayData **)(param_1 + 0xa8);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1008201fa;
      pQVar2 = *(QArrayData **)(param_1 + 0xa8);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1008201fa:
  FUN_1001b8c60(param_1 + 0x68);
  FUN_1002a9c90(param_1 + 0x48);
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
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

