
void FUN_1009dc260(QThread *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  QArrayData *pQVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_102236840;
  cVar4 = QThread::isRunning();
  if (cVar4 != '\0') {
    (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + 0x10) + 0x10))();
    QThread::wait((ulong)param_1);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  pQVar5 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1009dc317;
      pQVar5 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1009dc317:
  QThread::~QThread(param_1);
  return;
}

