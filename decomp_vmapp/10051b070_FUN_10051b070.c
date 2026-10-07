
uint * FUN_10051b070(undefined8 *param_1,uint *param_2)

{
  QMapNodeBase *pQVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  puVar3 = (uint *)*param_1;
  puVar4 = puVar3 + 2;
  if (puVar4 == param_2) {
    return param_2;
  }
  if (*puVar3 < 2) goto LAB_10051b174;
  if (*(long *)(puVar3 + 4) != 0) {
    puVar4 = *(uint **)(puVar3 + 8);
  }
  iVar7 = 0;
  puVar3 = param_2;
  while ((puVar4 != puVar3 &&
         (puVar3 = (uint *)QMapNodeBase::previousNode(), param_2[6] <= puVar3[6]))) {
    iVar7 = iVar7 + 1;
  }
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_10051b5e0(param_1);
    puVar4 = (uint *)*param_1;
  }
  if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
LAB_10051b14d:
    param_2 = puVar4 + 2;
  }
  else {
    puVar2 = *(uint **)(puVar4 + 4);
    puVar5 = (uint *)0x0;
    do {
      while (param_2 = puVar2, uVar6 = param_2[6], puVar3[6] <= uVar6) {
        puVar2 = *(uint **)(param_2 + 2);
        puVar5 = param_2;
        if (*(uint **)(param_2 + 2) == (uint *)0x0) goto LAB_10051b149;
      }
      puVar2 = *(uint **)(param_2 + 4);
    } while (*(uint **)(param_2 + 4) != (uint *)0x0);
    if (puVar5 == (uint *)0x0) goto LAB_10051b14d;
    uVar6 = puVar5[6];
    param_2 = puVar5;
LAB_10051b149:
    if (puVar3[6] < uVar6) goto LAB_10051b14d;
  }
  if (0 < iVar7) {
    iVar7 = iVar7 + 1;
    do {
      param_2 = (uint *)QMapNodeBase::nextNode();
      iVar7 = iVar7 + -1;
    } while (1 < iVar7);
  }
LAB_10051b174:
  puVar4 = (uint *)QMapNodeBase::nextNode();
  pQVar1 = (QMapNodeBase *)*param_1;
  FUN_100037320(param_2 + 10);
  QMapDataBase::freeNodeAndRebalance(pQVar1);
  return puVar4;
}

