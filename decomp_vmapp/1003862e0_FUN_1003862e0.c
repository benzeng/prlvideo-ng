
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003862e0(long *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined1 auVar17 [16];
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
  int iVar29;
  int iVar31;
  int iVar32;
  undefined1 auVar30 [16];
  int iVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar36;
  uint uVar37;
  
  lVar15 = 0;
  if (*(long **)(param_2 + 0x48) != *(long **)(param_2 + 0x40)) {
    lVar15 = **(long **)(param_2 + 0x40);
  }
  (**(code **)(*param_1 + 0x30))();
  iVar7 = FUN_10032df20(param_2);
  uVar5 = _UNK_100b3e26c;
  uVar4 = _UNK_100b3e268;
  uVar3 = _UNK_100b3e264;
  uVar2 = _DAT_100b3e260;
  if (iVar7 != 0) {
    uVar1 = *(uint *)(lVar15 + 0x10);
    uVar16 = uVar1 - 1 & 0xfffffff8;
    uVar8 = uVar16 - 8 >> 3;
    uVar14 = 0;
    uVar16 = uVar16 | 1;
    auVar30 = _DAT_100b2ea30;
    auVar34 = _PTR___mh_execute_header_100b2dd90;
    auVar35 = _DAT_100b2ea20;
    iVar36 = _DAT_100b2dda0;
    uVar37 = _UNK_100b2dda8;
    do {
      iVar13 = (int)uVar14;
      if ((*(byte *)(*(long *)(lVar15 + 0x88) + uVar14 * 4) & 1) == 0) {
        FUN_100383600(param_1,param_2,uVar14 & 0xffffffff,0);
        auVar30 = _DAT_100b2ea30;
        auVar34 = _PTR___mh_execute_header_100b2dd90;
        auVar35 = _DAT_100b2ea20;
        iVar36 = _DAT_100b2dda0;
        uVar37 = _UNK_100b2dda8;
      }
      if (1 < uVar1) {
        uVar11 = *(uint *)(*(long *)(lVar15 + 0x88) + uVar14 * 4);
        uVar9 = 1;
        if (uVar1 == 1) {
LAB_10038653d:
          uVar12 = (uVar1 - 1) - uVar9;
          if ((uVar1 - uVar9 & 7) != 0) {
            iVar10 = -(uVar1 - uVar9 & 7);
            do {
              uVar11 = uVar11 | 1 << ((byte)uVar9 & 0x1f);
              uVar9 = uVar9 + 1;
              iVar10 = iVar10 + 1;
            } while (iVar10 != 0);
          }
          if (6 < uVar12) {
            do {
              bVar6 = (byte)uVar9;
              uVar11 = 1 << (bVar6 + 7 & 0x1f) |
                       1 << (bVar6 + 6 & 0x1f) |
                       1 << (bVar6 + 5 & 0x1f) |
                       1 << (bVar6 + 4 & 0x1f) |
                       1 << (bVar6 + 3 & 0x1f) |
                       1 << (bVar6 + 2 & 0x1f) |
                       1 << (bVar6 + 1 & 0x1f) | 1 << (bVar6 & 0x1f) | uVar11;
              uVar9 = uVar9 + 8;
            } while (uVar9 != uVar1);
          }
        }
        else {
          auVar17 = ZEXT416(uVar11);
          if (uVar16 == 1) {
            auVar24 = ZEXT816(0);
            uVar9 = 1;
          }
          else {
            if ((uVar8 + 1 & 1) == 0) {
              auVar22 = ZEXT816(0);
              uVar11 = 1;
            }
            else {
              auVar17 = auVar17 | _DAT_100b3e270;
              uVar11 = 9;
              auVar22._4_4_ = uVar3;
              auVar22._0_4_ = uVar2;
              auVar22._8_4_ = uVar4;
              auVar22._12_4_ = uVar5;
            }
            auVar24._4_4_ = uVar3;
            auVar24._0_4_ = uVar2;
            auVar24._8_4_ = uVar4;
            auVar24._12_4_ = uVar5;
            uVar9 = uVar16;
            if (uVar8 != 0) {
              do {
                iVar29 = auVar30._0_4_;
                iVar31 = auVar30._4_4_;
                iVar32 = auVar30._8_4_;
                iVar33 = auVar30._12_4_;
                auVar25._0_4_ = (int)(float)((uVar11 + auVar34._0_4_) * 0x800000 + iVar29);
                auVar25._4_4_ = (int)(float)((uVar11 + auVar34._4_4_) * 0x800000 + iVar31);
                auVar25._8_4_ = (int)(float)((uVar11 + auVar34._8_4_) * 0x800000 + iVar32);
                auVar25._12_4_ = (int)(float)((uVar11 + auVar34._12_4_) * 0x800000 + iVar33);
                auVar26._0_4_ = auVar25._0_4_ * iVar36;
                auVar26._8_4_ = (undefined4)((auVar25._8_8_ & 0xffffffff) * (ulong)uVar37);
                auVar26._4_4_ = auVar25._4_4_ * iVar36;
                auVar26._12_4_ = auVar25._12_4_ * uVar37;
                auVar27._0_4_ = (int)(float)((uVar11 + auVar35._0_4_) * 0x800000 + iVar29);
                auVar27._4_4_ = (int)(float)((uVar11 + auVar35._4_4_) * 0x800000 + iVar31);
                auVar27._8_4_ = (int)(float)((uVar11 + auVar35._8_4_) * 0x800000 + iVar32);
                auVar27._12_4_ = (int)(float)((uVar11 + auVar35._12_4_) * 0x800000 + iVar33);
                auVar28._0_4_ = auVar27._0_4_ * iVar36;
                auVar28._8_4_ = (undefined4)((auVar27._8_8_ & 0xffffffff) * (ulong)uVar37);
                auVar28._4_4_ = auVar27._4_4_ * iVar36;
                auVar28._12_4_ = auVar27._12_4_ * uVar37;
                iVar10 = uVar11 + 8;
                auVar18._0_4_ = (int)(float)((iVar10 + auVar34._0_4_) * 0x800000 + iVar29);
                auVar18._4_4_ = (int)(float)((iVar10 + auVar34._4_4_) * 0x800000 + iVar31);
                auVar18._8_4_ = (int)(float)((iVar10 + auVar34._8_4_) * 0x800000 + iVar32);
                auVar18._12_4_ = (int)(float)((iVar10 + auVar34._12_4_) * 0x800000 + iVar33);
                auVar19._0_4_ = auVar18._0_4_ * iVar36;
                auVar19._8_4_ = (undefined4)((auVar18._8_8_ & 0xffffffff) * (ulong)uVar37);
                auVar19._4_4_ = auVar18._4_4_ * iVar36;
                auVar19._12_4_ = auVar18._12_4_ * uVar37;
                auVar20._0_4_ = (int)(float)((iVar10 + auVar35._0_4_) * 0x800000 + iVar29);
                auVar20._4_4_ = (int)(float)((iVar10 + auVar35._4_4_) * 0x800000 + iVar31);
                auVar20._8_4_ = (int)(float)((iVar10 + auVar35._8_4_) * 0x800000 + iVar32);
                auVar20._12_4_ = (int)(float)((iVar10 + auVar35._12_4_) * 0x800000 + iVar33);
                auVar21._0_4_ = auVar20._0_4_ * iVar36;
                auVar21._8_4_ = (undefined4)((auVar20._8_8_ & 0xffffffff) * (ulong)uVar37);
                auVar21._4_4_ = auVar20._4_4_ * iVar36;
                auVar21._12_4_ = auVar20._12_4_ * uVar37;
                auVar17 = auVar19 | auVar26 | auVar17;
                auVar22 = auVar21 | auVar28 | auVar22;
                uVar11 = uVar11 + 0x10;
                auVar24 = auVar22;
              } while (uVar11 != uVar16);
            }
          }
          auVar17 = auVar17 | auVar24;
          auVar23._0_8_ = auVar17._8_8_;
          auVar23._8_4_ = auVar17._0_4_;
          auVar23._12_4_ = auVar17._4_4_;
          uVar11 = SUB164(auVar23 | auVar17,4) | SUB164(auVar23 | auVar17,0);
          if (uVar1 != uVar9) goto LAB_10038653d;
        }
        *(uint *)(*(long *)(lVar15 + 0x88) + uVar14 * 4) = uVar11;
      }
      uVar14 = uVar14 + 1;
    } while (iVar13 != iVar7 + -1);
  }
  (*DAT_1011c5768)(*(undefined4 *)(lVar15 + 0x14),*(undefined4 *)(lVar15 + 0xc));
  (*DAT_1011c5ea0)(*(undefined4 *)(lVar15 + 0x14));
                    /* WARNING: Could not recover jumptable at 0x00010038662e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5768)(*(undefined4 *)(lVar15 + 0x14),0);
  return;
}

