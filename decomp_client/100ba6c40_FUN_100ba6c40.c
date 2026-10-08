
void FUN_100ba6c40(uint *param_1,undefined1 *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  
  uVar17 = 0;
  do {
    iVar18 = (int)uVar17 >> 4;
    cVar1 = (&DAT_101da24d0)[iVar18];
    cVar2 = (&DAT_101da24f0)[iVar18];
    cVar3 = (&DAT_101da2510)[iVar18];
    uVar19 = uVar17 & 0xf;
    bVar4 = (&DAT_101da24e0)[uVar19];
    bVar5 = (&DAT_101da2500)[uVar19];
    bVar6 = (&DAT_101da2520)[uVar19];
    (&DAT_102315910)[uVar17] = (&DAT_101da24b0)[iVar18] << 4 | (&DAT_101da24c0)[uVar19];
    (&DAT_102315a10)[uVar17] = cVar1 << 4 | bVar4;
    (&DAT_102315b10)[uVar17] = cVar2 << 4 | bVar5;
    (&DAT_102315c10)[uVar17] = cVar3 << 4 | bVar6;
    uVar17 = uVar17 + 1;
  } while (uVar17 != 0x100);
  iVar18 = (int)DAT_102300310;
  uVar15 = iVar18 + *param_1;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ param_1[1];
  iVar8 = (int)((ulong)DAT_102300310 >> 0x20);
  uVar15 = uVar20 + iVar8;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ *param_1;
  iVar9 = (int)DAT_102300318;
  uVar15 = uVar16 + iVar9;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  iVar10 = (int)((ulong)DAT_102300318 >> 0x20);
  uVar15 = uVar20 + iVar10;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  iVar11 = (int)DAT_102300320;
  uVar15 = uVar16 + iVar11;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  iVar12 = (int)((ulong)DAT_102300320 >> 0x20);
  uVar15 = uVar20 + iVar12;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  iVar13 = (int)DAT_102300328;
  uVar15 = uVar16 + iVar13;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  iVar14 = (int)((ulong)DAT_102300328 >> 0x20);
  uVar15 = uVar20 + iVar14;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = uVar16 + iVar18;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar8;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = uVar16 + iVar9;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar10;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = uVar16 + iVar11;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar12;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = uVar16 + iVar13;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar14;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = uVar16 + iVar18;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar8;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = uVar16 + iVar9;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar10;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = uVar16 + iVar11;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar12;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = uVar16 + iVar13;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar14;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = iVar14 + uVar16;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar13;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = iVar12 + uVar16;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar11;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = iVar10 + uVar16;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar9;
  uVar16 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar16;
  uVar15 = iVar8 + uVar16;
  uVar20 = (((uint)(byte)(&DAT_102315c10)[uVar15 & 0xff] |
            (uint)(byte)(&DAT_102315b10)[uVar15 >> 8 & 0xff] << 8 |
            (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) << 0xb |
           ((uint)(byte)(&DAT_102315910)[uVar15 >> 0x18] << 0x18 |
           (uint)(byte)(&DAT_102315a10)[uVar15 >> 0x10 & 0xff] << 0x10) >> 0x15) ^ uVar20;
  uVar15 = uVar20 + iVar18;
  bVar4 = (&DAT_102315b10)[uVar15 >> 8 & 0xff];
  bVar5 = (&DAT_102315910)[uVar15 >> 0x18];
  bVar6 = (&DAT_102315a10)[uVar15 >> 0x10 & 0xff];
  bVar7 = (&DAT_102315c10)[uVar15 & 0xff];
  *param_2 = (char)uVar20;
  param_2[1] = (char)(uVar20 >> 8);
  param_2[2] = (char)(uVar20 >> 0x10);
  param_2[3] = (char)(uVar20 >> 0x18);
  uVar16 = (((uint)bVar7 | (uint)bVar4 << 8 | (uint)bVar6 << 0x10) << 0xb |
           ((uint)bVar5 << 0x18 | (uint)bVar6 << 0x10) >> 0x15) ^ uVar16;
  param_2[4] = (char)uVar16;
  param_2[5] = (char)(uVar16 >> 8);
  param_2[6] = (char)(uVar16 >> 0x10);
  param_2[7] = (char)(uVar16 >> 0x18);
  return;
}

