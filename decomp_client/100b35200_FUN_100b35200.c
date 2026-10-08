
void FUN_100b35200(QThread *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined **)param_1 = &DAT_10223f300;
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100b35248;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100b35248:
  QThread::~QThread(param_1);
  return;
}

