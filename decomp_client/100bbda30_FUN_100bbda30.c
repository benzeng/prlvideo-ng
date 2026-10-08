
undefined8 FUN_100bbda30(long *param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  if ((int)param_2[2] != 0) {
    return 0;
  }
  iVar5 = (int)param_2[1];
  if ((long)iVar5 == 0) {
    return 0;
  }
  lVar10 = *param_2;
  iVar4 = FUN_100bac6c0(*(undefined8 *)(lVar10 + -8 + (long)iVar5 * 8));
  iVar4 = iVar4 + (iVar5 + -1) * 0x40;
  if (iVar4 == 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  if (1 < iVar4) {
    uVar7 = iVar4 - 2;
    iVar8 = (int)(((uint)((int)uVar7 >> 0x1f) >> 0x1a) + uVar7) >> 6;
    if ((iVar8 < iVar5) &&
       ((*(ulong *)(lVar10 + (long)iVar8 * 8) >> ((ulong)uVar7 & 0x3f) & 1) != 0)) {
LAB_100bbdafd:
      iVar5 = FUN_100bbd1b0(0,param_1,iVar4,0xffffffff,0);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = 100;
      do {
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          return 0;
        }
        if (param_1 != (long *)0x0) {
          iVar8 = (int)param_1[2];
          uVar6 = ~-(uint)(iVar8 == 0) | 1;
          uVar7 = uVar6;
          if (iVar8 == (int)param_2[2]) {
            iVar3 = (int)param_1[1];
            lVar10 = (long)iVar3;
            if ((iVar3 <= (int)param_2[1]) &&
               (uVar9 = -(uint)(iVar8 == 0) | 1, uVar7 = uVar9, (int)param_2[1] <= iVar3)) {
              lVar11 = (long)(iVar3 + -1) << 3;
              do {
                if (lVar10 < 1) goto LAB_100bbdb9a;
                puVar1 = (ulong *)(*param_1 + lVar11);
                puVar2 = (ulong *)(*param_2 + lVar11);
                uVar7 = uVar6;
                if (*puVar2 < *puVar1) break;
                lVar10 = lVar10 + -1;
                lVar11 = lVar11 + -8;
                uVar7 = uVar9;
              } while (*puVar2 <= *puVar1);
            }
          }
          if ((int)uVar7 < 0) {
            return 1;
          }
        }
LAB_100bbdb9a:
        iVar8 = FUN_100bbd1b0(0,param_1,iVar4,0xffffffff,0);
        if (iVar8 == 0) {
          return 0;
        }
      } while( true );
    }
    if (2 < iVar4) {
      uVar7 = iVar4 - 3;
      iVar8 = (int)(((uint)((int)uVar7 >> 0x1f) >> 0x1a) + uVar7) >> 6;
      if ((iVar8 < iVar5) &&
         ((*(ulong *)(lVar10 + (long)iVar8 * 8) >> ((ulong)uVar7 & 0x3f) & 1) != 0))
      goto LAB_100bbdafd;
    }
  }
  iVar5 = FUN_100bbd1b0(0,param_1,iVar4 + 1,0xffffffff,0);
  if (iVar5 != 0) {
    iVar5 = 100;
    do {
      if (param_1 == (long *)0x0) {
LAB_100bbdc68:
        iVar8 = FUN_100bb6450(param_1,param_1,param_2);
        if (iVar8 == 0) {
          return 0;
        }
        if (param_1 != (long *)0x0) {
          iVar8 = (int)param_1[2];
          uVar6 = ~-(uint)(iVar8 == 0) | 1;
          uVar7 = uVar6;
          if (iVar8 == (int)param_2[2]) {
            iVar3 = (int)param_1[1];
            lVar10 = (long)iVar3;
            if ((iVar3 <= (int)param_2[1]) &&
               (uVar9 = -(uint)(iVar8 == 0) | 1, uVar7 = uVar9, (int)param_2[1] <= iVar3)) {
              lVar11 = (long)(iVar3 + -1) << 3;
              do {
                if (lVar10 < 1) goto LAB_100bbdcf4;
                puVar1 = (ulong *)(*param_1 + lVar11);
                puVar2 = (ulong *)(*param_2 + lVar11);
                uVar7 = uVar6;
                if (*puVar2 < *puVar1) break;
                lVar10 = lVar10 + -1;
                lVar11 = lVar11 + -8;
                uVar7 = uVar9;
              } while (*puVar2 <= *puVar1);
            }
          }
          if ((int)uVar7 < 0) goto LAB_100bbdd0a;
        }
LAB_100bbdcf4:
        iVar8 = FUN_100bb6450(param_1,param_1,param_2);
        if (iVar8 == 0) {
          return 0;
        }
      }
      else {
        iVar8 = (int)param_1[2];
        uVar6 = ~-(uint)(iVar8 == 0) | 1;
        uVar7 = uVar6;
        if (iVar8 == (int)param_2[2]) {
          iVar3 = (int)param_1[1];
          lVar10 = (long)iVar3;
          if ((iVar3 <= (int)param_2[1]) &&
             (uVar9 = -(uint)(iVar8 == 0) | 1, uVar7 = uVar9, (int)param_2[1] <= iVar3)) {
            lVar11 = (long)(iVar3 + -1) << 3;
            do {
              if (lVar10 < 1) goto LAB_100bbdc68;
              puVar1 = (ulong *)(*param_1 + lVar11);
              puVar2 = (ulong *)(*param_2 + lVar11);
              uVar7 = uVar6;
              if (*puVar2 < *puVar1) break;
              lVar10 = lVar10 + -1;
              lVar11 = lVar11 + -8;
              uVar7 = uVar9;
            } while (*puVar2 <= *puVar1);
          }
        }
        if (-1 < (int)uVar7) goto LAB_100bbdc68;
      }
LAB_100bbdd0a:
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        return 0;
      }
      if (param_1 != (long *)0x0) {
        iVar8 = (int)param_1[2];
        uVar6 = ~-(uint)(iVar8 == 0) | 1;
        uVar7 = uVar6;
        if (iVar8 == (int)param_2[2]) {
          iVar3 = (int)param_1[1];
          lVar10 = (long)iVar3;
          if ((iVar3 <= (int)param_2[1]) &&
             (uVar9 = -(uint)(iVar8 == 0) | 1, uVar7 = uVar9, (int)param_2[1] <= iVar3)) {
            lVar11 = (long)(iVar3 + -1) << 3;
            do {
              if (lVar10 < 1) goto LAB_100bbdd89;
              puVar1 = (ulong *)(*param_1 + lVar11);
              puVar2 = (ulong *)(*param_2 + lVar11);
              uVar7 = uVar6;
              if (*puVar2 < *puVar1) break;
              lVar10 = lVar10 + -1;
              lVar11 = lVar11 + -8;
              uVar7 = uVar9;
            } while (*puVar2 <= *puVar1);
          }
        }
        if ((int)uVar7 < 0) {
          return 1;
        }
      }
LAB_100bbdd89:
      iVar8 = FUN_100bbd1b0(0,param_1,iVar4 + 1,0xffffffff,0);
    } while (iVar8 != 0);
  }
  return 0;
}

