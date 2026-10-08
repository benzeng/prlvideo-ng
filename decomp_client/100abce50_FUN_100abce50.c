
void FUN_100abce50(QObject *param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_102239f50;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102239fd0;
  FUN_100a4a070(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  piVar3 = *(int **)(param_1 + 0x20);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  FUN_100a4a040(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

