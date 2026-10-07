
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100451c00(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  ulong uVar25;
  ulong uVar26;
  
  uVar19 = _UNK_100b42ebc;
  uVar18 = _UNK_100b42eb8;
  uVar17 = _UNK_100b42eb4;
  uVar16 = _DAT_100b42eb0;
  uVar15 = _UNK_100b3f62c;
  uVar14 = _UNK_100b3f628;
  uVar13 = _UNK_100b3f624;
  uVar12 = _DAT_100b3f620;
  uVar11 = _UNK_100b3794c;
  uVar10 = _UNK_100b37948;
  uVar9 = _UNK_100b37944;
  uVar8 = _DAT_100b37940;
  uVar7 = _UNK_100b2ea4c;
  uVar6 = _UNK_100b2ea48;
  uVar1 = _UNK_100b2ea44;
  uVar22 = _DAT_100b2ea40;
  if (param_3 != 0) {
    uVar20 = (ulong)(param_3 - 1);
    uVar26 = uVar20 + 1 & 0x1fffffffc;
    puVar23 = param_2;
    puVar24 = param_1;
    uVar25 = 0;
    if ((uVar26 != 0) && ((param_2 + uVar20 < param_1 || (uVar25 = 0, param_1 + uVar20 < param_2))))
    {
      puVar23 = param_2 + uVar26;
      param_3 = param_3 - (int)uVar26;
      puVar24 = param_1 + uVar26;
      uVar21 = uVar20 + 1 & 0xfffffffffffffffc;
      do {
        uVar2 = *param_2;
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        *param_1 = uVar2 & uVar16 | (uVar2 >> 8) + uVar2 & uVar22 |
                   (uVar2 >> 8) * 0x10000 + uVar2 & uVar8 | uVar12;
        param_1[1] = uVar3 & uVar17 | (uVar3 >> 8) + uVar3 & uVar1 |
                     (uVar3 >> 8) * 0x10000 + uVar3 & uVar9 | uVar13;
        param_1[2] = uVar4 & uVar18 | (uVar4 >> 8) + uVar4 & uVar6 |
                     (uVar4 >> 8) * 0x10000 + uVar4 & uVar10 | uVar14;
        param_1[3] = uVar5 & uVar19 | (uVar5 >> 8) + uVar5 & uVar7 |
                     (uVar5 >> 8) * 0x10000 + uVar5 & uVar11 | uVar15;
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
        uVar21 = uVar21 - 4;
        uVar25 = uVar26;
      } while (uVar21 != 0);
    }
    if (uVar20 + 1 != uVar25) {
      uVar22 = param_3 - 1;
      if ((param_3 & 1) != 0) {
        uVar1 = *puVar23;
        puVar23 = puVar23 + 1;
        *puVar24 = uVar1 & 0xff00 | (uVar1 >> 8) + uVar1 & 0xff |
                   (uVar1 >> 8) * 0x10000 + uVar1 & 0xff0000 | 0xff000000;
        puVar24 = puVar24 + 1;
        param_3 = uVar22;
      }
      while (uVar22 != 0) {
        uVar22 = *puVar23;
        *puVar24 = uVar22 & 0xff00 | (uVar22 >> 8) + uVar22 & 0xff |
                   (uVar22 >> 8) * 0x10000 + uVar22 & 0xff0000 | 0xff000000;
        uVar22 = puVar23[1];
        puVar24[1] = uVar22 & 0xff00 | (uVar22 >> 8) + uVar22 & 0xff |
                     (uVar22 >> 8) * 0x10000 + uVar22 & 0xff0000 | 0xff000000;
        puVar23 = puVar23 + 2;
        puVar24 = puVar24 + 2;
        uVar22 = param_3 - 2;
        param_3 = uVar22;
      }
    }
  }
  return;
}

