
void FUN_1001030c0(QObject *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QMapNodeBase *pQVar4;
  int *piVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_100baa690;
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"End Vm Collecting");
  }
  FUN_10008fdb0(DAT_1011c3698,0x4e4d,0);
  piVar5 = *(int **)(param_1 + 0x38);
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if ((*piVar5 == 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0x30));
  pQVar4 = *(QMapNodeBase **)(param_1 + 0x28);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100103194;
      pQVar4 = *(QMapNodeBase **)(param_1 + 0x28);
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      FUN_100013720();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_100103194:
  piVar5 = *(int **)(param_1 + 0x20);
  if (*piVar5 != -1) {
    if (*piVar5 != 0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 != 0) goto LAB_1001031bd;
      piVar5 = *(int **)(param_1 + 0x20);
    }
    FUN_100105c50(param_1 + 0x20,piVar5);
  }
LAB_1001031bd:
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
  plVar2 = *(long **)(param_1 + 0x10);
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
  QObject::~QObject(param_1);
  return;
}

