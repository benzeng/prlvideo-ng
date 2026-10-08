
undefined4 FUN_1006134a0(undefined8 *param_1,QString *param_2)

{
  undefined4 uVar1;
  QMapNodeBase *pQVar2;
  long lVar3;
  char cVar4;
  uint *puVar5;
  long lVar6;
  QArrayData *pQVar7;
  long lVar8;
  
  puVar5 = (uint *)*param_1;
  if (1 < *puVar5) {
    FUN_1000be650(param_1);
    puVar5 = (uint *)*param_1;
  }
  if (*(long *)(puVar5 + 4) == 0) {
    return 0;
  }
  lVar3 = *(long *)(puVar5 + 4);
  lVar8 = 0;
  do {
    while (lVar6 = lVar3, cVar4 = operator<((QString *)(lVar6 + 0x18),param_2), cVar4 == '\0') {
      lVar3 = *(long *)(lVar6 + 8);
      lVar8 = lVar6;
      if (*(long *)(lVar6 + 8) == 0) goto LAB_100613516;
    }
    lVar3 = *(long *)(lVar6 + 0x10);
  } while (*(long *)(lVar6 + 0x10) != 0);
  lVar6 = lVar8;
  if (lVar8 == 0) {
    return 0;
  }
LAB_100613516:
  cVar4 = operator<(param_2,(QString *)(lVar6 + 0x18));
  if (cVar4 != '\0') {
    return 0;
  }
  uVar1 = *(undefined4 *)(lVar6 + 0x20);
  pQVar2 = (QMapNodeBase *)*param_1;
  pQVar7 = *(QArrayData **)(lVar6 + 0x18);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100613560;
      pQVar7 = (QArrayData *)((QString *)(lVar6 + 0x18))->field0_0x0;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100613560:
  QMapDataBase::freeNodeAndRebalance(pQVar2);
  return uVar1;
}

