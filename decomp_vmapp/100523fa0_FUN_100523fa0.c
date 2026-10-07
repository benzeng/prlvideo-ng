
void FUN_100523fa0(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_100bc4e58;
  param_1[5] = &PTR_FUN_100bc4eb0;
  FUN_100519360(DAT_1011c3698 + 0x10f0,4);
  pvVar2 = (void *)param_1[0x15];
  if (pvVar2 != (void *)0x0) {
    FUN_100525d20(pvVar2);
    operator_delete(pvVar2);
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0x14));
  plVar3 = (long *)param_1[0x13];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0x12));
  plVar3 = (long *)param_1[0x11];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0x10));
  plVar3 = (long *)param_1[0xf];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0xe));
  FUN_1005192c0(param_1 + 5);
  FUN_1004c0680(param_1);
  return;
}

