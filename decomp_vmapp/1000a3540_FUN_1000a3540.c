
void FUN_1000a3540(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  QArrayData *pQVar5;
  
  *param_1 = &PTR_FUN_100baa110;
  cVar4 = QThread::isRunning();
  if (cVar4 != '\0') {
    FUN_10008fa70(param_1,0x4e27);
  }
  QThread::wait((ulong)param_1);
  if ((long *)param_1[0x212f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x212f] + 8))();
  }
  param_1[0x212f] = 0;
  if ((long *)param_1[0x34d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x34d] + 0x20))();
  }
  if ((long *)param_1[0x34c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x34c] + 8))();
  }
  FUN_100406ec0();
  if ((long *)param_1[0x2139] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2139] + 0x20))();
  }
  param_1[0x2139] = 0;
  if ((long *)param_1[0x21c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x21c] + 0x20))();
  }
  if ((long *)param_1[0x20fb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x20fb] + 0x20))();
  }
  param_1[0x20fb] = 0;
  DAT_1011c3698 = 0;
  QMutex::~QMutex((QMutex *)(param_1 + 0x213e));
  pQVar5 = (QArrayData *)param_1[0x213b];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1000a3672;
      pQVar5 = (QArrayData *)param_1[0x213b];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1000a3672:
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x2135));
  QMutex::~QMutex((QMutex *)(param_1 + 0x2134));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x2132));
  QMutex::~QMutex((QMutex *)(param_1 + 0x2131));
  FUN_100470ec0(param_1 + 0x2108);
  FUN_1000b4d30(param_1 + 0x34e);
  FUN_1003fcc10(param_1 + 0x32c);
  QMutex::~QMutex((QMutex *)(param_1 + 0x32b));
  pQVar5 = (QArrayData *)param_1[0x22e];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1000a3708;
      pQVar5 = (QArrayData *)param_1[0x22e];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1000a3708:
  plVar2 = (long *)param_1[0x221];
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
  FUN_100519d20(param_1 + 0x21e);
  FUN_100408fe0(param_1 + 0x216);
  pQVar5 = (QArrayData *)param_1[0x25];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1000a377a;
      pQVar5 = (QArrayData *)param_1[0x25];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1000a377a:
  FUN_10008ea40(param_1);
  return;
}

