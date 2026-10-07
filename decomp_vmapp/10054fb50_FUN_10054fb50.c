
void FUN_10054fb50(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_100bceab8;
  plVar1 = (long *)param_1[10];
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar3 = plVar1 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  if (param_1[6] != 0) {
    lVar4 = param_1[4];
    plVar1 = (long *)param_1[5];
    lVar2 = *plVar1;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar4 + 8);
    **(long **)(lVar4 + 8) = lVar2;
    param_1[6] = 0;
    while (plVar1 != param_1 + 4) {
      plVar3 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar3;
    }
  }
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 3));
  return;
}

