
long * FUN_1004194a0(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  Node *pNVar3;
  undefined *puVar4;
  Data *pDVar5;
  long lVar6;
  Node *pNVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  
  puVar4 = PTR_shared_null_1021e15e8;
  *param_1 = (long)PTR_shared_null_1021e15e8;
  if (*(int *)(puVar4 + 4) < *(int *)(*param_2 + 0x14)) {
    if (*(uint *)puVar4 < 2) {
      QListData::realloc((int)param_1);
    }
    else {
      iVar8 = *(int *)(puVar4 + 8);
      pDVar5 = (Data *)QListData::detach((int)param_1);
      lVar2 = *param_1;
      lVar6 = (long)*(int *)(lVar2 + 8);
      puVar1 = (undefined *)(lVar2 + 0x10 + lVar6 * 8);
      if ((puVar4 + (long)iVar8 * 8 + 0x10 != puVar1) &&
         (lVar9 = *(int *)(lVar2 + 0xc) - lVar6, lVar9 != 0 && lVar6 <= *(int *)(lVar2 + 0xc))) {
        _memcpy(puVar1,puVar4 + (long)iVar8 * 8 + 0x10,lVar9 * 8);
      }
      if (*(int *)pDVar5 != -1) {
        if (*(int *)pDVar5 != 0) {
          LOCK();
          *(int *)pDVar5 = *(int *)pDVar5 + -1;
          UNLOCK();
          if (*(int *)pDVar5 != 0) goto LAB_100419533;
        }
        QListData::dispose(pDVar5);
      }
    }
  }
LAB_100419533:
  pNVar3 = (Node *)*param_2;
  iVar8 = *(int *)(pNVar3 + 0x20);
  pNVar7 = pNVar3;
  if (iVar8 != 0) {
    plVar10 = *(long **)(pNVar3 + 8);
    do {
      pNVar7 = (Node *)*plVar10;
      if ((Node *)*plVar10 != pNVar3) break;
      iVar8 = iVar8 + -1;
      plVar10 = plVar10 + 1;
      pNVar7 = pNVar3;
    } while (iVar8 != 0);
  }
  if (pNVar7 != pNVar3) {
    do {
      FUN_100129840(param_1,pNVar7 + 0xc);
      pNVar7 = (Node *)QHashData::nextNode(pNVar7);
    } while (pNVar7 != (Node *)*param_2);
  }
  return param_1;
}

