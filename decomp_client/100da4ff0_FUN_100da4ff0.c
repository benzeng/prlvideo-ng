
/* WARNING: Removing unreachable block (ram,0x000100da505e) */

undefined8 FUN_100da4ff0(long *param_1,Node *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Node *pNVar4;
  uint uVar5;
  int iVar6;
  Node *pNVar7;
  Node *pNVar8;
  long *plVar9;
  
  pNVar4 = (Node *)*param_1;
  pNVar8 = *(Node **)param_2;
  if (*(int *)(pNVar4 + 0x14) == *(int *)(pNVar8 + 0x14)) {
    uVar2 = 1;
    if (pNVar4 == pNVar8) {
      uVar2 = 1;
    }
    else {
      iVar6 = *(int *)(pNVar4 + 0x20);
      if (iVar6 == 0) {
        uVar2 = 1;
      }
      else {
        plVar9 = *(long **)(pNVar4 + 8);
        do {
          pNVar7 = (Node *)*plVar9;
          if (pNVar7 != pNVar4) {
            do {
              pNVar4 = param_2;
              if (*(uint *)(pNVar8 + 0x20) != 0) {
                uVar5 = *(uint *)(pNVar8 + 0x24) ^ *(uint *)(pNVar7 + 0xc);
                uVar1 = (ulong)uVar5 % (ulong)*(uint *)(pNVar8 + 0x20);
                pNVar4 = (Node *)(*(long *)(pNVar8 + 8) + uVar1 * 8);
                for (pNVar3 = *(Node **)(*(long *)(pNVar8 + 8) + uVar1 * 8);
                    (pNVar3 != pNVar8 &&
                    ((*(uint *)(pNVar3 + 8) != uVar5 ||
                     (*(uint *)(pNVar7 + 0xc) != *(uint *)(pNVar3 + 0xc)))));
                    pNVar3 = *(Node **)pNVar3) {
                  pNVar4 = pNVar3;
                }
              }
              pNVar4 = *(Node **)pNVar4;
              pNVar3 = pNVar7;
              if (pNVar4 == pNVar8) {
                return 0;
              }
              while( true ) {
                if (*(int *)(pNVar4 + 0xc) != *(int *)(pNVar7 + 0xc)) {
                  return 0;
                }
                if (*(short *)(pNVar3 + 0x10) != *(short *)(pNVar4 + 0x10)) {
                  return 0;
                }
                pNVar3 = (Node *)QHashData::nextNode(pNVar3);
                pNVar4 = (Node *)QHashData::nextNode(pNVar4);
                if (pNVar3 == (Node *)*param_1) {
                  return 1;
                }
                if (*(int *)(pNVar3 + 0xc) != *(int *)(pNVar7 + 0xc)) break;
                if (pNVar4 == *(Node **)param_2) {
                  return 0;
                }
              }
              pNVar8 = *(Node **)param_2;
              pNVar7 = pNVar3;
            } while( true );
          }
          iVar6 = iVar6 + -1;
          plVar9 = plVar9 + 1;
        } while (iVar6 != 0);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

