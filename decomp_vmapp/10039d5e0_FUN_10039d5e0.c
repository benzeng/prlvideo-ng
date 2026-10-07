
undefined8 FUN_10039d5e0(long *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  byte bVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 *puVar17;
  ushort *puVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  char *pcVar26;
  uint uVar27;
  ulong uVar28;
  bool bVar29;
  long lVar30;
  long lVar31;
  bool bVar32;
  bool bVar33;
  float fVar34;
  uint local_48 [4];
  long local_38;
  
  lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar15 = 1;
  local_38 = lVar16;
  if (param_3 == 0) {
LAB_10039e1b1:
    if (lVar16 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return uVar15;
  }
  if ((((*(long *)(param_2 + 0x628) != 0) &&
       ((*(byte *)(*(long *)(param_2 + 0x628) + 0x1f0) & 6) != 0)) &&
      (((lVar16 = FUN_100344150(param_2,0), lVar16 != 0 &&
        (lVar16 = *(long *)(lVar16 + 8), lVar16 != 0)) ||
       ((*(long *)(param_2 + 0x50) != 0 &&
        (lVar16 = *(long *)(*(long *)(param_2 + 0x50) + 8), lVar16 != 0)))))) &&
     (*(int *)(param_3 + 0x118) != -1)) {
    (*DAT_1011c7788)(*(int *)(param_3 + 0x118),0,0,0,*(undefined4 *)(lVar16 + 0x20));
  }
  uVar23 = 0;
LAB_10039d6a0:
  lVar16 = param_1[uVar23 * 4 + 0x604];
  pcVar26 = (char *)param_1[uVar23 * 4 + 0x606];
LAB_10039d6f4:
  while ((pcVar26 != (char *)0x0 || (lVar16 != param_1[uVar23 * 4 + 0x604]))) {
    bVar9 = pcVar26[2];
    if (bVar9 != 0) {
      iVar14 = (int)((ulong)((long)pcVar26 - lVar16) >> 5);
      if (pcVar26 == (char *)0x0) {
        iVar14 = 0;
      }
      lVar4 = *(long *)(param_2 + 0xe08 + (ulong)(uint)((int)(uVar23 << 7) + iVar14) * 8);
      lVar5 = *(long *)(lVar4 + 8);
      uVar3 = *(uint *)(lVar4 + 0x10);
      uVar20 = (ulong)uVar3;
      lVar6 = *(long *)(pcVar26 + 8);
      if ((bVar9 & 4) != 0) {
        lVar31 = *(long *)(param_3 + 0xd0);
        uVar22 = (*(long *)(param_3 + 0xd8) - lVar31 >> 2) * -0x5555555555555555;
        if ((int)uVar22 != 0) {
          lVar30 = 8;
          uVar28 = 0;
          do {
            pcVar8 = DAT_1011c7788;
            if ((*(uint *)(lVar31 + -4 + lVar30) == uVar23) && (*(int *)(lVar31 + lVar30) == iVar14)
               ) {
              iVar24 = *(int *)(lVar31 + -8 + lVar30);
              if (iVar24 == -1) break;
              uVar15 = 0;
              if (uVar20 < (ulong)(*(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40) >> 3)) {
                uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0x40) + uVar20 * 8);
              }
              uVar11 = FUN_100380dc0(uVar15,0);
              iVar13 = *(int *)(lVar5 + 0x24);
              if (iVar13 == 7) {
                iVar12 = FUN_10032df20(lVar5);
                iVar13 = *(int *)(lVar5 + 0x24);
              }
              else {
                iVar12 = *(int *)(lVar5 + 0x10);
                if (iVar12 == 0) {
                  iVar12 = 1;
                }
              }
              if (iVar13 - 8U < 3) {
                iVar13 = FUN_10032df20(lVar5);
              }
              else {
                iVar13 = *(int *)(lVar5 + 0x14);
                if (iVar13 == 0) {
                  iVar13 = 1;
                }
              }
              puVar17 = (undefined4 *)(lVar5 + 0x20);
              if ((*pcVar26 != '\x04') && (*pcVar26 != '\t')) {
                puVar17 = (undefined4 *)(lVar5 + 0x1c);
              }
              (*pcVar8)(iVar24,uVar11,iVar12,iVar13,*puVar17);
            }
            uVar28 = uVar28 + 1;
            if ((uVar22 & 0xffffffff) <= uVar28) break;
            lVar30 = lVar30 + 0xc;
            lVar31 = *(long *)(param_3 + 0xd0);
          } while( true );
        }
        bVar9 = pcVar26[2];
      }
      if ((bVar9 & 0x10) != 0) {
        lVar31 = *(long *)(param_3 + 0xe8);
        uVar22 = (*(long *)(param_3 + 0xf0) - lVar31 >> 2) * -0x5555555555555555;
        if ((int)uVar22 != 0) {
          lVar30 = 8;
          uVar28 = 0;
          do {
            if ((*(uint *)(lVar31 + -4 + lVar30) == uVar23) && (*(int *)(lVar31 + lVar30) == iVar14)
               ) {
              iVar24 = *(int *)(lVar31 + -8 + lVar30);
              if (iVar24 == -1) break;
              (*DAT_1011c6e18)(iVar24,*(undefined4 *)(lVar5 + 0xc),*(undefined8 *)(lVar5 + 0xb8));
            }
            uVar28 = uVar28 + 1;
            if ((uVar22 & 0xffffffff) <= uVar28) break;
            lVar30 = lVar30 + 0xc;
            lVar31 = *(long *)(param_3 + 0xe8);
          } while( true );
        }
        bVar9 = pcVar26[2];
      }
      if ((bVar9 & 8) != 0) {
        lVar31 = *(long *)(param_3 + 0x100);
        uVar22 = (*(long *)(param_3 + 0x108) - lVar31 >> 2) * -0x5555555555555555;
        if ((int)uVar22 != 0) {
          lVar30 = 8;
          uVar28 = 0;
          do {
            if ((*(uint *)(lVar31 + -4 + lVar30) == uVar23) && (*(int *)(lVar31 + lVar30) == iVar14)
               ) {
              if (*(int *)(lVar31 + -8 + lVar30) == -1) break;
              fVar34 = *(float *)(lVar6 + 0x30);
              if (*(float *)(lVar6 + 0x30) <= DAT_100b3ee24) {
                fVar34 = DAT_100b3ee24;
              }
              (*DAT_1011c6e08)(fVar34,*(undefined4 *)(lVar6 + 0x34),*(undefined4 *)(lVar6 + 0x14),0)
              ;
            }
            uVar28 = uVar28 + 1;
            if ((uVar22 & 0xffffffff) <= uVar28) break;
            lVar30 = lVar30 + 0xc;
            lVar31 = *(long *)(param_3 + 0x100);
          } while( true );
        }
      }
      uVar27 = 0;
      do {
        if (((byte)pcVar26[2] >> (uVar27 & 0x1f) & 1) != 0) {
          lVar31 = 0;
          if (uVar20 < (ulong)(*(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40) >> 3)) {
            lVar31 = *(long *)(*(long *)(lVar5 + 0x40) + uVar20 * 8);
          }
          iVar14 = *(int *)(lVar4 + 0x18);
          if (iVar14 - 2U < 2) {
LAB_10039db30:
            lVar30 = (**(code **)(**(long **)(lVar4 + 0x20) + 0x18))();
            iVar24 = *(int *)(lVar30 + 8);
            lVar30 = (**(code **)(**(long **)(lVar4 + 0x20) + 0x18))();
            iVar14 = *(int *)(lVar30 + 0x10);
LAB_10039db4c:
            iVar14 = iVar14 + iVar24;
          }
          else {
            if (iVar14 == 4) {
              lVar30 = (**(code **)(**(long **)(lVar4 + 0x20) + 0x20))();
              iVar24 = *(int *)(lVar30 + 8);
              lVar30 = (**(code **)(**(long **)(lVar4 + 0x20) + 0x20))();
              iVar14 = *(int *)(lVar30 + 0xc);
              goto LAB_10039db4c;
            }
            if (iVar14 == 5) goto LAB_10039db30;
            iVar14 = *(int *)(lVar31 + 0x10);
            iVar24 = 0;
          }
          if (*(int *)(lVar31 + 0x24) != iVar24) {
            *(int *)(lVar31 + 0x24) = iVar24;
            *(byte *)(lVar31 + 0x2c) = *(byte *)(lVar31 + 0x2c) | 1;
          }
          if (*(int *)(lVar31 + 0x28) != iVar14 + -1) {
            *(int *)(lVar31 + 0x28) = iVar14 + -1;
            *(byte *)(lVar31 + 0x2c) = *(byte *)(lVar31 + 0x2c) | 2;
          }
          puVar18 = (ushort *)(pcVar26 + 0x12);
          if (uVar27 == 0) {
            puVar18 = (ushort *)(pcVar26 + 0x10);
          }
          uVar2 = *puVar18;
          uVar22 = (ulong)uVar2;
          lVar30 = *(long *)(*param_1 + 0x10);
          lVar7 = *(long *)(lVar30 + 8 + uVar22 * 0x18);
          uVar21 = *(uint *)(lVar30 + 0x10 + uVar22 * 0x18);
          bVar32 = false;
          iVar14 = 0;
          if (lVar7 != 0) {
            iVar24 = *(int *)(*(long *)(*(long *)(lVar7 + 0x40) + (ulong)uVar21 * 8) + 0x14);
            bVar32 = false;
            iVar14 = 0;
            if (iVar24 != 0) {
              bVar32 = iVar24 != *(int *)(lVar31 + 0x14);
              iVar14 = iVar24;
            }
          }
          bVar29 = lVar7 != lVar5 || uVar21 != uVar3;
          iVar24 = *(int *)(lVar31 + 0x2c);
          if (*(char *)(DAT_1011c8478 + 0x84) == '\0') {
            FUN_1003dcb40(lVar31 + 0x30,lVar6,*(undefined4 *)(lVar4 + 0x14));
            if (*(int *)(lVar31 + 0x70) != *(int *)(lVar31 + 0x10)) {
              *(int *)(lVar31 + 0x70) = *(int *)(lVar31 + 0x10);
              *(uint *)(lVar31 + 0x74) = *(uint *)(lVar31 + 0x74) | 0x201;
            }
            if ((bool)*(char *)(lVar31 + 0x50) != (uVar27 == 1)) {
              *(bool *)(lVar31 + 0x50) = uVar27 == 1;
              *(byte *)(lVar31 + 0x74) = *(byte *)(lVar31 + 0x74) | 0x80;
            }
            uVar21 = *(uint *)(lVar4 + 0x14);
            cVar10 = '\x01';
            if ((int)uVar21 < 0x66) {
              if (8 < uVar21) goto LAB_10039de10;
              uVar19 = 0x10a;
LAB_10039de0b:
              if ((uVar19 >> (uVar21 & 0x1f) & 1) == 0) goto LAB_10039de10;
            }
            else {
              uVar21 = uVar21 - 0x66;
              if (uVar21 < 0xd) {
                uVar19 = 0x1015;
                goto LAB_10039de0b;
              }
LAB_10039de10:
              cVar10 = '\0';
            }
            if (*(char *)(lVar31 + 0x6c) == cVar10) {
              uVar21 = *(uint *)(lVar31 + 0x74);
            }
            else {
              *(char *)(lVar31 + 0x6c) = cVar10;
              uVar21 = *(uint *)(lVar31 + 0x74) | 0x800;
              *(uint *)(lVar31 + 0x74) = uVar21;
            }
            if (uVar21 == 0 && iVar24 == 0) {
              bVar33 = false;
LAB_10039de5c:
              if ((bVar29 || bVar32) || (bVar33)) goto LAB_10039de6c;
              bVar33 = false;
            }
            else {
              bVar33 = true;
              if (*(int *)(lVar5 + 0x24) == 1) {
                bVar33 = *(char *)(lVar5 + 0xb4) != '\0';
                goto LAB_10039de5c;
              }
LAB_10039de6c:
              (*DAT_1011c56a0)(uVar2 + 0x84c0);
            }
            if (bVar32) {
              (*DAT_1011c5768)(iVar14);
            }
            if (bVar29) {
              (*DAT_1011c5768)(*(undefined4 *)(lVar31 + 0x14));
            }
            if (bVar33) {
              FUN_100399630(lVar31);
            }
          }
          else {
            uVar21 = *(uint *)(lVar4 + 0x14);
            bVar9 = 1;
            if ((int)uVar21 < 0x66) {
              if (8 < uVar21) goto LAB_10039dcd0;
              uVar19 = 0x10a;
LAB_10039dccb:
              if ((uVar19 >> (uVar21 & 0x1f) & 1) == 0) goto LAB_10039dcd0;
            }
            else {
              uVar21 = uVar21 - 0x66;
              if (uVar21 < 0xd) {
                uVar19 = 0x1015;
                goto LAB_10039dccb;
              }
LAB_10039dcd0:
              bVar9 = 0;
            }
            uVar28 = (ulong)(1 < *(uint *)(lVar31 + 0x10)) << 2 | (ulong)(uVar27 == 1) |
                     (ulong)bVar9 * 2;
            iVar13 = *(int *)(lVar6 + 0x3c + uVar28 * 4);
            if (iVar13 == 0) {
              iVar13 = FUN_10039e1d0(lVar6,(ulong)bVar9,1 < *(uint *)(lVar31 + 0x10),uVar27 == 1);
              *(int *)(lVar6 + 0x3c + uVar28 * 4) = iVar13;
            }
            if (*(int *)(lVar30 + uVar22 * 0x18) != iVar13) {
              (*DAT_1011c5760)(uVar22);
              *(int *)(lVar30 + uVar22 * 0x18) = iVar13;
            }
            if ((bVar29 || bVar32) || (iVar24 != 0)) {
              (*DAT_1011c56a0)(uVar2 + 0x84c0);
            }
            if (bVar32) {
              (*DAT_1011c5768)(iVar14);
            }
            if (bVar29) {
              (*DAT_1011c5768)(*(undefined4 *)(lVar31 + 0x14));
            }
          }
          if (((iVar24 != 0) && (iVar14 = *(int *)(lVar31 + 0x14), iVar14 != 0x84f5)) &&
             (iVar14 != 0x8c2a)) {
            uVar21 = *(uint *)(lVar31 + 0x2c);
            uVar19 = *(int *)(lVar31 + 0x10) - 1;
            if ((uVar21 & 1) != 0) {
              uVar21 = *(uint *)(lVar31 + 0x24);
              if (uVar19 <= *(uint *)(lVar31 + 0x24)) {
                uVar21 = uVar19;
              }
              (*DAT_1011c6cd8)(iVar14,0x813c,uVar21);
              uVar21 = *(uint *)(lVar31 + 0x2c);
            }
            if ((uVar21 & 2) != 0) {
              if (*(uint *)(lVar31 + 0x28) < uVar19) {
                uVar19 = *(uint *)(lVar31 + 0x28);
              }
              (*DAT_1011c6cd8)(iVar14,0x813d,uVar19);
            }
            *(undefined4 *)(lVar31 + 0x2c) = 0;
          }
          *(long *)(lVar30 + 8 + uVar22 * 0x18) = lVar5;
          *(uint *)(lVar30 + 0x10 + uVar22 * 0x18) = uVar3;
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 != 2);
    }
    if (pcVar26 != (char *)0x0) goto LAB_10039d6f0;
  }
  uVar23 = uVar23 + 1;
  if (uVar23 != 3) goto LAB_10039d6a0;
  uVar3 = *(uint *)(param_1 + 0x618);
  ___bzero(local_48);
  if (uVar3 == 0) goto LAB_10039e152;
  lVar16 = param_1[0x619];
  uVar27 = *(uint *)(param_1 + 0x61a);
  uVar19 = 0;
  uVar21 = uVar27;
  do {
    uVar25 = 0;
    if ((uVar19 < uVar27) && (uVar25 = *(uint *)(lVar16 + (ulong)(uVar19 >> 5) * 4), uVar21 < 0x20))
    {
      uVar25 = uVar25 & (1 << ((byte)uVar21 & 0x1f)) - 1U;
    }
    local_48[uVar19 >> 5] = uVar25;
    uVar19 = uVar19 + 0x20;
    uVar21 = uVar21 - 0x20;
  } while (uVar19 < uVar3);
  lVar16 = param_1[0x617];
  uVar21 = 0;
  uVar27 = uVar3;
  do {
    uVar19 = 0xffffffff;
    if ((uVar21 < uVar3) && (uVar19 = ~*(uint *)(lVar16 + (ulong)(uVar21 >> 5) * 4), uVar27 < 0x20))
    {
      uVar19 = uVar19 & (1 << ((byte)uVar27 & 0x1f)) - 1U;
    }
    local_48[uVar21 >> 5] = local_48[uVar21 >> 5] & uVar19;
    uVar21 = uVar21 + 8;
    uVar27 = uVar27 - 8;
  } while (uVar21 < uVar3);
  if (uVar3 != 0) {
    uVar27 = 0;
    uVar21 = 0;
    do {
      iVar14 = uVar21 - uVar27;
      uVar21 = uVar3 - uVar27;
      while( true ) {
        uVar19 = local_48[uVar27 >> 5];
        if (uVar21 < 0x20) {
          uVar19 = uVar19 & (1 << ((byte)uVar21 & 0x1f)) - 1U;
        }
        uVar19 = uVar19 >> ((byte)iVar14 & 0x1f);
        uVar23 = (ulong)uVar19;
        if (uVar19 != 0) break;
        uVar27 = uVar27 + 0x20;
        uVar21 = uVar21 - 0x20;
        iVar14 = 0;
        if (uVar3 <= uVar27) goto LAB_10039e152;
      }
      for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1) {
        uVar19 = (uint)uVar23;
        uVar23 = uVar23 >> 1;
        iVar14 = iVar14 + 1;
      }
      uVar27 = iVar14 + uVar27;
      if (uVar3 <= uVar27) break;
      uVar23 = (ulong)uVar27;
      lVar16 = *(long *)(*param_1 + 0x10);
      lVar4 = *(long *)(lVar16 + 8 + uVar23 * 0x18);
      if (lVar4 != 0) {
        (*DAT_1011c56a0)(uVar27 + 0x84c0);
        (*DAT_1011c5768)(*(undefined4 *)
                          (*(long *)(*(long *)(lVar4 + 0x40) +
                                    (ulong)*(uint *)(lVar16 + 0x10 + uVar23 * 0x18) * 8) + 0x14),0);
        *(undefined8 *)(lVar16 + 8 + uVar23 * 0x18) = 0;
      }
      uVar21 = uVar27 + 1;
      uVar27 = uVar21 & 0xffffffe0;
    } while (uVar27 < uVar3);
  }
LAB_10039e152:
  lVar16 = param_1[0x617];
  param_1[0x617] = param_1[0x619];
  param_1[0x619] = lVar16;
  lVar16 = param_1[0x618];
  *(int *)(param_1 + 0x618) = (int)param_1[0x61a];
  *(int *)(param_1 + 0x61a) = (int)lVar16;
  uVar1 = *(undefined1 *)((long)param_1 + 0x30c4);
  *(undefined1 *)((long)param_1 + 0x30c4) = *(undefined1 *)((long)param_1 + 0x30d4);
  *(undefined1 *)((long)param_1 + 0x30d4) = uVar1;
  uVar15 = 0;
  lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
  goto LAB_10039e1b1;
LAB_10039d6f0:
  pcVar26 = *(char **)(pcVar26 + 0x18);
  goto LAB_10039d6f4;
}

