
void FUN_1000c1ea0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  QArrayData *pQVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_100ba8b40;
  param_1[2] = &PTR_metaObject_100ba8c08;
  if (*(int *)(param_1 + 10) != 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  FUN_1000c22b0(param_1);
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x20))();
  }
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x11));
  QMutex::~QMutex((QMutex *)(param_1 + 0x10));
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 0xe));
  plVar4 = (long *)param_1[0xd];
  if ((int)plVar4[2] != -1) {
    if ((int)plVar4[2] != 0) {
      LOCK();
      plVar4 = plVar4 + 2;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 != 0) goto LAB_1000c1f72;
      plVar4 = (long *)param_1[0xd];
    }
    plVar2 = (long *)*plVar4;
    if (plVar2 != plVar4) {
      do {
        plVar1 = (long *)*plVar2;
        if (plVar2 != (long *)0x0) {
          operator_delete(plVar2);
        }
        plVar2 = plVar1;
      } while (plVar1 != plVar4);
      if (plVar4 == (long *)0x0) goto LAB_1000c1f72;
    }
    operator_delete(plVar4);
  }
LAB_1000c1f72:
  QMutex::~QMutex((QMutex *)(param_1 + 0xc));
  QMutex::~QMutex((QMutex *)(param_1 + 0xb));
  pQVar3 = (QArrayData *)param_1[9];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000c1fb8;
      pQVar3 = (QArrayData *)param_1[9];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000c1fb8:
  QThread::~QThread((QThread *)(param_1 + 2));
  return;
}

