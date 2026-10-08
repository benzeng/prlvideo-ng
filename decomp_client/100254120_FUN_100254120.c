
void FUN_100254120(CAbstractTask *param_1)

{
  long *plVar1;
  int *piVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_1022047d0;
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != (int *)0x0) {
    if ((piVar2[1] != 0) && (plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x78))(plVar1,0x80000275);
      piVar2 = *(int **)(param_1 + 0x30);
      if (piVar2 == (int *)0x0) goto LAB_1002541a8;
      if ((piVar2[1] != 0) && (*(long **)(param_1 + 0x38) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
        piVar2 = *(int **)(param_1 + 0x30);
        if (piVar2 == (int *)0x0) goto LAB_1002541a8;
      }
    }
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
  }
LAB_1002541a8:
  pQVar3 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1002541d8;
      pQVar3 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002541d8:
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

