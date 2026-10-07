
void FUN_100539cc0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  
  FUN_1005353d0();
  plVar2 = *(long **)(param_1 + 0x18);
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
  piVar4 = *(int **)(param_1 + 0x10);
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 != 0) goto LAB_100539d1d;
      piVar4 = *(int **)(param_1 + 0x10);
    }
    FUN_1005417b0((undefined8 *)(param_1 + 0x10),piVar4);
  }
LAB_100539d1d:
  QMutex::~QMutex((QMutex *)(param_1 + 8));
  return;
}

