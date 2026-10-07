
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c08e0(long param_1,long param_2,ulong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,byte param_7,ushort param_8,ushort param_9)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar24;
  int iVar25;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  int iVar26;
  int iVar27;
  int iVar38;
  int iVar39;
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  int iVar40;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar21 [16];
  undefined2 uVar23;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  if (param_9 == 0) {
    param_9 = (short)param_6 - 1;
  }
  else if (param_6 <= param_9) {
    return;
  }
  uVar16 = (ulong)param_8;
  uVar4 = (uint)param_9;
  if (param_8 <= uVar4) {
    uVar6 = (uint)param_3;
    uVar12 = (uint)param_8;
    if (uVar6 == 0 || param_2 == 0) {
      uVar12 = uVar12 + param_5;
      uVar4 = 0;
    }
    else {
      if (uVar6 <= uVar12) {
        return;
      }
      uVar18 = (uVar4 - param_8) + 1;
      if (uVar6 - uVar12 < uVar18) {
        uVar18 = uVar6 - uVar12;
      }
      puVar14 = (ushort *)(param_2 + uVar16);
      uVar12 = 0;
      uVar17 = uVar18 >> 1 & 0x7fff;
      if (uVar17 != 0) {
        uVar10 = uVar17 - 1;
        uVar7 = (param_8 - 1) - uVar6;
        uVar12 = (param_8 - 2) + -uVar4;
        if (uVar12 < uVar7) {
          uVar12 = uVar7;
        }
        uVar15 = (ulong)(0x7ffe - (uVar12 >> 1 & 0x7fff)) + 1;
        uVar13 = uVar15 & 0x1fffffff8;
        if (uVar13 == 0) {
          iVar19 = 0;
          iVar24 = 0;
          iVar25 = 0;
          iVar26 = 0;
          iVar27 = 0;
          iVar38 = 0;
          iVar39 = 0;
          iVar40 = 0;
          uVar13 = 0;
        }
        else {
          uVar17 = uVar17 - ((uint)uVar15 & 0xfffffff8);
          puVar14 = puVar14 + uVar13;
          puVar5 = (ulong *)(uVar16 + 8 + param_2);
          uVar4 = (param_8 - 2) + -uVar4;
          if (uVar4 < uVar7) {
            uVar4 = uVar7;
          }
          uVar11 = (ulong)(0x7ffe - (uVar4 >> 1 & 0x7fff)) + 1 & 0xfffffffffffffff8;
          iVar19 = 0;
          iVar24 = 0;
          iVar25 = 0;
          iVar26 = 0;
          iVar27 = 0;
          iVar38 = 0;
          iVar39 = 0;
          iVar40 = 0;
          do {
            uVar2 = puVar5[-1];
            uVar23 = (undefined2)(uVar2 >> 0x30);
            auVar21._8_4_ = 0;
            auVar21._0_8_ = uVar2;
            auVar21._12_2_ = uVar23;
            auVar21._14_2_ = uVar23;
            uVar23 = (undefined2)(uVar2 >> 0x20);
            auVar20._12_4_ = auVar21._12_4_;
            auVar20._8_2_ = 0;
            auVar20._0_8_ = uVar2;
            auVar20._10_2_ = uVar23;
            auVar33._10_6_ = auVar20._10_6_;
            auVar33._8_2_ = uVar23;
            auVar33._0_8_ = uVar2;
            uVar23 = (undefined2)(uVar2 >> 0x10);
            auVar22._8_8_ = auVar33._8_8_;
            auVar22._6_2_ = uVar23;
            auVar22._4_2_ = uVar23;
            auVar22._0_2_ = (undefined2)uVar2;
            auVar22._2_2_ = auVar22._0_2_;
            uVar2 = *puVar5;
            auVar30._8_4_ = 0;
            auVar30._0_8_ = uVar2;
            auVar30._12_2_ = (short)(uVar2 >> 0x30);
            auVar30._14_2_ = uVar23;
            auVar29._12_4_ = auVar30._12_4_;
            auVar29._8_2_ = 0;
            auVar29._0_8_ = uVar2;
            auVar29._10_2_ = uVar23;
            auVar28._10_6_ = auVar29._10_6_;
            auVar28._8_2_ = (short)(uVar2 >> 0x20);
            auVar28._0_8_ = uVar2;
            auVar31._8_8_ = auVar28._8_8_;
            auVar31._6_2_ = auVar22._0_2_;
            auVar31._4_2_ = (short)(uVar2 >> 0x10);
            auVar31._0_2_ = (undefined2)uVar2;
            auVar31._2_2_ = auVar22._0_2_;
            auVar22 = auVar22 & _DAT_100b4add0;
            auVar31 = auVar31 & _DAT_100b4add0;
            iVar19 = auVar22._0_4_ + iVar19;
            iVar24 = auVar22._4_4_ + iVar24;
            iVar25 = auVar22._8_4_ + iVar25;
            iVar26 = auVar22._12_4_ + iVar26;
            iVar27 = auVar31._0_4_ + iVar27;
            iVar38 = auVar31._4_4_ + iVar38;
            iVar39 = auVar31._8_4_ + iVar39;
            iVar40 = auVar31._12_4_ + iVar40;
            puVar5 = puVar5 + 2;
            uVar11 = uVar11 - 8;
          } while (uVar11 != 0);
        }
        auVar32._0_4_ = iVar25 + iVar39 + iVar19 + iVar27;
        auVar32._4_4_ = iVar26 + iVar40 + iVar24 + iVar38;
        auVar32._8_4_ = iVar19 + iVar27 + iVar25 + iVar39;
        auVar32._12_4_ = iVar24 + iVar38 + iVar26 + iVar40;
        auVar33 = phaddd(auVar32,auVar32);
        uVar12 = auVar33._0_4_;
        if (uVar15 != uVar13) {
          uVar4 = uVar17 - 1;
          if ((uVar17 & 3) != 0) {
            iVar19 = -(uVar17 & 3);
            do {
              uVar17 = uVar17 - 1;
              uVar9 = *puVar14;
              puVar14 = puVar14 + 1;
              uVar12 = uVar12 + uVar9;
              iVar19 = iVar19 + 1;
            } while (iVar19 != 0);
          }
          if (2 < uVar4) {
            do {
              uVar12 = (uint)puVar14[3] + (uint)puVar14[2] + (uint)puVar14[1] + *puVar14 + uVar12;
              puVar14 = puVar14 + 4;
              uVar17 = uVar17 - 4;
            } while (uVar17 != 0);
          }
        }
        puVar14 = (ushort *)(uVar16 + 2 + (ulong)uVar10 * 2 + param_2);
      }
      if ((uVar18 & 1) != 0) {
        uVar12 = uVar12 + (byte)*puVar14;
      }
      uVar4 = (uVar12 << 0x10 | uVar12 >> 0x10) + uVar12 >> 0x10;
      param_8 = (short)uVar18 + param_8;
      param_3 = param_3 & 0xffffffff;
      uVar12 = param_5;
    }
    if ((uint)param_8 <= (uint)param_9) {
      uVar9 = *(ushort *)((long)param_4 + 10);
      if (uVar9 <= uVar12) {
        iVar19 = FUN_1008e38f0(&DAT_10116d760);
        if (iVar19 == 0) {
          return;
        }
        FUN_1008e3970("","prl_net",0,"net_sent_offload: off >= frag->size! 0x%x >= 0x%x",uVar12,
                      *(undefined2 *)((long)param_4 + 10));
        return;
      }
      uVar18 = (param_9 + 1) - (uint)param_8;
      uVar17 = 0;
      while( true ) {
        uVar10 = uVar9 - uVar12;
        if (uVar18 < uVar9 - uVar12) {
          uVar10 = uVar18;
        }
        pbVar3 = (byte *)*param_4;
        if (uVar17 != 0) {
          uVar4 = uVar4 + (uint)*pbVar3 * 0x100;
          uVar10 = uVar10 - 1;
          uVar18 = uVar18 - 1;
          uVar12 = uVar12 + 1;
        }
        uVar16 = (ulong)uVar12;
        puVar14 = (ushort *)(pbVar3 + uVar16);
        uVar12 = uVar10 >> 1;
        uVar17 = uVar10 & 1;
        if (uVar10 >> 1 != 0) {
          uVar7 = uVar12 - 1;
          uVar13 = (ulong)uVar7 + 1;
          uVar15 = uVar13 & 0x1fffffff8;
          iVar19 = 0;
          iVar24 = 0;
          iVar25 = 0;
          if (uVar15 == 0) {
            iVar26 = 0;
            iVar27 = 0;
            iVar38 = 0;
            iVar39 = 0;
            uVar15 = 0;
          }
          else {
            uVar12 = uVar12 - ((uint)uVar13 & 0xfffffff8);
            puVar14 = puVar14 + uVar15;
            puVar5 = (ulong *)(pbVar3 + uVar16 + 8);
            uVar11 = (ulong)((uVar10 >> 1) - 1) + 1 & 0xfffffffffffffff8;
            iVar26 = 0;
            iVar27 = 0;
            iVar38 = 0;
            iVar39 = 0;
            do {
              uVar2 = puVar5[-1];
              auVar36._8_4_ = 0;
              auVar36._0_8_ = uVar2;
              auVar36._12_2_ = (short)(uVar2 >> 0x30);
              auVar36._14_2_ = DAT_100b4add0._6_2_;
              auVar35._12_4_ = auVar36._12_4_;
              auVar35._8_2_ = 0;
              auVar35._0_8_ = uVar2;
              auVar35._10_2_ = DAT_100b4add0._4_2_;
              auVar34._10_6_ = auVar35._10_6_;
              auVar34._8_2_ = (short)(uVar2 >> 0x20);
              auVar34._0_8_ = uVar2;
              auVar37._8_8_ = auVar34._8_8_;
              auVar37._6_2_ = DAT_100b4add0._2_2_;
              auVar37._4_2_ = (short)(uVar2 >> 0x10);
              auVar37._0_2_ = (undefined2)uVar2;
              auVar37._2_2_ = (short)DAT_100b4add0;
              uVar2 = *puVar5;
              auVar43._8_4_ = 0;
              auVar43._0_8_ = uVar2;
              auVar43._12_2_ = (short)(uVar2 >> 0x30);
              auVar43._14_2_ = DAT_100b4add0._6_2_;
              auVar42._12_4_ = auVar43._12_4_;
              auVar42._8_2_ = 0;
              auVar42._0_8_ = uVar2;
              auVar42._10_2_ = DAT_100b4add0._4_2_;
              auVar41._10_6_ = auVar42._10_6_;
              auVar41._8_2_ = (short)(uVar2 >> 0x20);
              auVar41._0_8_ = uVar2;
              auVar44._8_8_ = auVar41._8_8_;
              auVar44._6_2_ = DAT_100b4add0._2_2_;
              auVar44._4_2_ = (short)(uVar2 >> 0x10);
              auVar44._0_2_ = (undefined2)uVar2;
              auVar44._2_2_ = (short)DAT_100b4add0;
              auVar37 = auVar37 & _DAT_100b4add0;
              auVar44 = auVar44 & _DAT_100b4add0;
              uVar4 = auVar37._0_4_ + uVar4;
              iVar19 = auVar37._4_4_ + iVar19;
              iVar24 = auVar37._8_4_ + iVar24;
              iVar25 = auVar37._12_4_ + iVar25;
              iVar26 = auVar44._0_4_ + iVar26;
              iVar27 = auVar44._4_4_ + iVar27;
              iVar38 = auVar44._8_4_ + iVar38;
              iVar39 = auVar44._12_4_ + iVar39;
              puVar5 = puVar5 + 2;
              uVar11 = uVar11 - 8;
            } while (uVar11 != 0);
          }
          auVar45._0_4_ = iVar24 + iVar38 + uVar4 + iVar26;
          auVar45._4_4_ = iVar25 + iVar39 + iVar19 + iVar27;
          auVar45._8_4_ = uVar4 + iVar26 + iVar24 + iVar38;
          auVar45._12_4_ = iVar19 + iVar27 + iVar25 + iVar39;
          auVar33 = phaddd(auVar45,auVar45);
          uVar4 = auVar33._0_4_;
          if (uVar13 != uVar15) {
            uVar1 = uVar12 - 1;
            if ((uVar12 & 3) != 0) {
              iVar19 = -(uVar12 & 3);
              do {
                uVar12 = uVar12 - 1;
                uVar9 = *puVar14;
                puVar14 = puVar14 + 1;
                uVar4 = uVar4 + uVar9;
                iVar19 = iVar19 + 1;
              } while (iVar19 != 0);
            }
            if (2 < uVar1) {
              do {
                uVar4 = (uint)puVar14[3] + (uint)puVar14[2] + (uint)puVar14[1] + *puVar14 + uVar4;
                puVar14 = puVar14 + 4;
                uVar12 = uVar12 - 4;
              } while (uVar12 != 0);
            }
          }
          puVar14 = (ushort *)(pbVar3 + uVar16 + 2 + (ulong)uVar7 * 2);
        }
        if (uVar17 != 0) {
          uVar4 = uVar4 + (byte)*puVar14;
        }
        uVar4 = uVar4 + (uVar4 << 0x10 | uVar4 >> 0x10) >> 0x10;
        uVar18 = uVar18 - uVar10;
        if ((uVar18 == 0) || ((*(byte *)(param_4 + 1) & 2) != 0)) break;
        uVar9 = *(ushort *)((long)param_4 + 0x1a);
        param_4 = param_4 + 2;
        uVar12 = 0;
      }
      param_3 = param_3 & 0xffffffff;
    }
    if (uVar6 == 0 || param_2 == 0) {
      param_5 = param_7 + param_5;
      plVar8 = *(long **)(param_1 + 0x38);
      uVar9 = *(ushort *)((long)plVar8 + 10);
      uVar12 = (uint)uVar9;
      if (param_5 < uVar9) {
        uVar6 = 0;
        if (plVar8 == (long *)0x0) {
          return;
        }
      }
      else {
        do {
          uVar6 = uVar12;
          if ((*(byte *)(plVar8 + 1) & 2) != 0) {
            return;
          }
          uVar9 = *(ushort *)((long)plVar8 + 0x1a);
          plVar8 = plVar8 + 2;
          uVar12 = uVar9 + uVar6;
        } while (uVar9 + uVar6 <= param_5);
      }
      if ((ulong)(param_5 - uVar6) + 2 <= (ulong)uVar9) {
        *(ushort *)(*plVar8 + (ulong)(param_5 - uVar6)) = ~(ushort)uVar4;
      }
    }
    else if ((ulong)param_7 + 2 <= (param_3 & 0xffffffff)) {
      *(ushort *)(param_2 + (ulong)param_7) = ~(ushort)uVar4;
    }
  }
  return;
}

