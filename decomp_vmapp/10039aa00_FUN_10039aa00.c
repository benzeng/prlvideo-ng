
void FUN_10039aa00(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  ulong uVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  short sVar14;
  ushort uVar15;
  uint uVar16;
  ulong uVar17;
  void *pvVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  undefined1 uVar26;
  uint uVar27;
  uint uVar28;
  byte *pbVar29;
  uint uVar30;
  long *plVar31;
  char cVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  long lVar35;
  long lVar36;
  byte bVar37;
  undefined1 uVar38;
  ulong uVar39;
  bool bVar40;
  bool bVar41;
  undefined1 local_410 [8];
  undefined1 local_408 [512];
  long local_208 [4];
  uint local_1e8 [96];
  uint local_68 [4];
  int local_58 [4];
  uint local_48 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48[2] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_58[2] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68[2] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  uVar16 = *(uint *)*param_1;
  local_1e8[8] = 0;
  local_1e8[9] = 0;
  local_1e8[10] = 0;
  local_1e8[0xb] = 0;
  local_1e8[4] = 0;
  local_1e8[5] = 0;
  local_1e8[6] = 0;
  local_1e8[7] = 0;
  local_1e8[0] = 0;
  local_1e8[1] = 0;
  local_1e8[2] = 0;
  local_1e8[3] = 0;
  local_208[0] = 0;
  local_208[1] = 0;
  local_208[2] = 0;
  uVar39 = 0;
  do {
    param_1[uVar39 * 4 + 0x607] = 0;
    param_1[uVar39 * 4 + 0x606] = 0;
    iVar24 = (int)uVar39;
    if (iVar24 == 0) {
      lVar20 = *(long *)(param_2 + 0x628);
LAB_10039ab10:
      if (lVar20 != 0) {
        local_208[uVar39] = *(long *)(lVar20 + 0x1b8);
        plVar31 = *(long **)(lVar20 + 0x20);
        if (plVar31 != (long *)0x0) {
          puVar2 = param_1 + uVar39 * 4 + 0x606;
          puVar3 = param_1 + uVar39 * 4 + 0x607;
          do {
            iVar24 = (int)(uVar39 << 7);
            lVar20 = *(long *)(param_2 + 0xe08 + (ulong)((uint)*(byte *)(plVar31 + 4) + iVar24) * 8)
            ;
            cVar10 = FUN_1003a7890(*(undefined1 *)((long)plVar31 + 0x22));
            cVar32 = '\b';
            if (cVar10 != '\0') {
              cVar32 = *(char *)((long)plVar31 + 0x22);
            }
            bVar37 = 0;
            uVar34 = 0;
            lVar35 = 0;
            uVar38 = 0;
            uVar13 = 0;
            cVar10 = '\0';
            uVar12 = 0;
            uVar33 = 0;
            if (lVar20 != 0) {
              lVar21 = *(long *)(lVar20 + 8);
              uVar27 = *(uint *)(lVar21 + 0x24);
              cVar10 = '\0';
              if (uVar27 - 1 < 8) {
                bVar37 = *(byte *)((long)plVar31 + 0x21);
                switch(uVar27) {
                case 1:
                  if (bVar37 == 1) {
                    cVar10 = *(char *)(lVar21 + 0xb4);
                  }
                  else {
                    cVar10 = '\0';
                  }
                  break;
                case 3:
                  if ((bVar37 | 4) == 6) {
                    cVar10 = '\x03';
                  }
                  else {
                    cVar10 = '\0';
                  }
                  break;
                case 5:
                case 8:
                  cVar10 = (bVar37 == 3) * '\x02';
                }
              }
              uVar38 = 0;
              pbVar29 = (byte *)plVar31[1];
              pbVar7 = (byte *)plVar31[2];
              bVar41 = false;
              lVar35 = 0;
              bVar37 = 0;
              if (pbVar29 != pbVar7) {
                uVar5 = 0;
                lVar36 = 0;
                bVar40 = false;
                do {
                  bVar4 = *pbVar29;
                  uVar28 = (uint)bVar4;
                  uVar19 = uVar28 & 0xef;
                  bVar37 = 0;
                  bVar41 = bVar40;
                  if (uVar19 < 0xb) {
                    if ((0x2deU >> (uVar28 & 0xf) & 1) != 0) {
                      bVar37 = 1;
                      goto LAB_10039ad50;
                    }
                    if ((0x120U >> (uVar28 & 0xf) & 1) != 0) {
                      bVar37 = 2;
                      goto LAB_10039ad50;
                    }
                    bVar37 = 0;
                    if (uVar19 != 10) goto LAB_10039ad50;
                    bVar37 = 1;
                    if (*(char *)(param_1 + 0x610) != '\0') {
                      bVar37 = 0xc;
                    }
LAB_10039adc2:
                    bVar9 = false;
                    lVar25 = *(long *)(param_2 + 0x58 +
                                      (ulong)((uint)pbVar29[1] + (int)(uVar39 << 4)) * 8);
                    if (lVar25 == 0) {
                      lVar25 = param_1[0x612];
                    }
                    if ((bVar4 < 0x19) && ((0x1200120U >> (uVar28 & 0x1f) & 1) != 0)) {
                      uVar5 = *(undefined4 *)(lVar25 + 0x1c);
                    }
                    bVar41 = true;
                    if (uVar19 != 8) {
                      bVar41 = bVar40;
                    }
                  }
                  else {
LAB_10039ad50:
                    if (1 < uVar19 - 1) goto LAB_10039adc2;
                    lVar25 = param_1[0x611];
                    bVar9 = true;
                    if (((*(ushort *)(lVar21 + 0xb0) & 0x2000) != 0) &&
                       ((((**(byte **)(lVar21 + 0x90) & 1) != 0 ||
                         (*(char *)(lVar21 + 0xd0) != '\0')) &&
                        (uVar19 = (uint)*(byte *)(plVar31 + 4) + iVar24, uVar19 < 0x180)))) {
                      local_1e8[uVar19 >> 5] = local_1e8[uVar19 >> 5] | 1 << ((byte)uVar19 & 0x1f);
                    }
                  }
                  uVar38 = (undefined1)uVar5;
                  lVar35 = lVar25;
                  if (((lVar36 != 0) && (lVar35 = lVar36, lVar36 != lVar25)) &&
                     (lVar35 = lVar25, *(uint *)(lVar25 + 4) <= *(uint *)(lVar36 + 4))) {
                    lVar35 = lVar36;
                  }
                  pbVar29 = pbVar29 + 2;
                  lVar36 = lVar35;
                  bVar40 = bVar41;
                } while (pbVar7 != pbVar29);
                bVar11 = bVar37;
                if (!bVar9) {
                  bVar11 = bVar37 | 4;
                }
                if ((bVar4 & 0x10) != 0) {
                  bVar37 = bVar11;
                }
              }
              if ((*(byte *)((long)plVar31 + 0x23) & 0x37) != 0) {
                bVar37 = bVar37 | 4;
              }
              if (((bVar37 & 2) == 0) ||
                 ((((bVar37 & 1) == 0 && ((*(ushort *)(lVar21 + 0xb0) & 0x40) != 0)) &&
                  ((!bVar41 || ((10 < uVar27 || ((0x540U >> (uVar27 & 0x1f) & 1) == 0)))))))) {
                uVar38 = 0;
              }
              else {
                bVar37 = bVar37 & 0xfc | 1;
              }
              uVar5 = *(undefined4 *)(lVar20 + 0x14);
              uVar6 = *(undefined4 *)
                       (*(long *)(*(long *)(lVar21 + 0x40) + (ulong)*(uint *)(lVar20 + 0x10) * 8) +
                       0x1c);
              uVar12 = FUN_10038e210(uVar6);
              FUN_10039b6f0(local_410,uVar6,uVar5);
              uVar34 = local_410[0];
              uVar13 = FUN_10038e320(uVar5);
              uVar33 = (undefined1)uVar27;
            }
            iVar23 = (bVar37 >> 1 & 1) + (bVar37 & 1);
            local_48[uVar39] = local_48[uVar39] + iVar23;
            bVar4 = *(byte *)(plVar31 + 4);
            uVar27 = iVar24 + (uint)bVar4;
            if ((uVar27 < 0x180) && ((local_1e8[uVar27 >> 5] >> (uVar27 & 0x1f) & 1) != 0)) {
              local_68[uVar39] = local_68[uVar39] + iVar23;
            }
            uVar26 = 2;
            if (cVar32 != '\x01') {
              uVar26 = cVar32 == '\x02';
            }
            lVar20 = param_1[uVar39 * 4 + 0x604];
            lVar21 = (ulong)bVar4 * 0x20;
            uVar22 = lVar20 + lVar21;
            *(undefined1 *)(lVar20 + lVar21) = uVar33;
            *(undefined1 *)(lVar20 + 1 + lVar21) = uVar12;
            *(byte *)(lVar20 + 2 + lVar21) = bVar37;
            *(char *)(lVar20 + 3 + lVar21) = cVar10;
            *(undefined1 *)(lVar20 + 4 + lVar21) = uVar34;
            *(undefined1 *)(lVar20 + 5 + lVar21) = uVar26;
            *(undefined1 *)(lVar20 + 6 + lVar21) = uVar38;
            *(undefined1 *)(lVar20 + 7 + lVar21) = uVar13;
            *(long *)(lVar20 + 8 + lVar21) = lVar35;
            *(undefined2 *)(lVar20 + 0x10 + lVar21) = 0xffff;
            *(undefined2 *)(lVar20 + 0x12 + lVar21) = 0xffff;
            uVar8 = *puVar2;
            if (uVar8 == 0) {
              *(undefined8 *)(lVar20 + 0x18 + lVar21) = 0;
              *puVar2 = uVar22;
              *puVar3 = uVar22;
            }
            else if (*puVar3 < uVar22) {
              *(ulong *)(*puVar3 + 0x18) = uVar22;
              *(undefined8 *)(lVar20 + 0x18 + lVar21) = 0;
              *puVar3 = uVar22;
            }
            else if (uVar22 < uVar8) {
              *(ulong *)(lVar20 + 0x18 + lVar21) = uVar8;
              *puVar2 = uVar22;
            }
            else {
              do {
                uVar17 = uVar8;
                if (uVar22 <= uVar17) goto LAB_10039b050;
                uVar8 = *(ulong *)(uVar17 + 0x18);
              } while (uVar8 <= uVar22);
              *(ulong *)(lVar20 + 0x18 + lVar21) = uVar8;
              *(ulong *)(uVar17 + 0x18) = uVar22;
            }
LAB_10039b050:
            plVar31 = (long *)*plVar31;
          } while (plVar31 != (long *)0x0);
        }
        uVar27 = FUN_100351a80(*param_1,uVar39 & 0xffffffff);
        if (uVar16 < uVar27) {
          uVar27 = uVar16;
        }
        uVar19 = local_48[uVar39];
        uVar28 = uVar19 - uVar27;
        if (uVar19 < uVar27 || uVar19 - uVar27 == 0) {
          uVar28 = 0;
        }
        uVar16 = (uVar28 - uVar19) + uVar16;
        iVar24 = uVar28 - local_68[uVar39];
        if (uVar28 < local_68[uVar39] || iVar24 == 0) {
          local_68[uVar39] = uVar28;
        }
        else {
          local_58[uVar39] = iVar24;
        }
      }
    }
    else {
      if (iVar24 == 1) {
        lVar20 = *(long *)(param_2 + 0x618);
        goto LAB_10039ab10;
      }
      if (iVar24 == 2) {
        lVar20 = *(long *)(param_2 + 0x620);
        goto LAB_10039ab10;
      }
    }
    uVar39 = uVar39 + 1;
    if (2 < uVar39) {
      ___bzero(param_1[0x617],*(int *)(param_1 + 0x618) + 7U >> 3);
      uVar39 = 0;
      uVar16 = 0;
LAB_10039b0f0:
      lVar20 = param_1[uVar39 * 4 + 0x604];
      lVar35 = param_1[uVar39 * 4 + 0x606];
      uVar15 = 0;
      do {
        uVar27 = uVar16;
        do {
          lVar21 = param_1[uVar39 * 4 + 0x604];
          uVar16 = uVar27;
          if ((lVar35 == 0) && (lVar20 == lVar21)) {
            if (uVar15 != 0) {
              lVar20 = local_208[uVar39];
              lVar35 = *(long *)(lVar20 + 0x10);
              if (lVar35 == 0) {
                lVar35 = *(long *)(lVar20 + 8);
              }
              *(byte *)(lVar35 + 8) = *(byte *)(lVar35 + 8) | 0x20;
              pvVar18 = (void *)FUN_10037bdb0(lVar20,(ulong)uVar15,1);
              _memcpy(pvVar18,local_408,(ulong)uVar15);
            }
            uVar39 = uVar39 + 1;
            if (2 < uVar39) {
              if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              ___stack_chk_fail();
            }
            goto LAB_10039b0f0;
          }
          uVar22 = (ulong)(lVar35 - lVar20) >> 5 & 0xffffffff;
          if (lVar35 == 0) {
            uVar22 = 0;
          }
          bVar37 = *(byte *)(lVar35 + 2);
          iVar24 = (bVar37 >> 1 & 1) + (bVar37 & 1);
          if (iVar24 != 0) {
            uVar19 = (uint)uVar22;
            uVar28 = uVar19 + (int)(uVar39 << 7);
            if ((uVar28 < 0x180) && ((local_1e8[uVar28 >> 5] >> (uVar28 & 0x1f) & 1) != 0)) {
              uVar28 = local_68[uVar39];
              if (uVar28 == 0) {
LAB_10039b230:
                if (uVar39 == 0) {
                  if (uVar19 < *(uint *)*param_1) {
                    uVar28 = *(uint *)(param_1 + 0x618);
                    if ((uVar19 < uVar28) &&
                       ((*(uint *)(param_1[0x617] + (uVar22 >> 5) * 4) >> (uVar19 & 0x1f) & 1) != 0)
                       ) {
                      bVar41 = false;
                    }
                    else {
                      bVar41 = (bVar37 & 1) != 0;
                      if (bVar41) {
                        *(short *)(lVar21 + 0x10 + uVar22 * 0x20) = (short)uVar22;
                      }
                      else {
                        *(short *)(lVar21 + 0x12 + uVar22 * 0x20) = (short)uVar22;
                      }
                      if (uVar19 < uVar28) {
                        puVar1 = (uint *)(param_1[0x617] + (ulong)(uVar19 >> 5) * 4);
                        *puVar1 = *puVar1 | 1 << ((byte)uVar22 & 0x1f);
                      }
                      iVar24 = iVar24 + -1;
                      if (iVar24 == 0) goto LAB_10039b420;
                    }
                  }
                  else {
                    bVar41 = false;
                  }
                }
                else {
                  bVar41 = false;
                }
                while( true ) {
                  uVar28 = uVar27 & 0xffffffe0;
                  uVar16 = *(uint *)(param_1 + 0x618);
                  uVar19 = uVar16 - uVar28;
                  if (uVar16 < uVar28 || uVar19 == 0) break;
                  uVar27 = uVar27 - uVar28;
                  while( true ) {
                    uVar30 = (1 << ((byte)uVar27 & 0x1f)) - 1U |
                             *(uint *)(param_1[0x617] + (ulong)(uVar28 >> 5) * 4);
                    if (uVar19 < 0x20) {
                      uVar30 = uVar30 | -1 << ((byte)uVar19 & 0x1f);
                    }
                    if (uVar30 != 0xffffffff) break;
                    uVar28 = uVar28 + 0x20;
                    uVar19 = uVar19 - 0x20;
                    uVar27 = 0;
                    if (uVar16 <= uVar28) goto LAB_10039b420;
                  }
                  uVar19 = uVar30 >> (uVar27 & 0x1f);
                  uVar30 = uVar30 >> ((byte)uVar27 & 0x1f);
                  while ((uVar19 & 1) != 0) {
                    uVar27 = uVar27 + 1;
                    uVar19 = uVar30 >> 1;
                    uVar30 = uVar30 >> 1;
                  }
                  uVar27 = uVar27 + uVar28;
                  bVar40 = uVar16 <= uVar27;
                  uVar16 = uVar27;
                  if (bVar40) break;
                  if ((bVar41) || ((bVar37 & 1) == 0)) {
                    *(short *)(lVar21 + 0x12 + uVar22 * 0x20) = (short)uVar27;
                  }
                  else {
                    *(short *)(lVar21 + 0x10 + uVar22 * 0x20) = (short)uVar27;
                    bVar41 = true;
                  }
                  puVar1 = (uint *)(param_1[0x617] + (ulong)(uVar27 >> 5) * 4);
                  *puVar1 = *puVar1 | 1 << ((byte)uVar27 & 0x1f);
                  iVar24 = iVar24 + -1;
                  if (iVar24 == 0) break;
                }
              }
              else {
                *(byte *)(lVar21 + 2 + uVar22 * 0x20) =
                     *(byte *)(lVar21 + 2 + uVar22 * 0x20) & 0xe8 | 0x14;
                local_68[uVar39] = uVar28 - iVar24;
              }
            }
            else {
              iVar23 = local_58[uVar39];
              if (iVar23 == 0) goto LAB_10039b230;
              pbVar29 = (byte *)(lVar21 + 2 + uVar22 * 0x20);
              *pbVar29 = *pbVar29 & 0xfc;
              local_58[uVar39] = iVar23 - iVar24;
            }
          }
LAB_10039b420:
          sVar14 = FUN_10039b630(lVar35,local_408 + uVar15);
          uVar15 = sVar14 + uVar15;
          uVar27 = uVar16;
        } while (lVar35 == 0);
        lVar35 = *(long *)(lVar35 + 0x18);
      } while( true );
    }
  } while( true );
}

