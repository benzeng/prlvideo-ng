
undefined8 FUN_100347b50(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  bool bVar29;
  bool bVar30;
  long local_d8;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  uint local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  long local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  long local_50;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  
  if (*(uint *)(param_2 + 4) < 0x10) {
    return 9;
  }
  uVar15 = *(uint *)(param_2 + 8);
  puVar21 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                      (ulong)((uVar15 >> 0xc ^ uVar15) & 0xfff ^ uVar15 >> 0x18) * 8);
  while( true ) {
    if (puVar21 == (uint *)0x0) {
      return 7;
    }
    if (*puVar21 == uVar15) break;
    puVar21 = *(uint **)(puVar21 + 4);
  }
  lVar26 = *(long *)(puVar21 + 2);
  if (lVar26 == 0) {
    return 7;
  }
  lVar2 = *(long *)(lVar26 + 8);
  uVar24 = *(long *)(lVar2 + 0x48) - (long)*(long **)(lVar2 + 0x40);
  if ((uVar24 & 0x7fffffff8) == 0) {
    puVar21 = (uint *)(lVar2 + 8);
  }
  else {
    puVar21 = (uint *)(**(long **)(lVar2 + 0x40) + 0x1c);
  }
  uVar15 = *puVar21;
  if ((int)uVar15 < 0x66) {
    uVar25 = 0;
    if (uVar15 != 1) {
      if (uVar15 == 3) {
        uVar25 = 2;
      }
      else {
        if (uVar15 != 8) goto LAB_100347c5c;
        uVar25 = 7;
      }
    }
  }
  else if ((int)uVar15 < 0x6a) {
    if (uVar15 == 0x66) {
      uVar25 = 0x65;
    }
    else if (uVar15 == 0x68) {
      uVar25 = 0x67;
    }
    else {
LAB_100347c5c:
      uVar25 = (ulong)uVar15;
    }
  }
  else if (uVar15 == 0x6a) {
    uVar25 = 0x69;
  }
  else {
    if (uVar15 != 0x72) goto LAB_100347c5c;
    uVar25 = 0x71;
  }
  uVar19 = (uint)uVar25;
  uVar1 = uVar25 - 0x78;
  uVar15 = *(uint *)(param_2 + 0xc);
  if (uVar15 == 0) {
    if (uVar1 < 0x16) {
      do {
        uVar15 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar26 + 4));
        if (*(int *)(lVar2 + 0x1c) != 0) {
          lVar3 = *(long *)(lVar2 + 0x90);
          uVar19 = *(uint *)(lVar3 + (ulong)uVar15 * 4);
          uVar13 = 0;
          do {
            uVar19 = uVar19 | 1 << ((byte)uVar13 & 0x1f);
            *(uint *)(lVar3 + (ulong)uVar15 * 4) = uVar19;
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(lVar2 + 0x1c));
        }
        lVar26 = *(long *)(lVar26 + 0x10);
      } while (lVar26 != 0);
      return 0;
    }
    if (*(int *)(lVar2 + 0x24) == 1) {
      (**(code **)(**(long **)(param_1 + 0x2778) + 0x20))
                (*(long **)(param_1 + 0x2778),lVar2,**(undefined4 **)(lVar2 + 0x28),0,
                 *(undefined4 *)(lVar2 + 0xc),0);
      return 0;
    }
    do {
      uVar5 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar26 + 4));
      if (*(int *)(lVar2 + 0x1c) != 0) {
        uVar15 = 0;
        do {
          FUN_10035e0e0(*(undefined8 *)(param_1 + 0x2778),lVar2,0,uVar5,uVar15);
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(lVar2 + 0x1c));
      }
      lVar26 = *(long *)(lVar26 + 0x10);
    } while (lVar26 != 0);
    return 0;
  }
  puVar21 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                      (ulong)((uVar15 >> 0xc ^ uVar15) & 0xfff ^ uVar15 >> 0x18) * 8);
  while( true ) {
    if (puVar21 == (uint *)0x0) {
      return 7;
    }
    if (*puVar21 == uVar15) break;
    puVar21 = *(uint **)(puVar21 + 4);
  }
  local_d8 = *(long *)(puVar21 + 2);
  if (local_d8 == 0) {
    return 7;
  }
  lVar3 = *(long *)(local_d8 + 8);
  uVar11 = *(long *)(lVar3 + 0x48) - (long)*(long **)(lVar3 + 0x40);
  if ((uVar11 & 0x7fffffff8) == 0) {
    puVar21 = (uint *)(lVar3 + 8);
  }
  else {
    puVar21 = (uint *)(**(long **)(lVar3 + 0x40) + 0x1c);
  }
  uVar15 = *puVar21;
  if ((int)uVar15 < 0x66) {
    uVar16 = 0;
    if (uVar15 != 1) {
      if (uVar15 == 3) {
        uVar16 = 2;
      }
      else {
        if (uVar15 != 8) goto LAB_100347e67;
        uVar16 = 7;
      }
    }
  }
  else if ((int)uVar15 < 0x6a) {
    if (uVar15 == 0x66) {
      uVar16 = 0x65;
    }
    else if (uVar15 == 0x68) {
      uVar16 = 0x67;
    }
    else {
LAB_100347e67:
      uVar16 = (ulong)uVar15;
    }
  }
  else if (uVar15 == 0x6a) {
    uVar16 = 0x69;
  }
  else {
    if (uVar15 != 0x72) goto LAB_100347e67;
    uVar16 = 0x71;
  }
  uVar15 = (uint)uVar16;
  puVar21 = &DAT_100b3b630;
  uVar23 = 0;
  do {
    uVar22 = uVar23;
    if ((((*puVar21 == uVar15) || (uVar22 = uVar23 + 1, puVar21[3] == uVar15)) ||
        (uVar22 = uVar23 + 2, puVar21[6] == uVar15)) || (uVar22 = uVar23 + 3, puVar21[9] == uVar15))
    {
      uVar13 = *(uint *)(&UNK_100b3b634 + uVar22 * 0xc);
      break;
    }
    uVar23 = uVar23 + 4;
    puVar21 = puVar21 + 0xc;
    uVar13 = 0x8e;
  } while (uVar23 < 0x74);
  puVar21 = &DAT_100b3b630;
  uVar23 = 0;
  do {
    uVar22 = uVar23;
    if (((*puVar21 == uVar19) || (uVar22 = uVar23 + 1, puVar21[3] == uVar19)) ||
       ((uVar22 = uVar23 + 2, puVar21[6] == uVar19 || (uVar22 = uVar23 + 3, puVar21[9] == uVar19))))
    {
      uVar17 = *(uint *)(&UNK_100b3b634 + uVar22 * 0xc);
      if ((uVar13 == 0x52) && (bVar29 = true, uVar22 - 0x28 < 5)) goto LAB_100347f8c;
      break;
    }
    uVar23 = uVar23 + 4;
    puVar21 = puVar21 + 0xc;
    uVar17 = 0x8e;
  } while (uVar23 < 0x74);
  bVar29 = false;
  uVar20 = uVar13 - 0x87;
  if (uVar20 < 5) {
    if ((0x16U >> (uVar20 & 0x1f) & 1) == 0) {
      if ((9U >> (uVar20 & 0x1f) & 1) == 0) goto LAB_100347f8c;
      bVar29 = true;
      if ((uVar17 != 0x7f) && (uVar17 != 0x84)) {
        if ((uVar13 & 0xfffffffe) == 0x88) goto LAB_100347f7a;
        bVar29 = false;
      }
    }
    else {
LAB_100347f7a:
      bVar29 = uVar17 == 0x81;
    }
  }
  else {
LAB_100347f8c:
    if ((uVar13 == 0x7e) && (uVar17 == 0x52)) {
      bVar30 = true;
      uVar17 = 0x52;
      goto LAB_100348021;
    }
  }
  bVar30 = false;
  uVar20 = uVar17 - 0x87;
  if (4 < uVar20) goto LAB_100348021;
  if ((0x16U >> (uVar20 & 0x1f) & 1) == 0) {
    if ((((9U >> (uVar20 & 0x1f) & 1) == 0) || (bVar30 = true, uVar13 == 0x7f)) || (uVar13 == 0x84))
    goto LAB_100348021;
    if ((uVar17 & 0xfffffffe) != 0x88) {
      bVar30 = false;
      goto LAB_100348021;
    }
  }
  bVar30 = uVar13 == 0x81;
LAB_100348021:
  if ((*(int *)(lVar3 + 0x24) == 1) && (*(int *)(lVar2 + 0x24) == 1)) {
    if (*(char *)(lVar3 + 0xb4) != '\0') {
      FUN_100362eb0(*(undefined8 *)(param_1 + 0x2778),lVar3,0,0);
    }
    FUN_100363060(*(undefined8 *)(param_1 + 0x2778),lVar3,lVar2,0,0,*(undefined4 *)(lVar3 + 0xc));
  }
  else {
    uVar11 = uVar11 & 0x7fffffff8;
    if ((uVar11 == 0) || ((*(ushort *)(lVar2 + 0xb0) & 0x8000) == 0)) {
      if ((((uVar1 < 0x16) || (uVar16 - 0x78 < 0x16)) ||
          ((*(uint *)(&DAT_100b3bba4 + uVar25 * 8) < 0x1000000 || bVar30) || bVar29)) ||
         ((((uVar15 != uVar19 && (uVar13 == uVar17)) && ((*(ushort *)(lVar3 + 0xb0) & 0x40) == 0))
          && ((*(ushort *)(lVar2 + 0xb0) & 0x40) == 0)))) {
        do {
          local_78 = uVar19;
          local_60 = uVar15;
          uVar5 = FUN_10032dee0(lVar3,*(undefined4 *)(local_d8 + 4));
          uVar6 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar26 + 4));
          uVar20 = uVar13;
          uVar18 = uVar13;
          if (((uVar13 != uVar17) && (uVar20 = local_78, uVar18 = local_78, !bVar29)) &&
             (uVar18 = local_60, bVar30)) {
            uVar20 = local_60;
          }
          local_60 = uVar18;
          local_78 = uVar20;
          if (*(int *)(lVar3 + 0x1c) != 0) {
            uVar20 = 0;
            do {
              if (*(uint *)(lVar2 + 0x1c) <= uVar20) break;
              bVar12 = (byte)uVar20;
              uVar18 = *(uint *)(lVar3 + 0x14) >> (bVar12 & 0x1f);
              if (*(uint *)(lVar3 + 0x14) >> (bVar12 & 0x1f) == 0) {
                uVar18 = 1;
              }
              local_5c = *(uint *)(lVar3 + 0xc) >> (bVar12 & 0x1f);
              if (*(uint *)(lVar3 + 0xc) >> (bVar12 & 0x1f) == 0) {
                local_5c = 1;
              }
              local_58 = *(uint *)(lVar3 + 0x10) >> (bVar12 & 0x1f);
              if (*(uint *)(lVar3 + 0x10) >> (bVar12 & 0x1f) == 0) {
                local_58 = 1;
              }
              if (0xffffff < *(uint *)(&DAT_100b3bba4 + uVar16 * 8)) {
                local_54 = (*(uint *)(&DAT_100b3bba4 + uVar16 * 8) >> 0x18) * local_5c;
                if (3 < uVar15 - 0x73) {
                  local_54 = local_54 + 3;
                  goto LAB_100348302;
                }
                goto switchD_1003482e2_caseD_64;
              }
              local_54 = 0;
              switch(uVar15) {
              case 0x53:
              case 0x54:
              case 0x55:
              case 0x56:
              case 0x5e:
              case 0x5f:
                local_54 = local_5c * 2 + 3;
                goto LAB_100348302;
              case 0x57:
              case 0x58:
              case 0x59:
              case 0x5a:
              case 0x62:
              case 99:
                local_54 = local_5c + 3;
LAB_100348302:
                local_54 = local_54 & 0xfffffffc;
                break;
              case 0x5b:
              case 0x5c:
              case 0x60:
              case 0x61:
                local_54 = local_5c * 4;
                break;
              case 0x5d:
                local_54 = local_5c * 8;
                break;
              case 0x65:
              case 0x66:
              case 0x6b:
              case 0x6c:
              case 0x87:
              case 0x8a:
                local_54 = local_5c * 2 + 6 & 0xfffffff8;
                break;
              case 0x67:
              case 0x68:
              case 0x69:
              case 0x6a:
              case 0x6d:
              case 0x6e:
              case 0x88:
              case 0x89:
              case 0x8b:
                local_54 = local_5c * 4 + 0xc & 0xfffffff0;
              }
switchD_1003482e2_caseD_64:
              local_74 = *(uint *)(lVar2 + 0xc) >> (bVar12 & 0x1f);
              if (*(uint *)(lVar2 + 0xc) >> (bVar12 & 0x1f) == 0) {
                local_74 = 1;
              }
              local_70 = *(uint *)(lVar2 + 0x10) >> (bVar12 & 0x1f);
              if (*(uint *)(lVar2 + 0x10) >> (bVar12 & 0x1f) == 0) {
                local_70 = 1;
              }
              if (*(uint *)(&DAT_100b3bba4 + uVar25 * 8) < 0x1000000) {
                local_6c = 0;
                switch(uVar19) {
                case 0x53:
                case 0x54:
                case 0x55:
                case 0x56:
                case 0x5e:
                case 0x5f:
                  local_6c = local_74 * 2;
LAB_100348377:
                  local_6c = local_6c + 3 & 0xfffffffc;
                  break;
                case 0x57:
                case 0x58:
                case 0x59:
                case 0x5a:
                case 0x62:
                case 99:
                  local_6c = local_74 + 3 & 0xfffffffc;
                  break;
                case 0x5b:
                case 0x5c:
                case 0x60:
                case 0x61:
                  local_6c = local_74 << 2;
                  break;
                case 0x5d:
                  local_6c = local_74 << 3;
                  break;
                case 0x65:
                case 0x66:
                case 0x6b:
                case 0x6c:
                case 0x87:
                case 0x8a:
                  local_6c = local_74 * 2 + 6 & 0xfffffff8;
                  break;
                case 0x67:
                case 0x68:
                case 0x69:
                case 0x6a:
                case 0x6d:
                case 0x6e:
                case 0x88:
                case 0x89:
                case 0x8b:
                  local_6c = local_74 * 4 + 0xc & 0xfffffff0;
                }
              }
              else {
                local_6c = (*(uint *)(&DAT_100b3bba4 + uVar25 * 8) >> 0x18) * local_74;
                if (3 < uVar19 - 0x73) goto LAB_100348377;
              }
              if ((int)((ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40)) >> 3) != 0) {
                local_90 = 0;
                local_8c = 0;
                local_80 = 0;
                local_88 = local_5c;
                local_84 = local_58;
                local_7c = uVar18;
                FUN_10035e890(*(undefined8 *)(param_1 + 0x2778),lVar3,&local_90,uVar5);
              }
              if (bVar29) {
                local_5c = local_74;
                local_58 = local_70;
              }
              else if (bVar30) {
                local_74 = local_5c;
                local_70 = local_58;
              }
              if (*(uint *)(&DAT_100b3bba4 + (ulong)local_60 * 8) < 0x1000000) {
                uVar7 = 0;
                switch(local_60) {
                case 0x53:
                case 0x54:
                case 0x55:
                case 0x56:
                case 0x5b:
                case 0x5c:
                case 0x5d:
                case 0x60:
                case 0x61:
                case 0x62:
                case 99:
                  goto switchD_100348439_caseD_53;
                case 0x57:
                case 0x58:
                case 0x59:
                case 0x5e:
                case 0x5f:
                  uVar7 = local_54 * local_58 * 3 >> 1;
                  break;
                case 0x5a:
                  uVar7 = local_54 * local_58 * 2;
                  break;
                case 0x65:
                case 0x66:
                case 0x67:
                case 0x68:
                case 0x69:
                case 0x6a:
                case 0x6b:
                case 0x6c:
                case 0x6d:
                case 0x6e:
                case 0x87:
                case 0x88:
                case 0x89:
                case 0x8a:
                case 0x8b:
                  uVar7 = (local_58 + 3 & 0xfffffffc) * local_54 >> 2;
                }
              }
              else {
switchD_100348439_caseD_53:
                uVar7 = local_58 * local_54;
              }
              if (*(uint *)(&DAT_100b3bba4 + (ulong)local_78 * 8) < 0x1000000) {
                uVar14 = 0;
                switch(local_78) {
                case 0x53:
                case 0x54:
                case 0x55:
                case 0x56:
                case 0x5b:
                case 0x5c:
                case 0x5d:
                case 0x60:
                case 0x61:
                case 0x62:
                case 99:
                  goto switchD_10034847b_caseD_53;
                case 0x57:
                case 0x58:
                case 0x59:
                case 0x5e:
                case 0x5f:
                  uVar14 = local_6c * local_70 * 3 >> 1;
                  break;
                case 0x5a:
                  uVar14 = local_6c * local_70 * 2;
                  break;
                case 0x65:
                case 0x66:
                case 0x67:
                case 0x68:
                case 0x69:
                case 0x6a:
                case 0x6b:
                case 0x6c:
                case 0x6d:
                case 0x6e:
                case 0x87:
                case 0x88:
                case 0x89:
                case 0x8a:
                case 0x8b:
                  uVar14 = (local_70 + 3 & 0xfffffffc) * local_6c >> 2;
                }
              }
              else {
switchD_10034847b_caseD_53:
                uVar14 = local_70 * local_6c;
              }
              if (**(int **)(lVar3 + 0x28) < 0) {
                return 0;
              }
              lVar28 = *(long *)(*(long *)(param_1 + 0x2770) + 0x920);
              uVar8 = FUN_10032df60(lVar3,uVar5);
              lVar28 = (ulong)uVar8 + lVar28;
              lVar27 = *(long *)(param_1 + 0x2770);
              local_50 = lVar28;
              if (**(int **)(lVar2 + 0x28) < 0) {
                uVar5 = FUN_10032df60(lVar2,uVar6,uVar20);
                FUN_1002fcd60(lVar27,lVar28,uVar5,uVar7 * uVar18);
                puVar21 = (uint *)(*(long *)(lVar2 + 0x90) + (ulong)uVar6 * 4);
                *puVar21 = *puVar21 | 1 << (bVar12 & 0x1f);
                return 0;
              }
              lVar28 = *(long *)(lVar27 + 0x920);
              uVar8 = FUN_10032df60(lVar2,uVar6,uVar20);
              local_68 = (ulong)uVar8 + lVar28;
              uVar8 = 0;
              do {
                iVar9 = FUN_1003c6660(&local_60,0,&local_78,0);
                if (iVar9 != 1) break;
                local_50 = local_50 + (ulong)uVar7;
                local_68 = local_68 + (ulong)uVar14;
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar18);
              if (uVar1 < 0x16) {
                puVar21 = (uint *)(*(long *)(lVar2 + 0x90) + (ulong)uVar6 * 4);
                *puVar21 = *puVar21 | 1 << (bVar12 & 0x1f);
              }
              else {
                FUN_10035e0e0(*(undefined8 *)(param_1 + 0x2778),lVar2,0,uVar6);
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < *(uint *)(lVar3 + 0x1c));
          }
          local_d8 = *(long *)(local_d8 + 0x10);
        } while ((local_d8 != 0) && (lVar26 = *(long *)(lVar26 + 0x10), lVar26 != 0));
      }
      else if ((uVar11 != 0) && ((uVar24 & 0x7fffffff8) != 0)) {
        local_a8 = 1;
        local_98 = 0;
        local_a4 = 0;
        local_a0 = 0x8e;
        if (*(int *)(lVar3 + 0x1c) != 0) {
          uVar15 = 0;
          do {
            if (*(uint *)(lVar2 + 0x1c) <= uVar15) {
              return 0;
            }
            bVar12 = (byte)uVar15;
            local_b8 = *(uint *)(lVar3 + 0xc) >> (bVar12 & 0x1f);
            if (*(uint *)(lVar3 + 0xc) >> (bVar12 & 0x1f) == 0) {
              local_b8 = 1;
            }
            local_b4 = *(uint *)(lVar3 + 0x10) >> (bVar12 & 0x1f);
            if (*(uint *)(lVar3 + 0x10) >> (bVar12 & 0x1f) == 0) {
              local_b4 = 1;
            }
            local_ac = *(uint *)(lVar3 + 0x14) >> (bVar12 & 0x1f);
            if (*(uint *)(lVar3 + 0x14) >> (bVar12 & 0x1f) == 0) {
              local_ac = 1;
            }
            local_c0 = 0;
            local_bc = 0;
            local_b0 = 0;
            lVar27 = lVar26;
            lVar28 = local_d8;
            do {
              uVar5 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar27 + 4));
              uVar4 = *(undefined8 *)(param_1 + 0x2778);
              uVar10 = FUN_10032dee0(lVar3,*(undefined4 *)(lVar28 + 4));
              FUN_10035f740(uVar4,lVar3,&local_c0,uVar10,uVar15,lVar2,&local_c0,uVar5,uVar15,
                            &local_a8);
              uVar19 = 1 << ((byte)uVar5 & 0x1f);
              if ((*(ushort *)(lVar2 + 0xb0) & 1) != 0) {
                uVar19 = 1;
              }
              *(uint *)(lVar2 + 0xa8) = *(uint *)(lVar2 + 0xa8) | uVar19;
              lVar28 = *(long *)(lVar28 + 0x10);
            } while ((lVar28 != 0) && (lVar27 = *(long *)(lVar27 + 0x10), lVar27 != 0));
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(uint *)(lVar3 + 0x1c));
        }
      }
    }
    else {
      do {
        if (*(int *)(lVar3 + 0x1c) != 0) {
          uVar15 = 0;
          do {
            if (*(uint *)(lVar2 + 0x1c) <= uVar15) break;
            bVar12 = (byte)uVar15;
            local_40 = *(uint *)(lVar3 + 0xc) >> (bVar12 & 0x1f);
            if (*(uint *)(lVar3 + 0xc) >> (bVar12 & 0x1f) == 0) {
              local_40 = 1;
            }
            local_3c = *(uint *)(lVar3 + 0x10) >> (bVar12 & 0x1f);
            if (*(uint *)(lVar3 + 0x10) >> (bVar12 & 0x1f) == 0) {
              local_3c = 1;
            }
            local_34 = *(uint *)(lVar3 + 0x14) >> (bVar12 & 0x1f);
            if (*(uint *)(lVar3 + 0x14) >> (bVar12 & 0x1f) == 0) {
              local_34 = 1;
            }
            local_48 = 0;
            local_44 = 0;
            local_38 = 0;
            uVar4 = *(undefined8 *)(param_1 + 0x2778);
            uVar5 = FUN_10032dee0(lVar3,*(undefined4 *)(local_d8 + 4));
            uVar10 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar26 + 4));
            FUN_100362f60(uVar4,lVar3,&local_48,uVar5,uVar15,lVar2,&local_48,uVar10,uVar15);
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(uint *)(lVar3 + 0x1c));
        }
        local_d8 = *(long *)(local_d8 + 0x10);
      } while ((local_d8 != 0) && (lVar26 = *(long *)(lVar26 + 0x10), lVar26 != 0));
    }
  }
  return 0;
}

