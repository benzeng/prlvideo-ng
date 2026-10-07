
void FUN_1003cff00(undefined4 *param_1,long param_2,uint param_3,int param_4,ulong param_5,
                  uint param_6)

{
  undefined1 *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  undefined1 uVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  ulong uVar32;
  bool bVar33;
  int local_dc;
  int local_c0;
  int local_b0;
  int local_a8;
  uint local_9c;
  undefined1 local_68;
  byte local_67;
  byte local_66;
  undefined1 local_65;
  undefined1 local_64;
  byte local_63;
  byte local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  byte local_57;
  byte local_56;
  undefined1 local_55;
  undefined1 local_54;
  byte local_53;
  byte local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  byte local_47;
  byte local_46;
  undefined1 local_45;
  undefined1 local_44;
  byte local_43;
  byte local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar20 = (uint)param_5;
  switch(*param_1) {
  case 0x65:
  case 0x66:
    if (param_6 != 0) {
      lVar6 = *(long *)(param_1 + 4);
      uVar4 = param_1[1];
      uVar5 = param_1[2];
      uVar19 = ((uint)(param_5 >> 2) & 0x3fffffff) * param_1[3] + param_4 * 2;
      uVar13 = -uVar4;
      uVar12 = uVar20 - uVar5;
      uVar9 = 0xfffffffc;
      if (0xfffffffc < uVar12) {
        uVar9 = uVar12;
      }
      iVar17 = 0;
      uVar22 = 0;
      uVar12 = uVar4 - 1;
      local_c0 = uVar4 + 3;
      do {
        uVar23 = 3;
        if (3 < uVar12) {
          uVar23 = uVar12;
        }
        uVar16 = (uVar4 - 1) + iVar17 * -4;
        if (uVar16 < 4) {
          uVar16 = 3;
        }
        iVar18 = -uVar13;
        if (uVar13 < 0xfffffffd) {
          iVar18 = 4;
        }
        uVar2 = *(ushort *)(lVar6 + (ulong)uVar19);
        uVar3 = *(ushort *)(lVar6 + (ulong)(uVar19 + 2));
        local_46 = (byte)(uVar2 >> 8) & 0xf8;
        local_47 = (byte)(uVar2 >> 3) & 0xfc;
        local_42 = (byte)(uVar3 >> 8) & 0xf8;
        local_43 = (byte)(uVar3 >> 3) & 0xfc;
        uVar25 = uVar2 >> 8 & 0xf8;
        uVar14 = (uint)uVar2 * 8;
        local_48 = (undefined1)uVar14;
        uVar15 = (uint)uVar3 * 8;
        local_44 = (undefined1)uVar15;
        local_39 = 0xff;
        local_3d = 0xff;
        local_41 = 0xff;
        local_45 = 0xff;
        if ((uint)uVar3 < (uint)uVar2) {
          local_3e = (undefined1)(((uint)local_42 + uVar25 * 2) / 3);
          local_3f = (undefined1)(((uint)local_43 + (uint)local_47 * 2) / 3);
          local_40 = (undefined1)((ulong)((uVar15 & 0xf8) + (uVar14 & 0xf8) * 2) / 3);
          local_3a = (undefined1)((uVar25 + (uint)local_42 * 2) / 3);
          local_3b = (undefined1)(((uint)local_47 + (uint)local_43 * 2) / 3);
          local_3c = (undefined1)((ulong)((uVar14 & 0xf8) + (uVar15 & 0xf8) * 2) / 3);
        }
        else {
          local_3e = (undefined1)(local_42 + uVar25 >> 1);
          local_3f = (undefined1)((uint)local_43 + (uint)local_47 >> 1);
          local_40 = (undefined1)((uVar15 & 0xf8) + (uVar14 & 0xf8) >> 1);
          local_3a = 0;
          local_3b = 0;
          local_3c = 0;
          local_39 = 0;
        }
        uVar14 = (uint)uVar22;
        uVar15 = uVar19 + 4;
        iVar10 = 0;
        if (uVar20 < uVar5) {
          iVar10 = 0;
          do {
            uVar25 = (uint)uVar22;
            if (uVar14 < uVar4) {
              bVar8 = *(byte *)(lVar6 + (ulong)uVar15);
              bVar33 = ((uVar4 + 3) - uVar16 & 1) != 0;
              uVar28 = uVar25;
              if (bVar33) {
                *(undefined4 *)(param_2 + uVar22 * 4) =
                     *(undefined4 *)((ulong)(bVar8 & 3) << 2 | (ulong)&local_48);
                bVar8 = bVar8 >> 2;
                uVar28 = uVar25 + 1;
              }
              uVar22 = (ulong)bVar8;
              if (uVar4 + 2 + iVar17 * -4 != uVar16) {
                iVar21 = (local_c0 - uVar23) - (uint)bVar33;
                do {
                  uVar11 = uVar28 + 1;
                  *(undefined4 *)(param_2 + (ulong)uVar28 * 4) =
                       *(undefined4 *)((ulong)((uint)uVar22 & 3) << 2 | (ulong)&local_48);
                  uVar28 = uVar28 + 2;
                  *(undefined4 *)(param_2 + (ulong)uVar11 * 4) =
                       *(undefined4 *)((ulong)((uint)(uVar22 >> 2) & 3) << 2 | (ulong)&local_48);
                  uVar22 = uVar22 >> 4;
                  iVar21 = iVar21 + -2;
                } while (iVar21 != 0);
              }
              uVar25 = uVar25 + iVar18;
              iVar21 = iVar18;
            }
            else {
              iVar21 = 0;
            }
            uVar15 = uVar15 + 1;
            uVar22 = (ulong)(uVar25 + ((param_3 >> 2) - iVar21));
            iVar10 = iVar10 + 1;
          } while (iVar10 != -uVar9);
          uVar15 = uVar19 + (4 - uVar9);
          iVar10 = -uVar9;
        }
        uVar19 = (4 - iVar10) + uVar15;
        uVar14 = uVar14 + 4;
        uVar22 = (ulong)uVar14;
        uVar13 = uVar13 + 4;
        iVar17 = iVar17 + 1;
        local_c0 = local_c0 + -4;
        uVar12 = uVar12 - 4;
      } while (uVar14 < param_6);
    }
    break;
  case 0x67:
  case 0x68:
    if (param_6 != 0) {
      lVar6 = *(long *)(param_1 + 4);
      uVar4 = param_1[1];
      uVar5 = param_1[2];
      uVar9 = ((uint)(param_5 >> 2) & 0x3fffffff) * param_1[3] + param_4 * 4;
      uVar13 = -uVar4;
      uVar19 = uVar20 - uVar5;
      uVar12 = 0xfffffffc;
      if (0xfffffffc < uVar19) {
        uVar12 = uVar19;
      }
      local_a8 = uVar4 + 3;
      uVar19 = uVar4 - 1;
      uVar23 = 0;
      do {
        uVar16 = 3;
        if (3 < uVar19) {
          uVar16 = uVar19;
        }
        iVar17 = -uVar13;
        if (uVar13 < 0xfffffffd) {
          iVar17 = 4;
        }
        uVar22 = *(ulong *)(lVar6 + (ulong)uVar9);
        uVar2 = *(ushort *)(lVar6 + (ulong)(uVar9 + 8));
        uVar3 = *(ushort *)(lVar6 + (ulong)(uVar9 + 10));
        local_56 = (byte)(uVar2 >> 8) & 0xf8;
        local_57 = (byte)(uVar2 >> 3) & 0xfc;
        local_52 = (byte)(uVar3 >> 8) & 0xf8;
        local_53 = (byte)(uVar3 >> 3) & 0xfc;
        uVar25 = uVar2 >> 8 & 0xf8;
        uVar14 = (uint)uVar2 * 8;
        local_58 = (undefined1)uVar14;
        uVar15 = (uint)uVar3 * 8;
        local_54 = (undefined1)uVar15;
        local_49 = 0xff;
        local_4d = 0xff;
        local_51 = 0xff;
        local_55 = 0xff;
        if ((uint)uVar3 < (uint)uVar2) {
          local_4e = (undefined1)((ulong)((uint)local_52 + uVar25 * 2) / 3);
          local_4f = (undefined1)(((uint)local_53 + (uint)local_57 * 2) / 3);
          local_50 = (undefined1)((ulong)((uVar15 & 0xf8) + (uVar14 & 0xf8) * 2) / 3);
          local_4a = (undefined1)((ulong)(uVar25 + (uint)local_52 * 2) / 3);
          local_4b = (undefined1)(((uint)local_57 + (uint)local_53 * 2) / 3);
          local_4c = (undefined1)((ulong)((uVar14 & 0xf8) + (uVar15 & 0xf8) * 2) / 3);
        }
        else {
          local_4e = (undefined1)(local_52 + uVar25 >> 1);
          local_4f = (undefined1)((uint)local_53 + (uint)local_57 >> 1);
          local_50 = (undefined1)((uVar15 & 0xf8) + (uVar14 & 0xf8) >> 1);
          local_4a = 0;
          local_4b = 0;
          local_4c = 0;
          local_49 = 0;
        }
        uVar15 = uVar9 + 0xc;
        iVar18 = 0;
        if (uVar20 < uVar5) {
          iVar18 = 0;
          uVar14 = uVar23;
          do {
            if (uVar23 < uVar4) {
              uVar28 = (uint)*(byte *)(lVar6 + (ulong)uVar15);
              iVar10 = local_a8 - uVar16;
              uVar25 = uVar14;
              do {
                uVar30 = (ulong)uVar25;
                pbVar31 = (byte *)((ulong)(uVar28 & 3) << 2 | (ulong)&local_58);
                pbVar31[3] = (byte)(uVar22 << 4);
                uVar25 = uVar25 + 1;
                *(uint *)(param_2 + uVar30 * 4) =
                     (uint)*pbVar31 |
                     (uint)pbVar31[1] << 8 | (uint)pbVar31[2] << 0x10 | (uint)(uVar22 << 0x1c);
                uVar22 = uVar22 >> 4;
                uVar28 = uVar28 >> 2;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
              uVar14 = uVar14 + iVar17;
              iVar10 = iVar17;
            }
            else {
              iVar10 = 0;
            }
            uVar15 = uVar15 + 1;
            uVar14 = uVar14 + ((param_3 >> 2) - iVar10);
            iVar18 = iVar18 + 1;
          } while (iVar18 != -uVar12);
          uVar15 = uVar9 + (0xc - uVar12);
          iVar18 = -uVar12;
        }
        uVar9 = (4 - iVar18) + uVar15;
        uVar23 = uVar23 + 4;
        uVar13 = uVar13 + 4;
        local_a8 = local_a8 + -4;
        uVar19 = uVar19 - 4;
      } while (uVar23 < param_6);
    }
    break;
  case 0x69:
  case 0x6a:
    if (param_6 != 0) {
      lVar6 = *(long *)(param_1 + 4);
      uVar4 = param_1[1];
      uVar5 = param_1[2];
      uVar19 = ((uint)(param_5 >> 2) & 0x3fffffff) * param_1[3] + param_4 * 4;
      uVar13 = -uVar4;
      uVar12 = uVar20 - uVar5;
      uVar9 = 0xfffffffc;
      if (0xfffffffc < uVar12) {
        uVar9 = uVar12;
      }
      local_c0 = uVar4 + 3;
      uVar12 = uVar4 - 1;
      uVar22 = 0;
      do {
        uVar16 = (uint)uVar22;
        uVar23 = 3;
        if (3 < uVar12) {
          uVar23 = uVar12;
        }
        iVar17 = -uVar13;
        if (uVar13 < 0xfffffffd) {
          iVar17 = 4;
        }
        uVar30 = *(ulong *)(lVar6 + (ulong)uVar19);
        uVar2 = *(ushort *)(lVar6 + (ulong)(uVar19 + 8));
        uVar3 = *(ushort *)(lVar6 + (ulong)(uVar19 + 10));
        local_66 = (byte)(uVar2 >> 8) & 0xf8;
        uVar7 = uVar2 >> 3;
        local_67 = (byte)uVar7 & 0xfc;
        local_62 = (byte)(uVar3 >> 8) & 0xf8;
        local_63 = (byte)(uVar3 >> 3) & 0xfc;
        uVar25 = uVar2 >> 8 & 0xf8;
        uVar14 = (uint)uVar2 * 8;
        local_68 = (undefined1)uVar14;
        uVar15 = (uint)uVar3 * 8;
        local_64 = (undefined1)uVar15;
        local_59 = 0xff;
        local_5d = 0xff;
        local_61 = 0xff;
        local_65 = 0xff;
        if ((uint)uVar3 < (uint)uVar2) {
          local_5e = (undefined1)((ulong)((uint)local_62 + uVar25 * 2) / 3);
          uVar28 = uVar7 & 0xfc;
          local_5f = (undefined1)(((uint)local_63 + uVar28 * 2) / 3);
          local_60 = (undefined1)((ulong)((uVar15 & 0xf8) + (uVar14 & 0xf8) * 2) / 3);
          local_5a = (undefined1)((ulong)(uVar25 + (uint)local_62 * 2) / 3);
          local_5b = (undefined1)((uVar28 + (uint)local_63 * 2) / 3);
          local_5c = (undefined1)((ulong)((uVar14 & 0xf8) + (uVar15 & 0xf8) * 2) / 3);
        }
        else {
          local_5e = (undefined1)(local_62 + uVar25 >> 1);
          local_5f = (undefined1)((uint)local_63 + (uVar7 & 0xfc) >> 1);
          local_60 = (undefined1)((uVar15 & 0xf8) + (uVar14 & 0xf8) >> 1);
          local_5a = 0;
          local_5b = 0;
          local_5c = 0;
          local_59 = 0;
        }
        uVar15 = uVar19 + 0xc;
        iVar18 = 0;
        if (uVar20 < uVar5) {
          uVar25 = (uint)uVar30 & 0xff;
          uVar14 = (uint)(uVar30 >> 8) & 0xff;
          uVar29 = uVar30 >> 0x10;
          iVar18 = 0;
          do {
            iVar10 = (int)uVar22;
            if (uVar16 < uVar4) {
              uVar28 = (uint)*(byte *)(lVar6 + (ulong)uVar15);
              iVar21 = local_c0 - uVar23;
              do {
                uVar11 = (uint)uVar29 & 7;
                if (uVar11 == 1) {
                  pbVar24 = (byte *)((ulong)(uVar28 & 3) << 2 | (ulong)&local_68);
                  pbVar31 = pbVar24 + 3;
                  pbVar24[3] = (byte)(uVar30 >> 8);
                  goto LAB_1003d09d9;
                }
                if ((uVar29 & 7) == 0) {
                  pbVar24 = (byte *)((ulong)(uVar28 & 3) << 2 | (ulong)&local_68);
                  bVar8 = (byte)uVar30;
LAB_1003d09d5:
                  pbVar31 = pbVar24 + 3;
                  pbVar24[3] = bVar8;
                }
                else {
                  if (uVar14 < uVar25) {
                    bVar8 = (byte)(((uVar11 - 1) * uVar14 + (8 - uVar11) * uVar25) / 7);
LAB_1003d09bf:
                    pbVar24 = (byte *)((ulong)(uVar28 & 3) << 2 | (ulong)&local_68);
                    goto LAB_1003d09d5;
                  }
                  if (uVar11 == 6) {
                    pbVar24 = (byte *)((ulong)(uVar28 & 3) << 2 | (ulong)&local_68);
                    pbVar31 = pbVar24 + 3;
                    pbVar24[3] = 0;
                  }
                  else {
                    if (uVar11 < 6) {
                      bVar8 = (byte)(((uVar11 - 1) * uVar14 + (6 - uVar11) * uVar25) / 5);
                      goto LAB_1003d09bf;
                    }
                    pbVar24 = (byte *)((ulong)(uVar28 & 3) << 2 | (ulong)&local_68);
                    pbVar31 = pbVar24 + 3;
                    pbVar24[3] = 0xff;
                  }
                }
LAB_1003d09d9:
                *(uint *)(param_2 + uVar22 * 4) =
                     (uint)*pbVar24 |
                     (uint)pbVar24[1] << 8 | (uint)pbVar24[2] << 0x10 | (uint)*pbVar31 << 0x18;
                uVar29 = uVar29 >> 3;
                uVar28 = uVar28 >> 2;
                iVar21 = iVar21 + -1;
                uVar22 = (ulong)((int)uVar22 + 1);
              } while (iVar21 != 0);
              iVar10 = iVar10 + iVar17;
              iVar21 = iVar17;
            }
            else {
              iVar21 = 0;
            }
            uVar15 = uVar15 + 1;
            uVar22 = (ulong)(iVar10 + ((param_3 >> 2) - iVar21));
            iVar18 = iVar18 + 1;
          } while (iVar18 != -uVar9);
          uVar15 = uVar19 + (0xc - uVar9);
          iVar18 = -uVar9;
        }
        uVar19 = (4 - iVar18) + uVar15;
        uVar16 = uVar16 + 4;
        uVar22 = (ulong)uVar16;
        uVar13 = uVar13 + 4;
        local_c0 = local_c0 + -4;
        uVar12 = uVar12 - 4;
      } while (uVar16 < param_6);
    }
    break;
  case 0x6b:
    if (param_6 != 0) {
      lVar6 = *(long *)(param_1 + 4);
      uVar4 = param_1[1];
      uVar5 = param_1[2];
      uVar12 = ((uint)(param_5 >> 2) & 0x3fffffff) * param_1[3] + param_4 * 4;
      uVar19 = -uVar4;
      uVar9 = uVar20 - uVar5;
      iVar17 = -uVar9;
      if (uVar9 < 0xfffffffd) {
        iVar17 = 4;
      }
      local_b0 = uVar4 + 3;
      uVar13 = uVar4 - 1;
      uVar9 = 0;
      do {
        uVar23 = 3;
        if (3 < uVar13) {
          uVar23 = uVar13;
        }
        iVar18 = -uVar19;
        if (uVar19 < 0xfffffffd) {
          iVar18 = 4;
        }
        if (uVar20 < uVar5) {
          uVar22 = *(ulong *)(lVar6 + (ulong)uVar12);
          uVar15 = (uint)uVar22 & 0xff;
          uVar14 = (uint)(uVar22 >> 8) & 0xff;
          uVar30 = uVar22 >> 0x10;
          iVar10 = 0;
          uVar16 = uVar9;
          do {
            iVar21 = local_b0 - uVar23;
            uVar25 = uVar16;
            if (uVar9 < uVar4) {
              do {
                puVar1 = (undefined1 *)(param_2 + (ulong)uVar25 * 4);
                uVar28 = (uint)uVar30 & 7;
                if (uVar28 == 1) {
                  puVar1[2] = (char)(uVar22 >> 8);
                }
                else if ((uVar30 & 7) == 0) {
                  puVar1[2] = (char)uVar22;
                }
                else if (uVar14 < uVar15) {
                  uVar27 = (undefined1)(((uVar28 - 1) * uVar14 + (8 - uVar28) * uVar15) / 7);
LAB_1003d0c5c:
                  puVar1[2] = uVar27;
                }
                else if (uVar28 == 6) {
                  puVar1[2] = 0;
                }
                else {
                  if (uVar28 < 6) {
                    uVar27 = (undefined1)(((uVar28 - 1) * uVar14 + (6 - uVar28) * uVar15) / 5);
                    goto LAB_1003d0c5c;
                  }
                  puVar1[2] = 0xff;
                }
                *puVar1 = 0xff;
                puVar1[1] = 0xff;
                puVar1[3] = 0xff;
                uVar30 = uVar30 >> 3;
                iVar21 = iVar21 + -1;
                uVar25 = uVar25 + 1;
              } while (iVar21 != 0);
              uVar16 = uVar16 + iVar18;
              iVar21 = iVar18;
            }
            else {
              iVar21 = 0;
            }
            uVar16 = uVar16 + ((param_3 >> 2) - iVar21);
            iVar10 = iVar10 + 1;
          } while (iVar10 != iVar17);
        }
        uVar12 = uVar12 + 8;
        uVar9 = uVar9 + 4;
        uVar19 = uVar19 + 4;
        local_b0 = local_b0 + -4;
        uVar13 = uVar13 - 4;
      } while (uVar9 < param_6);
    }
    break;
  case 0x6d:
    if (param_6 != 0) {
      lVar6 = *(long *)(param_1 + 4);
      uVar4 = param_1[1];
      uVar5 = param_1[2];
      uVar12 = ((uint)(param_5 >> 2) & 0x3fffffff) * param_1[3] + param_4 * 4;
      uVar19 = -uVar4;
      uVar9 = uVar20 - uVar5;
      iVar17 = -uVar9;
      if (uVar9 < 0xfffffffd) {
        iVar17 = 4;
      }
      local_dc = uVar4 + 3;
      uVar9 = uVar4 - 1;
      local_9c = 0;
      do {
        uVar13 = 3;
        if (3 < uVar9) {
          uVar13 = uVar9;
        }
        iVar18 = -uVar19;
        if (uVar19 < 0xfffffffd) {
          iVar18 = 4;
        }
        if (uVar20 < uVar5) {
          uVar22 = *(ulong *)(lVar6 + (ulong)uVar12);
          uVar30 = *(ulong *)(lVar6 + 8 + (ulong)uVar12);
          uVar15 = (uint)uVar30 & 0xff;
          uVar14 = (uint)(uVar30 >> 8) & 0xff;
          uVar25 = (uint)uVar22 & 0xff;
          uVar16 = (uint)(uVar22 >> 8) & 0xff;
          uVar29 = uVar22 >> 0x10;
          uVar32 = uVar30 >> 0x10;
          iVar10 = 0;
          uVar23 = local_9c;
          do {
            uVar28 = uVar23;
            iVar21 = local_dc - uVar13;
            if (local_9c < uVar4) {
              do {
                puVar1 = (undefined1 *)(param_2 + (ulong)uVar28 * 4);
                uVar26 = (uint)uVar32 & 7;
                uVar11 = (uint)uVar29 & 7;
                if (uVar26 == 1) {
                  puVar1[2] = (char)(uVar30 >> 8);
                }
                else if ((uVar32 & 7) == 0) {
                  puVar1[2] = (char)uVar30;
                }
                else if (uVar14 < uVar15) {
                  puVar1[2] = (char)(((uVar26 - 1) * uVar14 + (8 - uVar26) * uVar15) / 7);
                }
                else if (uVar26 == 6) {
                  puVar1[2] = 0;
                }
                else if (uVar26 < 6) {
                  puVar1[2] = (char)(((uVar26 - 1) * uVar14 + (6 - uVar26) * uVar15) / 5);
                }
                else {
                  puVar1[2] = 0xff;
                }
                if (uVar11 == 1) {
                  puVar1[1] = (char)(uVar22 >> 8);
                }
                else if ((uVar29 & 7) == 0) {
                  puVar1[1] = (char)uVar22;
                }
                else if (uVar16 < uVar25) {
                  uVar27 = (undefined1)(((uVar11 - 1) * uVar16 + (8 - uVar11) * uVar25) / 7);
LAB_1003d0fc3:
                  puVar1[1] = uVar27;
                }
                else if (uVar11 == 6) {
                  puVar1[1] = 0;
                }
                else {
                  if (uVar11 < 6) {
                    uVar27 = (undefined1)(((uVar11 - 1) * uVar16 + (6 - uVar11) * uVar25) / 5);
                    goto LAB_1003d0fc3;
                  }
                  puVar1[1] = 0xff;
                }
                *puVar1 = 0xff;
                puVar1[3] = 0xff;
                uVar32 = uVar32 >> 3;
                uVar29 = uVar29 >> 3;
                iVar21 = iVar21 + -1;
                uVar28 = uVar28 + 1;
              } while (iVar21 != 0);
              uVar23 = uVar23 + iVar18;
              iVar21 = iVar18;
            }
            else {
              iVar21 = 0;
            }
            uVar23 = uVar23 + ((param_3 >> 2) - iVar21);
            iVar10 = iVar10 + 1;
          } while (iVar10 != iVar17);
        }
        uVar12 = uVar12 + 0x10;
        local_9c = local_9c + 4;
        uVar19 = uVar19 + 4;
        local_dc = local_dc + -4;
        uVar9 = uVar9 - 4;
      } while (local_9c < param_6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

