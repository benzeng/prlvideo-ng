
void FUN_10042f950(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bc0a10;
  QThread::quit();
  QThread::wait((ulong)(param_1 + 5));
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x20))();
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0x863));
  QMutex::~QMutex((QMutex *)(param_1 + 0x85e));
  pQVar1 = (QArrayData *)param_1[0x856];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10042f9e6;
      pQVar1 = (QArrayData *)param_1[0x856];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10042f9e6:
  pQVar1 = (QArrayData *)param_1[0x855];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10042fa1c;
      pQVar1 = (QArrayData *)param_1[0x855];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10042fa1c:
  FUN_100432230(param_1);
  return;
}

