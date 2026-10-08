
undefined8 FUN_100988680(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  short *psVar9;
  long lVar10;
  short *psVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar10 = *(long *)(param_2 + 8);
  uVar8 = 1;
  if (lVar4 != lVar10) {
    iVar1 = *(int *)(lVar4 + 0xc);
    iVar2 = *(int *)(lVar4 + 8);
    if (iVar1 - iVar2 == *(int *)(lVar10 + 0xc) - *(int *)(lVar10 + 8)) {
      if (iVar1 != iVar2) {
        puVar13 = (undefined8 *)(lVar4 + 0x10 + (long)iVar2 * 8);
        puVar12 = (undefined8 *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8);
        do {
          pcVar5 = (char *)*puVar13;
          pcVar6 = (char *)*puVar12;
          if (*pcVar5 != *pcVar6) {
            return 0;
          }
          lVar10 = *(long *)(pcVar5 + 0x18);
          lVar7 = *(long *)(pcVar6 + 0x18);
          if (lVar10 != lVar7) {
            iVar2 = *(int *)(lVar10 + 0xc);
            iVar3 = *(int *)(lVar10 + 8);
            if (iVar2 - iVar3 != *(int *)(lVar7 + 0xc) - *(int *)(lVar7 + 8)) {
              return 0;
            }
            if (iVar2 != iVar3) {
              psVar9 = (short *)(lVar10 + 0x10 + (long)iVar3 * 8);
              psVar11 = (short *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8);
              lVar10 = (long)iVar2 * 8 + (long)iVar3 * -8;
              do {
                if (*psVar9 != *psVar11) {
                  return 0;
                }
                psVar9 = psVar9 + 4;
                psVar11 = psVar11 + 4;
                lVar10 = lVar10 + -8;
              } while (lVar10 != 0);
            }
          }
          if (*(short *)(pcVar5 + 0x20) != *(short *)(pcVar6 + 0x20)) {
            return 0;
          }
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        } while (puVar13 != (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8));
      }
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}

