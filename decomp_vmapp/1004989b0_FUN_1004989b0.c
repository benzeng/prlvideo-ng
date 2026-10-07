
uint * FUN_1004989b0(undefined8 *param_1,uint *param_2)

{
  QMapNodeBase *pQVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  QArrayData *pQVar7;
  int iVar8;
  
  puVar3 = (uint *)*param_1;
  puVar4 = puVar3 + 2;
  if (puVar4 == param_2) {
    return param_2;
  }
  if (1 < *puVar3) {
    if (*(long *)(puVar3 + 4) != 0) {
      puVar4 = *(uint **)(puVar3 + 8);
    }
    iVar8 = 0;
    puVar3 = param_2;
    while ((puVar4 != puVar3 &&
           (puVar3 = (uint *)QMapNodeBase::previousNode(), param_2[6] <= puVar3[6]))) {
      iVar8 = iVar8 + 1;
    }
    puVar4 = (uint *)*param_1;
    if (1 < *puVar4) {
      FUN_100498ef0(param_1);
      puVar4 = (uint *)*param_1;
    }
    if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
LAB_100498a7f:
      param_2 = puVar4 + 2;
    }
    else {
      puVar2 = *(uint **)(puVar4 + 4);
      puVar5 = (uint *)0x0;
      do {
        while (param_2 = puVar2, uVar6 = param_2[6], puVar3[6] <= uVar6) {
          puVar2 = *(uint **)(param_2 + 2);
          puVar5 = param_2;
          if (*(uint **)(param_2 + 2) == (uint *)0x0) goto LAB_100498a7b;
        }
        puVar2 = *(uint **)(param_2 + 4);
      } while (*(uint **)(param_2 + 4) != (uint *)0x0);
      if (puVar5 == (uint *)0x0) goto LAB_100498a7f;
      uVar6 = puVar5[6];
      param_2 = puVar5;
LAB_100498a7b:
      if (puVar3[6] < uVar6) goto LAB_100498a7f;
    }
    if (0 < iVar8) {
      iVar8 = iVar8 + 1;
      do {
        param_2 = (uint *)QMapNodeBase::nextNode();
        iVar8 = iVar8 + -1;
      } while (1 < iVar8);
    }
  }
  puVar4 = (uint *)QMapNodeBase::nextNode();
  pQVar1 = (QMapNodeBase *)*param_1;
  pQVar7 = *(QArrayData **)(param_2 + 10);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100498ae2;
      pQVar7 = *(QArrayData **)(param_2 + 10);
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100498ae2:
  QMapDataBase::freeNodeAndRebalance(pQVar1);
  return puVar4;
}

