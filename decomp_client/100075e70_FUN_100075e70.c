
/* WARNING: Removing unreachable block (ram,0x000100075ed9) */

undefined8 FUN_100075e70(long *param_1,Node *param_2)

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
  Node *pNVar10;
  int iVar11;
  long *plVar12;
  Node *pNVar13;
  
  pNVar2 = (Node *)*param_1;
  pNVar10 = *(Node **)param_2;
  if (*(int *)(pNVar2 + 0x14) == *(int *)(pNVar10 + 0x14)) {
    uVar7 = 1;
    if ((pNVar2 != pNVar10) && (iVar11 = *(int *)(pNVar2 + 0x20), iVar11 != 0)) {
      plVar12 = *(long **)(pNVar2 + 8);
      do {
        pNVar8 = (Node *)*plVar12;
        if (pNVar8 != pNVar2) {
          do {
            pNVar2 = pNVar8 + 0x10;
            uVar1 = *(uint *)(pNVar10 + 0x20);
            pNVar9 = param_2;
            if (uVar1 != 0) {
              uVar6 = qHash((QString *)pNVar2,*(uint *)(pNVar10 + 0x24));
              uVar3 = (ulong)uVar6 % (ulong)uVar1;
              pNVar4 = *(Node **)(*(long *)(pNVar10 + 8) + uVar3 * 8);
              pNVar9 = (Node *)(*(long *)(pNVar10 + 8) + uVar3 * 8);
              while (pNVar13 = pNVar4, pNVar13 != pNVar10) {
                if (*(uint *)(pNVar13 + 8) == uVar6) {
                  cVar5 = operator==((QString *)pNVar2,(QString *)(pNVar13 + 0x10));
                  if (cVar5 != '\0') break;
                  pNVar13 = *(Node **)pNVar9;
                  pNVar10 = *(Node **)param_2;
                }
                pNVar9 = pNVar13;
                pNVar4 = *(Node **)pNVar13;
              }
            }
            pNVar9 = *(Node **)pNVar9;
            do {
              if (((pNVar9 == *(Node **)param_2) ||
                  (cVar5 = operator==((QString *)(pNVar9 + 0x10),(QString *)pNVar2), cVar5 == '\0'))
                 || (cVar5 = QVariant::cmp((QVariant *)(pNVar8 + 0x18)), cVar5 == '\0'))
              goto LAB_100075fd7;
              pNVar8 = (Node *)QHashData::nextNode(pNVar8);
              pNVar9 = (Node *)QHashData::nextNode(pNVar9);
              pNVar10 = pNVar8;
              if (pNVar8 == (Node *)*param_1) goto LAB_100075fca;
              cVar5 = operator==((QString *)(pNVar8 + 0x10),(QString *)pNVar2);
            } while (cVar5 != '\0');
            pNVar10 = (Node *)*param_1;
LAB_100075fca:
            if (pNVar8 == pNVar10) {
              return 1;
            }
            pNVar10 = *(Node **)param_2;
          } while( true );
        }
        iVar11 = iVar11 + -1;
        plVar12 = plVar12 + 1;
      } while (iVar11 != 0);
    }
  }
  else {
LAB_100075fd7:
    uVar7 = 0;
  }
  return uVar7;
}

