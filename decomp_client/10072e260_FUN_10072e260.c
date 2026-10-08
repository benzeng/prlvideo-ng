
void FUN_10072e260(long param_1,long *param_2)

{
  undefined8 *puVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  int *piVar4;
  ulong *puVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x70);
  cVar3 = FUN_10072e690(param_2,puVar1);
  if (cVar3 != '\0') {
    return;
  }
  piVar4 = (int *)*param_2;
  if ((int *)*puVar1 != piVar4) {
    if (*piVar4 == 0) {
      piVar4 = (int *)QMapDataBase::createData();
      if (*(long *)(*param_2 + 0x10) != 0) {
        puVar5 = (ulong *)FUN_10008d330(*(long *)(*param_2 + 0x10),piVar4);
        *(ulong **)(piVar4 + 4) = puVar5;
        *puVar5 = *puVar5 & 3 | (ulong)(piVar4 + 2);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*piVar4 != -1) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      piVar4 = (int *)*param_2;
    }
    pQVar2 = (QMapNodeBase *)*puVar1;
    *puVar1 = piVar4;
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        UNLOCK();
        if (*(int *)pQVar2 != 0) goto LAB_10072e33a;
      }
      if (*(long *)(pQVar2 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar2);
    }
  }
LAB_10072e33a:
  FUN_100855740(param_1,param_2);
  return;
}

