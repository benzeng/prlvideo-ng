
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10010e410(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined6 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short sVar23;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  short sVar29;
  uint uVar30;
  uint uVar36;
  uint uVar37;
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar38;
  uint uVar39;
  uint uVar41;
  uint uVar42;
  undefined1 auVar40 [16];
  uint uVar43;
  undefined1 auVar25 [16];
  undefined1 uVar27;
  undefined2 uVar28;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar39 = 0;
  if (0 < param_2) {
    uVar9 = param_2 - 1;
    uVar1 = (ulong)uVar9 + 1;
    uVar10 = uVar1 & 0x1fffffff8;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar19 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar22 = 0;
    uVar11 = 0;
    if (uVar10 != 0) {
      iVar13 = 0;
      iVar14 = 0;
      iVar15 = 0;
      iVar16 = 0;
      uVar8 = 0;
      iVar19 = 0;
      iVar20 = 0;
      iVar21 = 0;
      iVar22 = 0;
      do {
        uVar2 = *(undefined4 *)(param_1 + uVar8);
        uVar27 = (undefined1)((uint)uVar2 >> 0x18);
        uVar28 = CONCAT11(uVar27,uVar27);
        uVar27 = (undefined1)((uint)uVar2 >> 0x10);
        uVar3 = CONCAT35(CONCAT21(uVar28,uVar27),CONCAT14(uVar27,uVar2));
        uVar27 = (undefined1)((uint)uVar2 >> 8);
        uVar4 = CONCAT51(CONCAT41((int)((ulong)uVar3 >> 0x20),uVar27),uVar27);
        sVar29 = CONCAT11((char)uVar2,(char)uVar2);
        uVar11 = CONCAT62(uVar4,sVar29);
        auVar33._8_4_ = 0;
        auVar33._0_8_ = uVar11;
        auVar33._12_2_ = uVar28;
        auVar33._14_2_ = uVar28;
        uVar28 = (undefined2)((ulong)uVar3 >> 0x20);
        auVar32._12_4_ = auVar33._12_4_;
        auVar32._8_2_ = 0;
        auVar32._0_8_ = uVar11;
        auVar32._10_2_ = uVar28;
        auVar31._10_6_ = auVar32._10_6_;
        auVar31._8_2_ = uVar28;
        auVar31._0_8_ = uVar11;
        uVar28 = (undefined2)uVar4;
        auVar5._4_8_ = auVar31._8_8_;
        auVar5._2_2_ = uVar28;
        auVar5._0_2_ = uVar28;
        auVar34._4_4_ = auVar5._0_4_ >> 0x18;
        auVar34._12_4_ = auVar32._12_4_ >> 0x18;
        uVar2 = *(undefined4 *)(param_1 + 4 + uVar8);
        uVar27 = (undefined1)((uint)uVar2 >> 0x18);
        uVar28 = CONCAT11(uVar27,uVar27);
        uVar27 = (undefined1)((uint)uVar2 >> 0x10);
        uVar3 = CONCAT35(CONCAT21(uVar28,uVar27),CONCAT14(uVar27,uVar2));
        uVar27 = (undefined1)((uint)uVar2 >> 8);
        uVar4 = CONCAT51(CONCAT41((int)((ulong)uVar3 >> 0x20),uVar27),uVar27);
        sVar23 = CONCAT11((char)uVar2,(char)uVar2);
        uVar11 = CONCAT62(uVar4,sVar23);
        auVar25._8_4_ = 0;
        auVar25._0_8_ = uVar11;
        auVar25._12_2_ = uVar28;
        auVar25._14_2_ = uVar28;
        uVar28 = (undefined2)((ulong)uVar3 >> 0x20);
        auVar24._12_4_ = auVar25._12_4_;
        auVar24._8_2_ = 0;
        auVar24._0_8_ = uVar11;
        auVar24._10_2_ = uVar28;
        auVar18._10_6_ = auVar24._10_6_;
        auVar18._8_2_ = uVar28;
        auVar18._0_8_ = uVar11;
        uVar28 = (undefined2)uVar4;
        auVar6._4_8_ = auVar18._8_8_;
        auVar6._2_2_ = uVar28;
        auVar6._0_2_ = uVar28;
        auVar26._4_4_ = auVar6._0_4_ >> 0x18;
        auVar26._12_4_ = auVar24._12_4_ >> 0x18;
        iVar7 = (int)uVar8;
        auVar40._0_4_ =
             (int)(float)((uVar9 - (iVar7 + (int)PTR___mh_execute_header_100b2dd90)) * 0x4000000 +
                         _DAT_100b2ea30);
        auVar40._4_4_ =
             (int)(float)((uVar9 - (iVar7 + PTR___mh_execute_header_100b2dd90._4_4_)) * 0x4000000 +
                         _UNK_100b2ea34);
        auVar40._8_4_ =
             (int)(float)((uVar9 - (iVar7 + _UNK_100b2dd98)) * 0x4000000 + _UNK_100b2ea38);
        auVar40._12_4_ =
             (uint)(float)((uVar9 - (iVar7 + _UNK_100b2dd9c)) * 0x4000000 + _UNK_100b2ea3c);
        uVar39 = auVar40._0_4_ * ((int)sVar29 >> 8);
        auVar34._0_4_ = auVar34._4_4_;
        auVar34._8_4_ = auVar34._12_4_;
        uVar41 = auVar34._4_4_ * auVar40._4_4_;
        uVar43 = (uint)((auVar34._8_8_ & 0xffffffff) * (ulong)auVar40._12_4_);
        uVar42 = (uint)((auVar40._8_8_ & 0xffffffff) * (ulong)(uint)(auVar31._8_4_ >> 0x18));
        auVar35._0_4_ =
             (int)(float)((uVar9 - (iVar7 + _DAT_100b2ea20)) * 0x4000000 + _DAT_100b2ea30);
        auVar35._4_4_ =
             (int)(float)((uVar9 - (iVar7 + _UNK_100b2ea24)) * 0x4000000 + _UNK_100b2ea34);
        auVar35._8_4_ =
             (int)(float)((uVar9 - (iVar7 + _UNK_100b2ea28)) * 0x4000000 + _UNK_100b2ea38);
        auVar35._12_4_ =
             (uint)(float)((uVar9 - (iVar7 + _UNK_100b2ea2c)) * 0x4000000 + _UNK_100b2ea3c);
        uVar30 = auVar35._0_4_ * ((int)sVar23 >> 8);
        auVar26._0_4_ = auVar26._4_4_;
        auVar26._8_4_ = auVar26._12_4_;
        uVar36 = auVar26._4_4_ * auVar35._4_4_;
        uVar38 = (uint)((auVar26._8_8_ & 0xffffffff) * (ulong)auVar35._12_4_);
        uVar37 = (uint)((auVar35._8_8_ & 0xffffffff) * (ulong)(uint)(auVar18._8_4_ >> 0x18));
        if (param_3 != 0x10) {
          uVar39 = uVar39 & _DAT_100b2ea40;
          uVar41 = uVar41 & _UNK_100b2ea44;
          uVar42 = uVar42 & _UNK_100b2ea48;
          uVar43 = uVar43 & _UNK_100b2ea4c;
          uVar30 = uVar30 & _DAT_100b2ea40;
          uVar36 = uVar36 & _UNK_100b2ea44;
          uVar37 = uVar37 & _UNK_100b2ea48;
          uVar38 = uVar38 & _UNK_100b2ea4c;
        }
        iVar13 = iVar13 + uVar39;
        iVar14 = iVar14 + uVar41;
        iVar15 = iVar15 + uVar42;
        iVar16 = iVar16 + uVar43;
        iVar19 = iVar19 + uVar30;
        iVar20 = iVar20 + uVar36;
        iVar21 = iVar21 + uVar37;
        iVar22 = iVar22 + uVar38;
        uVar8 = uVar8 + 8;
        uVar11 = uVar10;
      } while (((ulong)uVar9 + 1 & 0xfffffffffffffff8) != uVar8);
    }
    auVar17._0_4_ = iVar15 + iVar21 + iVar13 + iVar19;
    auVar17._4_4_ = iVar16 + iVar22 + iVar14 + iVar20;
    auVar17._8_4_ = iVar13 + iVar19 + iVar15 + iVar21;
    auVar17._12_4_ = iVar14 + iVar20 + iVar16 + iVar22;
    auVar18 = phaddd(auVar17,auVar17);
    uVar41 = auVar18._0_4_;
    uVar39 = uVar41;
    if (uVar1 != uVar11) {
      uVar42 = (uint)uVar11;
      uVar39 = param_2 - uVar42;
      if ((uVar39 & 1) != 0) {
        uVar43 = (int)*(char *)(param_1 + uVar11) << (((char)uVar9 - (char)uVar11) * '\b' & 0x1fU);
        uVar39 = uVar43 & 0xff;
        if (param_3 == 0x10) {
          uVar39 = uVar43;
        }
        uVar41 = uVar39 + uVar41;
        uVar11 = uVar11 + 1;
        uVar39 = uVar41;
      }
      if (uVar9 != uVar42) {
        iVar15 = (uVar9 - (int)uVar11) * 8;
        pcVar12 = (char *)(param_1 + 1 + uVar11);
        iVar14 = (int)uVar11 + 1;
        iVar13 = (param_2 + 1) - iVar14;
        iVar14 = (uVar9 - iVar14) * 8;
        do {
          uVar9 = (int)pcVar12[-1] << ((byte)iVar15 & 0x1f);
          uVar42 = (int)*pcVar12 << ((byte)iVar14 & 0x1f);
          uVar39 = uVar9 & 0xff;
          if (param_3 == 0x10) {
            uVar39 = uVar9;
          }
          uVar9 = uVar42 & 0xff;
          if (param_3 == 0x10) {
            uVar9 = uVar42;
          }
          uVar41 = uVar39 + uVar41 + uVar9;
          iVar15 = iVar15 + -0x10;
          pcVar12 = pcVar12 + 2;
          iVar14 = iVar14 + -0x10;
          iVar13 = iVar13 + -2;
          uVar39 = uVar41;
        } while (iVar13 != 0);
      }
    }
  }
  return uVar39;
}

