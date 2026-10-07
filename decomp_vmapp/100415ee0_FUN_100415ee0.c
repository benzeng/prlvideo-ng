
void FUN_100415ee0(QThread *param_1)

{
  QMapNodeBase *pQVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_100bc0738;
  (*(code *)PTR_FUN_100bc07b0)();
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x668);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100415f53;
      pQVar2 = *(QArrayData **)(param_1 + 0x668);
    }
    QArrayData::deallocate(pQVar2,1,8);
  }
LAB_100415f53:
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x658);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100415fa1;
      pQVar1 = *(QMapNodeBase **)(param_1 + 0x658);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_10041f5e0();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100415fa1:
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x650));
  QMutex::~QMutex((QMutex *)(param_1 + 0x648));
  pQVar2 = *(QArrayData **)(param_1 + 0x628);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100415fef;
      pQVar2 = *(QArrayData **)(param_1 + 0x628);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100415fef:
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x620));
  QMutex::~QMutex((QMutex *)(param_1 + 0x618));
  QThread::~QThread(param_1);
  return;
}

