
void FUN_1002821a0(CAbstractTask *param_1)

{
  int *piVar1;
  char cVar2;
  QMapNodeBase *pQVar3;
  QArrayData *pQVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_102206050;
  if ((((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
      (*(long *)(param_1 + 0x20) != 0)) && (cVar2 = CAbstractTask::isFinished(), cVar2 == '\0')) {
    CTaskDownloadFile::cancel();
  }
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x70);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100282240;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x70);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100283b30();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100282240:
  FUN_10012ac30(param_1 + 0x30);
  pQVar4 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100282279;
      pQVar4 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100282279:
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

