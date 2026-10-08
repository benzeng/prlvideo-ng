
void FUN_100828260(CAbstractTask *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10220ab40;
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1008282a8;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1008282a8:
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

