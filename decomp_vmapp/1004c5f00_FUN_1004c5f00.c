
void FUN_1004c5f00(QMutex *param_1)

{
  QMutexData *pQVar1;
  
  pQVar1 = param_1[1].field0_0x0.field0_0x0;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1004c5f39;
      pQVar1 = param_1[1].field0_0x0.field0_0x0;
    }
    QArrayData::deallocate((QArrayData *)pQVar1,2,8);
  }
LAB_1004c5f39:
  QMutex::~QMutex(param_1);
  return;
}

