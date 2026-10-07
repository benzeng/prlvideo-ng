
void FUN_10083a880(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  
  uVar5 = *param_1;
  uVar2 = param_1[1];
  uVar3 = uVar5 >> 0x10;
  uVar14 = uVar2 >> 0x10;
  piVar7 = (int *)(param_2 + 0xfc);
  iVar10 = 5;
  iVar6 = 3;
  while( true ) {
    uVar2 = uVar2 & 0xffff;
    uVar5 = uVar5 & 0xffff;
    uVar1 = iVar10 - 1;
    piVar12 = piVar7;
    do {
      uVar8 = (uint)uVar2;
      uVar4 = (uint)uVar5;
      uVar13 = (uint)uVar3;
      uVar9 = (((uint)uVar14 >> 5 | (uint)uVar14 << 0xb) -
              ((uVar8 & uVar13) + ((uVar8 ^ 0xffff) & uVar4))) - *piVar12;
      uVar14 = (ulong)(uVar9 & 0xffff);
      uVar11 = ((((uVar8 & 7) << 0xd | (uint)(uVar2 >> 3)) - (uVar13 & uVar4)) - piVar12[-1]) -
               ((uVar13 ^ 0xffff) & uVar9);
      uVar2 = (ulong)(uVar11 & 0xffff);
      uVar8 = (((uVar13 >> 2 | uVar13 << 0xe) - (uVar9 & uVar4)) - piVar12[-2]) -
              ((uVar4 ^ 0xffff) & uVar11);
      uVar3 = (ulong)(uVar8 & 0xffff);
      uVar13 = ((((uVar4 & 1) << 0xf | (uint)(uVar5 >> 1)) - piVar12[-3]) - (uVar11 & uVar9)) -
               ((uVar9 ^ 0xffff) & uVar8);
      uVar5 = (ulong)(uVar13 & 0xffff);
      piVar12 = piVar12 + -4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) break;
    piVar7 = piVar7 + (ulong)uVar1 * -4 + -4;
    iVar10 = (iVar6 == 2) + 5;
    uVar9 = uVar9 - *(int *)(param_2 + (ulong)(uVar11 & 0x3f) * 4);
    uVar14 = (ulong)(uVar9 & 0xffff);
    uVar2 = (ulong)(uVar11 - *(int *)(param_2 + (ulong)(uVar8 & 0x3f) * 4));
    uVar3 = (ulong)(uVar8 - *(int *)(param_2 + (ulong)(uVar13 & 0x3f) * 4) & 0xffff);
    uVar5 = (ulong)(uVar13 - *(int *)(param_2 + (ulong)(uVar9 & 0x3f) * 4));
  }
  *param_1 = uVar3 << 0x10 | uVar5;
  param_1[1] = uVar14 << 0x10 | uVar2;
  return;
}

