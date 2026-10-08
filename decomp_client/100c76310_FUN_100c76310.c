
undefined4 * FUN_100c76310(long *param_1,undefined8 *param_2,ulong param_3)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  char *pcVar13;
  int iVar14;
  char cVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  char *pcVar27;
  uint *puVar28;
  byte *pbVar29;
  char *pcVar30;
  uint *puVar31;
  byte *pbVar32;
  ulong uVar33;
  bool bVar34;
  
  if ((param_1 == (long *)0x0) || (puVar9 = (undefined4 *)*param_1, puVar9 == (undefined4 *)0x0)) {
    puVar9 = (undefined4 *)FUN_100c8b370(2);
    if (puVar9 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar9[1] = 2;
  }
  pcVar1 = (char *)*param_2;
  puVar10 = (undefined1 *)FUN_100bf3540((int)param_3 + 1,"a_int.c",0xd0);
  if (puVar10 == (undefined1 *)0x0) {
    FUN_100c62ee0(0xd,0xc2,0x41,"a_int.c",0x10d);
    if ((param_1 == (long *)0x0) || (puVar11 = (undefined4 *)0x0, (undefined4 *)*param_1 != puVar9))
    {
      FUN_100c8b2f0(puVar9);
      puVar11 = (undefined4 *)0x0;
    }
  }
  else {
    if (param_3 == 0) {
      puVar9[1] = 2;
      uVar33 = 0;
    }
    else {
      uVar33 = param_3;
      if (*pcVar1 < '\0') {
        puVar9[1] = 0x102;
        pcVar13 = pcVar1;
        if ((param_3 != 1) && (*pcVar1 == -1)) {
          pcVar13 = pcVar1 + 1;
          uVar33 = param_3 - 1;
        }
        lVar21 = (long)((uVar33 << 0x20) + -0x100000000) >> 0x20;
        pcVar27 = pcVar13 + lVar21;
        pcVar30 = puVar10 + lVar21;
        cVar15 = pcVar13[lVar21];
        iVar23 = (int)uVar33;
        bVar2 = iVar23 != 0;
        if (iVar23 == 0) {
          uVar26 = uVar33 & 0xffffffff;
        }
        else {
          uVar26 = uVar33 & 0xffffffff;
          if (cVar15 == '\0') {
            lVar12 = 0;
            do {
              puVar10[lVar12 + lVar21] = 0;
              cVar15 = pcVar13[lVar12 + lVar21 + -1];
              iVar14 = (int)lVar12;
              pcVar30 = puVar10 + lVar12 + lVar21 + -1;
              pcVar27 = pcVar13 + lVar12 + lVar21 + -1;
              lVar12 = lVar12 + -1;
              uVar26 = (ulong)(uint)((int)lVar12 + iVar23);
              bVar34 = iVar23 + iVar14 == 1;
              bVar2 = !bVar34;
              if (bVar34) break;
            } while (cVar15 == '\0');
          }
        }
        if (bVar2) {
          *pcVar30 = -cVar15;
          iVar23 = (int)uVar26;
          if (1 < iVar23) {
            uVar17 = (ulong)(iVar23 - 2);
            uVar22 = uVar17 + 1 & 0x1ffffffe0;
            uVar20 = 0;
            pcVar13 = pcVar27;
            pcVar16 = pcVar30;
            if (uVar22 != 0) {
              if ((pcVar27 + ~uVar17 < pcVar30 + -1) ||
                 (uVar20 = 0, pcVar30 + ~uVar17 < pcVar27 + -1)) {
                pcVar13 = pcVar27 + -uVar22;
                pcVar16 = pcVar30 + -uVar22;
                uVar26 = (ulong)(uint)(iVar23 - (int)uVar22);
                puVar31 = (uint *)(pcVar30 + -0x10);
                puVar28 = (uint *)(pcVar27 + -0x10);
                uVar18 = uVar17 + 1 & 0xffffffffffffffe0;
                do {
                  uVar5 = puVar28[-4];
                  uVar6 = puVar28[-3];
                  uVar7 = puVar28[-2];
                  uVar8 = puVar28[-1];
                  uVar25 = puVar28[1];
                  uVar3 = puVar28[2];
                  uVar4 = puVar28[3];
                  *puVar31 = *puVar28 ^ 0xffffffff;
                  puVar31[1] = uVar25 ^ 0xffffffff;
                  puVar31[2] = uVar3 ^ 0xffffffff;
                  puVar31[3] = uVar4 ^ 0xffffffff;
                  puVar31[-4] = uVar5 ^ 0xffffffff;
                  puVar31[-3] = uVar6 ^ 0xffffffff;
                  puVar31[-2] = uVar7 ^ 0xffffffff;
                  puVar31[-1] = uVar8 ^ 0xffffffff;
                  puVar31 = puVar31 + -8;
                  puVar28 = puVar28 + -8;
                  uVar18 = uVar18 - 0x20;
                  uVar20 = uVar22;
                } while (uVar18 != 0);
              }
            }
            if (uVar17 + 1 != uVar20) {
              iVar24 = (int)uVar26;
              iVar14 = -iVar24;
              iVar23 = -2;
              if (-3 < iVar14) {
                iVar23 = iVar14;
              }
              if ((iVar24 + 1 + iVar23 & 3U) != 0) {
                iVar19 = -2;
                if (-3 < iVar14) {
                  iVar19 = iVar14;
                }
                lVar21 = 0;
                do {
                  pcVar16[lVar21 + -1] = ~pcVar13[lVar21 + -1];
                  lVar21 = lVar21 + -1;
                } while (-(iVar24 + 1 + iVar19 & 3U) != (int)lVar21);
                pcVar13 = pcVar13 + lVar21;
                pcVar16 = pcVar16 + lVar21;
                uVar26 = (ulong)(uint)(iVar24 + (int)lVar21);
              }
              if (2 < (uint)(iVar24 + iVar23)) {
                pbVar29 = (byte *)(pcVar13 + -1);
                pbVar32 = (byte *)(pcVar16 + -1);
                do {
                  *pbVar32 = ~*pbVar29;
                  pbVar32[-1] = ~pbVar29[-1];
                  pbVar32[-2] = ~pbVar29[-2];
                  uVar25 = (int)uVar26 - 4;
                  uVar26 = (ulong)uVar25;
                  pbVar32[-3] = ~pbVar29[-3];
                  pbVar29 = pbVar29 + -4;
                  pbVar32 = pbVar32 + -4;
                } while (1 < (int)uVar25);
              }
            }
          }
        }
        else {
          *puVar10 = 1;
          puVar10[uVar33] = 0;
          uVar33 = uVar33 + 1;
        }
      }
      else {
        puVar9[1] = 2;
        pcVar13 = pcVar1;
        if ((param_3 != 1) && (*pcVar1 == '\0')) {
          pcVar13 = pcVar1 + 1;
          uVar33 = param_3 - 1;
        }
        _memcpy(puVar10,pcVar13,(long)(int)uVar33);
      }
    }
    if (*(long *)(puVar9 + 2) != 0) {
      FUN_100bf3910();
    }
    *(undefined1 **)(puVar9 + 2) = puVar10;
    *puVar9 = (int)uVar33;
    if (param_1 != (long *)0x0) {
      *param_1 = (long)puVar9;
    }
    *param_2 = pcVar1 + param_3;
    puVar11 = puVar9;
  }
  return puVar11;
}

