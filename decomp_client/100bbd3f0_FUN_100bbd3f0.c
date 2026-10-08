
undefined4 FUN_100bbd3f0(long *param_1,long *param_2,int param_3,long *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  
  if ((param_1 != param_2) && (lVar6 = FUN_100bac3a0(), lVar6 == 0)) {
    return 0;
  }
  if (0 < param_3) {
    do {
      lVar6 = param_4[1];
      iVar4 = 0;
      iVar3 = 0;
      if ((int)lVar6 != 0) {
        iVar3 = FUN_100bac6c0();
        iVar3 = iVar3 + ((int)lVar6 + -1) * 0x40;
      }
      uVar11 = *(uint *)(param_1 + 1);
      if (uVar11 != 0) {
        iVar4 = FUN_100bac6c0();
        iVar4 = iVar4 + (uVar11 - 1) * 0x40;
      }
      iVar3 = iVar3 - iVar4;
      if (iVar3 < 0) {
        return 0;
      }
      if (param_3 < iVar3) {
        iVar3 = param_3;
      }
      if (iVar3 == 0) {
        if (*(int *)((long)param_1 + 0xc) <= (int)uVar11) {
          lVar6 = FUN_100bac510(param_1,uVar11 + 1);
          if (lVar6 == 0) {
            return 0;
          }
          uVar11 = *(uint *)(param_1 + 1);
        }
        if (0 < (int)uVar11) {
          puVar1 = (ulong *)*param_1;
          uVar5 = 0;
          uVar9 = 0;
          puVar8 = puVar1;
          if ((uVar11 & 3) != 0) {
            uVar5 = 0;
            uVar9 = 0;
            do {
              uVar2 = *puVar8;
              *puVar8 = uVar2 * 2 | uVar9;
              puVar8 = puVar8 + 1;
              uVar9 = uVar2 >> 0x3f;
              uVar5 = uVar5 + 1;
            } while ((uVar11 & 3) != uVar5);
          }
          if (2 < uVar11 - 1) {
            iVar3 = uVar11 - uVar5;
            do {
              uVar2 = *puVar8;
              *puVar8 = uVar2 * 2 | uVar9;
              uVar9 = puVar8[1];
              puVar8[1] = uVar2 >> 0x3f | uVar9 << 1;
              uVar2 = puVar8[2];
              puVar8[2] = uVar9 >> 0x3f | uVar2 << 1;
              uVar9 = puVar8[3];
              puVar8[3] = uVar2 >> 0x3f | uVar9 << 1;
              uVar9 = uVar9 >> 0x3f;
              puVar8 = puVar8 + 4;
              iVar3 = iVar3 + -4;
            } while (iVar3 != 0);
          }
          if (uVar9 != 0) {
            lVar6 = (ulong)(uVar11 - 1) + 1;
            if ((int)uVar11 < 2) {
              lVar6 = 1;
            }
            puVar1[lVar6] = 1;
            *(uint *)(param_1 + 1) = uVar11 + 1;
          }
        }
        param_3 = param_3 + -1;
      }
      else {
        iVar4 = FUN_100bb5160(param_1,param_1,iVar3);
        if (iVar4 == 0) {
          return 0;
        }
        param_3 = param_3 - iVar3;
      }
      if (param_4 != (long *)0x0 && param_1 != (long *)0x0) {
        iVar3 = (int)param_1[2];
        uVar5 = ~-(uint)(iVar3 == 0) | 1;
        uVar11 = uVar5;
        if (iVar3 == (int)param_4[2]) {
          iVar4 = (int)param_1[1];
          lVar6 = (long)iVar4;
          if ((iVar4 <= (int)param_4[1]) &&
             (uVar7 = -(uint)(iVar3 == 0) | 1, uVar11 = uVar7, (int)param_4[1] <= iVar4)) {
            lVar10 = (long)(iVar4 + -1) << 3;
            do {
              if (lVar6 < 1) goto LAB_100bbd674;
              puVar8 = (ulong *)(*param_1 + lVar10);
              puVar1 = (ulong *)(*param_4 + lVar10);
              uVar11 = uVar5;
              if (*puVar1 < *puVar8) break;
              lVar6 = lVar6 + -1;
              lVar10 = lVar10 + -8;
              uVar11 = uVar7;
            } while (*puVar1 <= *puVar8);
          }
        }
LAB_100bbd670:
        if (-1 < (int)uVar11) {
LAB_100bbd674:
          iVar3 = FUN_100bb6450(param_1,param_1,param_4);
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
      else {
        uVar11 = (uint)(param_4 != (long *)0x0);
        if (param_1 == (long *)0x0) goto LAB_100bbd670;
      }
    } while (0 < param_3);
  }
  return 1;
}

