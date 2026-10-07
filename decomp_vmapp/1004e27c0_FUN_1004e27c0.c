
uint * FUN_1004e27c0(undefined8 *param_1,uint *param_2)

{
  long *plVar1;
  QMapNodeBase *pQVar2;
  long *plVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  
  puVar6 = (uint *)*param_1;
  puVar7 = puVar6 + 2;
  if (puVar7 == param_2) {
    return param_2;
  }
  if (*puVar6 < 2) goto LAB_1004e28b4;
  if (*(long *)(puVar6 + 4) != 0) {
    puVar7 = *(uint **)(puVar6 + 8);
  }
  iVar10 = 0;
  puVar6 = param_2;
  while ((puVar7 != puVar6 &&
         (puVar6 = (uint *)QMapNodeBase::previousNode(), param_2[6] <= puVar6[6]))) {
    iVar10 = iVar10 + 1;
  }
  puVar7 = (uint *)*param_1;
  if (1 < *puVar7) {
    FUN_1004ebd10(param_1);
    puVar7 = (uint *)*param_1;
  }
  if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
LAB_1004e288f:
    param_2 = puVar7 + 2;
  }
  else {
    puVar5 = *(uint **)(puVar7 + 4);
    puVar8 = (uint *)0x0;
    do {
      while (param_2 = puVar5, uVar9 = param_2[6], puVar6[6] <= uVar9) {
        puVar5 = *(uint **)(param_2 + 2);
        puVar8 = param_2;
        if (*(uint **)(param_2 + 2) == (uint *)0x0) goto LAB_1004e288b;
      }
      puVar5 = *(uint **)(param_2 + 4);
    } while (*(uint **)(param_2 + 4) != (uint *)0x0);
    if (puVar8 == (uint *)0x0) goto LAB_1004e288f;
    uVar9 = puVar8[6];
    param_2 = puVar8;
LAB_1004e288b:
    if (puVar6[6] < uVar9) goto LAB_1004e288f;
  }
  if (0 < iVar10) {
    iVar10 = iVar10 + 1;
    do {
      param_2 = (uint *)QMapNodeBase::nextNode();
      iVar10 = iVar10 + -1;
    } while (1 < iVar10);
  }
LAB_1004e28b4:
  puVar7 = (uint *)QMapNodeBase::nextNode();
  pQVar2 = (QMapNodeBase *)*param_1;
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
  return puVar7;
}

