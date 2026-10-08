
uint * FUN_1000a5b60(long *param_1,uint *param_2)

{
  long *plVar1;
  QMapNodeBase *pQVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  uint *puVar6;
  QArrayData *pQVar7;
  int iVar8;
  uint *puVar9;
  QString *pQVar10;
  
  puVar9 = (uint *)*param_1;
  puVar6 = puVar9 + 2;
  if (puVar6 == param_2) {
    return param_2;
  }
  if (1 < *puVar9) {
    if (*(long *)(puVar9 + 4) != 0) {
      puVar6 = *(uint **)(puVar9 + 8);
    }
    if (puVar6 == param_2) {
      iVar8 = 0;
    }
    else {
      pQVar10 = (QString *)(param_2 + 6);
      iVar8 = 0;
      do {
        param_2 = (uint *)QMapNodeBase::previousNode();
        cVar5 = operator<((QString *)(param_2 + 6),pQVar10);
        if (cVar5 != '\0') break;
        iVar8 = iVar8 + 1;
      } while (param_2 != puVar6);
    }
    puVar6 = (uint *)*param_1;
    if (1 < *puVar6) {
      FUN_1000a5ea0(param_1);
      puVar6 = (uint *)*param_1;
    }
    if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
LAB_1000a5c41:
      param_2 = (uint *)(*param_1 + 8);
    }
    else {
      pQVar10 = (QString *)(param_2 + 6);
      puVar6 = *(uint **)(puVar6 + 4);
      puVar9 = (uint *)0x0;
      do {
        while (param_2 = puVar6, cVar5 = operator<((QString *)(param_2 + 6),pQVar10), cVar5 == '\0')
        {
          puVar6 = *(uint **)(param_2 + 2);
          puVar9 = param_2;
          if (*(uint **)(param_2 + 2) == (uint *)0x0) goto LAB_1000a5c31;
        }
        puVar6 = *(uint **)(param_2 + 4);
      } while (*(uint **)(param_2 + 4) != (uint *)0x0);
      param_2 = puVar9;
      if (puVar9 == (uint *)0x0) goto LAB_1000a5c41;
LAB_1000a5c31:
      cVar5 = operator<(pQVar10,(QString *)(param_2 + 6));
      if (cVar5 != '\0') goto LAB_1000a5c41;
    }
    if (0 < iVar8) {
      iVar8 = iVar8 + 1;
      do {
        param_2 = (uint *)QMapNodeBase::nextNode();
        iVar8 = iVar8 + -1;
      } while (1 < iVar8);
    }
  }
  puVar6 = (uint *)QMapNodeBase::nextNode();
  pQVar2 = (QMapNodeBase *)*param_1;
  pQVar7 = *(QArrayData **)(param_2 + 6);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_1000a5ca2;
      pQVar7 = *(QArrayData **)(param_2 + 6);
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1000a5ca2:
  plVar3 = *(long **)(param_2 + 8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  QMapDataBase::freeNodeAndRebalance(pQVar2);
  return puVar6;
}

