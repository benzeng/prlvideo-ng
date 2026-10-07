
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100451ef0(ushort *param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ushort *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar25;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar26 [16];
  
  iVar16 = _UNK_100b42e8c;
  iVar15 = _UNK_100b42e88;
  iVar14 = _UNK_100b42e84;
  iVar13 = _DAT_100b42e80;
  uVar12 = _UNK_100b42e2c;
  uVar11 = _UNK_100b42e28;
  uVar10 = _UNK_100b42e24;
  uVar9 = _DAT_100b42e20;
  auVar8 = _DAT_100b42d40;
  uVar7 = _UNK_100b3f6cc;
  uVar6 = _UNK_100b3f6c8;
  uVar5 = _UNK_100b3f6c4;
  uVar4 = DAT_100b3f6c0;
  uVar3 = _UNK_100b2ea4c;
  uVar20 = _UNK_100b2ea48;
  uVar2 = _UNK_100b2ea44;
  uVar19 = _DAT_100b2ea40;
  if (param_3 != 0) {
    uVar25 = param_3 - 1;
    uVar1 = (ulong)uVar25 + 1;
    uVar21 = uVar1 & 0x1fffffffc;
    if (uVar21 == 0) {
      uVar21 = 0;
      puVar18 = param_2;
      puVar22 = param_1;
    }
    else {
      param_3 = param_3 - ((uint)uVar1 & 0xfffffffc);
      puVar22 = param_1 + uVar21;
      puVar18 = param_2 + uVar21;
      uVar17 = (ulong)uVar25 + 1 & 0xfffffffffffffffc;
      do {
        uVar25 = -(uint)(iVar13 < (int)(*param_2 & uVar19 ^ uVar4));
        uVar27 = -(uint)(iVar14 < (int)(param_2[1] & uVar2 ^ uVar5));
        uVar28 = -(uint)(iVar15 < (int)(param_2[2] & uVar20 ^ uVar6));
        uVar29 = -(uint)(iVar16 < (int)(param_2[3] & uVar3 ^ uVar7));
        uVar25 = uVar25 & uVar9 | ~uVar25 & *param_2 & uVar19;
        uVar27 = uVar27 & uVar10 | ~uVar27 & param_2[1] & uVar2;
        uVar28 = uVar28 & uVar11 | ~uVar28 & param_2[2] & uVar20;
        uVar29 = uVar29 & uVar12 | ~uVar29 & param_2[3] & uVar3;
        auVar24._0_4_ = uVar25 >> 1;
        auVar24._4_4_ = uVar27 >> 1;
        auVar24._8_4_ = uVar28 >> 1;
        auVar24._12_4_ = uVar29 >> 1;
        auVar26._0_4_ = uVar25 << 5;
        auVar26._4_4_ = uVar27 << 5;
        auVar26._8_4_ = uVar28 << 5;
        auVar26._12_4_ = uVar29 << 5;
        auVar23._0_4_ = auVar24._0_4_ << 0xb;
        auVar23._4_4_ = auVar24._4_4_ << 0xb;
        auVar23._8_4_ = auVar24._8_4_ << 0xb;
        auVar23._12_4_ = auVar24._12_4_ << 0xb;
        auVar24 = pshufb(auVar23 | auVar26 | auVar24,auVar8);
        *(long *)param_1 = auVar24._0_8_;
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
        uVar17 = uVar17 - 4;
      } while (uVar17 != 0);
    }
    if (uVar1 != uVar21) {
      uVar19 = param_3 - 1;
      if ((param_3 & 1) != 0) {
        uVar2 = *puVar18;
        puVar18 = puVar18 + 1;
        uVar20 = 0x3f;
        if ((byte)uVar2 < 0x40) {
          uVar20 = (uint)(byte)uVar2;
        }
        *puVar22 = (ushort)((uVar20 >> 1) << 0xb) | (ushort)(uVar20 << 5) | (ushort)(uVar20 >> 1);
        puVar22 = puVar22 + 1;
        param_3 = uVar19;
      }
      while (uVar19 != 0) {
        uVar19 = (uint)(byte)*puVar18;
        if (0x3f < uVar19) {
          uVar19 = 0x3f;
        }
        *puVar22 = (ushort)((uVar19 >> 1) << 0xb) | (ushort)(uVar19 << 5) | (ushort)(uVar19 >> 1);
        uVar19 = (uint)(byte)puVar18[1];
        if (0x3f < uVar19) {
          uVar19 = 0x3f;
        }
        puVar22[1] = (ushort)((uVar19 >> 1) << 0xb) | (ushort)(uVar19 << 5) | (ushort)(uVar19 >> 1);
        puVar18 = puVar18 + 2;
        puVar22 = puVar22 + 2;
        uVar19 = param_3 - 2;
        param_3 = uVar19;
      }
    }
  }
  return;
}

