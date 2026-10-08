
uint * FUN_1000e57b0(long *param_1,uint *param_2)

{
  QMapNodeBase *pQVar1;
  char cVar2;
  uint *puVar3;
  QArrayData *pQVar4;
  int iVar5;
  uint *puVar6;
  QString *pQVar7;
  
  puVar6 = (uint *)*param_1;
  puVar3 = puVar6 + 2;
  if (puVar3 == param_2) {
    return param_2;
  }
  if (1 < *puVar6) {
    if (*(long *)(puVar6 + 4) != 0) {
      puVar3 = *(uint **)(puVar6 + 8);
    }
    if (puVar3 == param_2) {
      iVar5 = 0;
    }
    else {
      pQVar7 = (QString *)(param_2 + 6);
      iVar5 = 0;
      do {
        param_2 = (uint *)QMapNodeBase::previousNode();
        cVar2 = operator<((QString *)(param_2 + 6),pQVar7);
        if (cVar2 != '\0') break;
        iVar5 = iVar5 + 1;
      } while (param_2 != puVar3);
    }
    puVar3 = (uint *)*param_1;
    if (1 < *puVar3) {
      FUN_1000e77c0(param_1);
      puVar3 = (uint *)*param_1;
    }
    if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
LAB_1000e5891:
      param_2 = (uint *)(*param_1 + 8);
    }
    else {
      pQVar7 = (QString *)(param_2 + 6);
      puVar3 = *(uint **)(puVar3 + 4);
      puVar6 = (uint *)0x0;
      do {
        while (param_2 = puVar3, cVar2 = operator<((QString *)(param_2 + 6),pQVar7), cVar2 == '\0')
        {
          puVar3 = *(uint **)(param_2 + 2);
          puVar6 = param_2;
          if (*(uint **)(param_2 + 2) == (uint *)0x0) goto LAB_1000e5881;
        }
        puVar3 = *(uint **)(param_2 + 4);
      } while (*(uint **)(param_2 + 4) != (uint *)0x0);
      param_2 = puVar6;
      if (puVar6 == (uint *)0x0) goto LAB_1000e5891;
LAB_1000e5881:
      cVar2 = operator<(pQVar7,(QString *)(param_2 + 6));
      if (cVar2 != '\0') goto LAB_1000e5891;
    }
    if (0 < iVar5) {
      iVar5 = iVar5 + 1;
      do {
        param_2 = (uint *)QMapNodeBase::nextNode();
        iVar5 = iVar5 + -1;
      } while (1 < iVar5);
    }
  }
  puVar3 = (uint *)QMapNodeBase::nextNode();
  pQVar1 = (QMapNodeBase *)*param_1;
  pQVar4 = *(QArrayData **)(param_2 + 6);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000e58f2;
      pQVar4 = *(QArrayData **)(param_2 + 6);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000e58f2:
  QMapDataBase::freeNodeAndRebalance(pQVar1);
  return puVar3;
}

