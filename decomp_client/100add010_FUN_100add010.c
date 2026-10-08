
void FUN_100add010(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  lVar12 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar12 + 0x800);
  if ((ulong)uVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar12 + 0x808);
  uVar13 = 0;
  iVar4 = 0;
  do {
    plVar5 = (long *)FUN_100adb590(lVar12,*(undefined4 *)(lVar3 + uVar13 * 4));
    lVar12 = *plVar5;
    if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x18) & 0x41) == 0)) {
      lVar7 = *param_2;
      lVar10 = (long)*(int *)(lVar7 + 8);
      if (*(int *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
        lVar8 = lVar7 + 8 + lVar10 * 8;
        lVar9 = (long)*(int *)(lVar7 + 0xc) * 8 + lVar10 * -8;
        do {
          if (lVar9 == 0) goto LAB_100add1a0;
          lVar9 = lVar9 + -8;
          piVar6 = (int *)(lVar8 + 8);
          lVar8 = lVar8 + 8;
        } while (*piVar6 != *(int *)(lVar12 + 0x48));
        if (-1 < (int)((ulong)(lVar8 - (lVar7 + 0x10 + lVar10 * 8)) >> 3)) {
          piVar6 = (int *)FUN_100989eb0(param_2,iVar4);
          iVar2 = *piVar6;
          lVar7 = FUN_100adbbf0(*(undefined8 *)(param_1 + 0x10),iVar2);
          if (lVar7 == 0) {
            return;
          }
          if (iVar2 != *(int *)(lVar12 + 0x48)) {
            FUN_100add960(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar12 + 8),iVar2);
            lVar7 = *param_2;
            lVar10 = (long)*(int *)(lVar7 + 8);
            uVar11 = 0xffffffff;
            if (*(int *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
              lVar8 = lVar7 + 8 + lVar10 * 8;
              lVar9 = (long)*(int *)(lVar7 + 0xc) * 8 + lVar10 * -8;
              do {
                if (lVar9 == 0) goto LAB_100add180;
                lVar9 = lVar9 + -8;
                piVar6 = (int *)(lVar8 + 8);
                lVar8 = lVar8 + 8;
              } while (*piVar6 != *(int *)(lVar12 + 0x48));
              uVar11 = (ulong)(lVar8 - (lVar7 + 0x10 + lVar10 * 8)) >> 3 & 0xffffffff;
            }
LAB_100add180:
            FUN_100add4e0(param_2,uVar11,iVar4);
          }
          iVar4 = iVar4 + 1;
        }
      }
    }
LAB_100add1a0:
    uVar13 = uVar13 + 1;
    if (uVar1 <= uVar13) {
      return;
    }
    lVar12 = *(long *)(param_1 + 0x10);
  } while( true );
}

