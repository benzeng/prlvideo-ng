
void FUN_10009af80(QObject *param_1)

{
  int *piVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f8338;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f83b8;
  FUN_100a4a070(param_1 + 0x10);
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
  }
  FUN_10009b130(param_1);
  piVar1 = *(int **)(param_1 + 0x50);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_10009b006;
      piVar1 = *(int **)(param_1 + 0x50);
    }
    FUN_10009c490(param_1 + 0x50,piVar1);
  }
LAB_10009b006:
  pDVar2 = *(Data **)(param_1 + 0x48);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_10009b02c;
      pDVar2 = *(Data **)(param_1 + 0x48);
    }
    QListData::dispose(pDVar2);
  }
LAB_10009b02c:
  pQVar3 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10009b05c;
      pQVar3 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10009b05c:
  FUN_100a4a040(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

