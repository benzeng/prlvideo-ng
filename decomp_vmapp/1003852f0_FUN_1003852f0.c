
void FUN_1003852f0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  byte bVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  
  iVar3 = FUN_10032df60(param_2,0,0);
  if (-1 < iVar3) {
    lVar21 = 0;
    if (*(long **)(param_2 + 0x48) != *(long **)(param_2 + 0x40)) {
      lVar21 = **(long **)(param_2 + 0x40);
    }
    iVar3 = *(int *)(param_2 + 0x1c);
    plVar1 = (long *)param_1[3];
    lVar11 = *plVar1;
    if ((ulong)(plVar1[1] - lVar11) <
        (ulong)(uint)(*(int *)(param_2 + 0xc) * *(int *)(param_2 + 0x10) * 4)) {
      FUN_10005a320(plVar1);
      lVar11 = *plVar1;
    }
    *(undefined4 *)(plVar1 + 3) = 0;
    (**(code **)(*param_1 + 0x30))();
    (*DAT_1011c5768)(*(undefined4 *)(lVar21 + 0x14),*(undefined4 *)(lVar21 + 0xc));
    if (iVar3 != 0) {
      iVar17 = 0;
      do {
        bVar16 = (byte)iVar17;
        uVar13 = *(uint *)(param_2 + 0xc) >> (bVar16 & 0x1f);
        uVar4 = 1;
        if (uVar13 != 0) {
          uVar4 = uVar13;
        }
        if (*(int *)(param_2 + 0x24) == 7) {
          uVar5 = FUN_10032df20(param_2);
        }
        else {
          uVar5 = *(uint *)(param_2 + 0x10) >> (bVar16 & 0x1f);
          if (*(uint *)(param_2 + 0x10) >> (bVar16 & 0x1f) == 0) {
            uVar5 = 1;
          }
        }
        lVar15 = *(long *)(param_1[1] + 0x920);
        uVar6 = FUN_10032df60(param_2,0,iVar17);
        uVar7 = FUN_10032e340(param_2,0,iVar17);
        if (uVar5 != 0) {
          lVar18 = lVar15 + (ulong)uVar6;
          uVar20 = (ulong)uVar7;
          uVar12 = (ulong)uVar4;
          lVar19 = (ulong)(uVar13 - 1) + 1;
          if (uVar13 < 2) {
            lVar19 = 1;
          }
          if ((uVar5 & 1) == 0) {
            uVar13 = 0;
            lVar15 = lVar11;
          }
          else {
            uVar14 = 0;
            do {
              *(undefined4 *)(lVar11 + uVar14 * 4) =
                   *(undefined4 *)
                    (param_3 + 8 + (ulong)*(byte *)(lVar15 + (ulong)uVar6 + uVar14) * 4);
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar12);
            uVar13 = 1;
            lVar18 = lVar18 + uVar20;
            lVar15 = lVar11 + lVar19 * 4;
          }
          if (uVar5 != 1) {
            do {
              uVar14 = 0;
              do {
                *(undefined4 *)(lVar15 + uVar14 * 4) =
                     *(undefined4 *)(param_3 + 8 + (ulong)*(byte *)(lVar18 + uVar14) * 4);
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar12);
              uVar14 = 0;
              do {
                *(undefined4 *)(lVar15 + lVar19 * 4 + uVar14 * 4) =
                     *(undefined4 *)(param_3 + 8 + (ulong)*(byte *)(lVar18 + uVar20 + uVar14) * 4);
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar12);
              uVar13 = uVar13 + 2;
              lVar15 = lVar15 + lVar19 * 8;
              lVar18 = lVar18 + uVar20 * 2;
            } while (uVar13 != uVar5);
          }
        }
        (*DAT_1011c66f0)(0xcf5,4);
        (*DAT_1011c66f0)(0xcf2,uVar4);
        pcVar2 = DAT_1011c6c98;
        uVar8 = FUN_10038e1b0(0x1b);
        uVar9 = FUN_10038e1d0(0x1b);
        uVar10 = FUN_10038e1f0(0x1b);
        (*pcVar2)(0xde1,iVar17,uVar8,uVar4,uVar5,0,uVar9,uVar10,lVar11);
        **(uint **)(lVar21 + 0x88) = **(uint **)(lVar21 + 0x88) | 1 << (bVar16 & 0x1f);
        iVar17 = iVar17 + 1;
      } while (iVar17 != iVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x0001003855e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c5768)(*(undefined4 *)(lVar21 + 0x14),0);
    return;
  }
  return;
}

