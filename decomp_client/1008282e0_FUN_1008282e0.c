
void FUN_1008282e0(CAbstractTask *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10220ab40;
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100828328;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100828328:
  CAbstractTask::~CAbstractTask(param_1);
  operator_delete(param_1);
  return;
}

