
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100608100(short *param_1,undefined4 param_2,ulong *param_3,uint param_4)

{
  undefined1 auVar1 [16];
  wchar16 wVar2;
  wchar16 wVar3;
  wchar16 wVar4;
  wchar16 wVar5;
  wchar16 wVar6;
  wchar16 wVar7;
  wchar16 wVar8;
  wchar16 wVar9;
  undefined1 auVar10 [16];
  ulong uVar11;
  ushort uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte bVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  ulong *puVar18;
  ushort *puVar19;
  ulong uVar20;
  short sVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  *(undefined4 *)(param_1 + 1) = param_2;
  auVar10 = u__________________100b47a30._16_16_;
  wVar9 = u__________________100b47a30[7];
  wVar8 = u__________________100b47a30[6];
  wVar7 = u__________________100b47a30[5];
  wVar6 = u__________________100b47a30[4];
  wVar5 = u__________________100b47a30[3];
  wVar4 = u__________________100b47a30[2];
  wVar3 = u__________________100b47a30[1];
  wVar2 = u__________________100b47a30[0];
  auVar1 = _DAT_100b47a20;
  if (param_3 == (ulong *)0x0) {
    param_1[3] = 0;
    sVar21 = 0;
  }
  else {
    uVar12 = (ushort)param_4;
    if (uVar12 == 0) {
      bVar15 = (byte)*param_3;
      if (bVar15 == 0) {
        uVar22 = 0;
      }
      else {
        uVar13 = 0;
        do {
          uVar12 = (ushort)bVar15;
          if (bVar15 == 0x3a) {
            uVar12 = 0x2f;
          }
          param_1[uVar13 + 4] = uVar12;
          uVar22 = uVar13 + 1;
        } while ((uVar22 < 0xff) &&
                (bVar15 = *(byte *)((long)param_3 + uVar13 + 1), uVar13 = uVar22, bVar15 != 0));
      }
    }
    else {
      uVar17 = param_4 & 0xffff;
      uVar22 = 0xff;
      if (uVar17 < 0x100) {
        uVar22 = (ulong)uVar12;
      }
      if ((short)uVar22 != 0) {
        uVar13 = 0xff;
        if (uVar17 < 0xff) {
          uVar13 = (ulong)(ushort)(uVar12 - 1) + 1;
        }
        uVar11 = 0xfe;
        if (uVar17 < 0xff) {
          uVar11 = (ulong)(ushort)(uVar12 - 1);
        }
        uVar20 = 0;
        if ((uVar13 & 0x1fff8) != 0) {
          pauVar16 = (undefined1 (*) [16])(param_1 + 4);
          if (((undefined1 (*) [16])((long)param_3 + uVar11) < pauVar16) ||
             (uVar20 = 0, param_1 + uVar11 + 4 < param_3)) {
            uVar11 = uVar13 & 0xfffffffffffffff8;
            puVar18 = param_3;
            do {
              uVar20 = *puVar18;
              auVar29._8_6_ = 0;
              auVar29._0_8_ = uVar20;
              auVar29[0xe] = (char)(uVar20 >> 0x38);
              auVar29[0xf] = auVar1[7];
              auVar28._14_2_ = auVar29._14_2_;
              auVar28._8_5_ = 0;
              auVar28._0_8_ = uVar20;
              auVar28[0xd] = auVar1[6];
              auVar27._13_3_ = auVar28._13_3_;
              auVar27._8_4_ = 0;
              auVar27._0_8_ = uVar20;
              auVar27[0xc] = (char)(uVar20 >> 0x30);
              auVar26._12_4_ = auVar27._12_4_;
              auVar26._8_3_ = 0;
              auVar26._0_8_ = uVar20;
              auVar26[0xb] = auVar1[5];
              auVar25._11_5_ = auVar26._11_5_;
              auVar25._8_2_ = 0;
              auVar25._0_8_ = uVar20;
              auVar25[10] = (char)(uVar20 >> 0x28);
              auVar24._10_6_ = auVar25._10_6_;
              auVar24[8] = 0;
              auVar24._0_8_ = uVar20;
              auVar24[9] = auVar1[4];
              auVar23._9_7_ = auVar24._9_7_;
              auVar23[8] = (char)(uVar20 >> 0x20);
              auVar23._0_8_ = uVar20;
              auVar30._8_8_ = auVar23._8_8_;
              auVar30[7] = auVar1[3];
              auVar30[6] = (char)(uVar20 >> 0x18);
              auVar30[5] = auVar1[2];
              auVar30[4] = (char)(uVar20 >> 0x10);
              auVar30[3] = auVar1[1];
              auVar30[2] = (char)(uVar20 >> 8);
              auVar30[0] = (undefined1)uVar20;
              auVar30[1] = auVar1[0];
              auVar30 = auVar30 & auVar1;
              auVar31._0_2_ = -(ushort)(auVar30._0_2_ == wVar2);
              auVar31._2_2_ = -(ushort)(auVar30._2_2_ == wVar3);
              auVar31._4_2_ = -(ushort)(auVar30._4_2_ == wVar4);
              auVar31._6_2_ = -(ushort)(auVar30._6_2_ == wVar5);
              auVar31._8_2_ = -(ushort)(auVar30._8_2_ == wVar6);
              auVar31._10_2_ = -(ushort)(auVar30._10_2_ == wVar7);
              auVar31._12_2_ = -(ushort)(auVar30._12_2_ == wVar8);
              auVar31._14_2_ = -(ushort)(auVar30._14_2_ == wVar9);
              *pauVar16 = auVar31 & auVar10 | ~auVar31 & auVar30;
              puVar18 = puVar18 + 1;
              pauVar16 = pauVar16 + 1;
              uVar11 = uVar11 - 8;
              uVar20 = uVar13 & 0x1fff8;
            } while (uVar11 != 0);
          }
        }
        if (uVar13 != uVar20) {
          uVar17 = ~param_4 & 0xffff;
          if (uVar17 < 0xff01) {
            uVar17 = 0xff00;
          }
          sVar21 = (short)uVar20;
          if ((~uVar17 & 1) != 0) {
            uVar12 = (ushort)*(byte *)((long)param_3 + uVar20);
            if (uVar12 == 0x3a) {
              uVar12 = 0x2f;
            }
            param_1[uVar20 + 4] = uVar12;
            uVar20 = uVar20 + 1;
          }
          if ((short)(-2 - (short)uVar17) != sVar21) {
            puVar19 = (ushort *)(param_1 + uVar20 + 5);
            uVar17 = ~param_4 & 0xffff;
            if (uVar17 < 0xff01) {
              uVar17 = 0xff00;
            }
            uVar17 = -((int)uVar20 + 1) - uVar17;
            pbVar14 = (byte *)((long)param_3 + uVar20 + 1);
            do {
              uVar12 = (ushort)pbVar14[-1];
              if (uVar12 == 0x3a) {
                uVar12 = 0x2f;
              }
              puVar19[-1] = uVar12;
              uVar12 = (ushort)*pbVar14;
              if (uVar12 == 0x3a) {
                uVar12 = 0x2f;
              }
              *puVar19 = uVar12;
              puVar19 = puVar19 + 2;
              pbVar14 = pbVar14 + 2;
              uVar12 = (short)uVar17 - 2;
              uVar17 = (uint)uVar12;
            } while (uVar12 != 0);
          }
        }
      }
    }
    sVar21 = (short)uVar22;
    param_1[3] = sVar21;
  }
  *param_1 = sVar21 * 2 + 6;
  return;
}

