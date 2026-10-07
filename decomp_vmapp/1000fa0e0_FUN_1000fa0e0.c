
void FUN_1000fa0e0(QObject *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_100baa558;
  FUN_100651be0(param_1 + 0x2e8);
  CParallelsNetworkConfig::~CParallelsNetworkConfig((CParallelsNetworkConfig *)(param_1 + 0x210));
  CDispatcherConfig::~CDispatcherConfig((CDispatcherConfig *)(param_1 + 0x158));
  CVmConfiguration::~CVmConfiguration((CVmConfiguration *)(param_1 + 0x60));
  QMutex::~QMutex((QMutex *)(param_1 + 0x58));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x50));
  QThread::~QThread((QThread *)(param_1 + 0x30));
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
  plVar2 = *(long **)(param_1 + 0x20);
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
  pQVar4 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000fa1b6;
      pQVar4 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000fa1b6:
  QObject::~QObject(param_1);
  return;
}

