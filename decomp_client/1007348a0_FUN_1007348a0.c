
long * FUN_1007348a0(long *param_1,long *param_2)

{
  int iVar1;
  Node *pNVar2;
  undefined *puVar3;
  Data *pDVar4;
  Node *pNVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  puVar3 = PTR_shared_null_1021e15e8;
  *param_1 = (long)PTR_shared_null_1021e15e8;
  if (*(int *)(puVar3 + 4) < *(int *)(*param_2 + 0x14)) {
    if (*(uint *)puVar3 < 2) {
      QListData::realloc((int)param_1);
    }
    else {
      iVar6 = *(int *)(puVar3 + 8);
      pDVar4 = (Data *)QListData::detach((int)param_1);
      lVar7 = *param_1;
      iVar1 = *(int *)(lVar7 + 8);
      if (iVar1 != *(int *)(lVar7 + 0xc)) {
        puVar8 = (undefined8 *)(lVar7 + 0x10 + (long)iVar1 * 8);
        puVar10 = (undefined8 *)(puVar3 + (long)iVar6 * 8 + 0x10);
        lVar7 = (long)*(int *)(lVar7 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          *puVar8 = *puVar10;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      if (*(int *)pDVar4 != -1) {
        if (*(int *)pDVar4 != 0) {
          LOCK();
          *(int *)pDVar4 = *(int *)pDVar4 + -1;
          UNLOCK();
          if (*(int *)pDVar4 != 0) goto LAB_10073493f;
        }
        QListData::dispose(pDVar4);
      }
    }
  }
LAB_10073493f:
  pNVar2 = (Node *)*param_2;
  iVar6 = *(int *)(pNVar2 + 0x20);
  pNVar5 = pNVar2;
  if (iVar6 != 0) {
    plVar9 = *(long **)(pNVar2 + 8);
    do {
      pNVar5 = (Node *)*plVar9;
      if ((Node *)*plVar9 != pNVar2) break;
      iVar6 = iVar6 + -1;
      plVar9 = plVar9 + 1;
      pNVar5 = pNVar2;
    } while (iVar6 != 0);
  }
  if (pNVar5 != pNVar2) {
    do {
      FUN_1007349e0(param_1,pNVar5 + 0xc);
      pNVar5 = (Node *)QHashData::nextNode(pNVar5);
    } while (pNVar5 != (Node *)*param_2);
  }
  return param_1;
}

