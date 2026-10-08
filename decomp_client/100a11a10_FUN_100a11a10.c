
void FUN_100a11a10(long param_1,int param_2,QVariant *param_3,long *param_4)

{
  QMapNodeBase *pQVar1;
  char cVar2;
  int *piVar3;
  ulong *puVar4;
  
  *(int *)(param_1 + 0x68) = param_2;
  QVariant::operator=((QVariant *)(param_1 + 0x70),param_3);
  piVar3 = (int *)*param_4;
  if (*(int **)(param_1 + 0x80) != piVar3) {
    if (*piVar3 == 0) {
      piVar3 = (int *)QMapDataBase::createData();
      if (*(long *)(*param_4 + 0x10) != 0) {
        puVar4 = (ulong *)FUN_10008d330(*(long *)(*param_4 + 0x10),piVar3);
        *(ulong **)(piVar3 + 4) = puVar4;
        *puVar4 = *puVar4 & 3 | (ulong)(piVar3 + 2);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*piVar3 != -1) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      piVar3 = (int *)*param_4;
    }
    pQVar1 = *(QMapNodeBase **)(param_1 + 0x80);
    *(int **)(param_1 + 0x80) = piVar3;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_100a11af3;
      }
      if (*(long *)(pQVar1 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar1);
    }
  }
LAB_100a11af3:
  if ((param_2 == -0x7ffb8ffc) && (cVar2 = FUN_100a11580(param_1), cVar2 != '\0')) {
    return;
  }
  FUN_100a11b20(param_1);
  return;
}

