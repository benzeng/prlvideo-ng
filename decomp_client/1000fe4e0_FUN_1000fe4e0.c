
undefined8 * FUN_1000fe4e0(undefined8 *param_1,long *param_2)

{
  QMapNodeBase *pQVar1;
  int *piVar2;
  ulong *puVar3;
  
  piVar2 = (int *)*param_2;
  if ((int *)*param_1 != piVar2) {
    if (*piVar2 == 0) {
      piVar2 = (int *)QMapDataBase::createData();
      if (*(long *)(*param_2 + 0x10) != 0) {
        puVar3 = (ulong *)FUN_1000e6d50(*(long *)(*param_2 + 0x10),piVar2);
        *(ulong **)(piVar2 + 4) = puVar3;
        *puVar3 = *puVar3 & 3 | (ulong)(piVar2 + 2);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*piVar2 != -1) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      piVar2 = (int *)*param_2;
    }
    pQVar1 = (QMapNodeBase *)*param_1;
    *param_1 = piVar2;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) {
          return param_1;
        }
      }
      if (*(long *)(pQVar1 + 0x10) != 0) {
        FUN_1000e5b20();
        QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar1);
    }
  }
  return param_1;
}

