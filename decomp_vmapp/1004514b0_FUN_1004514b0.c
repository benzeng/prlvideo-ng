
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004514b0(ushort *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  ushort uVar22;
  ushort uVar23;
  ulong uVar24;
  uint *puVar25;
  uint uVar26;
  ushort uVar27;
  ulong uVar28;
  ushort *puVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  uint uVar39;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auVar40 [16];
  
  auVar21 = _DAT_100b42e90;
  iVar20 = _UNK_100b42e8c;
  iVar19 = _UNK_100b42e88;
  iVar18 = _UNK_100b42e84;
  iVar17 = _DAT_100b42e80;
  auVar16 = _DAT_100b42d40;
  uVar15 = _UNK_100b3f6cc;
  uVar14 = _UNK_100b3f6c8;
  uVar13 = _UNK_100b3f6c4;
  uVar12 = DAT_100b3f6c0;
  auVar11 = _DAT_100b39640;
  auVar10 = _DAT_100b39630;
  auVar9 = _DAT_100b395f0;
  uVar8 = _UNK_100b2ea4c;
  uVar7 = _UNK_100b2ea48;
  uVar26 = _UNK_100b2ea44;
  uVar3 = _DAT_100b2ea40;
  if (param_3 != 0) {
    uVar1 = param_3 - 1;
    uVar2 = (ulong)uVar1 + 1;
    uVar28 = uVar2 & 0x1fffffffc;
    if (uVar28 == 0) {
      uVar28 = 0;
      puVar25 = param_2;
      puVar29 = param_1;
    }
    else {
      param_3 = param_3 - ((uint)uVar2 & 0xfffffffc);
      puVar29 = param_1 + uVar28;
      puVar25 = param_2 + uVar28;
      uVar24 = (ulong)uVar1 + 1 & 0xfffffffffffffffc;
      do {
        uVar1 = *param_2;
        uVar4 = param_2[1];
        uVar5 = param_2[2];
        uVar6 = param_2[3];
        uVar39 = uVar1 >> 8 & uVar3;
        uVar41 = uVar4 >> 8 & uVar26;
        uVar42 = uVar5 >> 8 & uVar7;
        uVar43 = uVar6 >> 8 & uVar8;
        uVar33 = uVar1 >> 0x10 & uVar3;
        uVar35 = uVar4 >> 0x10 & uVar26;
        uVar36 = uVar5 >> 0x10 & uVar7;
        uVar37 = uVar6 >> 0x10 & uVar8;
        auVar38._0_4_ = -(uint)(iVar17 < (int)(uVar1 & uVar3 ^ uVar12));
        auVar38._4_4_ = -(uint)(iVar18 < (int)(uVar4 & uVar26 ^ uVar13));
        auVar38._8_4_ = -(uint)(iVar19 < (int)(uVar5 & uVar7 ^ uVar14));
        auVar38._12_4_ = -(uint)(iVar20 < (int)(uVar6 & uVar8 ^ uVar15));
        auVar32._0_4_ = -(uint)(iVar17 < (int)(uVar39 ^ uVar12));
        auVar32._4_4_ = -(uint)(iVar18 < (int)(uVar41 ^ uVar13));
        auVar32._8_4_ = -(uint)(iVar19 < (int)(uVar42 ^ uVar14));
        auVar32._12_4_ = -(uint)(iVar20 < (int)(uVar43 ^ uVar15));
        auVar30._0_4_ = -(uint)(iVar17 < (int)(uVar33 ^ uVar12));
        auVar30._4_4_ = -(uint)(iVar18 < (int)(uVar35 ^ uVar13));
        auVar30._8_4_ = -(uint)(iVar19 < (int)(uVar36 ^ uVar14));
        auVar30._12_4_ = -(uint)(iVar20 < (int)(uVar37 ^ uVar15));
        auVar31._0_4_ = (uVar1 & uVar3) >> 1;
        auVar31._4_4_ = (uVar4 & uVar26) >> 1;
        auVar31._8_4_ = (uVar5 & uVar7) >> 1;
        auVar31._12_4_ = (uVar6 & uVar8) >> 1;
        auVar40._0_4_ = uVar39 << 5;
        auVar40._4_4_ = uVar41 << 5;
        auVar40._8_4_ = uVar42 << 5;
        auVar40._12_4_ = uVar43 << 5;
        auVar34._0_4_ = uVar33 << 10;
        auVar34._4_4_ = uVar35 << 10;
        auVar34._8_4_ = uVar36 << 10;
        auVar34._12_4_ = uVar37 << 10;
        auVar31 = pshufb(auVar30 & auVar10 | ~auVar30 & auVar34 & auVar21 |
                         auVar32 & auVar11 | ~auVar32 & auVar40 |
                         auVar38 & auVar9 | ~auVar38 & auVar31,auVar16);
        *(long *)param_1 = auVar31._0_8_;
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
        uVar24 = uVar24 - 4;
      } while (uVar24 != 0);
    }
    if (uVar2 != uVar28) {
      do {
        uVar3 = *puVar25;
        puVar25 = puVar25 + 1;
        uVar26 = uVar3 >> 8 & 0xff;
        uVar22 = (ushort)((uVar3 & 0xff) >> 1);
        if (0x3f < (uVar3 & 0xff)) {
          uVar22 = 0x1f;
        }
        uVar27 = (ushort)(uVar26 << 5);
        if (0x3f < uVar26) {
          uVar27 = 0x7e0;
        }
        uVar23 = (ushort)((uVar3 >> 0x10 & 0x3e) << 10);
        if (0x3f < (uVar3 >> 0x10 & 0xff)) {
          uVar23 = 0xf800;
        }
        *puVar29 = uVar23 | uVar27 | uVar22;
        puVar29 = puVar29 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}

