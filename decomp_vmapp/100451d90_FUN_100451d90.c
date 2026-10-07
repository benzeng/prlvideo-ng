
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100451d90(ushort *param_1,undefined1 (*param_2) [16],uint param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ushort *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  iVar10 = _UNK_100b42e7c;
  iVar9 = _UNK_100b42e78;
  iVar8 = _UNK_100b42e74;
  iVar7 = _DAT_100b42e70;
  auVar6 = _DAT_100b42d40;
  auVar5 = _DAT_100b3f6c0;
  auVar4 = _DAT_100b395f0;
  auVar3 = _DAT_100b2ea40;
  if (param_3 != 0) {
    uVar13 = param_3 - 1;
    uVar1 = (ulong)uVar13 + 1;
    uVar15 = uVar1 & 0x1fffffffc;
    if (uVar15 == 0) {
      uVar15 = 0;
      pauVar12 = param_2;
      puVar16 = param_1;
    }
    else {
      param_3 = param_3 - ((uint)uVar1 & 0xfffffffc);
      puVar16 = param_1 + uVar15;
      pauVar12 = (undefined1 (*) [16])(*param_2 + uVar15 * 4);
      uVar11 = (ulong)uVar13 + 1 & 0xfffffffffffffffc;
      do {
        auVar17 = *param_2 & auVar3 ^ auVar5;
        auVar18._0_4_ = -(uint)(iVar7 < auVar17._0_4_);
        auVar18._4_4_ = -(uint)(iVar8 < auVar17._4_4_);
        auVar18._8_4_ = -(uint)(iVar9 < auVar17._8_4_);
        auVar18._12_4_ = -(uint)(iVar10 < auVar17._12_4_);
        auVar18 = auVar18 & auVar4 | ~auVar18 & *param_2 & auVar3;
        auVar17._0_4_ = auVar18._0_4_ << 5;
        auVar17._4_4_ = auVar18._4_4_ << 5;
        auVar17._8_4_ = auVar18._8_4_ << 5;
        auVar17._12_4_ = auVar18._12_4_ << 5;
        auVar19._0_4_ = auVar18._0_4_ << 10;
        auVar19._4_4_ = auVar18._4_4_ << 10;
        auVar19._8_4_ = auVar18._8_4_ << 10;
        auVar19._12_4_ = auVar18._12_4_ << 10;
        auVar17 = pshufb(auVar19 | auVar17 | auVar18,auVar6);
        *(long *)param_1 = auVar17._0_8_;
        param_2 = param_2 + 1;
        param_1 = param_1 + 4;
        uVar11 = uVar11 - 4;
      } while (uVar11 != 0);
    }
    if (uVar1 != uVar15) {
      uVar13 = param_3 - 1;
      if ((param_3 & 1) != 0) {
        puVar2 = *pauVar12;
        pauVar12 = (undefined1 (*) [16])(*pauVar12 + 4);
        uVar14 = 0x1f;
        if ((byte)*puVar2 < 0x20) {
          uVar14 = (uint)(byte)*puVar2;
        }
        *puVar16 = (ushort)(uVar14 << 10) | (ushort)(uVar14 << 5) | (ushort)uVar14;
        puVar16 = puVar16 + 1;
        param_3 = uVar13;
      }
      while (uVar13 != 0) {
        uVar13 = (uint)(byte)(*pauVar12)[0];
        if (0x1f < uVar13) {
          uVar13 = 0x1f;
        }
        *puVar16 = (ushort)(uVar13 << 10) | (ushort)(uVar13 << 5) | (ushort)uVar13;
        uVar13 = (uint)(byte)(*pauVar12)[4];
        if (0x1f < uVar13) {
          uVar13 = 0x1f;
        }
        puVar16[1] = (ushort)(uVar13 << 10) | (ushort)(uVar13 << 5) | (ushort)uVar13;
        pauVar12 = (undefined1 (*) [16])(*pauVar12 + 8);
        puVar16 = puVar16 + 2;
        uVar13 = param_3 - 2;
        param_3 = uVar13;
      }
    }
  }
  return;
}

