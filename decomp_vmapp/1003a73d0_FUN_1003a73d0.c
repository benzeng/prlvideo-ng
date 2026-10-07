
void FUN_1003a73d0(undefined4 *param_1,char param_2,undefined4 param_3,undefined8 param_4,
                  char *param_5)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  __darwin_ct_rune_t _Var6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ushort uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  char *pcVar19;
  uint local_48 [4];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar10;
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 2) = param_4;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  *(ushort *)(param_1 + 7) =
       (ushort)(param_2 == 'H') << 10 | (ushort)(param_2 == 'D') << 9 |
       (ushort)(param_2 == 'L') << 0xb | (ushort)(param_2 == 'I' || param_2 == 'L') << 8 |
       *(ushort *)(param_1 + 7) & 0xf000;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  if (param_5 != (char *)0x0) {
    cVar3 = *param_5;
    iVar8 = 0;
    if (cVar3 != '\0') {
      uVar17 = 0;
      do {
        _Var6 = ___tolower((int)cVar3);
        uVar15 = (uint)(char)_Var6;
        if (uVar15 < 0x80) {
          uVar7 = *(uint *)(PTR___DefaultRuneLocale_100ba20c0 + (long)(int)uVar15 * 4 + 0x3c) &
                  0x4000;
        }
        else {
          uVar7 = ___maskrune(uVar15,0x4000);
        }
        pcVar19 = param_5 + 1;
        if (uVar7 == 0) {
          if ((int)uVar15 < 0x70) {
            if (uVar15 == 100) {
              uVar15 = ___tolower((int)param_5[1]);
              if ((uVar15 & 0xff) == 0x28) {
                _Var6 = ___tolower((int)param_5[2]);
                cVar3 = (char)_Var6;
                if ((byte)(cVar3 - 0x30U) < 10) {
                  uVar5 = (short)cVar3 - 0x30;
                }
                else {
                  uVar5 = (short)cVar3 - 0x57;
                  if (5 < (byte)(cVar3 + 0x9fU)) {
                    uVar5 = 0;
                  }
                }
                uVar5 = uVar5 & 0xf;
                uVar12 = *(ushort *)(param_1 + 7) & 0xfff0;
LAB_1003a77a4:
                *(ushort *)(param_1 + 7) = uVar12 | uVar5;
                uVar18 = uVar17;
LAB_1003a77ac:
                ___tolower((int)param_5[3]);
                uVar17 = uVar18;
                pcVar19 = param_5 + 4;
              }
              else {
LAB_1003a7727:
                pcVar19 = param_5 + 2;
              }
            }
            else if (uVar15 == 0x6a) {
              uVar15 = ___tolower((int)param_5[1]);
              if ((uVar15 & 0xff) != 0x28) goto LAB_1003a7727;
              _Var6 = ___tolower((int)param_5[2]);
              cVar3 = (char)_Var6;
              if ((byte)(cVar3 - 0x30U) < 10) {
                uVar15 = (int)cVar3 - 0x30;
              }
              else {
                uVar15 = (int)cVar3 - 0x57;
                if (5 < (byte)(cVar3 + 0x9fU)) {
                  uVar15 = 0;
                }
              }
              uVar18 = (ulong)((int)uVar17 + 1);
              local_48[uVar17] = uVar15;
              goto LAB_1003a77ac;
            }
          }
          else if (uVar15 == 0x70) {
            uVar15 = ___tolower((int)param_5[1]);
            cVar3 = (char)uVar15;
            uVar7 = (uint)cVar3;
            if (((uVar15 & 0xff) == 0x61) ||
               ((pcVar19 = param_5 + 2, uVar7 < 0x100 &&
                ((PTR___DefaultRuneLocale_100ba20c0[(long)(int)uVar7 * 4 + 0x3d] & 4) != 0)))) {
              pcVar19 = param_5 + 3;
              uVar15 = ___tolower((int)param_5[2]);
              if ((uVar15 & 0xff) == 0x28) {
                cVar4 = *pcVar19;
                if (cVar4 == '\0') {
                  bVar14 = 0;
                }
                else {
                  bVar14 = 0;
                  pcVar2 = param_5 + 4;
                  do {
                    pcVar19 = pcVar2;
                    _Var6 = ___tolower((int)cVar4);
                    iVar8 = (int)(char)_Var6;
                    if (iVar8 < 0x75) {
                      switch(iVar8) {
                      case 0x61:
                        bVar14 = 0xf;
                        break;
                      case 0x62:
                        bVar14 = bVar14 | 4;
                        break;
                      default:
                        goto switchD_1003a7675_caseD_63;
                      case 0x66:
                        bVar14 = bVar14 | 8;
                        break;
                      case 0x69:
                        bVar14 = bVar14 | 2;
                      }
                    }
                    else {
                      if (iVar8 != 0x75) break;
                      bVar14 = bVar14 | 1;
                    }
                    cVar4 = *pcVar19;
                    pcVar2 = pcVar19 + 1;
                  } while (cVar4 != '\0');
                }
switchD_1003a7675_caseD_63:
                if (uVar7 == 0x61) {
                  lVar10 = 0;
                  if ((ushort)((*(ushort *)(param_1 + 7) & 0xf) +
                              (*(ushort *)(param_1 + 7) >> 4 & 0xf)) != 0) {
                    do {
                      pbVar1 = (byte *)((long)param_1 + lVar10 * 2 + 0x10);
                      *pbVar1 = *pbVar1 | bVar14;
                      lVar10 = lVar10 + 1;
                    } while ((uint)lVar10 <
                             (*(ushort *)(param_1 + 7) & 0xf) +
                             (*(ushort *)(param_1 + 7) >> 4 & 0xf));
                  }
                }
                else {
                  if ((byte)(cVar3 - 0x30U) < 10) {
                    uVar7 = uVar7 - 0x30;
                  }
                  else {
                    uVar7 = uVar7 - 0x57;
                    if (5 < (byte)(cVar3 + 0x9fU)) {
                      uVar7 = 0;
                    }
                  }
                  pbVar1 = (byte *)((long)param_1 + (ulong)uVar7 * 2 + 0x10);
                  *pbVar1 = *pbVar1 | bVar14;
                }
              }
            }
          }
          else if (uVar15 == 0x73) {
            uVar15 = ___tolower((int)param_5[1]);
            if ((uVar15 & 0xff) != 0x28) goto LAB_1003a7727;
            _Var6 = ___tolower((int)param_5[2]);
            cVar3 = (char)_Var6;
            if ((byte)(cVar3 - 0x30U) < 10) {
              uVar5 = (short)cVar3 - 0x30;
            }
            else {
              uVar5 = (short)cVar3 - 0x57;
              if (5 < (byte)(cVar3 + 0x9fU)) {
                uVar5 = 0;
              }
            }
            uVar5 = (uVar5 & 0xf) << 4;
            uVar12 = *(ushort *)(param_1 + 7) & 0xff0f;
            goto LAB_1003a77a4;
          }
        }
        param_5 = pcVar19;
        iVar8 = (int)uVar17;
        cVar3 = *param_5;
      } while (cVar3 != '\0');
    }
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (iVar8 != 0) {
      lVar11 = 0;
      do {
        uVar15 = local_48[lVar11];
        cVar3 = '\0';
        uVar7 = uVar15;
        while (uVar7 != 0) {
          uVar13 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
            }
          }
          if (uVar7 == 0) {
            uVar13 = 0xffffffff;
          }
          uVar16 = ~(1 << ((byte)uVar13 & 0x1f));
          uVar7 = uVar7 & uVar16;
          *(byte *)((long)param_1 + (ulong)uVar13 * 2 + 0x11) = (byte)uVar16 & (byte)uVar15;
          if (cVar3 == '\0') {
            cVar3 = *(char *)((long)param_1 + (ulong)uVar13 * 2 + 0x10);
          }
        }
        iVar9 = (int)lVar11;
        lVar11 = lVar11 + 1;
      } while (iVar9 != iVar8 + -1);
    }
  }
  if (lVar10 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

