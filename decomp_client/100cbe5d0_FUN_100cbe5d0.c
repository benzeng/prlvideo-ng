
int FUN_100cbe5d0(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  
  while( true ) {
    bVar4 = *param_2;
    if ((0x20 < (ulong)bVar4) || ((0x100000600U >> ((ulong)bVar4 & 0x3f) & 1) == 0)) break;
    param_2 = param_2 + 1;
  }
  sVar6 = _strlen((char *)param_2);
  if ((int)sVar6 < 1) {
    return 0;
  }
  pcVar7 = _strchr(s_0123456789ABCDEFGHIJKLMNOPQRSTUV_10230f370,(int)(char)bVar4);
  uVar12 = 0;
  if (pcVar7 != (char *)0x0) {
    uVar15 = 1;
    do {
      uVar12 = uVar15;
      *(char *)((long)param_1 + (uVar12 - 1)) = (char)pcVar7 + -0x70;
      if ((long)(int)sVar6 <= (long)uVar12) break;
      pcVar7 = _strchr(s_0123456789ABCDEFGHIJKLMNOPQRSTUV_10230f370,(int)(char)param_2[uVar12]);
      uVar15 = uVar12 + 1;
    } while (pcVar7 != (char *)0x0);
  }
  iVar11 = (int)uVar12;
  if (iVar11 == 0) {
    return 0;
  }
  lVar18 = (long)iVar11;
  lVar14 = 0;
  uVar15 = uVar12 & 0xffffffff;
  lVar10 = (long)((uVar12 << 0x20) + -0x100000000) >> 0x20;
  do {
    bVar4 = *(byte *)((long)param_1 + lVar10);
    *(byte *)((long)param_1 + lVar14 + lVar18) = bVar4;
    if (lVar10 < 1) {
      uVar16 = (int)lVar14 + iVar11;
      break;
    }
    *(byte *)((long)param_1 + lVar14 + lVar18) = *(char *)((long)param_1 + lVar10 + -1) << 6 | bVar4
    ;
    bVar4 = *(byte *)((long)param_1 + lVar10 + -1) >> 2 & 0xf;
    *(byte *)((long)param_1 + lVar14 + lVar18 + -1) = bVar4;
    iVar13 = (int)uVar15;
    if (lVar10 < 2) {
      uVar16 = iVar13 - 1;
      break;
    }
    *(byte *)((long)param_1 + lVar14 + lVar18 + -1) =
         *(char *)((long)param_1 + lVar10 + -2) << 4 | bVar4;
    bVar4 = *(byte *)((long)param_1 + lVar10 + -2) >> 4 & 3;
    *(byte *)((long)param_1 + lVar14 + lVar18 + -2) = bVar4;
    if (lVar10 < 3) {
      uVar16 = iVar13 - 2;
      break;
    }
    *(byte *)((long)param_1 + lVar14 + lVar18 + -2) =
         *(char *)((long)param_1 + lVar10 + -3) << 2 | bVar4;
    uVar16 = iVar13 - 3;
    uVar15 = (ulong)uVar16;
    *(undefined1 *)((long)param_1 + lVar14 + (iVar11 + -3)) = 0;
    lVar14 = lVar14 + -3;
    bVar2 = 3 < lVar10;
    lVar10 = lVar10 + -4;
  } while (bVar2);
  lVar10 = (long)(int)uVar16;
  do {
    lVar14 = lVar10;
    if (lVar18 < lVar14) break;
    lVar10 = lVar14 + 1;
  } while (*(char *)((long)param_1 + lVar14) == '\0');
  iVar13 = (int)lVar14;
  if (iVar11 < iVar13) {
    return 0;
  }
  lVar10 = (long)iVar13;
  iVar5 = iVar13;
  if (iVar13 <= iVar11) {
    iVar5 = iVar11;
  }
  lVar14 = (long)iVar11;
  if (iVar11 < lVar10) {
    lVar14 = lVar10;
  }
  uVar12 = 0;
  if (lVar14 - lVar10 != -1) {
    uVar15 = (lVar14 + 1) - lVar10;
    lVar17 = (long)iVar13;
    lVar14 = (long)iVar11;
    if (iVar11 < lVar17) {
      lVar14 = lVar17;
    }
    lVar1 = uVar15 + lVar10;
    uVar12 = uVar15 & 0xfffffffffffffff0;
    if ((uVar12 == 0) ||
       ((param_1 <= (undefined8 *)((long)param_1 + lVar14) &&
        ((ulong)((long)param_1 + lVar17) <= (ulong)((lVar14 - lVar17) + (long)param_1))))) {
      uVar12 = 0;
    }
    else {
      lVar10 = (uVar15 & 0xfffffffffffffff0) + lVar10;
      lVar17 = (long)iVar13;
      lVar14 = (long)iVar11;
      if (iVar11 < lVar17) {
        lVar14 = lVar17;
      }
      uVar15 = (lVar14 + 1) - lVar17 & 0xfffffffffffffff0;
      puVar8 = param_1;
      do {
        uVar3 = ((undefined8 *)(lVar17 + (long)puVar8))[1];
        *puVar8 = *(undefined8 *)(lVar17 + (long)puVar8);
        puVar8[1] = uVar3;
        puVar8 = puVar8 + 2;
        uVar15 = uVar15 - 0x10;
      } while (uVar15 != 0);
    }
    if (lVar1 == lVar10) goto LAB_100cbe842;
  }
  puVar9 = (undefined1 *)(uVar12 + (long)param_1);
  lVar10 = lVar10 + -1;
  do {
    *puVar9 = *(undefined1 *)((long)param_1 + lVar10 + 1);
    puVar9 = puVar9 + 1;
    lVar10 = lVar10 + 1;
  } while (lVar10 < lVar18);
LAB_100cbe842:
  return (iVar5 - iVar13) + 1;
}

