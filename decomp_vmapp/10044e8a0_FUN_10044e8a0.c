
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044e8a0(uint *param_1,uint *param_2,int param_3)

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
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar11 = _UNK_100b3794c;
  uVar10 = _UNK_100b37948;
  uVar9 = _UNK_100b37944;
  uVar8 = _DAT_100b37940;
  uVar7 = _UNK_100b2ea4c;
  uVar6 = _UNK_100b2ea48;
  uVar16 = _UNK_100b2ea44;
  uVar1 = _DAT_100b2ea40;
  if (param_3 != 0) {
    uVar12 = (ulong)(param_3 - 1);
    uVar18 = uVar12 + 1 & 0x1fffffffc;
    puVar14 = param_2;
    puVar15 = param_1;
    uVar17 = 0;
    if ((uVar18 != 0) && ((param_2 + uVar12 < param_1 || (uVar17 = 0, param_1 + uVar12 < param_2))))
    {
      puVar15 = param_1 + uVar18;
      puVar14 = param_2 + uVar18;
      param_3 = param_3 - (int)uVar18;
      uVar13 = uVar12 + 1 & 0xfffffffffffffffc;
      do {
        uVar2 = *param_2;
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        uVar19 = uVar2 >> 8 & uVar1;
        uVar20 = uVar3 >> 8 & uVar16;
        uVar21 = uVar4 >> 8 & uVar6;
        uVar22 = uVar5 >> 8 & uVar7;
        *param_1 = (uVar2 & uVar8) + uVar19 * -0x10000 & uVar8 |
                   uVar19 << 8 | uVar2 - (uVar2 >> 8) & uVar1;
        param_1[1] = (uVar3 & uVar9) + uVar20 * -0x10000 & uVar9 |
                     uVar20 << 8 | uVar3 - (uVar3 >> 8) & uVar16;
        param_1[2] = (uVar4 & uVar10) + uVar21 * -0x10000 & uVar10 |
                     uVar21 << 8 | uVar4 - (uVar4 >> 8) & uVar6;
        param_1[3] = (uVar5 & uVar11) + uVar22 * -0x10000 & uVar11 |
                     uVar22 << 8 | uVar5 - (uVar5 >> 8) & uVar7;
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
        uVar13 = uVar13 - 4;
        uVar17 = uVar18;
      } while (uVar13 != 0);
    }
    if (uVar12 + 1 != uVar17) {
      do {
        uVar1 = *puVar14;
        puVar14 = puVar14 + 1;
        uVar16 = uVar1 >> 8 & 0xff;
        *puVar15 = (uVar1 & 0xff0000) + uVar16 * -0x10000 & 0xff0000 |
                   uVar16 << 8 | uVar1 - (uVar1 >> 8) & 0xff;
        puVar15 = puVar15 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}

