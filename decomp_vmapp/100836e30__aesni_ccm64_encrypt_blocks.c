
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _aesni_ccm64_encrypt_blocks
               (uint *param_1,uint *param_2,long param_3,uint *param_4,undefined1 (*param_5) [16],
               undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long lVar26;
  
  lVar11 = _UNK_100838928;
  lVar10 = _DAT_100838920;
  auVar9 = _DAT_100838900;
  uVar2 = param_4[0x3c];
  auVar23 = *param_5;
  auVar24 = *param_6;
  auVar25 = pshufb(auVar23,_DAT_100838900);
  do {
    uVar5 = *param_1;
    uVar6 = param_1[1];
    uVar7 = param_1[2];
    uVar8 = param_1[3];
    auVar22._0_4_ = auVar23._0_4_ ^ *param_4;
    auVar22._4_4_ = auVar23._4_4_ ^ param_4[1];
    auVar22._8_4_ = auVar23._8_4_ ^ param_4[2];
    auVar22._12_4_ = auVar23._12_4_ ^ param_4[3];
    uVar18 = param_4[4];
    uVar19 = param_4[5];
    uVar20 = param_4[6];
    uVar21 = param_4[7];
    pauVar13 = (undefined1 (*) [16])(param_4 + 8);
    auVar23._0_4_ = auVar24._0_4_ ^ *param_4 ^ uVar5;
    auVar23._4_4_ = auVar24._4_4_ ^ param_4[1] ^ uVar6;
    auVar23._8_4_ = auVar24._8_4_ ^ param_4[2] ^ uVar7;
    auVar23._12_4_ = auVar24._12_4_ ^ param_4[3] ^ uVar8;
    uVar14 = *(undefined4 *)*pauVar13;
    uVar15 = param_4[9];
    uVar16 = param_4[10];
    uVar17 = param_4[0xb];
    uVar12 = uVar2 >> 1;
    do {
      auVar24._4_4_ = uVar19;
      auVar24._0_4_ = uVar18;
      auVar24._8_4_ = uVar20;
      auVar24._12_4_ = uVar21;
      auVar22 = aesenc(auVar22,auVar24);
      uVar12 = uVar12 - 1;
      auVar4._4_4_ = uVar19;
      auVar4._0_4_ = uVar18;
      auVar4._8_4_ = uVar20;
      auVar4._12_4_ = uVar21;
      auVar23 = aesenc(auVar23,auVar4);
      auVar24 = pauVar13[1];
      uVar18 = auVar24._0_4_;
      uVar19 = auVar24._4_4_;
      uVar20 = auVar24._8_4_;
      uVar21 = auVar24._12_4_;
      auVar1._4_4_ = uVar15;
      auVar1._0_4_ = uVar14;
      auVar1._8_4_ = uVar16;
      auVar1._12_4_ = uVar17;
      auVar22 = aesenc(auVar22,auVar1);
      pauVar13 = pauVar13 + 2;
      auVar3._4_4_ = uVar15;
      auVar3._0_4_ = uVar14;
      auVar3._8_4_ = uVar16;
      auVar3._12_4_ = uVar17;
      auVar23 = aesenc(auVar23,auVar3);
      auVar1 = *pauVar13;
      uVar14 = auVar1._0_4_;
      uVar15 = auVar1._4_4_;
      uVar16 = auVar1._8_4_;
      uVar17 = auVar1._12_4_;
    } while (uVar12 != 0);
    auVar22 = aesenc(auVar22,auVar24);
    auVar24 = aesenc(auVar23,auVar24);
    lVar26 = auVar25._8_8_;
    auVar25._0_8_ = auVar25._0_8_ + lVar10;
    auVar25._8_8_ = lVar26 + lVar11;
    auVar23 = aesenclast(auVar22,auVar1);
    auVar24 = aesenclast(auVar24,auVar1);
    param_3 = param_3 + -1;
    param_1 = param_1 + 4;
    *param_2 = uVar5 ^ auVar23._0_4_;
    param_2[1] = uVar6 ^ auVar23._4_4_;
    param_2[2] = uVar7 ^ auVar23._8_4_;
    param_2[3] = uVar8 ^ auVar23._12_4_;
    param_2 = param_2 + 4;
    auVar23 = pshufb(auVar25,auVar9);
  } while (param_3 != 0);
  *param_6 = auVar24;
  return;
}

