
undefined8 FUN_1003c9b10(uint *param_1,int *param_2,uint *param_3,int *param_4,uint param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  
  iVar8 = param_4[2] - *param_4;
  if (iVar8 != 0) {
    iVar3 = param_4[1];
    iVar4 = param_4[3];
    if (iVar4 != iVar3) {
      uVar5 = param_1[3];
      uVar6 = param_3[3];
      lVar16 = (ulong)(iVar3 * uVar6 + (uint)(byte)(&DAT_100b3f717)[(ulong)*param_3 * 8] * *param_4)
               + *(long *)(param_3 + 4);
      uVar14 = param_5 >> 0x10 & 0xff;
      uVar9 = param_5 >> 8 & 0xff;
      lVar17 = (ulong)((uint)(byte)(&DAT_100b3f717)[(ulong)*param_1 * 8] * *param_2 +
                      param_2[1] * uVar5) + *(long *)(param_1 + 4);
      iVar13 = 0;
      do {
        lVar12 = 0;
        iVar11 = iVar8;
        do {
          bVar2 = *(byte *)(lVar16 + 2 + lVar12);
          pbVar1 = (byte *)(lVar17 + 1 + lVar12);
          pbVar15 = (byte *)(lVar17 + 2 + lVar12);
          pbVar10 = pbVar15;
          if (uVar14 < bVar2) {
            pbVar10 = pbVar1;
          }
          lVar7 = (long)(int)((uint)*pbVar10 * (uVar14 - bVar2)) * 0x80808081;
          *(byte *)(lVar16 + 2 + lVar12) =
               ((char)(uint)((ulong)lVar7 >> 0x27) - (char)(lVar7 >> 0x3f)) + bVar2;
          bVar2 = *(byte *)(lVar16 + 1 + lVar12);
          pbVar10 = pbVar15;
          if (uVar9 < bVar2) {
            pbVar10 = pbVar1;
          }
          lVar7 = (long)(int)((uint)*pbVar10 * (uVar9 - bVar2)) * 0x80808081;
          *(byte *)(lVar16 + 1 + lVar12) =
               ((char)(uint)((ulong)lVar7 >> 0x27) - (char)(lVar7 >> 0x3f)) + bVar2;
          bVar2 = *(byte *)(lVar16 + lVar12);
          if ((param_5 & 0xff) < (uint)bVar2) {
            pbVar15 = pbVar1;
          }
          lVar7 = (long)(int)((uint)*pbVar15 * ((param_5 & 0xff) - (uint)bVar2)) * 0x80808081;
          *(byte *)(lVar16 + lVar12) =
               ((char)(uint)((ulong)lVar7 >> 0x27) - (char)(lVar7 >> 0x3f)) + bVar2;
          lVar12 = lVar12 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        lVar16 = lVar16 + (ulong)uVar6;
        iVar13 = iVar13 + 1;
        lVar17 = lVar17 + (ulong)uVar5;
      } while (iVar13 != iVar4 - iVar3);
    }
  }
  return 1;
}

