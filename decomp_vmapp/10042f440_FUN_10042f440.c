
void FUN_10042f440(QThread *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_metaObject_100bc0940;
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10042f488;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10042f488:
  QThread::~QThread(param_1);
  return;
}

