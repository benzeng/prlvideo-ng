
undefined8
FUN_1003c8d80(long param_1,int param_2,int *param_3,long param_4,uint param_5,int *param_6,
             uint param_7,uint param_8,uint param_9)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar11;
  
  iVar3 = param_3[2];
  iVar4 = *param_3;
  iVar5 = *param_6;
  iVar6 = param_6[1];
  iVar12 = param_3[3] - param_3[1];
  lVar14 = (ulong)(iVar4 * param_7) + (ulong)(uint)(param_3[1] * param_2);
  iVar7 = param_6[2];
  param_4 = (ulong)(iVar5 * param_7) + (ulong)(iVar6 * param_5) + param_4;
  uVar13 = iVar7 - iVar5;
  iVar8 = param_6[3];
  uVar9 = iVar8 - iVar6;
  uVar11 = (ulong)uVar9;
  if (param_7 == 1) {
    if (iVar8 != iVar6) {
      uVar16 = 0;
      do {
        if (iVar7 != iVar5) {
          lVar15 = 0;
          uVar10 = iVar3 - iVar4;
          do {
            bVar1 = *(byte *)(param_1 +
                             ((ulong)uVar10 / (ulong)uVar13 >> 1) +
                             (ulong)(uint)((int)(((uVar16 * 2 + 1) * iVar12) / uVar11 >> 1) *
                                          param_2) + lVar14);
            if ((bVar1 & param_9) != (param_8 & 0xff)) {
              *(byte *)(param_4 + lVar15) = bVar1;
            }
            lVar15 = lVar15 + 1;
            uVar10 = uVar10 + iVar3 * 2 + iVar4 * -2;
          } while (iVar7 - iVar5 != (int)lVar15);
        }
        param_4 = param_4 + (ulong)param_5;
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar9);
    }
  }
  else if (param_7 == 2) {
    if (iVar8 != iVar6) {
      uVar16 = 0;
      do {
        if (iVar7 != iVar5) {
          lVar15 = 0;
          uVar10 = iVar3 - iVar4;
          do {
            uVar2 = *(ushort *)
                     ((ulong)(uint)((int)(((uVar16 * 2 + 1) * iVar12) / uVar11 >> 1) * param_2) +
                      lVar14 + param_1 + (ulong)(uVar10 / uVar13 & 0xfffffffe));
            if ((uVar2 & param_9) != (param_8 & 0xffff)) {
              *(ushort *)(param_4 + lVar15 * 2) = uVar2;
            }
            lVar15 = lVar15 + 1;
            uVar10 = uVar10 + iVar3 * 2 + iVar4 * -2;
          } while (iVar7 - iVar5 != (int)lVar15);
        }
        param_4 = param_4 + (ulong)param_5;
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar9);
    }
  }
  else if (param_7 == 4) {
    if (iVar8 != iVar6) {
      uVar16 = 0;
      do {
        if (iVar7 != iVar5) {
          lVar15 = 0;
          uVar10 = iVar3 - iVar4;
          do {
            uVar17 = *(uint *)((ulong)(uint)((int)(((uVar16 * 2 + 1) * iVar12) / uVar11 >> 1) *
                                            param_2) + lVar14 + param_1 +
                              ((ulong)uVar10 / (ulong)uVar13 >> 1) * 4);
            if ((uVar17 & param_9) != param_8) {
              *(uint *)(param_4 + lVar15 * 4) = uVar17;
            }
            lVar15 = lVar15 + 1;
            uVar10 = uVar10 + iVar3 * 2 + iVar4 * -2;
          } while (iVar7 - iVar5 != (int)lVar15);
        }
        param_4 = param_4 + (ulong)param_5;
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar9);
    }
  }
  else if (iVar8 != iVar6) {
    uVar16 = 0;
    do {
      if (iVar7 != iVar5) {
        uVar18 = 0;
        uVar10 = iVar3 - iVar4;
        uVar17 = uVar13;
        do {
          _memcpy((void *)((ulong)uVar18 + param_4),
                  (void *)((ulong)((int)((ulong)uVar10 / (ulong)uVar13 >> 1) * param_7) +
                           (ulong)(uint)((int)((ulong)((uVar16 * 2 + 1) * iVar12) / (ulong)uVar9 >>
                                              1) * param_2) + lVar14 + param_1),(ulong)param_7);
          uVar18 = uVar18 + param_7;
          uVar10 = uVar10 + iVar3 * 2 + iVar4 * -2;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      param_4 = param_4 + (ulong)param_5;
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar9);
  }
  return 1;
}

