
QDataStream * FUN_100075ff0(QDataStream *param_1,long *param_2)

{
  int iVar1;
  Node *pNVar2;
  QDataStream *pQVar3;
  long *plVar4;
  Node *pNVar5;
  
  QDataStream::operator<<(param_1,*(int *)(*param_2 + 0x14));
  pNVar2 = (Node *)*param_2;
  iVar1 = *(int *)(pNVar2 + 0x20);
  pNVar5 = pNVar2;
  if (iVar1 != 0) {
    plVar4 = *(long **)(pNVar2 + 8);
    do {
      pNVar5 = (Node *)*plVar4;
      if ((Node *)*plVar4 != pNVar2) break;
      iVar1 = iVar1 + -1;
      plVar4 = plVar4 + 1;
      pNVar5 = pNVar2;
    } while (iVar1 != 0);
  }
  while (pNVar2 != pNVar5) {
    pNVar2 = (Node *)QHashData::previousNode(pNVar2);
    pQVar3 = (QDataStream *)operator<<(param_1,(QString *)(pNVar2 + 0x10));
    operator<<(pQVar3,(QVariant *)(pNVar2 + 0x18));
  }
  return param_1;
}

