
void FUN_1005a9a80(QThread *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_metaObject_100bc6620;
  pQVar1 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005a9ac8;
      pQVar1 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005a9ac8:
  pQVar1 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005a9af8;
      pQVar1 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1005a9af8:
  pQVar1 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005a9b28;
      pQVar1 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1005a9b28:
  QThread::~QThread(param_1);
  return;
}

