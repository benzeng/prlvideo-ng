
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100607d10(ushort *param_1,ulong *param_2,ushort param_3)

{
  short sVar1;
  undefined1 auVar2 [16];
  wchar16 wVar3;
  wchar16 wVar4;
  wchar16 wVar5;
  wchar16 wVar6;
  wchar16 wVar7;
  wchar16 wVar8;
  wchar16 wVar9;
  wchar16 wVar10;
  undefined1 auVar11 [16];
  ulong *puVar12;
  ushort *puVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  ushort uVar17;
  uint uVar18;
  ushort uVar19;
  byte *pbVar20;
  ushort uVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  undefined1 auVar24 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  auVar11 = u__________________100b47a30._16_16_;
  wVar10 = u__________________100b47a30[7];
  wVar9 = u__________________100b47a30[6];
  wVar8 = u__________________100b47a30[5];
  wVar7 = u__________________100b47a30[4];
  wVar6 = u__________________100b47a30[3];
  wVar5 = u__________________100b47a30[2];
  wVar4 = u__________________100b47a30[1];
  wVar3 = u__________________100b47a30[0];
  auVar2 = _DAT_100b47a20;
  if (param_2 == (ulong *)0x0) {
    *param_1 = 0;
  }
  else if (param_3 == 0) {
    bVar16 = (byte)*param_2;
    uVar22 = 1;
    if (bVar16 == 0) {
      *param_1 = 0;
    }
    else {
      do {
        uVar14 = uVar22;
        uVar21 = (ushort)bVar16;
        if (bVar16 == 0x3a) {
          uVar21 = 0x2f;
        }
        param_1[uVar14] = uVar21;
        if (0xfe < uVar14) break;
        bVar16 = *(byte *)((long)param_2 + uVar14);
        uVar22 = uVar14 + 1;
      } while (bVar16 != 0);
      *param_1 = (ushort)uVar14;
    }
  }
  else {
    uVar21 = 0xff;
    if (param_3 < 0x100) {
      uVar21 = param_3;
    }
    if (uVar21 != 0) {
      uVar22 = 0xff;
      if (param_3 < 0xff) {
        uVar22 = (ulong)(ushort)(param_3 - 1) + 1;
      }
      uVar14 = 0xfe;
      if (param_3 < 0xff) {
        uVar14 = (ulong)(ushort)(param_3 - 1);
      }
      uVar15 = 0;
      if ((uVar22 & 0x1fff8) != 0) {
        pauVar23 = (undefined1 (*) [16])(param_1 + 1);
        if (((undefined1 (*) [16])((long)param_2 + uVar14) < pauVar23) ||
           (uVar15 = 0, param_1 + uVar14 + 1 < param_2)) {
          uVar14 = uVar22 & 0xfffffffffffffff8;
          puVar12 = param_2;
          do {
            uVar15 = *puVar12;
            auVar30._8_6_ = 0;
            auVar30._0_8_ = uVar15;
            auVar30[0xe] = (char)(uVar15 >> 0x38);
            auVar30[0xf] = auVar2[7];
            auVar29._14_2_ = auVar30._14_2_;
            auVar29._8_5_ = 0;
            auVar29._0_8_ = uVar15;
            auVar29[0xd] = auVar2[6];
            auVar28._13_3_ = auVar29._13_3_;
            auVar28._8_4_ = 0;
            auVar28._0_8_ = uVar15;
            auVar28[0xc] = (char)(uVar15 >> 0x30);
            auVar27._12_4_ = auVar28._12_4_;
            auVar27._8_3_ = 0;
            auVar27._0_8_ = uVar15;
            auVar27[0xb] = auVar2[5];
            auVar26._11_5_ = auVar27._11_5_;
            auVar26._8_2_ = 0;
            auVar26._0_8_ = uVar15;
            auVar26[10] = (char)(uVar15 >> 0x28);
            auVar25._10_6_ = auVar26._10_6_;
            auVar25[8] = 0;
            auVar25._0_8_ = uVar15;
            auVar25[9] = auVar2[4];
            auVar24._9_7_ = auVar25._9_7_;
            auVar24[8] = (char)(uVar15 >> 0x20);
            auVar24._0_8_ = uVar15;
            auVar31._8_8_ = auVar24._8_8_;
            auVar31[7] = auVar2[3];
            auVar31[6] = (char)(uVar15 >> 0x18);
            auVar31[5] = auVar2[2];
            auVar31[4] = (char)(uVar15 >> 0x10);
            auVar31[3] = auVar2[1];
            auVar31[2] = (char)(uVar15 >> 8);
            auVar31[0] = (undefined1)uVar15;
            auVar31[1] = auVar2[0];
            auVar31 = auVar31 & auVar2;
            auVar32._0_2_ = -(ushort)(auVar31._0_2_ == wVar3);
            auVar32._2_2_ = -(ushort)(auVar31._2_2_ == wVar4);
            auVar32._4_2_ = -(ushort)(auVar31._4_2_ == wVar5);
            auVar32._6_2_ = -(ushort)(auVar31._6_2_ == wVar6);
            auVar32._8_2_ = -(ushort)(auVar31._8_2_ == wVar7);
            auVar32._10_2_ = -(ushort)(auVar31._10_2_ == wVar8);
            auVar32._12_2_ = -(ushort)(auVar31._12_2_ == wVar9);
            auVar32._14_2_ = -(ushort)(auVar31._14_2_ == wVar10);
            *pauVar23 = auVar32 & auVar11 | ~auVar32 & auVar31;
            puVar12 = puVar12 + 1;
            pauVar23 = pauVar23 + 1;
            uVar14 = uVar14 - 8;
            uVar15 = uVar22 & 0x1fff8;
          } while (uVar14 != 0);
        }
      }
      if (uVar22 != uVar15) {
        uVar17 = ~param_3;
        if (uVar17 < 0xff01) {
          uVar17 = 0xff00;
        }
        sVar1 = (short)uVar15;
        if ((~uVar17 & 1) != 0) {
          uVar19 = (ushort)*(byte *)((long)param_2 + uVar15);
          if (uVar19 == 0x3a) {
            uVar19 = 0x2f;
          }
          param_1[uVar15 + 1] = uVar19;
          uVar15 = uVar15 + 1;
        }
        if ((ushort)(-2 - uVar17) != sVar1) {
          puVar13 = param_1 + uVar15 + 2;
          pbVar20 = (byte *)((long)param_2 + uVar15 + 1);
          uVar18 = (uint)(ushort)~param_3;
          if ((ushort)~param_3 < 0xff01) {
            uVar18 = 0xff00;
          }
          uVar18 = -((int)uVar15 + 1) - uVar18;
          do {
            uVar17 = (ushort)pbVar20[-1];
            if (uVar17 == 0x3a) {
              uVar17 = 0x2f;
            }
            puVar13[-1] = uVar17;
            uVar17 = (ushort)*pbVar20;
            if (uVar17 == 0x3a) {
              uVar17 = 0x2f;
            }
            *puVar13 = uVar17;
            puVar13 = puVar13 + 2;
            pbVar20 = pbVar20 + 2;
            uVar17 = (short)uVar18 - 2;
            uVar18 = (uint)uVar17;
          } while (uVar17 != 0);
        }
      }
    }
    *param_1 = uVar21;
  }
  return;
}

