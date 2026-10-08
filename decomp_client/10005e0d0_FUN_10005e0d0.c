
undefined8 * FUN_10005e0d0(undefined8 *param_1,long *param_2)

{
  Node *pNVar1;
  undefined *puVar2;
  Node *pNVar3;
  int iVar4;
  long *plVar5;
  
  puVar2 = PTR_shared_null_1021e15e8;
  *param_1 = PTR_shared_null_1021e15e8;
  if (*(int *)(puVar2 + 4) < *(int *)(*param_2 + 0x14)) {
    if (*(uint *)puVar2 < 2) {
      QListData::realloc((int)param_1);
    }
    else {
      FUN_100036c40(param_1);
    }
  }
  pNVar1 = (Node *)*param_2;
  iVar4 = *(int *)(pNVar1 + 0x20);
  pNVar3 = pNVar1;
  if (iVar4 != 0) {
    plVar5 = *(long **)(pNVar1 + 8);
    do {
      pNVar3 = (Node *)*plVar5;
      if ((Node *)*plVar5 != pNVar1) break;
      iVar4 = iVar4 + -1;
      plVar5 = plVar5 + 1;
      pNVar3 = pNVar1;
    } while (iVar4 != 0);
  }
  if (pNVar3 != pNVar1) {
    do {
      FUN_1000341d0(param_1,pNVar3 + 0x10);
      pNVar3 = (Node *)QHashData::nextNode(pNVar3);
    } while (pNVar3 != (Node *)*param_2);
  }
  return param_1;
}

