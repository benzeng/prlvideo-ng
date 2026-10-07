
void FUN_1004506e0(undefined1 *param_1,ushort *param_2,uint param_3,int param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulong uVar11;
  
  puVar16 = param_1;
  if (1 < param_3) {
    uVar5 = param_3 - 2;
    uVar9 = uVar5 >> 1;
    uVar11 = (ulong)uVar9;
    lVar13 = 0;
    do {
      uVar1 = *(ushort *)((long)param_2 + lVar13);
      uVar14 = uVar1 >> 3 & 0xfc;
      uVar6 = uVar1 >> 8 & 0xf8;
      param_1[lVar13 * 2] =
           (char)(uVar14 * 0x8d + uVar6 * 0x48 + 0x800 + (uVar1 & 0x1f) * 0xd8 >> 0xc);
      uVar2 = *(ushort *)((long)param_2 + lVar13 + 2);
      uVar17 = uVar2 >> 3 & 0xfc;
      param_1[lVar13 * 2 + 4] =
           (char)(uVar17 * 0x8d + 0x800 + (uVar2 & 0x1f) * 0xd8 + (uint)(uVar2 >> 0xb) * 0x240 >>
                 0xc);
      uVar3 = *(ushort *)((long)param_2 + lVar13 + (long)(param_5 / 2) * 2);
      uVar7 = uVar3 >> 3 & 0xfc;
      param_1[lVar13 * 2 + (long)param_4] =
           (char)(uVar7 * 0x8d + 0x800 + (uVar3 & 0x1f) * 0xd8 + (uint)(uVar3 >> 0xb) * 0x240 >> 0xc
                 );
      uVar4 = *(ushort *)((long)param_2 + lVar13 + (long)(param_5 / 2 + 1) * 2);
      uVar15 = uVar4 >> 3 & 0xfc;
      param_1[lVar13 * 2 + (long)(param_4 + 4)] =
           (char)(uVar15 * 0x8d + 0x800 + (uVar4 & 0x1f) * 0xd8 + (uint)(uVar4 >> 0xb) * 0x240 >>
                 0xc);
      uVar12 = (uVar4 & 0x1f) * 8 + (uVar3 & 0x1f) * 8 + (uVar2 & 0x1f) * 8 + (uVar1 & 0x1f) * 8 >>
               2;
      uVar7 = uVar14 + 2 + uVar17 + uVar7 + uVar15 >> 2;
      uVar6 = uVar6 + (uint)(uVar2 >> 0xb) * 8 + (uint)(uVar3 >> 0xb) * 8 + (uint)(uVar4 >> 0xb) * 8
              >> 2;
      iVar10 = uVar6 * -0x29 + uVar12 * 0x78;
      iVar8 = uVar7 * -0x50;
      param_1[lVar13 + 1] =
           (char)(((uint)(iVar8 + 0x7ff + iVar10 >> 0x1f) >> 0x14) + 0x7ff + iVar10 + iVar8 >> 0xc)
           + '\b';
      iVar10 = uVar12 * -0x14 + uVar6 * 0x78;
      iVar8 = uVar7 * -0x65;
      param_1[lVar13 + 2] =
           (char)(((uint)(iVar8 + 0x7ff + iVar10 >> 0x1f) >> 0x14) + 0x7ff + iVar10 + iVar8 >> 0xc)
           + '\b';
      param_3 = param_3 - 2;
      lVar13 = lVar13 + 4;
    } while (1 < param_3);
    puVar16 = param_1 + (uVar11 + 1) * 4;
    param_1 = param_1 + (uVar11 * 2 + 2) * 4;
    param_2 = param_2 + uVar11 * 2 + 2;
    param_3 = uVar5 + uVar9 * -2;
  }
  if (param_3 != 0) {
    uVar1 = *param_2;
    uVar9 = uVar1 >> 3 & 0xfc;
    uVar7 = uVar1 >> 8 & 0xf8;
    *param_1 = (char)(uVar9 * 0x8d + uVar7 * 0x48 + 0x800 + (uVar1 & 0x1f) * 0xd8 >> 0xc);
    uVar2 = param_2[param_5 / 2];
    uVar5 = uVar2 >> 3 & 0xfc;
    param_1[param_4] =
         (char)(uVar5 * 0x8d + 0x800 + (uVar2 & 0x1f) * 0xd8 + (uint)(uVar2 >> 0xb) * 0x240 >> 0xc);
    uVar6 = (uVar2 & 0x1f) * 8 + (uVar1 & 0x1f) * 8 >> 1;
    uVar9 = uVar5 + 1 + uVar9 >> 1;
    uVar5 = uVar7 + (uint)(uVar2 >> 0xb) * 8 >> 1;
    iVar10 = uVar5 * -0x29 + uVar6 * 0x78;
    iVar8 = uVar9 * -0x50;
    puVar16[1] = (char)(((uint)(iVar8 + 0x7ff + iVar10 >> 0x1f) >> 0x14) + 0x7ff + iVar10 + iVar8 >>
                       0xc) + '\b';
    iVar10 = uVar6 * -0x14 + uVar5 * 0x78;
    iVar8 = uVar9 * -0x65;
    puVar16[2] = (char)(((uint)(iVar8 + 0x7ff + iVar10 >> 0x1f) >> 0x14) + 0x7ff + iVar10 + iVar8 >>
                       0xc) + '\b';
  }
  return;
}

