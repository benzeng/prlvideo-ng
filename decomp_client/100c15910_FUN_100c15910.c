
void FUN_100c15910(ulong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  
  uVar11 = *param_1 & 0xffff;
  uVar5 = *param_1 >> 0x10;
  uVar7 = param_1[1] & 0xffff;
  uVar3 = param_1[1] >> 0x10;
  iVar14 = 5;
  iVar12 = 3;
  piVar13 = param_2;
  while( true ) {
    uVar1 = iVar14 - 1;
    piVar15 = piVar13;
    do {
      uVar2 = (uint)uVar3;
      uVar6 = (uint)uVar7;
      uVar9 = (uVar2 & uVar6) + (int)uVar11 + (~uVar2 & (uint)uVar5) + *piVar15 & 0xffff;
      uVar10 = uVar9 >> 0xf | uVar9 * 2;
      uVar11 = (ulong)uVar10;
      uVar9 = (uint)uVar5 + piVar15[1] + (uVar10 & uVar2) + (~uVar10 & uVar6) & 0xffff;
      uVar4 = uVar9 >> 0xe | uVar9 * 4;
      uVar5 = (ulong)uVar4;
      uVar9 = uVar6 + piVar15[2] + (uVar4 & uVar10) + (~uVar4 & uVar2) & 0xffff;
      uVar6 = uVar9 >> 0xd | uVar9 * 8;
      uVar7 = (ulong)uVar6;
      uVar2 = uVar2 + piVar15[3] + (uVar6 & uVar4) + (~uVar6 & uVar10) & 0xffff;
      uVar8 = uVar2 << 5;
      uVar2 = uVar2 >> 0xb;
      uVar9 = uVar2 | uVar8;
      uVar3 = (ulong)uVar9;
      piVar15 = piVar15 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    iVar12 = iVar12 + -1;
    if (iVar12 == 0) break;
    piVar13 = piVar13 + (ulong)uVar1 * 4 + 4;
    iVar14 = (iVar12 == 2) + 5;
    uVar11 = (ulong)(uVar10 + param_2[uVar2 | uVar8 & 0x3f]);
    uVar5 = (ulong)(uVar4 + param_2[uVar10 + param_2[uVar2 | uVar8 & 0x3f] & 0x3f]);
    uVar7 = (ulong)(uVar6 + param_2[uVar4 + param_2[uVar10 + param_2[uVar2 | uVar8 & 0x3f] & 0x3f] &
                                    0x3f]);
    uVar3 = (ulong)(uVar9 + param_2[uVar6 + param_2[uVar4 + param_2[uVar10 + param_2[uVar2 | uVar8 &
                                                                                             0x3f] &
                                                                    0x3f] & 0x3f] & 0x3f]);
  }
  *param_1 = (ulong)(ushort)uVar4 << 0x10 | uVar11 & 0xffff;
  param_1[1] = (ulong)(ushort)uVar9 << 0x10 | uVar7 & 0xffff;
  return;
}

