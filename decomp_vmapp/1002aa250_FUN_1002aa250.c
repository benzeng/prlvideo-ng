
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002aa250(long param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar26;
  uint *puVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  bool bVar33;
  uint uVar35;
  uint uVar36;
  undefined1 auVar34 [16];
  uint uVar37;
  byte local_89;
  ulong local_78;
  uint local_48;
  uint local_44;
  ulong uVar25;
  
  auVar7 = _DAT_100b37920;
  if (*(uint *)(param_1 + 0x950) < *(uint *)(param_1 + 0x958)) {
    bVar33 = *(uint *)(param_1 + 0x954) < *(uint *)(param_1 + 0x95c);
  }
  else {
    bVar33 = false;
  }
  uVar11 = *(uint *)(param_1 + 0x938);
  uVar28 = param_2 * 8;
  uVar18 = 0;
  uVar5 = (ulong)uVar11;
  uVar15 = (uint)(uVar5 / uVar28);
  uVar12 = *(uint *)(param_1 + 0x93c) / (uint)(*(int *)(param_1 + 0x9844) * param_3);
  lVar9 = *(long *)(param_1 + 0x910);
  if (*(int *)(lVar9 + 0x421c) != 0) {
    uVar18 = (uint)*(byte *)(lVar9 + 0x4218);
  }
  lVar4 = *(long *)(param_1 + 0x918);
  uVar22 = (uVar18 >> 4 & 1 | uVar18 * 2 & 6) << 0xd;
  uVar18 = (uVar18 >> 5 & 1 | uVar18 >> 1 & 6) << 0xd;
  local_89 = 0xff;
  if (uVar18 != uVar22) {
    local_89 = 0xf7;
  }
  if (*(int *)(lVar9 + 0x3db4) != 0) {
    local_89 = local_89 & 0x7f;
  }
  local_78 = 0x18000;
  if (*(char *)(lVar9 + 0x41f0) != '\x03') {
    local_78 = 0x10000;
  }
  if ((*(byte *)(lVar9 + 0x3d86) & 0x40) == 0) {
    iVar29 = (uint)*(byte *)(lVar9 + 0x3d85) <<
             (2U - (char)((*(byte *)(lVar9 + 0x3d89) & 0x40) >> 6) & 0x1f);
  }
  else {
    iVar29 = (uint)*(byte *)(lVar9 + 0x3d85) << 3;
  }
  uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar9 + 0x3d80),*(undefined1 *)(lVar9 + 0x3d81)) * 2;
  local_48 = uVar15;
  if (uVar12 == 0) {
    local_44 = 0;
    uVar24 = 0;
    uVar19 = 0;
  }
  else {
    lVar9 = (ulong)(param_2 * 8 - 1) + 1;
    uVar26 = 0;
    uVar19 = 0;
    uVar10 = 0;
    local_44 = uVar12;
    do {
      if (uVar15 != 0) {
        uVar32 = 0;
        do {
          lVar21 = *(long *)(param_1 + 0x910);
          uVar31 = (uint)uVar32;
          uVar24 = uVar10 * iVar29 +
                   (CONCAT11(*(undefined1 *)(lVar21 + 0x3d7e),*(undefined1 *)(lVar21 + 0x3d7f)) +
                   uVar31) * 2 & 0x7ffe;
          uVar25 = (ulong)uVar24;
          bVar1 = *(byte *)(lVar4 + (uVar25 | local_78));
          uVar17 = (ulong)(uVar24 | 1);
          bVar2 = *(byte *)(lVar4 + (uVar17 | local_78));
          if ((bVar1 == *(byte *)(param_1 + 0x984c + uVar25)) &&
             (bVar2 == *(byte *)(param_1 + 0x984c + uVar17))) {
            if (uVar6 == *(uint *)(param_1 + 0x9848)) {
              if (bVar33) goto LAB_1002aa500;
            }
            else if ((uVar24 == uVar6) || (uVar24 == *(uint *)(param_1 + 0x9848) || bVar33))
            goto LAB_1002aa500;
          }
          else {
LAB_1002aa500:
            *(byte *)(param_1 + 0x984c + uVar25) = bVar1;
            *(byte *)(param_1 + 0x984c + uVar17) = bVar2;
            if (uVar32 < local_48) {
              local_48 = uVar31;
            }
            if (uVar26 < uVar32) {
              uVar26 = uVar32;
            }
            uVar26 = uVar26 & 0xffffffff;
            if (uVar10 < local_44) {
              local_44 = uVar10;
            }
            if (uVar19 < uVar10) {
              uVar19 = uVar10;
            }
            uVar3 = *(uint *)(*(long *)(param_1 + 0x948) +
                             (ulong)*(byte *)(lVar21 + 0x3d98 + (ulong)((bVar2 & local_89) & 0xf)) *
                             4);
            uVar30 = uVar3 | 0xff000000;
            puVar27 = (uint *)(((ulong)(uVar28 * uVar31) +
                               (ulong)(*(int *)(param_1 + 0x9844) * uVar10 * uVar11)) * 4 +
                              *(long *)(param_1 + 0x920));
            uVar31 = 0;
            if (*(int *)(param_1 + 0x9844) != 0) {
              uVar8 = *(uint *)(*(long *)(param_1 + 0x948) +
                               (ulong)*(byte *)(lVar21 + 0x3d98 +
                                               (ulong)(byte)((bVar2 & local_89) >> 4)) * 4);
              uVar23 = uVar8 | 0xff000000;
              uVar13 = uVar22;
              if ((bVar2 & 8) != 0) {
                uVar13 = uVar18;
              }
              lVar21 = 0;
              do {
                bVar2 = *(byte *)((ulong)bVar1 * 0x20 + lVar4 + (ulong)uVar13 + lVar21);
                uVar11 = uVar23;
                if ((bVar2 & 0x80) != 0) {
                  uVar11 = uVar30;
                }
                *puVar27 = uVar11;
                uVar31 = uVar23;
                uVar16 = uVar23;
                if (param_2 < 2) {
                  auVar34._1_3_ = 0;
                  auVar34[0] = bVar2;
                  auVar34[4] = bVar2;
                  auVar34._5_3_ = 0;
                  auVar34[8] = bVar2;
                  auVar34._9_3_ = 0;
                  auVar34[0xc] = bVar2;
                  auVar34._13_3_ = 0;
                  auVar34 = auVar34 & auVar7;
                  uVar11 = -(uint)(auVar34._0_4_ == 0);
                  uVar35 = -(uint)(auVar34._4_4_ == 0);
                  uVar36 = -(uint)(auVar34._8_4_ == 0);
                  uVar37 = -(uint)(auVar34._12_4_ == 0);
                  puVar27[1] = ~(uVar11 ^ 0xffffffff) & (uVar8 | 0xff000000) |
                               ~uVar11 & (uVar3 | 0xff000000);
                  puVar27[2] = ~(uVar35 ^ 0xffffffff) & (uVar8 | 0xff000000) |
                               ~uVar35 & (uVar3 | 0xff000000);
                  puVar27[3] = ~(uVar36 ^ 0xffffffff) & uVar23 | ~uVar36 & uVar30;
                  puVar27[4] = ~(uVar37 ^ 0xffffffff) & uVar23 | ~uVar37 & uVar30;
                  if ((bVar2 & 4) != 0) {
                    uVar31 = uVar30;
                  }
                  if ((bVar2 & 2) != 0) {
                    uVar16 = uVar30;
                  }
                  uVar11 = uVar23;
                  if ((bVar2 & 1) != 0) {
                    uVar11 = uVar30;
                  }
                  lVar20 = 8;
                }
                else {
                  puVar27[1] = uVar11;
                  uVar11 = uVar23;
                  if ((bVar2 & 0x40) != 0) {
                    uVar11 = uVar30;
                  }
                  puVar27[2] = uVar11;
                  puVar27[3] = uVar11;
                  if ((bVar2 & 0x20) != 0) {
                    uVar31 = uVar30;
                  }
                  puVar27[4] = uVar31;
                  if ((bVar2 & 0x10) != 0) {
                    uVar16 = uVar30;
                  }
                  uVar11 = uVar23;
                  if ((bVar2 & 8) != 0) {
                    uVar11 = uVar30;
                  }
                  puVar27[8] = uVar11;
                  puVar27[9] = uVar11;
                  uVar11 = uVar23;
                  if ((bVar2 & 4) != 0) {
                    uVar11 = uVar30;
                  }
                  puVar27[10] = uVar11;
                  puVar27[0xb] = uVar11;
                  uVar11 = uVar23;
                  if ((bVar2 & 2) != 0) {
                    uVar11 = uVar30;
                  }
                  puVar27[0xc] = uVar11;
                  puVar27[0xd] = uVar11;
                  uVar11 = uVar23;
                  if ((bVar2 & 1) != 0) {
                    uVar11 = uVar30;
                  }
                  puVar27[0xe] = uVar11;
                  puVar27[0xf] = uVar11;
                  lVar20 = 0x10;
                  uVar11 = uVar16;
                }
                puVar27[5] = uVar31;
                puVar27[6] = uVar16;
                puVar27[7] = uVar11;
                uVar11 = *(uint *)(param_1 + 0x938);
                puVar27 = puVar27 + (ulong)(uVar11 + param_2 * -8) + lVar20;
                uVar31 = *(uint *)(param_1 + 0x9844);
                lVar21 = lVar21 + 1;
              } while ((uint)lVar21 < uVar31);
            }
            if (uVar6 == uVar24) {
              uVar8 = *(byte *)(*(long *)(param_1 + 0x910) + 0x3d7c) & 0x3f;
              uVar13 = *(byte *)(*(long *)(param_1 + 0x910) + 0x3d7d) & 0x1f;
              uVar24 = uVar13 + 1;
              if (uVar31 < uVar24) {
                uVar24 = uVar31;
              }
              if (uVar8 < uVar24) {
                puVar27 = puVar27 + -(ulong)((uVar31 - uVar8) * uVar11);
                uVar24 = -uVar13 - 2;
                if (uVar24 < ~uVar31) {
                  uVar24 = ~uVar31;
                }
                do {
                  if (uVar28 != 0) {
                    puVar14 = puVar27 + 4;
                    lVar21 = lVar9;
                    do {
                      puVar14[-4] = uVar3 | 0xff000000;
                      puVar14[-3] = uVar3 | 0xff000000;
                      puVar14[-2] = uVar30;
                      puVar14[-1] = uVar30;
                      *puVar14 = uVar3 | 0xff000000;
                      puVar14[1] = uVar3 | 0xff000000;
                      puVar14[2] = uVar30;
                      puVar14[3] = uVar30;
                      puVar14 = puVar14 + 8;
                      lVar21 = lVar21 + -8;
                    } while (lVar21 != 0);
                    puVar27 = puVar27 + lVar9;
                    uVar11 = *(uint *)(param_1 + 0x938);
                  }
                  puVar27 = puVar27 + (uVar11 + param_2 * -8);
                  uVar8 = uVar8 + 1;
                } while (uVar8 != ~uVar24);
              }
            }
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 < uVar5 / uVar28);
      }
      uVar24 = (uint)uVar26;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar12);
  }
  *(uint *)(param_1 + 0x9848) = uVar6;
  if ((local_44 <= uVar19) && (local_48 <= uVar24)) {
    uVar12 = local_48 * param_2 * 8;
    uVar11 = local_44 * param_3 * *(int *)(param_1 + 0x9844);
    if (uVar12 < *(uint *)(param_1 + 0x950)) {
      *(uint *)(param_1 + 0x950) = uVar12;
    }
    param_2 = (uVar24 * 8 + 8) * param_2;
    if (uVar11 < *(uint *)(param_1 + 0x954)) {
      *(uint *)(param_1 + 0x954) = uVar11;
    }
    uVar11 = (uVar19 + 1) * param_3 * *(int *)(param_1 + 0x9844);
    if (*(uint *)(param_1 + 0x958) < param_2) {
      *(uint *)(param_1 + 0x958) = param_2;
    }
    if (*(uint *)(param_1 + 0x95c) < uVar11) {
      *(uint *)(param_1 + 0x95c) = uVar11;
    }
  }
  return;
}

