
void FUN_1002661c0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100baf190;
  QMutex::lock();
  FUN_100264750(param_1,param_1[0x22]);
  QMutex::unlock();
  pQVar1 = (QArrayData *)param_1[0x23];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100266237;
      pQVar1 = (QArrayData *)param_1[0x23];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100266237:
  QMutex::~QMutex((QMutex *)(param_1 + 0x21));
  *param_1 = &PTR_FUN_100baf140;
  CVmParallelPort::~CVmParallelPort((CVmParallelPort *)(param_1 + 1));
  return;
}

