
void FUN_100278890(CAbstractTask *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102205df0;
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (*(long *)(param_1 + 0x60) != 0)) {
    CTaskDownloadFile::cancel();
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x68);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002788f9;
      pQVar2 = *(QArrayData **)(param_1 + 0x68);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002788f9:
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x58));
    }
  }
  FUN_1001b8c60(param_1 + 0x18);
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

