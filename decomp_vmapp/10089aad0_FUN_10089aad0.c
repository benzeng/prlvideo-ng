
int FUN_10089aad0(uint *param_1,long *param_2)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined1 uVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  char *pcVar22;
  ulong uVar23;
  char *pcVar24;
  uint *puVar25;
  byte *pbVar26;
  long lVar27;
  undefined1 *puVar28;
  ulong uVar29;
  uint *puVar30;
  byte *pbVar31;
  int iVar32;
  
  iVar32 = 0;
  if (param_1 != (uint *)0x0) {
    uVar15 = param_1[1] & 0x100;
    uVar9 = *param_1;
    uVar10 = (ulong)(int)uVar9;
    if (uVar10 == 0) {
      uVar20 = 0;
      iVar32 = 1;
      uVar17 = 0;
    }
    else {
      bVar1 = **(byte **)(param_1 + 2);
      uVar17 = 0;
      uVar20 = uVar15;
      if (bVar1 == 0) {
        uVar20 = 0;
      }
      if (uVar9 != 1) {
        uVar20 = uVar15;
      }
      uVar15 = uVar20;
      if (uVar15 == 0) {
        uVar20 = (uint)((char)bVar1 < '\0');
      }
      else if (bVar1 < 0x81) {
        uVar20 = 0;
        if (bVar1 == 0x80) {
          uVar17 = 0;
          uVar20 = 0;
          if (1 < (int)uVar9) {
            lVar16 = 1;
            do {
              if ((*(byte **)(param_1 + 2))[lVar16] != 0) goto LAB_10089ab77;
              lVar16 = lVar16 + 1;
              uVar20 = 0;
              uVar17 = 0;
            } while (lVar16 < (long)uVar10);
          }
        }
        else {
          uVar17 = 0;
        }
      }
      else {
LAB_10089ab77:
        uVar20 = 1;
        uVar17 = 0xff;
      }
      iVar32 = uVar20 + uVar9;
    }
    if (param_2 != (long *)0x0) {
      puVar28 = (undefined1 *)*param_2;
      if (uVar20 != 0) {
        *puVar28 = uVar17;
        puVar28 = puVar28 + 1;
        uVar10 = (ulong)*param_1;
      }
      iVar7 = (int)uVar10;
      if (iVar7 == 0) {
        *puVar28 = 0;
      }
      else {
        pvVar2 = *(void **)(param_1 + 2);
        if (uVar15 == 0) {
          _memcpy(puVar28,pvVar2,uVar10 & 0xffffffff);
        }
        else {
          lVar11 = (long)iVar7;
          lVar16 = lVar11 + -1 + (long)pvVar2;
          lVar27 = (long)(iVar7 + -1);
          pcVar24 = puVar28 + lVar27;
          cVar18 = *(char *)(lVar11 + -1 + (long)pvVar2);
          if ((1 < iVar7) && (cVar18 == '\0')) {
            lVar12 = 0;
            do {
              puVar28[lVar12 + lVar27] = 0;
              cVar18 = *(char *)((long)pvVar2 + lVar12 + lVar11 + -2);
              iVar8 = (int)lVar12;
              lVar16 = (long)pvVar2 + lVar12 + lVar11 + -2;
              pcVar24 = puVar28 + lVar12 + lVar27 + -1;
              lVar12 = lVar12 + -1;
              uVar10 = (ulong)(uint)((int)lVar12 + iVar7);
              if (iVar7 + -1 + iVar8 < 2) break;
            } while (cVar18 == '\0');
          }
          *pcVar24 = -cVar18;
          iVar7 = (int)uVar10;
          if (1 < iVar7) {
            uVar13 = (ulong)(iVar7 - 2);
            uVar29 = uVar13 + 1 & 0x1ffffffe0;
            uVar23 = 0;
            pcVar22 = pcVar24;
            lVar11 = lVar16;
            if (uVar29 != 0) {
              if (((char *)(lVar16 + ~uVar13) < pcVar24 + -1) ||
                 (uVar23 = 0, pcVar24 + ~uVar13 < (char *)(lVar16 + -1))) {
                lVar11 = lVar16 - uVar29;
                pcVar22 = pcVar24 + -uVar29;
                uVar10 = (ulong)(uint)(iVar7 - (int)uVar29);
                puVar25 = (uint *)(pcVar24 + -0x10);
                puVar30 = (uint *)(lVar16 + -0x10);
                uVar14 = uVar13 + 1 & 0xffffffffffffffe0;
                do {
                  uVar3 = puVar30[-4];
                  uVar4 = puVar30[-3];
                  uVar5 = puVar30[-2];
                  uVar6 = puVar30[-1];
                  uVar9 = puVar30[1];
                  uVar15 = puVar30[2];
                  uVar20 = puVar30[3];
                  *puVar25 = *puVar30 ^ 0xffffffff;
                  puVar25[1] = uVar9 ^ 0xffffffff;
                  puVar25[2] = uVar15 ^ 0xffffffff;
                  puVar25[3] = uVar20 ^ 0xffffffff;
                  puVar25[-4] = uVar3 ^ 0xffffffff;
                  puVar25[-3] = uVar4 ^ 0xffffffff;
                  puVar25[-2] = uVar5 ^ 0xffffffff;
                  puVar25[-1] = uVar6 ^ 0xffffffff;
                  puVar25 = puVar25 + -8;
                  puVar30 = puVar30 + -8;
                  uVar14 = uVar14 - 0x20;
                  uVar23 = uVar29;
                } while (uVar14 != 0);
              }
            }
            if (uVar13 + 1 != uVar23) {
              iVar8 = (int)uVar10;
              iVar21 = -iVar8;
              iVar7 = -2;
              if (-3 < iVar21) {
                iVar7 = iVar21;
              }
              if ((iVar8 + 1 + iVar7 & 3U) != 0) {
                iVar19 = -2;
                if (-3 < iVar21) {
                  iVar19 = iVar21;
                }
                lVar16 = 0;
                do {
                  pcVar22[lVar16 + -1] = ~*(byte *)(lVar11 + -1 + lVar16);
                  lVar16 = lVar16 + -1;
                } while (-(iVar8 + 1 + iVar19 & 3U) != (int)lVar16);
                lVar11 = lVar11 + lVar16;
                pcVar22 = pcVar22 + lVar16;
                uVar10 = (ulong)(uint)(iVar8 + (int)lVar16);
              }
              if (2 < (uint)(iVar8 + iVar7)) {
                pbVar31 = (byte *)(lVar11 + -1);
                pbVar26 = (byte *)(pcVar22 + -1);
                do {
                  *pbVar26 = ~*pbVar31;
                  pbVar26[-1] = ~pbVar31[-1];
                  pbVar26[-2] = ~pbVar31[-2];
                  uVar9 = (int)uVar10 - 4;
                  uVar10 = (ulong)uVar9;
                  pbVar26[-3] = ~pbVar31[-3];
                  pbVar31 = pbVar31 + -4;
                  pbVar26 = pbVar26 + -4;
                } while (1 < (int)uVar9);
              }
            }
          }
        }
      }
      *param_2 = *param_2 + (long)iVar32;
    }
  }
  return iVar32;
}

