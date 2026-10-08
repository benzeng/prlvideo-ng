
void FUN_1004e57a0(QObject *param_1)

{
  int *piVar1;
  Data *pDVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f2930;
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  }
  piVar1 = *(int **)(param_1 + 0x88);
  if (piVar1 != (int *)0x0) {
    if ((piVar1[1] != 0) && (*(long **)(param_1 + 0x90) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x90) + 0x20))();
      piVar1 = *(int **)(param_1 + 0x88);
      if (piVar1 == (int *)0x0) goto LAB_1004e581c;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x88) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x88));
    }
  }
LAB_1004e581c:
  FUN_1004e6d70(param_1 + 0x40);
  pDVar2 = *(Data **)(param_1 + 0x38);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_1004e584b;
      pDVar2 = *(Data **)(param_1 + 0x38);
    }
    QListData::dispose(pDVar2);
  }
LAB_1004e584b:
  piVar1 = *(int **)(param_1 + 0x30);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1004e5874;
      piVar1 = *(int **)(param_1 + 0x30);
    }
    FUN_10006b5d0(param_1 + 0x30,piVar1);
  }
LAB_1004e5874:
  QObject::~QObject(param_1);
  return;
}

