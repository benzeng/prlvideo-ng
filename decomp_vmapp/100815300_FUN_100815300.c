
long FUN_100815300(long param_1,long *param_2,long *param_3,char *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined *puVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  int iVar32;
  ulong uVar33;
  bool bVar34;
  bool bVar35;
  ulong local_68;
  ulong local_60;
  long *local_50;
  long *local_48;
  int local_3c;
  long local_38;
  
  local_48 = (long *)0x0;
  local_50 = (long *)0x0;
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (param_4 == (char *)0x0) {
    return 0;
  }
  local_38 = 0;
  local_3c = 0;
  lVar2 = FUN_1008a99c0(&local_38,"gost94",0xffffffff);
  if ((lVar2 != 0) && (iVar1 = FUN_1008a9e80(&local_3c,0,0,0,0,lVar2), iVar1 < 1)) {
    local_3c = 0;
  }
  if (local_38 != 0) {
    FUN_10087a5e0();
  }
  uVar33 = 0x128;
  if (local_3c != 0) {
    uVar33 = 0x28;
  }
  local_38 = 0;
  local_3c = 0;
  lVar2 = FUN_1008a99c0(&local_38,"gost2001",0xffffffff);
  if ((lVar2 != 0) && (iVar1 = FUN_1008a9e80(&local_3c,0,0,0,0,lVar2), iVar1 < 1)) {
    local_3c = 0;
  }
  if (local_38 != 0) {
    FUN_10087a5e0();
  }
  if (local_3c == 0) {
    uVar33 = uVar33 | 0x200;
  }
  uVar12 = 0x16;
  if ((uVar33 & 0x300) == 0x300) {
    uVar12 = 0x216;
  }
  bVar34 = DAT_1011c0540 == 0;
  local_60 = 2;
  if (DAT_1011c0548 != 0) {
    local_60 = 0;
  }
  uVar3 = 4;
  if (DAT_1011c0550 != 0) {
    uVar3 = 0;
  }
  uVar26 = 8;
  if (DAT_1011c0558 != 0) {
    uVar26 = 0;
  }
  uVar31 = 0x10;
  if (DAT_1011c0560 != 0) {
    uVar31 = 0;
  }
  uVar27 = 0x40;
  if (DAT_1011c0570 != 0) {
    uVar27 = 0;
  }
  uVar28 = 0x80;
  if (DAT_1011c0578 != 0) {
    uVar28 = 0;
  }
  uVar29 = 0x1000;
  if (DAT_1011c05a0 != 0) {
    uVar29 = 0;
  }
  uVar24 = 0x2000;
  if (DAT_1011c05a8 != 0) {
    uVar24 = 0;
  }
  uVar22 = 0x100;
  if (DAT_1011c0580 != 0) {
    uVar22 = 0;
  }
  uVar23 = 0x200;
  if (DAT_1011c0588 != 0) {
    uVar23 = 0;
  }
  uVar21 = 0x400;
  if (DAT_1011c0590 != 0) {
    uVar21 = 0;
  }
  uVar4 = 0x800;
  if (DAT_1011c0598 != 0) {
    uVar4 = 0;
  }
  bVar35 = DAT_1011c05b0 == 0;
  local_68 = 2;
  if (DAT_1011c05b8 != 0) {
    local_68 = 0;
  }
  uVar5 = 0x10;
  if (DAT_1011c05d0 != 0) {
    uVar5 = 0;
  }
  uVar13 = 0x20;
  if (DAT_1011c05d8 != 0) {
    uVar13 = 0;
  }
  uVar17 = 4;
  if (DAT_1011c05c0 != 0) {
    uVar17 = 0;
  }
  uVar30 = 8;
  if ((DAT_1011c05c8 != 0) && (uVar30 = 8, DAT_1011a940c != 0)) {
    uVar30 = 0;
  }
  iVar1 = (**(code **)(param_1 + 0xa8))();
  plVar6 = (long *)FUN_10081ddd0(iVar1 << 5,"ssl_ciph.c",0x584);
  if (plVar6 == (long *)0x0) {
    uVar25 = 0x586;
LAB_100815c1f:
    FUN_100887ce0(0x14,0xa6,0x41,"ssl_ciph.c",uVar25);
  }
  else {
    uVar4 = local_60 | bVar34 | uVar3 | uVar26 | uVar31 | uVar27 | uVar28 | uVar29 | uVar24 | uVar22
            | uVar23 | uVar21 | uVar4;
    uVar30 = local_68 | bVar35 | uVar5 | uVar13 | uVar17 | uVar30;
    if (iVar1 < 1) {
LAB_100815936:
      local_48 = (long *)0x0;
      local_50 = (long *)0x0;
    }
    else {
      iVar32 = 0;
      iVar19 = 0;
      do {
        piVar7 = (int *)(**(code **)(param_1 + 0xb0))(iVar32);
        if (((((piVar7 != (int *)0x0) && (*piVar7 != 0)) && ((*(ulong *)(piVar7 + 6) & uVar12) == 0)
             ) && (((*(ulong *)(piVar7 + 8) & uVar33) == 0 &&
                   ((*(ulong *)(piVar7 + 10) & uVar4) == 0)))) &&
           ((*(ulong *)(piVar7 + 0xc) & uVar30) == 0)) {
          lVar2 = (long)iVar19;
          plVar6[lVar2 * 4] = (long)piVar7;
          *(undefined4 *)(plVar6 + lVar2 * 4 + 1) = 0;
          iVar19 = iVar19 + 1;
          plVar6[lVar2 * 4 + 3] = 0;
          plVar6[lVar2 * 4 + 2] = 0;
        }
        iVar32 = iVar32 + 1;
      } while (iVar1 != iVar32);
      if (iVar19 < 1) goto LAB_100815936;
      plVar6[3] = 0;
      lVar2 = 0;
      if (1 < iVar19) {
        plVar6[2] = (long)(plVar6 + 4);
        iVar32 = iVar19 + -1;
        if (1 < iVar32) {
          uVar26 = (ulong)(iVar19 - 3) + 1 | 1;
          uVar3 = 1;
          if (uVar26 != 1) {
            plVar16 = plVar6 + 0xc;
            uVar31 = 1;
            do {
              plVar16[-5] = (long)(plVar16 + -0xc);
              plVar16[-1] = (long)(plVar16 + -8);
              plVar16[-6] = (long)(plVar16 + -4);
              plVar16[-2] = (long)plVar16;
              uVar31 = uVar31 + 2;
              plVar16 = plVar16 + 8;
              uVar3 = uVar26;
            } while (uVar26 != uVar31);
          }
          if ((ulong)(iVar19 - 3) + 2 != uVar3) {
            uVar26 = uVar3;
            if ((iVar32 - (int)uVar3 & 1U) != 0) {
              plVar6[uVar3 * 4 + 3] = (long)(plVar6 + uVar3 * 4 + -4);
              uVar26 = uVar3 + 1;
              plVar6[uVar3 * 4 + 2] = (long)(plVar6 + uVar26 * 4);
            }
            if (iVar19 + -2 != (int)uVar3) {
              plVar16 = plVar6 + uVar26 * 4 + 8;
              iVar20 = iVar19 - ((int)uVar26 + 1);
              do {
                plVar16[-5] = (long)(plVar16 + -0xc);
                plVar16[-6] = (long)(plVar16 + -4);
                plVar16[-1] = (long)(plVar16 + -8);
                plVar16[-2] = (long)plVar16;
                plVar16 = plVar16 + 8;
                iVar20 = iVar20 + -2;
              } while (iVar20 != 0);
            }
          }
        }
        lVar2 = (long)iVar32;
        plVar6[lVar2 * 4 + 3] = (long)(plVar6 + (long)(iVar19 + -2) * 4);
      }
      plVar16 = plVar6 + lVar2 * 4;
      plVar6[lVar2 * 4 + 2] = 0;
      plVar14 = plVar16;
      plVar9 = plVar6;
      plVar10 = plVar6;
      plVar8 = plVar16;
      if (plVar6 != (long *)0x0) {
        do {
          if (plVar8 == (long *)0x0) break;
          plVar8 = (long *)plVar10[2];
          if (((*(byte *)(*plVar10 + 0x18) & 0x80) != 0) && ((int)plVar10[1] == 0)) {
            if (plVar14 != plVar10) {
              if (plVar9 == plVar10) {
                plVar9 = plVar8;
              }
              lVar2 = plVar10[3];
              plVar18 = plVar8;
              if (lVar2 != 0) {
                *(long **)(lVar2 + 0x10) = plVar8;
                plVar18 = (long *)plVar10[2];
              }
              if (plVar18 != (long *)0x0) {
                plVar18[3] = lVar2;
              }
              plVar14[2] = (long)plVar10;
              plVar10[3] = (long)plVar14;
              plVar10[2] = 0;
              plVar14 = plVar10;
            }
            *(undefined4 *)(plVar10 + 1) = 1;
          }
          bVar34 = plVar10 != plVar16;
          plVar10 = plVar8;
        } while (bVar34);
      }
      local_48 = plVar9;
      plVar8 = plVar14;
      plVar16 = plVar9;
      if (plVar14 != (long *)0x0) {
        do {
          if (plVar16 == (long *)0x0) break;
          plVar16 = (long *)plVar8[3];
          if (((*(byte *)(*plVar8 + 0x18) & 0x80) != 0) && ((int)plVar8[1] != 0)) {
            if (local_48 != plVar8) {
              if (plVar14 == plVar8) {
                plVar14 = plVar16;
              }
              lVar2 = plVar8[2];
              plVar10 = plVar16;
              if (lVar2 != 0) {
                *(long **)(lVar2 + 0x18) = plVar16;
                plVar10 = (long *)plVar8[3];
              }
              if (plVar10 != (long *)0x0) {
                plVar10[2] = lVar2;
              }
              local_48[3] = (long)plVar8;
              plVar8[2] = (long)local_48;
              plVar8[3] = 0;
              local_48 = plVar8;
            }
            *(undefined4 *)(plVar8 + 1) = 0;
          }
          bVar34 = plVar8 != plVar9;
          plVar8 = plVar16;
        } while (bVar34);
      }
      plVar16 = plVar14;
      plVar8 = local_48;
      if (plVar14 != (long *)0x0) {
        do {
          if (plVar8 == (long *)0x0) break;
          plVar10 = (long *)plVar8[2];
          if (((*(ushort *)(*plVar8 + 0x28) & 0x30c0) != 0) && ((int)plVar8[1] == 0)) {
            if (plVar16 != plVar8) {
              if (local_48 == plVar8) {
                local_48 = plVar10;
              }
              lVar2 = plVar8[3];
              plVar9 = plVar10;
              if (lVar2 != 0) {
                *(long **)(lVar2 + 0x10) = plVar10;
                plVar9 = (long *)plVar8[2];
              }
              if (plVar9 != (long *)0x0) {
                plVar9[3] = lVar2;
              }
              plVar16[2] = (long)plVar8;
              plVar8[3] = (long)plVar16;
              plVar8[2] = 0;
              plVar16 = plVar8;
            }
            *(undefined4 *)(plVar8 + 1) = 1;
          }
          bVar34 = plVar8 != plVar14;
          plVar8 = plVar10;
        } while (bVar34);
      }
      plVar8 = plVar16;
      plVar14 = local_48;
      if (plVar16 != (long *)0x0) {
        do {
          if (plVar14 == (long *)0x0) break;
          plVar10 = (long *)plVar14[2];
          if ((int)plVar14[1] == 0) {
            if (plVar8 != plVar14) {
              if (local_48 == plVar14) {
                local_48 = plVar10;
              }
              lVar2 = plVar14[3];
              plVar9 = plVar10;
              if (lVar2 != 0) {
                *(long **)(lVar2 + 0x10) = plVar10;
                plVar9 = (long *)plVar14[2];
              }
              if (plVar9 != (long *)0x0) {
                plVar9[3] = lVar2;
              }
              plVar8[2] = (long)plVar14;
              plVar14[3] = (long)plVar8;
              plVar14[2] = 0;
              plVar8 = plVar14;
            }
            *(undefined4 *)(plVar14 + 1) = 1;
          }
          bVar34 = plVar14 != plVar16;
          plVar14 = plVar10;
        } while (bVar34);
      }
      plVar16 = plVar8;
      plVar14 = local_48;
      if (plVar8 != (long *)0x0) {
        do {
          if (plVar14 == (long *)0x0) break;
          plVar10 = (long *)plVar14[2];
          if ((((*(byte *)(*plVar14 + 0x30) & 1) != 0) && ((int)plVar14[1] != 0)) &&
             (plVar16 != plVar14)) {
            if (local_48 == plVar14) {
              local_48 = plVar10;
            }
            lVar2 = plVar14[3];
            plVar9 = plVar10;
            if (lVar2 != 0) {
              *(long **)(lVar2 + 0x10) = plVar10;
              plVar9 = (long *)plVar14[2];
            }
            if (plVar9 != (long *)0x0) {
              plVar9[3] = lVar2;
            }
            plVar16[2] = (long)plVar14;
            plVar14[3] = (long)plVar16;
            plVar14[2] = 0;
            plVar16 = plVar14;
          }
          bVar34 = plVar14 != plVar8;
          plVar14 = plVar10;
        } while (bVar34);
      }
      plVar8 = plVar16;
      plVar14 = local_48;
      if (plVar16 != (long *)0x0) {
        do {
          if (plVar14 == (long *)0x0) break;
          plVar10 = (long *)plVar14[2];
          if ((((*(byte *)(*plVar14 + 0x20) & 4) != 0) && ((int)plVar14[1] != 0)) &&
             (plVar8 != plVar14)) {
            if (local_48 == plVar14) {
              local_48 = plVar10;
            }
            lVar2 = plVar14[3];
            plVar9 = plVar10;
            if (lVar2 != 0) {
              *(long **)(lVar2 + 0x10) = plVar10;
              plVar9 = (long *)plVar14[2];
            }
            if (plVar9 != (long *)0x0) {
              plVar9[3] = lVar2;
            }
            plVar8[2] = (long)plVar14;
            plVar14[3] = (long)plVar8;
            plVar14[2] = 0;
            plVar8 = plVar14;
          }
          bVar34 = plVar14 != plVar16;
          plVar14 = plVar10;
        } while (bVar34);
      }
      plVar16 = plVar8;
      plVar14 = local_48;
      if (plVar8 != (long *)0x0) {
        do {
          if (plVar14 == (long *)0x0) break;
          plVar10 = (long *)plVar14[2];
          if ((((*(byte *)(*plVar14 + 0x20) & 0x10) != 0) && ((int)plVar14[1] != 0)) &&
             (plVar16 != plVar14)) {
            if (local_48 == plVar14) {
              local_48 = plVar10;
            }
            lVar2 = plVar14[3];
            plVar9 = plVar10;
            if (lVar2 != 0) {
              *(long **)(lVar2 + 0x10) = plVar10;
              plVar9 = (long *)plVar14[2];
            }
            if (plVar9 != (long *)0x0) {
              plVar9[3] = lVar2;
            }
            plVar16[2] = (long)plVar14;
            plVar14[3] = (long)plVar16;
            plVar14[2] = 0;
            plVar16 = plVar14;
          }
          bVar34 = plVar14 != plVar8;
          plVar14 = plVar10;
        } while (bVar34);
      }
      plVar8 = plVar16;
      plVar14 = local_48;
      if (plVar16 != (long *)0x0) {
        do {
          if (plVar14 == (long *)0x0) break;
          plVar10 = (long *)plVar14[2];
          if ((((*(byte *)(*plVar14 + 0x18) & 1) != 0) && ((int)plVar14[1] != 0)) &&
             (plVar8 != plVar14)) {
            if (local_48 == plVar14) {
              local_48 = plVar10;
            }
            lVar2 = plVar14[3];
            plVar9 = plVar10;
            if (lVar2 != 0) {
              *(long **)(lVar2 + 0x10) = plVar10;
              plVar9 = (long *)plVar14[2];
            }
            if (plVar9 != (long *)0x0) {
              plVar9[3] = lVar2;
            }
            plVar8[2] = (long)plVar14;
            plVar14[3] = (long)plVar8;
            plVar14[2] = 0;
            plVar8 = plVar14;
          }
          bVar34 = plVar14 != plVar16;
          plVar14 = plVar10;
        } while (bVar34);
      }
      plVar16 = plVar8;
      plVar14 = local_48;
      if (plVar8 != (long *)0x0) {
        do {
          if (plVar14 == (long *)0x0) break;
          plVar10 = (long *)plVar14[2];
          if ((((*(byte *)(*plVar14 + 0x19) & 1) != 0) && ((int)plVar14[1] != 0)) &&
             (plVar16 != plVar14)) {
            if (local_48 == plVar14) {
              local_48 = plVar10;
            }
            lVar2 = plVar14[3];
            plVar9 = plVar10;
            if (lVar2 != 0) {
              *(long **)(lVar2 + 0x10) = plVar10;
              plVar9 = (long *)plVar14[2];
            }
            if (plVar9 != (long *)0x0) {
              plVar9[3] = lVar2;
            }
            plVar16[2] = (long)plVar14;
            plVar14[3] = (long)plVar16;
            plVar14[2] = 0;
            plVar16 = plVar14;
          }
          bVar34 = plVar14 != plVar8;
          plVar14 = plVar10;
        } while (bVar34);
      }
      plVar8 = plVar16;
      plVar14 = local_48;
      if (plVar16 != (long *)0x0) {
        do {
          if (plVar14 == (long *)0x0) break;
          plVar10 = (long *)plVar14[2];
          if ((((*(byte *)(*plVar14 + 0x18) & 0x10) != 0) && ((int)plVar14[1] != 0)) &&
             (plVar8 != plVar14)) {
            if (local_48 == plVar14) {
              local_48 = plVar10;
            }
            lVar2 = plVar14[3];
            plVar9 = plVar10;
            if (lVar2 != 0) {
              *(long **)(lVar2 + 0x10) = plVar10;
              plVar9 = (long *)plVar14[2];
            }
            if (plVar9 != (long *)0x0) {
              plVar9[3] = lVar2;
            }
            plVar8[2] = (long)plVar14;
            plVar14[3] = (long)plVar8;
            plVar14[2] = 0;
            plVar8 = plVar14;
          }
          bVar34 = plVar14 != plVar16;
          plVar14 = plVar10;
        } while (bVar34);
      }
      local_50 = plVar8;
      plVar16 = local_48;
      if (plVar8 != (long *)0x0) {
        do {
          if (plVar16 == (long *)0x0) break;
          plVar14 = (long *)plVar16[2];
          if ((((*(byte *)(*plVar16 + 0x28) & 4) != 0) && ((int)plVar16[1] != 0)) &&
             (local_50 != plVar16)) {
            if (local_48 == plVar16) {
              local_48 = plVar14;
            }
            lVar2 = plVar16[3];
            plVar10 = plVar14;
            if (lVar2 != 0) {
              *(long **)(lVar2 + 0x10) = plVar14;
              plVar10 = (long *)plVar16[2];
            }
            if (plVar10 != (long *)0x0) {
              plVar10[3] = lVar2;
            }
            local_50[2] = (long)plVar16;
            plVar16[3] = (long)local_50;
            plVar16[2] = 0;
            local_50 = plVar16;
          }
          bVar34 = plVar16 != plVar8;
          plVar16 = plVar14;
        } while (bVar34);
      }
    }
    iVar19 = FUN_100816510(&local_48,&local_50);
    if (iVar19 != 0) {
      plVar16 = local_48;
      plVar8 = local_50;
      if (local_48 != (long *)0x0) {
        do {
          if (plVar8 == (long *)0x0) break;
          plVar14 = (long *)plVar8[3];
          if ((int)plVar8[1] != 0) {
            if (plVar16 != plVar8) {
              if (local_50 == plVar8) {
                local_50 = plVar14;
              }
              lVar2 = plVar8[2];
              plVar10 = plVar14;
              if (lVar2 != 0) {
                *(long **)(lVar2 + 0x18) = plVar14;
                plVar10 = (long *)plVar8[3];
              }
              if (plVar10 != (long *)0x0) {
                plVar10[2] = lVar2;
              }
              plVar16[3] = (long)plVar8;
              plVar8[2] = (long)plVar16;
              plVar8[3] = 0;
              plVar16 = plVar8;
            }
            *(undefined4 *)(plVar8 + 1) = 0;
          }
          bVar34 = plVar8 != local_48;
          plVar8 = plVar14;
        } while (bVar34);
      }
      local_48 = plVar16;
      plVar8 = (long *)FUN_10081ddd0(iVar1 * 8 + 600,"ssl_ciph.c",0x5d5);
      if (plVar8 == (long *)0x0) {
        FUN_10081e1a0(plVar6);
        uVar25 = 0x5d8;
        goto LAB_100815c1f;
      }
      lVar2 = -0x4a;
      puVar15 = &DAT_100bd0d80;
      plVar14 = plVar8;
      for (; plVar16 != (long *)0x0; plVar16 = (long *)plVar16[2]) {
        *plVar14 = *plVar16;
        plVar14 = plVar14 + 1;
      }
      do {
        if (((*(ulong *)(puVar15 + 0x18) == 0) || ((*(ulong *)(puVar15 + 0x18) & ~uVar12) != 0)) &&
           ((((*(ulong *)(puVar15 + 0x20) == 0 || ((*(ulong *)(puVar15 + 0x20) & ~uVar33) != 0)) &&
             ((*(ulong *)(puVar15 + 0x28) == 0 || ((*(ulong *)(puVar15 + 0x28) & ~uVar4) != 0)))) &&
            ((6 < lVar2 + 0x13U || ((*(ulong *)(puVar15 + 0x30) & ~uVar30) != 0)))))) {
          *plVar14 = (long)puVar15;
          plVar14 = plVar14 + 1;
        }
        puVar15 = puVar15 + 0x58;
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0);
      *plVar14 = 0;
      iVar1 = _strncmp(param_4,"DEFAULT",7);
      if (iVar1 == 0) {
        iVar1 = FUN_1008166b0("ALL:!EXPORT:!aNULL:!eNULL:!SSLv2",&local_48,&local_50,plVar8);
        if (param_4[7] == ':') {
          param_4 = param_4 + 8;
        }
        else {
          param_4 = param_4 + 7;
        }
        if (iVar1 == 0) {
          FUN_10081e1a0(plVar8);
          goto LAB_1008161d7;
        }
      }
      if (*param_4 == '\0') {
        FUN_10081e1a0(plVar8);
      }
      else {
        iVar1 = FUN_1008166b0(param_4,&local_48,&local_50,plVar8);
        FUN_10081e1a0(plVar8);
        if (iVar1 == 0) goto LAB_1008161d7;
      }
      lVar2 = FUN_100884e10();
      plVar16 = local_48;
      if (lVar2 != 0) {
        for (; plVar16 != (long *)0x0; plVar16 = (long *)plVar16[2]) {
          if ((int)plVar16[1] != 0) {
            FUN_1008852e0(lVar2,*plVar16);
          }
        }
        FUN_10081e1a0(plVar6);
        lVar11 = FUN_100884c10(lVar2);
        if (lVar11 != 0) {
          if (*param_2 != 0) {
            FUN_100884dd0();
          }
          *param_2 = lVar2;
          if (*param_3 != 0) {
            FUN_100884dd0();
          }
          *param_3 = lVar11;
          FUN_100884bf0(lVar11,FUN_10080f330);
          FUN_100885680(*param_3);
          return lVar2;
        }
        FUN_100884dd0(lVar2);
        return 0;
      }
    }
LAB_1008161d7:
    FUN_10081e1a0(plVar6);
  }
  return 0;
}

