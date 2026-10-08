
void FUN_10073bd00(QObject *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102227e80;
  piVar1 = *(int **)(param_1 + 0x20);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_10073bd45;
      piVar1 = *(int **)(param_1 + 0x20);
    }
    FUN_10073c3f0(param_1 + 0x20,piVar1);
  }
LAB_10073bd45:
  pQVar2 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10073bd75;
      pQVar2 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10073bd75:
  pQVar2 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10073bda5;
      pQVar2 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10073bda5:
  QObject::~QObject(param_1);
  return;
}

