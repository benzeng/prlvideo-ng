
void FUN_100adcb40(long param_1,int param_2,char param_3,long *param_4)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar11 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar11 + 0x800);
  if ((ulong)uVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar11 + 0x808);
  uVar13 = 0;
  lVar9 = 0;
  iVar4 = 0;
  do {
    plVar5 = (long *)FUN_100adb590(lVar11,*(undefined4 *)(lVar3 + uVar13 * 4));
    lVar11 = *plVar5;
    if (lVar11 != 0) {
      if ((*(byte *)(lVar11 + 0x18) & 0x41) == 0) {
        lVar8 = *param_4;
        lVar12 = (long)*(int *)(lVar8 + 8);
        if (*(int *)(lVar8 + 8) < *(int *)(lVar8 + 0xc)) {
          lVar6 = lVar8 + 8 + lVar12 * 8;
          lVar7 = (long)*(int *)(lVar8 + 0xc) * 8 + lVar12 * -8;
          do {
            if (lVar7 == 0) goto LAB_100adccd0;
            lVar7 = lVar7 + -8;
            piVar1 = (int *)(lVar6 + 8);
            lVar6 = lVar6 + 8;
          } while (*piVar1 != *(int *)(lVar11 + 0x48));
          if (-1 < (int)((ulong)(lVar6 - (lVar8 + 0x10 + lVar12 * 8)) >> 3)) {
            if (lVar9 == 0) {
              if (param_3 != '\0') {
                FUN_100add990(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar11 + 8));
              }
            }
            else {
              FUN_100add930(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar11 + 8),
                            *(undefined4 *)(lVar9 + 0x48));
            }
            lVar9 = *param_4;
            lVar8 = (long)*(int *)(lVar9 + 8);
            if (*(int *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
              lVar12 = lVar9 + 8 + lVar8 * 8;
              lVar6 = (long)*(int *)(lVar9 + 0xc) * 8 + lVar8 * -8;
              do {
                if (lVar6 == 0) goto LAB_100adccbf;
                lVar6 = lVar6 + -8;
                piVar1 = (int *)(lVar12 + 8);
                lVar12 = lVar12 + 8;
              } while (*piVar1 != *(int *)(lVar11 + 0x48));
              uVar10 = (ulong)(lVar12 - (lVar9 + 0x10 + lVar8 * 8)) >> 3;
              if (0 < (int)uVar10) {
                FUN_100add4e0(param_4,uVar10,iVar4);
              }
            }
LAB_100adccbf:
            iVar4 = iVar4 + 1;
            lVar9 = lVar11;
          }
        }
      }
LAB_100adccd0:
      if (*(int *)(lVar3 + uVar13 * 4) == param_2) {
        return;
      }
    }
    uVar13 = uVar13 + 1;
    if (uVar2 <= uVar13) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0x10);
  } while( true );
}

