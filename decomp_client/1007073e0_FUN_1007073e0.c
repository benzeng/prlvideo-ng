
QDataStream * FUN_1007073e0(QDataStream *param_1,long *param_2)

{
  int iVar1;
  Node *pNVar2;
  QDataStream *this;
  long *plVar3;
  Node *pNVar4;
  
  QDataStream::operator<<(param_1,*(int *)(*param_2 + 0x14));
  pNVar2 = (Node *)*param_2;
  iVar1 = *(int *)(pNVar2 + 0x20);
  pNVar4 = pNVar2;
  if (iVar1 != 0) {
    plVar3 = *(long **)(pNVar2 + 8);
    do {
      pNVar4 = (Node *)*plVar3;
      if ((Node *)*plVar3 != pNVar2) break;
      iVar1 = iVar1 + -1;
      plVar3 = plVar3 + 1;
      pNVar4 = pNVar2;
    } while (iVar1 != 0);
  }
  while (pNVar2 != pNVar4) {
    pNVar2 = (Node *)QHashData::previousNode(pNVar2);
    this = (QDataStream *)operator<<(param_1,(QString *)(pNVar2 + 0x10));
    QDataStream::operator<<(this,*(int *)(pNVar2 + 0x18));
  }
  return param_1;
}

