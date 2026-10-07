
void FUN_100362ab0(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  int *piVar11;
  
  puVar4 = *(uint **)(param_1 + 0xa8);
  uVar2 = *puVar4;
  uVar1 = (ulong)(uVar2 - 1) + 1;
  lVar6 = 0;
  do {
    iVar3 = *(int *)(param_2 + 0x3c + lVar6 * 4);
    if ((iVar3 != 0) && (uVar2 != 0)) {
      piVar8 = *(int **)(puVar4 + 4);
      uVar7 = uVar1 & 0xfffffffffffffffe;
      piVar11 = piVar8;
      uVar9 = 0;
      uVar5 = uVar1 & 0x1fffffffe;
      while (uVar5 != 0) {
        if (*piVar11 == iVar3) {
          *piVar11 = 0;
        }
        if (piVar11[6] == iVar3) {
          piVar11[6] = 0;
        }
        piVar11 = piVar11 + 0xc;
        uVar7 = uVar7 - 2;
        uVar9 = uVar1 & 0x1fffffffe;
        uVar5 = uVar7;
      }
      if (uVar1 != uVar9) {
        if ((uVar2 & 1) != 0) {
          if (piVar8[uVar9 * 6] == iVar3) {
            piVar8[uVar9 * 6] = 0;
          }
          uVar9 = uVar9 + 1;
        }
        if (uVar2 - 1 != 0) {
          piVar8 = piVar8 + uVar9 * 6;
          iVar10 = (uVar2 + 1) - ((int)uVar9 + 1);
          do {
            if (*piVar8 == iVar3) {
              *piVar8 = 0;
            }
            if (piVar8[6] == iVar3) {
              piVar8[6] = 0;
            }
            piVar8 = piVar8 + 0xc;
            iVar10 = iVar10 + -2;
          } while (iVar10 != 0);
        }
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 8);
  return;
}

