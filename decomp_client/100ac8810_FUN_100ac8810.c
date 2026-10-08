
uint * FUN_100ac8810(undefined8 *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  
  puVar1 = (uint *)*param_1;
  puVar2 = puVar1 + 2;
  if (puVar2 != param_2) {
    if (1 < *puVar1) {
      if (*(long *)(puVar1 + 4) != 0) {
        puVar2 = *(uint **)(puVar1 + 8);
      }
      iVar4 = 0;
      puVar1 = param_2;
      while ((puVar2 != puVar1 &&
             (puVar1 = (uint *)QMapNodeBase::previousNode(), param_2[6] <= puVar1[6]))) {
        iVar4 = iVar4 + 1;
      }
      puVar2 = (uint *)*param_1;
      if (1 < *puVar2) {
        FUN_100ac86d0(param_1);
        puVar2 = (uint *)*param_1;
      }
      lVar3 = *(long *)(puVar2 + 4);
      if (lVar3 != 0) {
        do {
          while (*(uint *)(lVar3 + 0x18) < puVar1[6]) {
            lVar3 = *(long *)(lVar3 + 0x10);
            if (lVar3 == 0) goto LAB_100ac88f4;
          }
          lVar3 = *(long *)(lVar3 + 8);
        } while (lVar3 != 0);
      }
LAB_100ac88f4:
      if (0 < iVar4) {
        iVar4 = iVar4 + 1;
        do {
          QMapNodeBase::nextNode();
          iVar4 = iVar4 + -1;
        } while (1 < iVar4);
      }
    }
    param_2 = (uint *)QMapNodeBase::nextNode();
    QMapDataBase::freeNodeAndRebalance((QMapNodeBase *)*param_1);
  }
  return param_2;
}

