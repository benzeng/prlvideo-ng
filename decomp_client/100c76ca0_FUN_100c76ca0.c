
undefined8 FUN_100c76ca0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  undefined1 *puVar10;
  byte bVar11;
  undefined1 *puVar12;
  
  if (param_1[1] != 0x1c) {
    return 0;
  }
  uVar1 = *param_1;
  if ((uVar1 & 3) != 0) {
    return 0;
  }
  lVar9 = 0;
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(param_1 + 2);
    lVar9 = 0;
    do {
      if (((*(char *)(lVar2 + lVar9) != '\0') || (*(char *)(lVar2 + 1 + lVar9) != '\0')) ||
         (*(char *)(lVar2 + 2 + lVar9) != '\0')) break;
      lVar9 = lVar9 + 4;
    } while ((int)lVar9 < (int)uVar1);
  }
  if ((int)lVar9 < (int)uVar1) {
    return 0;
  }
  puVar10 = *(undefined1 **)(param_1 + 2);
  puVar12 = puVar10;
  if (3 < (int)uVar1) {
    puVar12 = puVar10 + 1;
    *puVar10 = puVar10[3];
    lVar9 = 7;
    if (7 < (int)*param_1) {
      do {
        puVar6 = puVar12;
        puVar12 = puVar10 + 2;
        *puVar6 = *(undefined1 *)(*(long *)(param_1 + 2) + lVar9);
        lVar9 = lVar9 + 4;
        puVar10 = puVar6;
      } while (lVar9 < (int)*param_1);
    }
  }
  *puVar12 = 0;
  uVar1 = *param_1;
  uVar5 = (int)(((uint)((int)uVar1 >> 0x1f) >> 0x1e) + uVar1) >> 2;
  *param_1 = uVar5;
  pbVar7 = *(byte **)(param_1 + 2);
  uVar8 = 0x13;
  if (pbVar7 != (byte *)0x0) {
    bVar11 = *pbVar7;
    bVar4 = 0;
    if (bVar11 != 0) {
      if ((int)uVar1 < 4) {
        uVar5 = 0xffffffff;
      }
      bVar3 = false;
      bVar4 = 0;
      do {
        pbVar7 = pbVar7 + 1;
        if (uVar5 == 0) break;
        if ((((0x19 < (byte)(bVar11 + 0x9f)) && (9 < (byte)(bVar11 - 0x30))) &&
            ((bVar11 != 0x20 && (0x19 < (byte)(bVar11 + 0xbf))))) &&
           ((0x3f < bVar11 || ((0xa400fb8100000000U >> ((ulong)bVar11 & 0x3f) & 1) == 0)))) {
          bVar4 = 1;
        }
        uVar5 = uVar5 - 1;
        if ((char)bVar11 < '\0') {
          bVar3 = true;
        }
        bVar11 = *pbVar7;
      } while (bVar11 != 0);
      uVar8 = 0x14;
      if (bVar3) goto LAB_100c76e17;
    }
    uVar8 = (uint)bVar4 * 3 + 0x13;
  }
LAB_100c76e17:
  param_1[1] = uVar8;
  return 1;
}

