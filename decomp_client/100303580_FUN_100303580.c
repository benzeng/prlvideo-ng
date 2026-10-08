
void FUN_100303580(QMapNodeBase *param_1,long param_2)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  pQVar2 = *(QArrayData **)(param_2 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1003035c1;
      pQVar2 = *(QArrayData **)(param_2 + 0x18);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1003035c1:
  piVar1 = *(int **)(param_2 + 0x20);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1003035ea;
      piVar1 = *(int **)(param_2 + 0x20);
    }
    FUN_1003034e0((undefined8 *)(param_2 + 0x20),piVar1);
  }
LAB_1003035ea:
  QMapDataBase::freeNodeAndRebalance(param_1);
  return;
}

