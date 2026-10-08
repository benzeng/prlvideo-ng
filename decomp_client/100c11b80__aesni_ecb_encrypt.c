
void _aesni_ecb_encrypt(uint *param_1,undefined1 (*param_2) [16],ulong param_3,uint *param_4,
                       int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 (*pauVar4) [16];
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  param_3 = param_3 & 0xfffffffffffffff0;
  if (param_3 != 0) {
    uVar3 = param_4[0x3c];
    uVar6 = *param_4;
    uVar5 = (ulong)uVar3;
    if (param_5 == 0) {
      if (0x7f < param_3) {
        uVar11 = *(undefined8 *)param_1;
        uVar16 = *(undefined8 *)(param_1 + 2);
        uVar18 = *(undefined8 *)(param_1 + 4);
        uVar19 = *(undefined8 *)(param_1 + 6);
        uVar20 = *(undefined8 *)(param_1 + 8);
        uVar21 = *(undefined8 *)(param_1 + 10);
        uVar22 = *(undefined8 *)(param_1 + 0xc);
        uVar23 = *(undefined8 *)(param_1 + 0xe);
        uVar24 = *(undefined8 *)(param_1 + 0x10);
        uVar25 = *(undefined8 *)(param_1 + 0x12);
        uVar26 = *(undefined8 *)(param_1 + 0x14);
        uVar27 = *(undefined8 *)(param_1 + 0x16);
        uVar28 = *(undefined8 *)(param_1 + 0x18);
        uVar29 = *(undefined8 *)(param_1 + 0x1a);
        uVar30 = *(undefined8 *)(param_1 + 0x1c);
        uVar31 = *(undefined8 *)(param_1 + 0x1e);
        while( true ) {
          param_1 = param_1 + 0x20;
          FUN_100c11a50(uVar6,param_1,param_2,param_3 - 0x80,param_4);
          uVar6 = *param_4;
          param_3 = extraout_RDX_00;
          if (extraout_RDX_00 < 0x80) break;
          *(undefined8 *)*param_2 = uVar11;
          *(undefined8 *)(*param_2 + 8) = uVar16;
          uVar11 = *(undefined8 *)param_1;
          uVar16 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)param_2[1] = uVar18;
          *(undefined8 *)(param_2[1] + 8) = uVar19;
          uVar18 = *(undefined8 *)(param_1 + 4);
          uVar19 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_2[2] = uVar20;
          *(undefined8 *)(param_2[2] + 8) = uVar21;
          uVar20 = *(undefined8 *)(param_1 + 8);
          uVar21 = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)param_2[3] = uVar22;
          *(undefined8 *)(param_2[3] + 8) = uVar23;
          uVar22 = *(undefined8 *)(param_1 + 0xc);
          uVar23 = *(undefined8 *)(param_1 + 0xe);
          *(undefined8 *)param_2[4] = uVar24;
          *(undefined8 *)(param_2[4] + 8) = uVar25;
          uVar24 = *(undefined8 *)(param_1 + 0x10);
          uVar25 = *(undefined8 *)(param_1 + 0x12);
          *(undefined8 *)param_2[5] = uVar26;
          *(undefined8 *)(param_2[5] + 8) = uVar27;
          uVar26 = *(undefined8 *)(param_1 + 0x14);
          uVar27 = *(undefined8 *)(param_1 + 0x16);
          *(undefined8 *)param_2[6] = uVar28;
          *(undefined8 *)(param_2[6] + 8) = uVar29;
          uVar28 = *(undefined8 *)(param_1 + 0x18);
          uVar29 = *(undefined8 *)(param_1 + 0x1a);
          *(undefined8 *)param_2[7] = uVar30;
          *(undefined8 *)(param_2[7] + 8) = uVar31;
          param_2 = param_2 + 8;
          uVar30 = *(undefined8 *)(param_1 + 0x1c);
          uVar31 = *(undefined8 *)(param_1 + 0x1e);
        }
        *(undefined8 *)*param_2 = uVar11;
        *(undefined8 *)(*param_2 + 8) = uVar16;
        *(undefined8 *)param_2[1] = uVar18;
        *(undefined8 *)(param_2[1] + 8) = uVar19;
        uVar3 = (uint)uVar5;
        *(undefined8 *)param_2[2] = uVar20;
        *(undefined8 *)(param_2[2] + 8) = uVar21;
        *(undefined8 *)param_2[3] = uVar22;
        *(undefined8 *)(param_2[3] + 8) = uVar23;
        *(undefined8 *)param_2[4] = uVar24;
        *(undefined8 *)(param_2[4] + 8) = uVar25;
        *(undefined8 *)param_2[5] = uVar26;
        *(undefined8 *)(param_2[5] + 8) = uVar27;
        *(undefined8 *)param_2[6] = uVar28;
        *(undefined8 *)(param_2[6] + 8) = uVar29;
        *(undefined8 *)param_2[7] = uVar30;
        *(undefined8 *)(param_2[7] + 8) = uVar31;
        param_2 = param_2 + 8;
        if (extraout_RDX_00 == 0) {
          return;
        }
      }
      uVar6 = *param_1;
      uVar14 = param_1[1];
      uVar15 = param_1[2];
      uVar17 = param_1[3];
      if (param_3 < 0x20) {
        uVar7 = param_4[4];
        uVar8 = param_4[5];
        uVar9 = param_4[6];
        uVar10 = param_4[7];
        pauVar4 = (undefined1 (*) [16])(param_4 + 8);
        auVar13._0_4_ = uVar6 ^ *param_4;
        auVar13._4_4_ = uVar14 ^ param_4[1];
        auVar13._8_4_ = uVar15 ^ param_4[2];
        auVar13._12_4_ = uVar17 ^ param_4[3];
        do {
          auVar1._4_4_ = uVar8;
          auVar1._0_4_ = uVar7;
          auVar1._8_4_ = uVar9;
          auVar1._12_4_ = uVar10;
          auVar13 = aesdec(auVar13,auVar1);
          uVar3 = uVar3 - 1;
          auVar1 = *pauVar4;
          uVar7 = auVar1._0_4_;
          uVar8 = auVar1._4_4_;
          uVar9 = auVar1._8_4_;
          uVar10 = auVar1._12_4_;
          pauVar4 = pauVar4 + 1;
        } while (uVar3 != 0);
        auVar13 = aesdeclast(auVar13,auVar1);
        *param_2 = auVar13;
      }
      else {
        uVar11 = *(undefined8 *)(param_1 + 4);
        uVar16 = *(undefined8 *)(param_1 + 6);
        if (param_3 == 0x20) {
          FUN_100c115f0();
          *(uint *)*param_2 = uVar6;
          *(uint *)(*param_2 + 4) = uVar14;
          *(uint *)(*param_2 + 8) = uVar15;
          *(uint *)(*param_2 + 0xc) = uVar17;
          *(undefined8 *)param_2[1] = uVar11;
          *(undefined8 *)(param_2[1] + 8) = uVar16;
        }
        else {
          uVar18 = *(undefined8 *)(param_1 + 8);
          uVar19 = *(undefined8 *)(param_1 + 10);
          if (param_3 < 0x40) {
            FUN_100c115f0();
            *(uint *)*param_2 = uVar6;
            *(uint *)(*param_2 + 4) = uVar14;
            *(uint *)(*param_2 + 8) = uVar15;
            *(uint *)(*param_2 + 0xc) = uVar17;
            *(undefined8 *)param_2[1] = uVar11;
            *(undefined8 *)(param_2[1] + 8) = uVar16;
            *(undefined8 *)param_2[2] = uVar18;
            *(undefined8 *)(param_2[2] + 8) = uVar19;
          }
          else {
            uVar20 = *(undefined8 *)(param_1 + 0xc);
            uVar21 = *(undefined8 *)(param_1 + 0xe);
            if (param_3 == 0x40) {
              FUN_100c116e0();
              *(uint *)*param_2 = uVar6;
              *(uint *)(*param_2 + 4) = uVar14;
              *(uint *)(*param_2 + 8) = uVar15;
              *(uint *)(*param_2 + 0xc) = uVar17;
              *(undefined8 *)param_2[1] = uVar11;
              *(undefined8 *)(param_2[1] + 8) = uVar16;
              *(undefined8 *)param_2[2] = uVar18;
              *(undefined8 *)(param_2[2] + 8) = uVar19;
              *(undefined8 *)param_2[3] = uVar20;
              *(undefined8 *)(param_2[3] + 8) = uVar21;
            }
            else {
              uVar22 = *(undefined8 *)(param_1 + 0x10);
              uVar23 = *(undefined8 *)(param_1 + 0x12);
              if (param_3 < 0x60) {
                FUN_100c11840();
                *(uint *)*param_2 = uVar6;
                *(uint *)(*param_2 + 4) = uVar14;
                *(uint *)(*param_2 + 8) = uVar15;
                *(uint *)(*param_2 + 0xc) = uVar17;
                *(undefined8 *)param_2[1] = uVar11;
                *(undefined8 *)(param_2[1] + 8) = uVar16;
                *(undefined8 *)param_2[2] = uVar18;
                *(undefined8 *)(param_2[2] + 8) = uVar19;
                *(undefined8 *)param_2[3] = uVar20;
                *(undefined8 *)(param_2[3] + 8) = uVar21;
                *(undefined8 *)param_2[4] = uVar22;
                *(undefined8 *)(param_2[4] + 8) = uVar23;
              }
              else {
                uVar24 = *(undefined8 *)(param_1 + 0x14);
                uVar25 = *(undefined8 *)(param_1 + 0x16);
                if (param_3 == 0x60) {
                  FUN_100c11840();
                  *(uint *)*param_2 = uVar6;
                  *(uint *)(*param_2 + 4) = uVar14;
                  *(uint *)(*param_2 + 8) = uVar15;
                  *(uint *)(*param_2 + 0xc) = uVar17;
                  *(undefined8 *)param_2[1] = uVar11;
                  *(undefined8 *)(param_2[1] + 8) = uVar16;
                  *(undefined8 *)param_2[2] = uVar18;
                  *(undefined8 *)(param_2[2] + 8) = uVar19;
                  *(undefined8 *)param_2[3] = uVar20;
                  *(undefined8 *)(param_2[3] + 8) = uVar21;
                  *(undefined8 *)param_2[4] = uVar22;
                  *(undefined8 *)(param_2[4] + 8) = uVar23;
                  *(undefined8 *)param_2[5] = uVar24;
                  *(undefined8 *)(param_2[5] + 8) = uVar25;
                }
                else {
                  uVar26 = *(undefined8 *)(param_1 + 0x18);
                  uVar27 = *(undefined8 *)(param_1 + 0x1a);
                  FUN_100c11a50(*param_4);
                  *(uint *)*param_2 = uVar6;
                  *(uint *)(*param_2 + 4) = uVar14;
                  *(uint *)(*param_2 + 8) = uVar15;
                  *(uint *)(*param_2 + 0xc) = uVar17;
                  *(undefined8 *)param_2[1] = uVar11;
                  *(undefined8 *)(param_2[1] + 8) = uVar16;
                  *(undefined8 *)param_2[2] = uVar18;
                  *(undefined8 *)(param_2[2] + 8) = uVar19;
                  *(undefined8 *)param_2[3] = uVar20;
                  *(undefined8 *)(param_2[3] + 8) = uVar21;
                  *(undefined8 *)param_2[4] = uVar22;
                  *(undefined8 *)(param_2[4] + 8) = uVar23;
                  *(undefined8 *)param_2[5] = uVar24;
                  *(undefined8 *)(param_2[5] + 8) = uVar25;
                  *(undefined8 *)param_2[6] = uVar26;
                  *(undefined8 *)(param_2[6] + 8) = uVar27;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (0x7f < param_3) {
        uVar11 = *(undefined8 *)param_1;
        uVar16 = *(undefined8 *)(param_1 + 2);
        uVar18 = *(undefined8 *)(param_1 + 4);
        uVar19 = *(undefined8 *)(param_1 + 6);
        uVar20 = *(undefined8 *)(param_1 + 8);
        uVar21 = *(undefined8 *)(param_1 + 10);
        uVar22 = *(undefined8 *)(param_1 + 0xc);
        uVar23 = *(undefined8 *)(param_1 + 0xe);
        uVar24 = *(undefined8 *)(param_1 + 0x10);
        uVar25 = *(undefined8 *)(param_1 + 0x12);
        uVar26 = *(undefined8 *)(param_1 + 0x14);
        uVar27 = *(undefined8 *)(param_1 + 0x16);
        uVar28 = *(undefined8 *)(param_1 + 0x18);
        uVar29 = *(undefined8 *)(param_1 + 0x1a);
        uVar30 = *(undefined8 *)(param_1 + 0x1c);
        uVar31 = *(undefined8 *)(param_1 + 0x1e);
        while( true ) {
          param_1 = param_1 + 0x20;
          FUN_100c11920(param_1,param_2,param_3 - 0x80,param_4);
          param_3 = extraout_RDX;
          if (extraout_RDX < 0x80) break;
          *(undefined8 *)*param_2 = uVar11;
          *(undefined8 *)(*param_2 + 8) = uVar16;
          uVar11 = *(undefined8 *)param_1;
          uVar16 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)param_2[1] = uVar18;
          *(undefined8 *)(param_2[1] + 8) = uVar19;
          uVar18 = *(undefined8 *)(param_1 + 4);
          uVar19 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_2[2] = uVar20;
          *(undefined8 *)(param_2[2] + 8) = uVar21;
          uVar20 = *(undefined8 *)(param_1 + 8);
          uVar21 = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)param_2[3] = uVar22;
          *(undefined8 *)(param_2[3] + 8) = uVar23;
          uVar22 = *(undefined8 *)(param_1 + 0xc);
          uVar23 = *(undefined8 *)(param_1 + 0xe);
          *(undefined8 *)param_2[4] = uVar24;
          *(undefined8 *)(param_2[4] + 8) = uVar25;
          uVar24 = *(undefined8 *)(param_1 + 0x10);
          uVar25 = *(undefined8 *)(param_1 + 0x12);
          *(undefined8 *)param_2[5] = uVar26;
          *(undefined8 *)(param_2[5] + 8) = uVar27;
          uVar26 = *(undefined8 *)(param_1 + 0x14);
          uVar27 = *(undefined8 *)(param_1 + 0x16);
          *(undefined8 *)param_2[6] = uVar28;
          *(undefined8 *)(param_2[6] + 8) = uVar29;
          uVar28 = *(undefined8 *)(param_1 + 0x18);
          uVar29 = *(undefined8 *)(param_1 + 0x1a);
          *(undefined8 *)param_2[7] = uVar30;
          *(undefined8 *)(param_2[7] + 8) = uVar31;
          param_2 = param_2 + 8;
          uVar30 = *(undefined8 *)(param_1 + 0x1c);
          uVar31 = *(undefined8 *)(param_1 + 0x1e);
        }
        *(undefined8 *)*param_2 = uVar11;
        *(undefined8 *)(*param_2 + 8) = uVar16;
        *(undefined8 *)param_2[1] = uVar18;
        *(undefined8 *)(param_2[1] + 8) = uVar19;
        uVar3 = (uint)uVar5;
        *(undefined8 *)param_2[2] = uVar20;
        *(undefined8 *)(param_2[2] + 8) = uVar21;
        *(undefined8 *)param_2[3] = uVar22;
        *(undefined8 *)(param_2[3] + 8) = uVar23;
        *(undefined8 *)param_2[4] = uVar24;
        *(undefined8 *)(param_2[4] + 8) = uVar25;
        *(undefined8 *)param_2[5] = uVar26;
        *(undefined8 *)(param_2[5] + 8) = uVar27;
        *(undefined8 *)param_2[6] = uVar28;
        *(undefined8 *)(param_2[6] + 8) = uVar29;
        *(undefined8 *)param_2[7] = uVar30;
        *(undefined8 *)(param_2[7] + 8) = uVar31;
        param_2 = param_2 + 8;
        if (extraout_RDX == 0) {
          return;
        }
      }
      uVar6 = *param_1;
      uVar14 = param_1[1];
      uVar15 = param_1[2];
      uVar17 = param_1[3];
      if (param_3 < 0x20) {
        uVar7 = param_4[4];
        uVar8 = param_4[5];
        uVar9 = param_4[6];
        uVar10 = param_4[7];
        pauVar4 = (undefined1 (*) [16])(param_4 + 8);
        auVar12._0_4_ = uVar6 ^ *param_4;
        auVar12._4_4_ = uVar14 ^ param_4[1];
        auVar12._8_4_ = uVar15 ^ param_4[2];
        auVar12._12_4_ = uVar17 ^ param_4[3];
        do {
          auVar2._4_4_ = uVar8;
          auVar2._0_4_ = uVar7;
          auVar2._8_4_ = uVar9;
          auVar2._12_4_ = uVar10;
          auVar12 = aesenc(auVar12,auVar2);
          uVar3 = uVar3 - 1;
          auVar13 = *pauVar4;
          uVar7 = auVar13._0_4_;
          uVar8 = auVar13._4_4_;
          uVar9 = auVar13._8_4_;
          uVar10 = auVar13._12_4_;
          pauVar4 = pauVar4 + 1;
        } while (uVar3 != 0);
        auVar13 = aesenclast(auVar12,auVar13);
        *param_2 = auVar13;
      }
      else {
        uVar11 = *(undefined8 *)(param_1 + 4);
        uVar16 = *(undefined8 *)(param_1 + 6);
        if (param_3 == 0x20) {
          FUN_100c11580();
          *(uint *)*param_2 = uVar6;
          *(uint *)(*param_2 + 4) = uVar14;
          *(uint *)(*param_2 + 8) = uVar15;
          *(uint *)(*param_2 + 0xc) = uVar17;
          *(undefined8 *)param_2[1] = uVar11;
          *(undefined8 *)(param_2[1] + 8) = uVar16;
        }
        else {
          uVar18 = *(undefined8 *)(param_1 + 8);
          uVar19 = *(undefined8 *)(param_1 + 10);
          if (param_3 < 0x40) {
            FUN_100c11580();
            *(uint *)*param_2 = uVar6;
            *(uint *)(*param_2 + 4) = uVar14;
            *(uint *)(*param_2 + 8) = uVar15;
            *(uint *)(*param_2 + 0xc) = uVar17;
            *(undefined8 *)param_2[1] = uVar11;
            *(undefined8 *)(param_2[1] + 8) = uVar16;
            *(undefined8 *)param_2[2] = uVar18;
            *(undefined8 *)(param_2[2] + 8) = uVar19;
          }
          else {
            uVar20 = *(undefined8 *)(param_1 + 0xc);
            uVar21 = *(undefined8 *)(param_1 + 0xe);
            if (param_3 == 0x40) {
              FUN_100c11660();
              *(uint *)*param_2 = uVar6;
              *(uint *)(*param_2 + 4) = uVar14;
              *(uint *)(*param_2 + 8) = uVar15;
              *(uint *)(*param_2 + 0xc) = uVar17;
              *(undefined8 *)param_2[1] = uVar11;
              *(undefined8 *)(param_2[1] + 8) = uVar16;
              *(undefined8 *)param_2[2] = uVar18;
              *(undefined8 *)(param_2[2] + 8) = uVar19;
              *(undefined8 *)param_2[3] = uVar20;
              *(undefined8 *)(param_2[3] + 8) = uVar21;
            }
            else {
              uVar22 = *(undefined8 *)(param_1 + 0x10);
              uVar23 = *(undefined8 *)(param_1 + 0x12);
              if (param_3 < 0x60) {
                FUN_100c11760();
                *(uint *)*param_2 = uVar6;
                *(uint *)(*param_2 + 4) = uVar14;
                *(uint *)(*param_2 + 8) = uVar15;
                *(uint *)(*param_2 + 0xc) = uVar17;
                *(undefined8 *)param_2[1] = uVar11;
                *(undefined8 *)(param_2[1] + 8) = uVar16;
                *(undefined8 *)param_2[2] = uVar18;
                *(undefined8 *)(param_2[2] + 8) = uVar19;
                *(undefined8 *)param_2[3] = uVar20;
                *(undefined8 *)(param_2[3] + 8) = uVar21;
                *(undefined8 *)param_2[4] = uVar22;
                *(undefined8 *)(param_2[4] + 8) = uVar23;
              }
              else {
                uVar24 = *(undefined8 *)(param_1 + 0x14);
                uVar25 = *(undefined8 *)(param_1 + 0x16);
                if (param_3 == 0x60) {
                  FUN_100c11760();
                  *(uint *)*param_2 = uVar6;
                  *(uint *)(*param_2 + 4) = uVar14;
                  *(uint *)(*param_2 + 8) = uVar15;
                  *(uint *)(*param_2 + 0xc) = uVar17;
                  *(undefined8 *)param_2[1] = uVar11;
                  *(undefined8 *)(param_2[1] + 8) = uVar16;
                  *(undefined8 *)param_2[2] = uVar18;
                  *(undefined8 *)(param_2[2] + 8) = uVar19;
                  *(undefined8 *)param_2[3] = uVar20;
                  *(undefined8 *)(param_2[3] + 8) = uVar21;
                  *(undefined8 *)param_2[4] = uVar22;
                  *(undefined8 *)(param_2[4] + 8) = uVar23;
                  *(undefined8 *)param_2[5] = uVar24;
                  *(undefined8 *)(param_2[5] + 8) = uVar25;
                }
                else {
                  uVar26 = *(undefined8 *)(param_1 + 0x18);
                  uVar27 = *(undefined8 *)(param_1 + 0x1a);
                  FUN_100c11920();
                  *(uint *)*param_2 = uVar6;
                  *(uint *)(*param_2 + 4) = uVar14;
                  *(uint *)(*param_2 + 8) = uVar15;
                  *(uint *)(*param_2 + 0xc) = uVar17;
                  *(undefined8 *)param_2[1] = uVar11;
                  *(undefined8 *)(param_2[1] + 8) = uVar16;
                  *(undefined8 *)param_2[2] = uVar18;
                  *(undefined8 *)(param_2[2] + 8) = uVar19;
                  *(undefined8 *)param_2[3] = uVar20;
                  *(undefined8 *)(param_2[3] + 8) = uVar21;
                  *(undefined8 *)param_2[4] = uVar22;
                  *(undefined8 *)(param_2[4] + 8) = uVar23;
                  *(undefined8 *)param_2[5] = uVar24;
                  *(undefined8 *)(param_2[5] + 8) = uVar25;
                  *(undefined8 *)param_2[6] = uVar26;
                  *(undefined8 *)(param_2[6] + 8) = uVar27;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

