
undefined8 * FUN_1005c0080(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  byte bVar2;
  QMapNodeBase *pQVar3;
  ulong *puVar4;
  QMapNodeBase *pQVar5;
  uint *puVar6;
  uint *puVar7;
  QMapNodeBase *pQVar8;
  
  pQVar3 = (QMapNodeBase *)*param_2;
  if (*(int *)pQVar3 == 0) {
    pQVar3 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(*param_2 + 0x10) != 0) {
      puVar4 = (ulong *)FUN_1005bfe60(*(long *)(*param_2 + 0x10),pQVar3);
      *(ulong **)(pQVar3 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | (ulong)(pQVar3 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar3 != -1) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
    pQVar3 = (QMapNodeBase *)*param_2;
  }
  pQVar5 = pQVar3 + 8;
  pQVar8 = pQVar5;
  if (*(long *)(pQVar3 + 0x10) != 0) {
    pQVar8 = *(QMapNodeBase **)(pQVar3 + 0x20);
  }
  while (pQVar5 != pQVar8) {
    pQVar5 = (QMapNodeBase *)QMapNodeBase::previousNode();
    puVar6 = (uint *)*param_1;
    if (1 < *puVar6) {
      FUN_1005c0260(param_1);
      puVar6 = (uint *)*param_1;
    }
    puVar1 = *(uint **)(puVar6 + 4);
    if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
      puVar7 = puVar6 + 2;
      bVar2 = 1;
    }
    else {
      do {
        puVar7 = puVar1;
        bVar2 = operator<((QString *)(puVar7 + 6),(QString *)(pQVar5 + 0x18));
        puVar6 = puVar7 + 2;
        if (bVar2 != 0) {
          puVar6 = puVar7 + 4;
        }
        puVar1 = *(uint **)puVar6;
      } while (*(uint **)puVar6 != (uint *)0x0);
      bVar2 = bVar2 ^ 1;
      puVar6 = (uint *)*param_1;
    }
    FUN_1005bff10(puVar6,pQVar5 + 0x18,pQVar5 + 0x20,puVar7,bVar2);
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return param_1;
      }
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
  return param_1;
}

