
void FUN_100060d50(QObject *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  QArrayData *pQVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_100ba9f90;
  FUN_100413630();
  (**(code **)(**(long **)(param_1 + 0x28) + 0x80))();
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  DAT_1011c3650 = 0;
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  }
  piVar4 = *(int **)(param_1 + 0x70);
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 != 0) goto LAB_100060de1;
      piVar4 = *(int **)(param_1 + 0x70);
    }
    FUN_100069b10(param_1 + 0x70,piVar4);
  }
LAB_100060de1:
  QMutex::~QMutex((QMutex *)(param_1 + 0x68));
  QReadWriteLock::~QReadWriteLock((QReadWriteLock *)(param_1 + 0x50));
  plVar2 = *(long **)(param_1 + 0x48);
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
  QMutex::~QMutex((QMutex *)(param_1 + 0x40));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x38));
  pQVar5 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_100060e56;
      pQVar5 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100060e56:
  pQVar5 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_100060e86;
      pQVar5 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100060e86:
  QObject::~QObject(param_1);
  return;
}

