
int FUN_1003afcf0(long *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  int iVar3;
  long *plVar4;
  
  pNVar1 = (Node *)*param_1;
  iVar3 = *(int *)(pNVar1 + 0x20);
  if (iVar3 != 0) {
    plVar4 = *(long **)(pNVar1 + 8);
    do {
      pNVar2 = (Node *)*plVar4;
      if (pNVar2 != pNVar1) {
        iVar3 = 0;
        for (; pNVar2 != pNVar1; pNVar2 = (Node *)QHashData::nextNode(pNVar2)) {
          iVar3 = iVar3 + 1;
        }
        return iVar3;
      }
      iVar3 = iVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (iVar3 != 0);
  }
  return 0;
}

