
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004519a0(ushort *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ushort *puVar31;
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar43;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  undefined1 auVar44 [16];
  
  uVar25 = _UNK_100b42eac;
  uVar24 = _UNK_100b42ea8;
  uVar23 = _UNK_100b42ea4;
  uVar22 = _DAT_100b42ea0;
  iVar21 = _UNK_100b42e8c;
  iVar20 = _UNK_100b42e88;
  iVar19 = _UNK_100b42e84;
  iVar18 = _DAT_100b42e80;
  uVar17 = _UNK_100b42e2c;
  uVar16 = _UNK_100b42e28;
  uVar15 = _UNK_100b42e24;
  uVar14 = _DAT_100b42e20;
  auVar13 = _DAT_100b42d40;
  uVar12 = _UNK_100b3f6cc;
  uVar11 = _UNK_100b3f6c8;
  uVar10 = _UNK_100b3f6c4;
  uVar9 = DAT_100b3f6c0;
  auVar8 = _DAT_100b39630;
  auVar7 = _DAT_100b395f0;
  uVar6 = _UNK_100b2ea4c;
  uVar26 = _UNK_100b2ea48;
  uVar29 = _UNK_100b2ea44;
  uVar28 = _DAT_100b2ea40;
  if (param_3 != 0) {
    uVar1 = param_3 - 1;
    uVar2 = (ulong)uVar1 + 1;
    uVar30 = uVar2 & 0x1fffffffc;
    if (uVar30 == 0) {
      uVar30 = 0;
      puVar31 = param_1;
      puVar32 = param_2;
    }
    else {
      param_3 = param_3 - ((uint)uVar2 & 0xfffffffc);
      puVar31 = param_1 + uVar30;
      puVar32 = param_2 + uVar30;
      uVar27 = (ulong)uVar1 + 1 & 0xfffffffffffffffc;
      do {
        uVar1 = *param_2;
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        uVar33 = -(uint)(iVar18 < (int)(uVar1 & uVar22 ^ uVar9));
        uVar34 = -(uint)(iVar19 < (int)(uVar3 & uVar23 ^ uVar10));
        uVar35 = -(uint)(iVar20 < (int)(uVar4 & uVar24 ^ uVar11));
        uVar36 = -(uint)(iVar21 < (int)(uVar5 & uVar25 ^ uVar12));
        uVar37 = uVar1 >> 8 & uVar28;
        uVar40 = uVar3 >> 8 & uVar29;
        uVar41 = uVar4 >> 8 & uVar26;
        uVar42 = uVar5 >> 8 & uVar6;
        uVar43 = -(uint)(iVar18 < (int)(uVar37 ^ uVar9));
        uVar45 = -(uint)(iVar19 < (int)(uVar40 ^ uVar10));
        uVar46 = -(uint)(iVar20 < (int)(uVar41 ^ uVar11));
        uVar47 = -(uint)(iVar21 < (int)(uVar42 ^ uVar12));
        uVar43 = ~uVar43 & uVar37 | uVar14 & uVar43;
        uVar45 = ~uVar45 & uVar40 | uVar15 & uVar45;
        uVar46 = ~uVar46 & uVar41 | uVar16 & uVar46;
        uVar47 = ~uVar47 & uVar42 | uVar17 & uVar47;
        uVar37 = -(uint)(iVar18 < (int)(uVar1 >> 0x10 & uVar22 ^ uVar9));
        uVar40 = -(uint)(iVar19 < (int)(uVar3 >> 0x10 & uVar23 ^ uVar10));
        uVar41 = -(uint)(iVar20 < (int)(uVar4 >> 0x10 & uVar24 ^ uVar11));
        uVar42 = -(uint)(iVar21 < (int)(uVar5 >> 0x10 & uVar25 ^ uVar12));
        auVar39._0_4_ = (~uVar33 & uVar1 | uVar14 & uVar33) + uVar43 >> 1;
        auVar39._4_4_ = (~uVar34 & uVar3 | uVar15 & uVar34) + uVar45 >> 1;
        auVar39._8_4_ = (~uVar35 & uVar4 | uVar16 & uVar35) + uVar46 >> 1;
        auVar39._12_4_ = (~uVar36 & uVar5 | uVar17 & uVar36) + uVar47 >> 1;
        auVar44._0_4_ = uVar43 << 5;
        auVar44._4_4_ = uVar45 << 5;
        auVar44._8_4_ = uVar46 << 5;
        auVar44._12_4_ = uVar47 << 5;
        auVar38._0_4_ = ((~uVar37 & uVar1 >> 0x10 | uVar14 & uVar37) + uVar43) * 0x400;
        auVar38._4_4_ = ((~uVar40 & uVar3 >> 0x10 | uVar15 & uVar40) + uVar45) * 0x400;
        auVar38._8_4_ = ((~uVar41 & uVar4 >> 0x10 | uVar16 & uVar41) + uVar46) * 0x400;
        auVar38._12_4_ = ((~uVar42 & uVar5 >> 0x10 | uVar17 & uVar42) + uVar47) * 0x400;
        auVar39 = pshufb(auVar38 & auVar8 | auVar44 | auVar39 & auVar7,auVar13);
        *(long *)param_1 = auVar39._0_8_;
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
        uVar27 = uVar27 - 4;
      } while (uVar27 != 0);
    }
    if (uVar2 != uVar30) {
      do {
        uVar28 = *puVar32;
        puVar32 = puVar32 + 1;
        uVar29 = uVar28 >> 8 & 0xff;
        uVar26 = uVar28 >> 0x10;
        if (0x3f < (uVar28 & 0xc0)) {
          uVar28 = 0x3f;
        }
        if (0x3f < uVar29) {
          uVar29 = 0x3f;
        }
        if (0x3f < (uVar26 & 0xc0)) {
          uVar26 = 0x3f;
        }
        *puVar31 = (ushort)((uVar26 + uVar29 & 0x3e) << 10) |
                   (ushort)(uVar29 << 5) | (ushort)(uVar28 + uVar29 >> 1) & 0x1f;
        puVar31 = puVar31 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}

