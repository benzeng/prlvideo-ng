
void FUN_1002cd920(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined4 local_54;
  uint local_50 [2];
  undefined4 *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar11 = *param_2;
  uVar7 = *(undefined8 *)(lVar11 + 4);
  *(undefined4 *)(param_1 + 0x14c8) = 0;
  uVar20 = *(uint *)(lVar11 + 0x18);
  if ((uVar20 & 0x40) != 0) {
    return;
  }
  uVar15 = (uint)uVar7 & 0x7f;
  uVar18 = (uint)((ulong)uVar7 >> 8) & 0xf;
  lVar10 = 0;
  do {
    if ((uVar20 & 0x80) == 0) {
      uVar21 = *(uint *)(lVar11 + 0x10);
      uVar17 = 0;
      if ((uVar20 & 0x7fff0000) != 0) {
        uVar17 = *(uint *)(lVar11 + 0x14) & 1;
        if (uVar17 == 0) {
          uVar21 = *(uint *)(lVar11 + 0x14);
        }
        uVar17 = uVar17 ^ 1;
      }
      if (((uVar21 & 1) == 0) && ((uVar21 & 0xffffffe0) != 0)) {
        uVar14 = DAT_1011c5640;
        if (0xb0000000 < DAT_1011c5640) {
          uVar14 = 0xb0000000;
        }
        if ((uVar21 & 0xffffffe0) < uVar14) {
          local_48 = (undefined4 *)0x0;
          uStack_40 = 0;
          local_38 = 0;
          FUN_10008d2d0(&local_48,(ulong)(uVar21 & 0xffffffe0),0x20);
          uVar20 = local_48[2];
          if ((uVar20 & 0x80) != 0) {
            if (((uVar17 != 0) && (uVar21 != *(uint *)(*param_2 + 0x10))) && (0 < DAT_1011c568c)) {
              FUN_1008e3970("","USB",0,"[EHC] Mayday! Switching to active Alt qTD %u %u %x %x %x %x"
                            ,uVar20 >> 6 & 1,uVar20 >> 0x10 & 0x7fff,uVar21,
                            *(uint *)(*param_2 + 0x10),*local_48,local_48[1]);
              uVar20 = local_48[2];
            }
            uVar2 = *local_48;
            uVar17 = local_48[1];
            uVar3 = local_48[3];
            uVar4 = local_48[4];
            uVar5 = local_48[5];
            uVar7 = *(undefined8 *)(local_48 + 6);
            lVar11 = *param_2;
            if ((*(ulong *)(lVar11 + 4) & 0x4000) == 0) {
              uVar20 = uVar20 & 0x7fffffff | *(uint *)(lVar11 + 0x18) & 0x80000000;
            }
            if ((*(ulong *)(lVar11 + 4) & 0x3000) != 0) {
              uVar20 = uVar20 & 0xfffffffe | *(uint *)(lVar11 + 0x18) & 1;
            }
            uVar6 = *(uint *)(lVar11 + 0x14);
            *(uint *)(lVar11 + 0xc) = uVar21;
            lVar11 = *param_2;
            *(undefined4 *)(lVar11 + 0x10) = uVar2;
            *(uint *)(lVar11 + 0x14) = uVar17 & 0xffffffe1 | uVar6 & 0x1e;
            *(uint *)(lVar11 + 0x18) = uVar20;
            *(undefined4 *)(lVar11 + 0x1c) = uVar3;
            *(uint *)(lVar11 + 0x20) = uVar4 & 0xffffff00;
            *(uint *)(lVar11 + 0x24) = uVar5 & 0xffffffe0;
            *(undefined8 *)(lVar11 + 0x28) = uVar7;
          }
          FUN_10008d3f0(&local_48);
          lVar11 = *param_2;
        }
      }
      if ((*(uint *)(lVar11 + 0x18) & 0xc0) != 0x80) {
        return;
      }
    }
    lVar11 = *(long *)(param_1 + 0x40);
    if ((*(byte *)(lVar11 + 0x1025) & 0x20) == 0) {
      uVar20 = *(uint *)(lVar11 + 0x1024);
      do {
        LOCK();
        uVar21 = *(uint *)(lVar11 + 0x1024);
        bVar22 = uVar20 == uVar21;
        if (bVar22) {
          *(uint *)(lVar11 + 0x1024) = uVar20 | 0x2000;
          uVar21 = uVar20;
        }
        uVar20 = uVar21;
        UNLOCK();
      } while (!bVar22);
    }
    if (lVar10 == 0) {
      uVar20 = 0;
      if ((uVar18 != 0) && (uVar20 = uVar18 | 0x80, (*(uint *)(*param_2 + 0x18) & 0x300) != 0x100))
      {
        uVar20 = uVar18;
      }
      lVar10 = FUN_1002c8420(param_1,uVar15,uVar20);
      if (lVar10 == 0) {
        FUN_1002cf330(param_1,param_2);
        return;
      }
      *(undefined4 *)(lVar10 + 0xa4) = *(undefined4 *)(param_1 + 0x1488);
      uVar18 = uVar20;
    }
    plVar1 = (long *)(lVar10 + 0x30);
    plVar19 = *(long **)(lVar10 + 0x30);
    if (plVar19 != plVar1) {
      do {
        if (*(int *)((long)plVar19 + 0x464) == 0) {
          if (plVar19 != plVar1) {
            return;
          }
          break;
        }
        lVar11 = *plVar19;
        plVar13 = (long *)plVar19[1];
        *(long **)(lVar11 + 8) = plVar13;
        *plVar13 = lVar11;
        *plVar19 = 0x112233;
        plVar19[1] = (long)&DAT_00445566;
        *(int *)(lVar10 + 0x40) = *(int *)(lVar10 + 0x40) + -1;
        if (*(long **)(lVar10 + 0x30) == plVar1) {
          lVar11 = *(long *)(lVar10 + 0x70);
          plVar19 = *(long **)(lVar10 + 0x78);
          *(long **)(lVar11 + 8) = plVar19;
          *plVar19 = lVar11;
          *(long *)(lVar10 + 0x70) = lVar10 + 0x70;
          *(long *)(lVar10 + 0x78) = lVar10 + 0x70;
        }
        FUN_1002c8930();
        plVar19 = (long *)*plVar1;
      } while (plVar19 != plVar1);
    }
    plVar19 = (long *)(lVar10 + 0x18);
    if ((ulong)*(byte *)(lVar10 + 0xb4) == 0) {
      plVar13 = (long *)*plVar19;
LAB_1002cdcb3:
      if (plVar13 == plVar19) goto LAB_1002cdd6b;
      uVar20 = *(uint *)(*param_2 + 0x18);
      if ((uint)(byte)(&DAT_100b38460)[uVar20 >> 8 & 3] == *(uint *)(plVar13 + 0x8a)) {
        bVar22 = true;
        if ((uVar20 & 0x300) != 0x100) {
          uVar14 = 0xffffffffffffffff;
          if (*(uint *)((long)plVar13 + 0x434) < *(uint *)(plVar13 + 0x86)) {
            uVar14 = plVar13[(ulong)*(uint *)((long)plVar13 + 0x434) + 2];
          }
          bVar22 = uVar14 == *(uint *)(*param_2 + 0xc);
        }
      }
      else {
        bVar22 = false;
      }
      if (*(int *)((long)plVar13 + 0x464) == 0) {
        if (!bVar22) {
          if (0 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[EHC] tag mismatch at queue head");
          }
          FUN_1002d94a0(lVar10);
          return;
        }
        if ((*(byte *)(lVar10 + 0x90) & 1) == 0) {
          return;
        }
        goto LAB_1002cdd6b;
      }
      *(undefined8 *)(lVar10 + 0xa8) = 0;
      if (bVar22) {
        FUN_1002cf3f0(param_1,param_2,plVar13);
      }
      else {
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[EHC] tag mismatch while completion");
        }
        FUN_1002c8620(param_1,lVar10);
        FUN_1002c8930(plVar13);
      }
    }
    else {
      plVar13 = (long *)*plVar19;
      if (plVar13 != plVar19) goto LAB_1002cdcb3;
      if ((((*(uint *)(*param_2 + 0x18) & 0x300) == 0x100) &&
          (lVar11 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40 + (ulong)*(byte *)(lVar10 + 0xb4) * 8)
          , lVar11 != 0)) && (*(int *)(lVar11 + 8) != 0)) {
        return;
      }
LAB_1002cdd6b:
      if ((*(long *)(lVar10 + 0xa8) == 0) ||
         (lVar11 = FUN_1007d87f0(), (ulong)(lVar11 - *(long *)(lVar10 + 0xa8)) < 0xf4241)) {
        lVar11 = *param_2;
        local_50[0] = *(uint *)(lVar11 + 0xc);
        local_54 = 0;
        if ((long)*(int *)(param_1 + 0x14c8) < 0x400) {
          *(uint *)(param_1 + 0x14cc + (long)*(int *)(param_1 + 0x14c8) * 4) = local_50[0];
          *(int *)(param_1 + 0x14c8) = *(int *)(param_1 + 0x14c8) + 1;
        }
        plVar13 = (long *)*plVar19;
        if (plVar13 != plVar19) {
          if (*(char *)(lVar10 + 0xb4) != '\0') {
            return;
          }
          if ((*(uint *)(lVar11 + 0x18) & 0x300) == 0x100) {
            iVar16 = 0;
            for (; plVar13 != plVar19; plVar13 = (long *)*plVar13) {
              iVar16 = iVar16 + *(int *)((long)plVar13 + 0x43c);
            }
            FUN_1002cea30(param_1,param_2,iVar16,local_50);
          }
          else {
            for (; plVar13 != plVar19; plVar13 = (long *)*plVar13) {
              if (local_50[0] == 0) {
                return;
              }
              if ((*(uint *)(plVar13 + 0x86) <= *(uint *)((long)plVar13 + 0x434)) ||
                 (plVar13[(ulong)*(uint *)((long)plVar13 + 0x434) + 2] != (ulong)local_50[0])) {
                if (DAT_1011c568c < 1) {
                  return;
                }
                FUN_1008e3970("","USB",0,"[EHC] tag mismatch while scan");
                return;
              }
              FUN_1002cebc0(param_1,plVar13,param_2,local_50,&local_54);
            }
          }
        }
        if (local_50[0] != 0) {
          do {
            uVar14 = (ulong)local_50[0];
            if (0x40 < *(int *)(lVar10 + 8)) break;
            puVar12 = (undefined8 *)FUN_1002c8da0(1);
            if (puVar12 == (undefined8 *)0x0) {
              return;
            }
            *(uint *)(puVar12 + 0x89) = uVar15;
            *(uint *)(puVar12 + 0x8a) =
                 (uint)(byte)(&DAT_100b38460)[*(uint *)(*param_2 + 0x18) >> 8 & 3];
            *(uint *)((long)puVar12 + 0x44c) = uVar18;
            puVar12[0x8b] = lVar10;
            *(uint *)(puVar12 + 0x8c) = *(byte *)(lVar10 + 0xcb) & 3;
            uVar20 = *(uint *)(puVar12 + 0x86);
            if ((ulong)uVar20 < 0x84) {
              *(uint *)(puVar12 + 0x86) = uVar20 + 1;
              puVar12[(ulong)uVar20 + 2] = uVar14;
            }
            FUN_1002cee70(param_1,puVar12,param_2,local_50,&local_54);
            if (*(int *)(lVar10 + 0xb8) == 0) {
LAB_1002ce25c:
              FUN_1002c8590(param_1,puVar12);
            }
            else {
              lVar11 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40 +
                                (ulong)*(byte *)(lVar10 + 0xb4) * 8);
              if ((((lVar11 == 0) || (*(int *)(lVar10 + 0x28) != 0)) ||
                  (*(int *)(lVar11 + 0x28) != 0)) ||
                 (*(int *)((long)puVar12 + 0x43c) != *(int *)(lVar10 + 0xb8))) {
                *(undefined4 *)(lVar10 + 0xb8) = 0;
                goto LAB_1002ce25c;
              }
              plVar13 = (long *)FUN_1002c8da0(1);
              plVar13[0x90] = puVar12[0x90];
              *(undefined4 *)(plVar13 + 0x89) = *(undefined4 *)(puVar12 + 0x89);
              *(undefined4 *)(plVar13 + 0x8a) = *(undefined4 *)(puVar12 + 0x8a);
              *(undefined4 *)((long)plVar13 + 0x44c) = *(undefined4 *)((long)puVar12 + 0x44c);
              plVar13[0x8b] = puVar12[0x8b];
              *(undefined4 *)(plVar13 + 0x8c) = *(undefined4 *)(puVar12 + 0x8c);
              *(undefined4 *)((long)plVar13 + 0x43c) = *(undefined4 *)((long)puVar12 + 0x43c);
              if (*(uint *)((long)puVar12 + 0x434) < *(uint *)(puVar12 + 0x86)) {
                lVar11 = puVar12[(ulong)*(uint *)((long)puVar12 + 0x434) + 2];
                uVar20 = *(uint *)(plVar13 + 0x86);
                if ((lVar11 != -1) && (uVar20 < 0x84)) {
                  *(uint *)(plVar13 + 0x86) = uVar20 + 1;
                  plVar13[(ulong)uVar20 + 2] = lVar11;
                }
              }
              if ((long *)*plVar19 == plVar19) {
                plVar8 = *(long **)(param_1 + 0x30);
                *(long *)(param_1 + 0x30) = lVar10 + 0x80;
                *(long *)(lVar10 + 0x80) = param_1 + 0x28;
                *(long **)(lVar10 + 0x88) = plVar8;
                *plVar8 = lVar10 + 0x80;
              }
              *(undefined4 *)((long)plVar13 + 0x454) = *(undefined4 *)((long)plVar13 + 0x43c);
              *(undefined4 *)(plVar13 + 0x8d) = 0;
              *(undefined4 *)((long)plVar13 + 0x464) = 1;
              puVar9 = *(undefined8 **)(lVar10 + 0x20);
              *(long **)(lVar10 + 0x20) = plVar13;
              *plVar13 = (long)plVar19;
              plVar13[1] = (long)puVar9;
              *puVar9 = plVar13;
              *(int *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) + 1;
              *(uint *)(puVar12 + 0x8e) = *(uint *)(puVar12 + 0x8e) | 8;
              if (*(long **)(lVar10 + 0x30) == plVar1) {
                plVar13 = *(long **)(param_1 + 0x20);
                *(long *)(param_1 + 0x20) = lVar10 + 0x70;
                *(long *)(lVar10 + 0x70) = param_1 + 0x18;
                *(long **)(lVar10 + 0x78) = plVar13;
                *plVar13 = lVar10 + 0x70;
              }
              puVar9 = *(undefined8 **)(lVar10 + 0x38);
              *(undefined8 **)(lVar10 + 0x38) = puVar12;
              *puVar12 = plVar1;
              puVar12[1] = puVar9;
              *puVar9 = puVar12;
              *(int *)(lVar10 + 0x40) = *(int *)(lVar10 + 0x40) + 1;
              FUN_1002d7ce0(lVar10,puVar12);
              *(undefined4 *)(lVar10 + 0xb8) = 0;
            }
          } while (local_50[0] != 0);
        }
        if ((long *)*plVar19 == plVar19) {
          return;
        }
        if (*(int *)(*plVar19 + 0x464) == 0) {
          return;
        }
      }
      else {
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[EHC] partial qTD stalled, completing");
        }
        *(uint *)(*param_2 + 0x18) = *(uint *)(*param_2 + 0x18) & 0xffffff7f;
        lVar11 = *param_2;
        uVar20 = *(uint *)(lVar11 + 0xc) & 0xffffffe0;
        if (uVar20 != 0) {
          uVar14 = DAT_1011c5640;
          if (0xb0000000 < DAT_1011c5640) {
            uVar14 = 0xb0000000;
          }
          if (uVar20 < uVar14) {
            local_48 = (undefined4 *)0x0;
            uStack_40 = 0;
            local_38 = 0;
            FUN_10008d2d0(&local_48,(ulong)uVar20,0x20);
            local_48[3] = local_48[3] & 0xfffff000 | *(uint *)(*param_2 + 0x1c) & 0xfff;
            local_48[2] = *(undefined4 *)(*param_2 + 0x18);
            FUN_10008d3f0(&local_48);
            lVar11 = *param_2;
          }
        }
        if ((*(byte *)(lVar11 + 0x19) & 0x80) != 0) {
          *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 2;
        }
        *(undefined8 *)(lVar10 + 0xa8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x14c8) = 0;
    lVar11 = *param_2;
    uVar20 = *(uint *)(lVar11 + 0x18);
    if ((uVar20 & 0x40) != 0) {
      return;
    }
  } while( true );
}

