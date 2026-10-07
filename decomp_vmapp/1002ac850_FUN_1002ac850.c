
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ac850(long param_1,ulong param_2,uint param_3,int param_4,int param_5,int param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  ulong uVar27;
  ulong uVar28;
  uint *puVar29;
  uint uVar30;
  uint *puVar31;
  int iVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  ulong uVar37;
  
  lVar34 = (param_2 & 0xffffffff) * 0x8f0;
  iVar25 = *(int *)(param_1 + 0x940 + lVar34);
  uVar5 = *(int *)(param_1 + 0x938 + lVar34) + 7;
  if (iVar25 - 0xfU < 2) {
    param_3 = param_3 & 0xfffffffe;
  }
  else if (iVar25 == 0x18) {
    param_3 = param_3 & 0xfffffffc;
  }
  uVar33 = uVar5 & 0xfffffff8;
  pvVar10 = *(void **)(param_1 + 0x988 + lVar34);
  if (pvVar10 == (void *)0x0) {
    pvVar10 = operator_new__((ulong)(*(int *)(param_1 + 0x93c + lVar34) * uVar33) << 2);
    *(void **)(param_1 + 0x988 + lVar34) = pvVar10;
    *(uint *)(param_1 + 0x990 + lVar34) = uVar33 * 4;
  }
  uVar4 = _UNK_100b3794c;
  uVar30 = _UNK_100b37948;
  uVar24 = _UNK_100b37944;
  uVar21 = _DAT_100b37940;
  uVar20 = _UNK_100b3793c;
  uVar18 = _UNK_100b37938;
  uVar13 = _UNK_100b37934;
  uVar9 = _DAT_100b37930;
  uVar8 = _UNK_100b2ea4c;
  uVar7 = _UNK_100b2ea48;
  uVar6 = _UNK_100b2ea44;
  uVar17 = _DAT_100b2ea40;
  iVar32 = param_6 - param_4;
  uVar14 = *(uint *)(param_1 + 0x934 + lVar34);
  puVar1 = (uint *)(param_1 + 0x934 + lVar34);
  puVar29 = (uint *)((ulong)((iVar25 + 7U >> 3) * param_3) +
                     (ulong)(uVar14 * param_4) + (ulong)*(uint *)(param_1 + 0x930 + lVar34) +
                    *(long *)(param_1 + 0x920));
  uVar27 = (ulong)param_3;
  puVar31 = (uint *)((long)pvVar10 + (uVar33 * param_4 + uVar27) * 4);
  if (iVar25 < 0xf) {
    if ((iVar25 == 8) && (param_6 != param_4)) {
      iVar36 = param_5 - param_3;
      iVar12 = (param_3 - 1) - param_5;
      iVar25 = -2;
      if (-3 < iVar12) {
        iVar25 = iVar12;
      }
      do {
        iVar32 = iVar32 + -1;
        if (0 < iVar36) {
          lVar35 = *(long *)(param_1 + 0x948 + lVar34);
          puVar22 = puVar29;
          puVar26 = puVar31;
          iVar12 = iVar36;
          if (((param_5 + 2 + iVar25) - param_3 & 1) != 0) {
            iVar12 = iVar36 + -1;
            puVar22 = (uint *)((long)puVar29 + 1);
            puVar26 = puVar31 + 1;
            *puVar31 = *(uint *)(lVar35 + (ulong)(byte)*puVar29 * 4) | 0xff000000;
          }
          if (param_5 + 1 + iVar25 != param_3) {
            iVar12 = iVar12 + 1;
            do {
              *puVar26 = *(uint *)(lVar35 + (ulong)(byte)*puVar22 * 4) | 0xff000000;
              puVar26[1] = *(uint *)(lVar35 + (ulong)*(byte *)((long)puVar22 + 1) * 4) | 0xff000000;
              iVar12 = iVar12 + -2;
              puVar22 = (uint *)((long)puVar22 + 2);
              puVar26 = puVar26 + 2;
            } while (1 < iVar12);
          }
          uVar14 = *puVar1;
        }
        puVar29 = (uint *)((long)puVar29 + (ulong)uVar14);
        puVar31 = puVar31 + uVar33;
      } while (iVar32 != 0);
    }
  }
  else if (iVar25 < 0x18) {
    if (iVar25 == 0xf) {
      if (param_6 != param_4) {
        uVar33 = (param_5 - param_3) - 2;
        uVar23 = (ulong)((param_5 + -2) - param_3 >> 1);
        uVar15 = (ulong)(param_4 * (uVar5 >> 3) * 8);
        puVar22 = (uint *)((long)pvVar10 + (uVar15 + uVar27 + uVar23 * 2) * 4 + 8);
        uVar5 = (uVar5 >> 3) << 3;
        puVar31 = (uint *)((long)pvVar10 + (uVar15 + uVar27) * 4);
        do {
          puVar11 = puVar31;
          puVar26 = puVar29;
          uVar14 = uVar33;
          if (-1 < (int)uVar33) {
            puVar26 = puVar29 + uVar23 + 1;
            lVar34 = 0;
            uVar17 = uVar33;
            do {
              uVar14 = *(uint *)((long)puVar29 + lVar34);
              *(uint *)((long)puVar31 + lVar34 * 2) =
                   (uVar14 & 0x3e0) << 6 | (uVar14 & 0x7c00) << 9 | (uVar14 & 0x1f) << 3 |
                   0xff000000;
              *(uint *)((long)puVar31 + lVar34 * 2 + 4) =
                   uVar14 >> 10 & 0xf800 | uVar14 >> 7 & 0xf80000 | uVar14 >> 0xd & 0xf8 |
                   0xff000000;
              lVar34 = lVar34 + 4;
              uVar17 = uVar17 - 2;
              puVar11 = puVar22;
              uVar14 = (param_5 + -4) - param_3;
            } while (-1 < (int)uVar17);
          }
          iVar32 = iVar32 + -1;
          if ((uVar14 & 1) != 0) {
            uVar14 = *puVar26;
            *puVar11 = (uVar14 & 0x3e0) << 6 | (uVar14 & 0x7c00) << 9 | (uVar14 & 0x1f) << 3 |
                       0xff000000;
          }
          puVar29 = (uint *)((long)puVar29 + (ulong)*puVar1);
          puVar31 = puVar31 + uVar5;
          puVar22 = puVar22 + uVar5;
        } while (iVar32 != 0);
      }
    }
    else if ((iVar25 == 0x10) && (param_6 != param_4)) {
      uVar33 = (param_5 - param_3) - 2;
      uVar23 = (ulong)((param_5 + -2) - param_3 >> 1);
      uVar15 = (ulong)(param_4 * (uVar5 >> 3) * 8);
      puVar22 = (uint *)((long)pvVar10 + (uVar15 + uVar27 + uVar23 * 2) * 4 + 8);
      uVar5 = (uVar5 >> 3) << 3;
      puVar31 = (uint *)((long)pvVar10 + (uVar15 + uVar27) * 4);
      do {
        puVar11 = puVar31;
        puVar26 = puVar29;
        uVar14 = uVar33;
        if (-1 < (int)uVar33) {
          puVar26 = puVar29 + uVar23 + 1;
          lVar34 = 0;
          uVar17 = uVar33;
          do {
            uVar14 = *(uint *)((long)puVar29 + lVar34);
            uVar24 = (uVar14 >> 0xb & 0x1f) * 0xff + 0xf;
            uVar6 = uVar24 / 0x1f;
            uVar13 = (uVar14 >> 5 & 0x3f) * 0xff + 0x1f;
            uVar7 = uVar13 / 0x3f;
            uVar8 = (uVar14 & 0x1f) * 0xff + 0xf;
            uVar30 = uVar8 / 0x1f;
            uVar9 = (uVar14 >> 0x15 & 0x3f) * 0xff + 0x1f;
            uVar20 = uVar9 / 0x3f;
            uVar18 = (uVar14 >> 0x10 & 0x1f) * 0xff + 0xf;
            uVar21 = uVar18 / 0x1f;
            *(uint *)((long)puVar31 + lVar34 * 2) =
                 ((uVar13 - uVar7 >> 1) + uVar7 & 0x1fffe0) << 3 |
                 ((uVar24 - uVar6 >> 1) + uVar6 & 0xff0) << 0xc |
                 (uVar8 - uVar30 >> 1) + uVar30 >> 4 | 0xff000000;
            *(uint *)((long)puVar31 + lVar34 * 2 + 4) =
                 ((uVar9 - uVar20 >> 1) + uVar20 & 0x1fffe0) << 3 |
                 ((uint)((ulong)((uVar14 >> 0x1b) * 0xff + 0xf) * 0x108421085 >> 0x21) & 0xff0) <<
                 0xc | (uVar18 - uVar21 >> 1) + uVar21 >> 4 | 0xff000000;
            lVar34 = lVar34 + 4;
            uVar17 = uVar17 - 2;
            puVar11 = puVar22;
            uVar14 = (param_5 + -4) - param_3;
          } while (-1 < (int)uVar17);
        }
        iVar32 = iVar32 + -1;
        if ((uVar14 & 1) != 0) {
          uVar14 = *puVar26;
          *puVar11 = (uVar14 & 0x7e0) << 5 | (uVar14 & 0xf800) << 8 | (uVar14 & 0x1f) << 3 |
                     0xff000000;
        }
        puVar29 = (uint *)((long)puVar29 + (ulong)*puVar1);
        puVar31 = puVar31 + uVar5;
        puVar22 = puVar22 + uVar5;
      } while (iVar32 != 0);
    }
  }
  else if (iVar25 == 0x18) {
    if (param_6 != param_4) {
      iVar36 = param_5 - param_3;
      iVar12 = (param_3 - 1) - param_5;
      iVar25 = -2;
      if (-3 < iVar12) {
        iVar25 = iVar12;
      }
      do {
        iVar32 = iVar32 + -1;
        if (0 < iVar36) {
          puVar22 = puVar31;
          puVar26 = puVar29;
          iVar12 = iVar36;
          if (((param_5 + 2 + iVar25) - param_3 & 1) != 0) {
            iVar12 = iVar36 + -1;
            puVar22 = puVar31 + 1;
            *puVar31 = (uint3)*puVar29 | 0xff000000;
            puVar26 = (uint *)((long)puVar29 + 3);
          }
          if (param_5 + 1 + iVar25 != param_3) {
            iVar12 = iVar12 + 1;
            do {
              *puVar22 = (uint3)*puVar26 | 0xff000000;
              puVar22[1] = *(uint3 *)((long)puVar26 + 3) | 0xff000000;
              iVar12 = iVar12 + -2;
              puVar26 = (uint *)((long)puVar26 + 6);
              puVar22 = puVar22 + 2;
            } while (1 < iVar12);
          }
          uVar14 = *puVar1;
        }
        puVar29 = (uint *)((long)puVar29 + (ulong)uVar14);
        puVar31 = puVar31 + uVar33;
      } while (iVar32 != 0);
    }
  }
  else if ((iVar25 == 0x1f) && (param_6 != param_4)) {
    uVar33 = param_5 - param_3;
    iVar25 = (param_3 - 1) - param_5;
    if (iVar25 < -2) {
      iVar25 = -2;
    }
    uVar23 = (ulong)((iVar25 + 1 + param_5) - param_3);
    lVar34 = param_4 * (uVar5 >> 3) * 8 + uVar27;
    uVar15 = (ulong)((uVar5 >> 3) << 3);
    uVar27 = uVar23 + 1;
    puVar31 = (uint *)((long)pvVar10 + lVar34 * 4);
    lVar35 = 0;
    do {
      iVar32 = iVar32 + -1;
      if (0 < (int)uVar33) {
        uVar37 = uVar27 & 0x1fffffffc;
        uVar16 = 0;
        puVar22 = puVar29;
        puVar26 = puVar31;
        uVar5 = uVar33;
        if (uVar37 != 0) {
          lVar19 = uVar15 * lVar35;
          if (puVar29 + uVar23 < (uint *)((long)pvVar10 + (lVar34 + lVar19) * 4)) {
            uVar28 = 0;
          }
          else {
            uVar28 = 0;
            uVar16 = 0;
            if (puVar29 <= (uint *)((long)pvVar10 + (lVar19 + lVar34 + uVar23) * 4))
            goto LAB_1002ad078;
          }
          do {
            puVar22 = puVar29 + uVar28;
            uVar5 = *puVar22;
            uVar14 = puVar22[1];
            uVar2 = puVar22[2];
            uVar3 = puVar22[3];
            puVar22 = puVar31 + uVar28;
            *puVar22 = uVar5 >> 0x10 & uVar17 | uVar5 << 0x10 & uVar21 | uVar5 & uVar9;
            puVar22[1] = uVar14 >> 0x10 & uVar6 | uVar14 << 0x10 & uVar24 | uVar14 & uVar13;
            puVar22[2] = uVar2 >> 0x10 & uVar7 | uVar2 << 0x10 & uVar30 | uVar2 & uVar18;
            puVar22[3] = uVar3 >> 0x10 & uVar8 | uVar3 << 0x10 & uVar4 | uVar3 & uVar20;
            uVar28 = uVar28 + 4;
            uVar16 = uVar37;
            puVar22 = puVar29 + uVar37;
            puVar26 = puVar31 + uVar37;
            uVar5 = uVar33 - (int)uVar37;
          } while ((uVar27 & 0xfffffffffffffffc) != uVar28);
        }
LAB_1002ad078:
        if (uVar27 != uVar16) {
          uVar14 = ~uVar5;
          if ((int)uVar14 < -2) {
            uVar14 = 0xfffffffe;
          }
          iVar25 = uVar5 + 1;
          if ((uVar5 + 2 + uVar14 & 1) != 0) {
            uVar5 = uVar5 - 1;
            uVar2 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar26 = uVar2 >> 0x10 & 0xff | (uVar2 & 0xff) << 0x10 | uVar2 & 0xff00ff00;
            puVar26 = puVar26 + 1;
          }
          if (iVar25 + uVar14 != 0) {
            iVar25 = uVar5 + 1;
            do {
              uVar5 = *puVar22;
              *puVar26 = uVar5 >> 0x10 & 0xff | (uVar5 & 0xff) << 0x10 | uVar5 & 0xff00ff00;
              uVar5 = puVar22[1];
              puVar26[1] = uVar5 >> 0x10 & 0xff | (uVar5 & 0xff) << 0x10 | uVar5 & 0xff00ff00;
              iVar25 = iVar25 + -2;
              puVar22 = puVar22 + 2;
              puVar26 = puVar26 + 2;
            } while (1 < iVar25);
          }
        }
        uVar14 = *puVar1;
      }
      puVar29 = (uint *)((long)puVar29 + (ulong)uVar14);
      puVar31 = puVar31 + uVar15;
      lVar35 = lVar35 + 1;
    } while (iVar32 != 0);
  }
  return;
}

