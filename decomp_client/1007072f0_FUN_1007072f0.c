
QDataStream * FUN_1007072f0(QDataStream *param_1,long *param_2)

{
  int iVar1;
  Node *pNVar2;
  QDataStream *this;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  Node *pNVar7;
  
  QDataStream::operator<<(param_1,*(int *)(*param_2 + 0x14));
  pNVar2 = (Node *)*param_2;
  iVar1 = *(int *)(pNVar2 + 0x20);
  pNVar7 = pNVar2;
  if (iVar1 != 0) {
    plVar4 = *(long **)(pNVar2 + 8);
    do {
      pNVar7 = (Node *)*plVar4;
      if ((Node *)*plVar4 != pNVar2) break;
      iVar1 = iVar1 + -1;
      plVar4 = plVar4 + 1;
      pNVar7 = pNVar2;
    } while (iVar1 != 0);
  }
  while (pNVar2 != pNVar7) {
    pNVar2 = (Node *)QHashData::previousNode(pNVar2);
    this = (QDataStream *)operator<<(param_1,(QString *)(pNVar2 + 0x10));
    QDataStream::operator<<
              (this,*(int *)(*(long *)(pNVar2 + 0x18) + 0xc) -
                    *(int *)(*(long *)(pNVar2 + 0x18) + 8));
    lVar3 = *(long *)(pNVar2 + 0x18);
    uVar5 = (ulong)*(uint *)(lVar3 + 8);
    lVar6 = 0;
    if ((int)*(uint *)(lVar3 + 8) < *(int *)(lVar3 + 0xc)) {
      do {
        operator<<(this,(QKeySequence *)(lVar3 + 0x10 + ((int)uVar5 + lVar6) * 8));
        lVar6 = lVar6 + 1;
        lVar3 = *(long *)(pNVar2 + 0x18);
        uVar5 = (ulong)*(int *)(lVar3 + 8);
      } while (lVar6 < (long)((long)*(int *)(lVar3 + 0xc) - uVar5));
    }
  }
  return param_1;
}

