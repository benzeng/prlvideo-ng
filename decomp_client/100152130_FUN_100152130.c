
void FUN_100152130(QObject *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fcfd0;
  FUN_100036370(param_1 + 0x20);
  pQVar2 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100152185;
      pQVar2 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100152185:
  piVar1 = *(int **)(param_1 + 0x10);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1001521ae;
      piVar1 = *(int **)(param_1 + 0x10);
    }
    FUN_100063050(param_1 + 0x10,piVar1);
  }
LAB_1001521ae:
  QObject::~QObject(param_1);
  return;
}

