
void FUN_10044f1e0(undefined1 *param_1,ushort *param_2,uint param_3,int param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar12;
  
  puVar14 = param_1;
  if (1 < param_3) {
    uVar11 = param_3 - 2;
    uVar8 = uVar11 >> 1;
    uVar12 = (ulong)uVar8;
    lVar16 = 0;
    do {
      uVar1 = *(ushort *)((long)param_2 + lVar16);
      uVar9 = uVar1 >> 3 & 0xfc;
      uVar6 = uVar1 >> 8 & 0xf8;
      param_1[lVar16 * 2] =
           (char)((uVar1 & 0x1f) * 0xe8 + 0x200 + uVar9 * 0x95 + uVar6 * 0x4c >> 10);
      uVar2 = *(ushort *)((long)param_2 + lVar16 + 2);
      uVar17 = uVar2 >> 3 & 0xfc;
      param_1[lVar16 * 2 + 4] =
           (char)(uVar17 * 0x95 + 0x200 + (uVar2 & 0x1f) * 0xe8 + (uint)(uVar2 >> 0xb) * 0x260 >> 10
                 );
      uVar3 = *(ushort *)((long)param_2 + lVar16 + (long)(param_5 / 2) * 2);
      uVar15 = uVar3 >> 3 & 0xfc;
      param_1[lVar16 * 2 + (long)param_4] =
           (char)(uVar15 * 0x95 + 0x200 + (uVar3 & 0x1f) * 0xe8 + (uint)(uVar3 >> 0xb) * 0x260 >> 10
                 );
      uVar4 = *(ushort *)((long)param_2 + lVar16 + (long)(param_5 / 2 + 1) * 2);
      uVar5 = uVar4 >> 3 & 0xfc;
      param_1[lVar16 * 2 + (long)(param_4 + 4)] =
           (char)(uVar5 * 0x95 + 0x200 + (uVar4 & 0x1f) * 0xe8 + (uint)(uVar4 >> 0xb) * 0x260 >> 10)
      ;
      uVar13 = (uVar4 & 0x1f) * 8 + (uVar3 & 0x1f) * 8 + (uVar2 & 0x1f) * 8 + (uVar1 & 0x1f) * 8 >>
               2;
      uVar9 = uVar9 + 2 + uVar17 + uVar15 + uVar5 >> 2;
      uVar5 = uVar6 + (uint)(uVar2 >> 0xb) * 8 + (uint)(uVar3 >> 0xb) * 8 + (uint)(uVar4 >> 0xb) * 8
              >> 2;
      iVar10 = uVar5 * -0x2b + uVar13 * 0x7e;
      iVar7 = uVar9 * -0x54;
      param_1[lVar16 + 1] =
           (char)(((uint)(iVar7 + 0x1ff + iVar10 >> 0x1f) >> 0x16) + 0x1ff + iVar10 + iVar7 >> 10) +
           ' ';
      iVar10 = uVar13 * -0x15 + uVar5 * 0x7e;
      iVar7 = uVar9 * -0x6a;
      param_1[lVar16 + 2] =
           (char)(((uint)(iVar7 + 0x1ff + iVar10 >> 0x1f) >> 0x16) + 0x1ff + iVar10 + iVar7 >> 10) +
           ' ';
      param_3 = param_3 - 2;
      lVar16 = lVar16 + 4;
    } while (1 < param_3);
    puVar14 = param_1 + (uVar12 + 1) * 4;
    param_1 = param_1 + (uVar12 * 2 + 2) * 4;
    param_2 = param_2 + uVar12 * 2 + 2;
    param_3 = uVar11 + uVar8 * -2;
  }
  if (param_3 != 0) {
    uVar1 = *param_2;
    uVar8 = uVar1 >> 3 & 0xfc;
    uVar6 = uVar1 >> 8 & 0xf8;
    *param_1 = (char)((uVar1 & 0x1f) * 0xe8 + 0x200 + uVar8 * 0x95 + uVar6 * 0x4c >> 10);
    uVar2 = param_2[param_5 / 2];
    uVar11 = uVar2 >> 3 & 0xfc;
    param_1[param_4] =
         (char)(uVar11 * 0x95 + 0x200 + (uVar2 & 0x1f) * 0xe8 + (uint)(uVar2 >> 0xb) * 0x260 >> 10);
    uVar5 = (uVar2 & 0x1f) * 8 + (uVar1 & 0x1f) * 8 >> 1;
    uVar11 = uVar11 + 1 + uVar8 >> 1;
    uVar8 = uVar6 + (uint)(uVar2 >> 0xb) * 8 >> 1;
    iVar10 = uVar8 * -0x2b + uVar5 * 0x7e;
    iVar7 = uVar11 * -0x54;
    puVar14[1] = (char)(((uint)(iVar7 + 0x1ff + iVar10 >> 0x1f) >> 0x16) + 0x1ff + iVar10 + iVar7 >>
                       10) + ' ';
    iVar10 = uVar5 * -0x15 + uVar8 * 0x7e;
    iVar7 = uVar11 * -0x6a;
    puVar14[2] = (char)(((uint)(iVar7 + 0x1ff + iVar10 >> 0x1f) >> 0x16) + 0x1ff + iVar10 + iVar7 >>
                       10) + ' ';
  }
  return;
}

