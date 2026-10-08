
/* WARNING: Removing unreachable block (ram,0x00010041ca9e) */

undefined8 FUN_10041ca30(long *param_1,Node *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Node *pNVar5;
  uint uVar6;
  int iVar7;
  Node *pNVar8;
  Node *pNVar9;
  long *plVar10;
  
  pNVar5 = (Node *)*param_1;
  pNVar9 = *(Node **)param_2;
  if (*(int *)(pNVar5 + 0x14) == *(int *)(pNVar9 + 0x14)) {
    uVar3 = 1;
    if (pNVar5 == pNVar9) {
      uVar3 = 1;
    }
    else {
      iVar7 = *(int *)(pNVar5 + 0x20);
      if (iVar7 == 0) {
        uVar3 = 1;
      }
      else {
        plVar10 = *(long **)(pNVar5 + 8);
        do {
          pNVar8 = (Node *)*plVar10;
          if (pNVar8 != pNVar5) {
            do {
              pNVar5 = param_2;
              if (*(uint *)(pNVar9 + 0x20) != 0) {
                uVar6 = *(uint *)(pNVar9 + 0x24) ^ *(uint *)(pNVar8 + 0xc);
                uVar1 = (ulong)uVar6 % (ulong)*(uint *)(pNVar9 + 0x20);
                pNVar5 = (Node *)(*(long *)(pNVar9 + 8) + uVar1 * 8);
                for (pNVar4 = *(Node **)(*(long *)(pNVar9 + 8) + uVar1 * 8);
                    (pNVar4 != pNVar9 &&
                    ((*(uint *)(pNVar4 + 8) != uVar6 ||
                     (*(uint *)(pNVar8 + 0xc) != *(uint *)(pNVar4 + 0xc)))));
                    pNVar4 = *(Node **)pNVar4) {
                  pNVar5 = pNVar4;
                }
              }
              pNVar5 = *(Node **)pNVar5;
              pNVar4 = pNVar8;
              if (pNVar5 == pNVar9) {
                return 0;
              }
              while( true ) {
                if (*(int *)(pNVar5 + 0xc) != *(int *)(pNVar8 + 0xc)) {
                  return 0;
                }
                cVar2 = QVariant::cmp((QVariant *)(pNVar4 + 0x10));
                if (cVar2 == '\0') {
                  return 0;
                }
                pNVar4 = (Node *)QHashData::nextNode(pNVar4);
                pNVar5 = (Node *)QHashData::nextNode(pNVar5);
                if (pNVar4 == (Node *)*param_1) {
                  return 1;
                }
                if (*(int *)(pNVar4 + 0xc) != *(int *)(pNVar8 + 0xc)) break;
                if (pNVar5 == *(Node **)param_2) {
                  return 0;
                }
              }
              pNVar9 = *(Node **)param_2;
              pNVar8 = pNVar4;
            } while( true );
          }
          iVar7 = iVar7 + -1;
          plVar10 = plVar10 + 1;
        } while (iVar7 != 0);
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

