
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100385f10(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar30;
  int iVar32;
  int iVar33;
  undefined1 auVar31 [16];
  int iVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar37;
  uint uVar38;
  
  lVar14 = 0;
  if (*(long **)(param_2 + 0x48) != *(long **)(param_2 + 0x40)) {
    lVar14 = **(long **)(param_2 + 0x40);
  }
  uVar6 = (**(code **)(*param_1 + 0x30))();
  iVar7 = FUN_10032df20(param_2);
  uVar4 = _UNK_100b3e26c;
  uVar3 = _UNK_100b3e268;
  uVar2 = _UNK_100b3e264;
  uVar1 = _DAT_100b3e260;
  if (iVar7 != 0) {
    uVar10 = *(uint *)(lVar14 + 0x10);
    uVar17 = uVar10 - 1 & 0xfffffff8;
    uVar8 = uVar17 - 8 >> 3;
    uVar16 = 0;
    uVar17 = uVar17 | 1;
    auVar31 = _DAT_100b2ea30;
    auVar35 = _PTR___mh_execute_header_100b2dd90;
    auVar36 = _DAT_100b2ea20;
    iVar37 = _DAT_100b2dda0;
    uVar38 = _UNK_100b2dda8;
    do {
      iVar15 = (int)uVar16;
      if ((*(byte *)(*(long *)(lVar14 + 0x88) + uVar16 * 4) & 1) == 0) {
        FUN_100383600(param_1,param_2,uVar16 & 0xffffffff,0);
        auVar31 = _DAT_100b2ea30;
        auVar35 = _PTR___mh_execute_header_100b2dd90;
        auVar36 = _DAT_100b2ea20;
        iVar37 = _DAT_100b2dda0;
        uVar38 = _UNK_100b2dda8;
      }
      if (1 < uVar10) {
        uVar12 = *(uint *)(*(long *)(lVar14 + 0x88) + uVar16 * 4);
        uVar9 = 1;
        if (uVar10 == 1) {
LAB_10038616d:
          uVar13 = (uVar10 - 1) - uVar9;
          if ((uVar10 - uVar9 & 7) != 0) {
            iVar11 = -(uVar10 - uVar9 & 7);
            do {
              uVar12 = uVar12 | 1 << ((byte)uVar9 & 0x1f);
              uVar9 = uVar9 + 1;
              iVar11 = iVar11 + 1;
            } while (iVar11 != 0);
          }
          if (6 < uVar13) {
            do {
              bVar5 = (byte)uVar9;
              uVar12 = 1 << (bVar5 + 7 & 0x1f) |
                       1 << (bVar5 + 6 & 0x1f) |
                       1 << (bVar5 + 5 & 0x1f) |
                       1 << (bVar5 + 4 & 0x1f) |
                       1 << (bVar5 + 3 & 0x1f) |
                       1 << (bVar5 + 2 & 0x1f) |
                       1 << (bVar5 + 1 & 0x1f) | 1 << (bVar5 & 0x1f) | uVar12;
              uVar9 = uVar9 + 8;
            } while (uVar9 != uVar10);
          }
        }
        else {
          auVar18 = ZEXT416(uVar12);
          if (uVar17 == 1) {
            auVar25 = ZEXT816(0);
            uVar9 = 1;
          }
          else {
            if ((uVar8 + 1 & 1) == 0) {
              auVar23 = ZEXT816(0);
              uVar12 = 1;
            }
            else {
              auVar18 = auVar18 | _DAT_100b3e270;
              uVar12 = 9;
              auVar23._4_4_ = uVar2;
              auVar23._0_4_ = uVar1;
              auVar23._8_4_ = uVar3;
              auVar23._12_4_ = uVar4;
            }
            auVar25._4_4_ = uVar2;
            auVar25._0_4_ = uVar1;
            auVar25._8_4_ = uVar3;
            auVar25._12_4_ = uVar4;
            uVar9 = uVar17;
            if (uVar8 != 0) {
              do {
                iVar30 = auVar31._0_4_;
                iVar32 = auVar31._4_4_;
                iVar33 = auVar31._8_4_;
                iVar34 = auVar31._12_4_;
                auVar26._0_4_ = (int)(float)((uVar12 + auVar35._0_4_) * 0x800000 + iVar30);
                auVar26._4_4_ = (int)(float)((uVar12 + auVar35._4_4_) * 0x800000 + iVar32);
                auVar26._8_4_ = (int)(float)((uVar12 + auVar35._8_4_) * 0x800000 + iVar33);
                auVar26._12_4_ = (int)(float)((uVar12 + auVar35._12_4_) * 0x800000 + iVar34);
                auVar27._0_4_ = auVar26._0_4_ * iVar37;
                auVar27._8_4_ = (undefined4)((auVar26._8_8_ & 0xffffffff) * (ulong)uVar38);
                auVar27._4_4_ = auVar26._4_4_ * iVar37;
                auVar27._12_4_ = auVar26._12_4_ * uVar38;
                auVar28._0_4_ = (int)(float)((uVar12 + auVar36._0_4_) * 0x800000 + iVar30);
                auVar28._4_4_ = (int)(float)((uVar12 + auVar36._4_4_) * 0x800000 + iVar32);
                auVar28._8_4_ = (int)(float)((uVar12 + auVar36._8_4_) * 0x800000 + iVar33);
                auVar28._12_4_ = (int)(float)((uVar12 + auVar36._12_4_) * 0x800000 + iVar34);
                auVar29._0_4_ = auVar28._0_4_ * iVar37;
                auVar29._8_4_ = (undefined4)((auVar28._8_8_ & 0xffffffff) * (ulong)uVar38);
                auVar29._4_4_ = auVar28._4_4_ * iVar37;
                auVar29._12_4_ = auVar28._12_4_ * uVar38;
                iVar11 = uVar12 + 8;
                auVar19._0_4_ = (int)(float)((iVar11 + auVar35._0_4_) * 0x800000 + iVar30);
                auVar19._4_4_ = (int)(float)((iVar11 + auVar35._4_4_) * 0x800000 + iVar32);
                auVar19._8_4_ = (int)(float)((iVar11 + auVar35._8_4_) * 0x800000 + iVar33);
                auVar19._12_4_ = (int)(float)((iVar11 + auVar35._12_4_) * 0x800000 + iVar34);
                auVar20._0_4_ = auVar19._0_4_ * iVar37;
                auVar20._8_4_ = (undefined4)((auVar19._8_8_ & 0xffffffff) * (ulong)uVar38);
                auVar20._4_4_ = auVar19._4_4_ * iVar37;
                auVar20._12_4_ = auVar19._12_4_ * uVar38;
                auVar21._0_4_ = (int)(float)((iVar11 + auVar36._0_4_) * 0x800000 + iVar30);
                auVar21._4_4_ = (int)(float)((iVar11 + auVar36._4_4_) * 0x800000 + iVar32);
                auVar21._8_4_ = (int)(float)((iVar11 + auVar36._8_4_) * 0x800000 + iVar33);
                auVar21._12_4_ = (int)(float)((iVar11 + auVar36._12_4_) * 0x800000 + iVar34);
                auVar22._0_4_ = auVar21._0_4_ * iVar37;
                auVar22._8_4_ = (undefined4)((auVar21._8_8_ & 0xffffffff) * (ulong)uVar38);
                auVar22._4_4_ = auVar21._4_4_ * iVar37;
                auVar22._12_4_ = auVar21._12_4_ * uVar38;
                auVar18 = auVar20 | auVar27 | auVar18;
                auVar23 = auVar22 | auVar29 | auVar23;
                uVar12 = uVar12 + 0x10;
                auVar25 = auVar23;
              } while (uVar12 != uVar17);
            }
          }
          auVar18 = auVar18 | auVar25;
          auVar24._0_8_ = auVar18._8_8_;
          auVar24._8_4_ = auVar18._0_4_;
          auVar24._12_4_ = auVar18._4_4_;
          uVar12 = SUB164(auVar24 | auVar18,4) | SUB164(auVar24 | auVar18,0);
          if (uVar10 != uVar9) goto LAB_10038616d;
        }
        *(uint *)(*(long *)(lVar14 + 0x88) + uVar16 * 4) = uVar12;
      }
      uVar16 = uVar16 + 1;
    } while (iVar15 != iVar7 + -1);
  }
  (*DAT_1011c5768)(*(undefined4 *)(lVar14 + 0x14),*(undefined4 *)(lVar14 + 0xc));
  if ((*(byte *)(lVar14 + 0xac) & 8) == 0) {
    uVar10 = *(uint *)(lVar14 + 0x1c);
    if ((int)uVar10 < 0x66) {
      if (8 < uVar10) goto LAB_1003862ab;
      uVar38 = 0x10a;
    }
    else {
      uVar10 = uVar10 - 0x66;
      if (0xc < uVar10) goto LAB_1003862ab;
      uVar38 = 0x1015;
    }
    if ((uVar38 >> (uVar10 & 0x1f) & 1) != 0) {
      if (*(char *)(DAT_1011c8478 + 0x84) != '\0') {
        (*DAT_1011c5760)(uVar6,0);
      }
      FUN_1003992d0(lVar14);
      (*DAT_1011c6cd8)(*(undefined4 *)(lVar14 + 0x14),0x8a48,0x8a4a);
    }
  }
LAB_1003862ab:
  (*DAT_1011c5ea0)(*(undefined4 *)(lVar14 + 0x14));
                    /* WARNING: Could not recover jumptable at 0x0001003862cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5768)(*(undefined4 *)(lVar14 + 0x14),0);
  return;
}

