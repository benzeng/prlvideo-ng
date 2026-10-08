
undefined8 FUN_1000632f0(long *param_1,Node *param_2)

{
  uint uVar1;
  Node *pNVar2;
  ulong uVar3;
  Node *pNVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  Node *pNVar8;
  Node *pNVar9;
  int iVar10;
  Node *pNVar11;
  long *plVar12;
  Node *pNVar13;
  
  pNVar2 = (Node *)*param_1;
  pNVar11 = *(Node **)param_2;
  if (*(int *)(pNVar2 + 0x14) == *(int *)(pNVar11 + 0x14)) {
    uVar7 = 1;
    if ((pNVar2 != pNVar11) && (iVar10 = *(int *)(pNVar2 + 0x20), iVar10 != 0)) {
      plVar12 = *(long **)(pNVar2 + 8);
      do {
        pNVar8 = (Node *)*plVar12;
        if (pNVar8 != pNVar2) {
          do {
            pNVar2 = pNVar8 + 0x10;
            uVar1 = *(uint *)(pNVar11 + 0x20);
            pNVar9 = param_2;
            if (uVar1 != 0) {
              uVar6 = qHash((QString *)pNVar2,*(uint *)(pNVar11 + 0x24));
              uVar3 = (ulong)uVar6 % (ulong)uVar1;
              pNVar4 = *(Node **)(*(long *)(pNVar11 + 8) + uVar3 * 8);
              pNVar9 = (Node *)(*(long *)(pNVar11 + 8) + uVar3 * 8);
              while (pNVar13 = pNVar4, pNVar13 != pNVar11) {
                if (*(uint *)(pNVar13 + 8) == uVar6) {
                  cVar5 = operator==((QString *)pNVar2,(QString *)(pNVar13 + 0x10));
                  if (cVar5 != '\0') break;
                  pNVar13 = *(Node **)pNVar9;
                  pNVar11 = *(Node **)param_2;
                }
                pNVar9 = pNVar13;
                pNVar4 = *(Node **)pNVar13;
              }
            }
            pNVar9 = *(Node **)pNVar9;
            do {
              if ((pNVar9 == *(Node **)param_2) ||
                 (cVar5 = operator==((QString *)(pNVar9 + 0x10),(QString *)pNVar2), cVar5 == '\0'))
              goto LAB_100063438;
              pNVar8 = (Node *)QHashData::nextNode(pNVar8);
              pNVar9 = (Node *)QHashData::nextNode(pNVar9);
              pNVar11 = pNVar8;
              if (pNVar8 == (Node *)*param_1) goto LAB_10006342d;
              cVar5 = operator==((QString *)(pNVar8 + 0x10),(QString *)pNVar2);
            } while (cVar5 != '\0');
            pNVar11 = (Node *)*param_1;
LAB_10006342d:
            if (pNVar8 == pNVar11) {
              return 1;
            }
            pNVar11 = *(Node **)param_2;
          } while( true );
        }
        iVar10 = iVar10 + -1;
        plVar12 = plVar12 + 1;
      } while (iVar10 != 0);
    }
  }
  else {
LAB_100063438:
    uVar7 = 0;
  }
  return uVar7;
}

