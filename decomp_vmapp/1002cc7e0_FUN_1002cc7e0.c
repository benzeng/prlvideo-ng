
void FUN_1002cc7e0(long param_1)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar18;
  uint uVar19;
  uint local_114;
  uint *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  long local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulong uVar13;
  ulong uVar17;
  
  if ((*(byte *)(*(long *)(param_1 + 0x40) + 0x1020) & 1) == 0) {
    *(int *)(param_1 + 0x1488) = *(int *)(param_1 + 0x1488) + 1;
  }
  else {
    local_114 = FUN_1002c8970(param_1,1);
    if (local_114 != 0) {
      *(int *)(param_1 + 0x1488) = *(int *)(param_1 + 0x1488) + 1;
    }
    lVar2 = *(long *)(param_1 + 0x40);
    uVar11 = *(uint *)(lVar2 + 0x1020);
    uVar19 = *(uint *)(lVar2 + 0x102c);
    uVar15 = 0x3ff >> ((byte)uVar11 >> 2 & 3);
    uVar14 = uVar19 >> 3;
    uVar12 = *(uint *)(param_1 + 0x1484);
    if (((uVar14 ^ *(uint *)(param_1 + 0x1484)) & 0x7ff) != 0) {
      *(undefined8 *)(param_1 + 0x1478) = 0;
      *(uint *)(param_1 + 0x1484) = uVar14;
      uVar12 = uVar14;
    }
    if ((uVar11 & 0x10) == 0) {
      if (DAT_1011c565c != -1) {
        *(uint *)(param_1 + 0x1484) = uVar12 + local_114;
        uVar11 = (uVar12 + local_114 & 0x7ff) << 3;
        if (uVar11 == (uVar19 & 0xfffffff8)) {
          uVar11 = (uVar11 | uVar19 & 7) + (uint)((uVar19 & 7) != 7);
        }
        uVar12 = 1;
        if (uVar11 != 0) {
          uVar12 = uVar11;
        }
        if ((~uVar15 & (uVar19 ^ uVar12) >> 3 & 0x7ff) != 0) {
          *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 0x20;
        }
        *(uint *)(lVar2 + 0x102c) = uVar12;
      }
    }
    else {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_10008d2d0(&local_48,*(uint *)(lVar2 + 0x1034) & 0xffffffe0,0x1000);
      if (3 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[EHC] Start periodic schedule processing (%8.8X) (FIndex=0x%8.8X)"
                      ,*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x1034),uVar14 & uVar15);
      }
      piVar1 = (int *)(param_1 + 0x474);
      *(undefined4 *)(param_1 + 0x474) = 0;
      uVar11 = 0;
      do {
        uVar12 = uVar11 + (uVar14 & uVar15) & uVar15;
        uVar13 = (ulong)uVar12;
        uVar19 = *(uint *)(local_48 + uVar13 * 4);
        iVar18 = -1;
        bVar5 = false;
        while ((uVar19 & 1) == 0) {
          uVar16 = uVar19 & 0xffffffe0;
          uVar17 = (ulong)uVar16;
          uVar9 = 0;
          if (uVar16 == 0) {
LAB_1002ccbe3:
            if (0 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"[EHC] invalid link %08x",uVar9);
            }
            break;
          }
          uVar10 = DAT_1011c5640;
          if (0xb0000000 < DAT_1011c5640) {
            uVar10 = 0xb0000000;
          }
          uVar9 = uVar16;
          if (uVar10 <= uVar17) goto LAB_1002ccbe3;
          iVar18 = iVar18 + 1;
          if (0x7f < iVar18) {
            if (0 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"[EHC] too many elements in periodic schedule",0);
            }
            break;
          }
          uVar19 = uVar19 >> 1 & 3;
          if (uVar19 == 0) {
            local_68 = 0;
            uStack_60 = 0;
            local_58 = 0;
            FUN_10008d2d0(&local_68,uVar17,0x40);
            if (((((*(int *)(local_68 + 4) < 0) || (*(int *)(local_68 + 8) < 0)) ||
                 (*(int *)(local_68 + 0xc) < 0)) ||
                ((*(int *)(local_68 + 0x10) < 0 || (*(int *)(local_68 + 0x14) < 0)))) ||
               ((*(int *)(local_68 + 0x18) < 0 ||
                ((*(int *)(local_68 + 0x1c) < 0 || (*(int *)(local_68 + 0x20) < 0)))))) {
              if ((*(byte *)(local_68 + 0x29) & 8) == 0) {
                FUN_1002ccff0(param_1,&local_68,uVar13);
              }
              else {
                iVar8 = FUN_1002cd2e0(param_1,&local_68,uVar13);
                if (iVar8 == 0) {
                  bVar5 = true;
                }
              }
            }
            FUN_10008d3f0(&local_68);
          }
          else {
            cVar7 = FUN_1002c78a0(piVar1,uVar17);
            if (cVar7 != '\0') break;
            if ((long)*piVar1 < 0x400) {
              *(uint *)(param_1 + 0x478 + (long)*piVar1 * 4) = uVar16;
              *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + 1;
            }
            if (uVar19 == 1) {
              local_88 = 0;
              uStack_80 = 0;
              local_78 = 0;
              FUN_10008d2d0(&local_88,uVar17,0x30);
              FUN_1002cd920(param_1,&local_88);
              FUN_10008d3f0(&local_88);
            }
            else if (0 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"[EHC] Not supported QH type 0x%x",uVar19);
            }
          }
          local_a8 = (uint *)0x0;
          uStack_a0 = 0;
          local_98 = 0;
          FUN_10008d2d0(&local_a8,uVar17,4);
          uVar19 = *local_a8;
          FUN_10008d3f0(&local_a8);
        }
        uVar19 = FUN_1002c8970(param_1,0);
        if (uVar19 < local_114) {
          uVar19 = local_114;
        }
        if ((bVar5) || (uVar19 == 0)) break;
        uVar9 = *(int *)(param_1 + 0x1484) + 1;
        *(uint *)(param_1 + 0x1484) = uVar9;
        if (uVar15 < uVar12 + 1) {
          *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 0x20;
        }
        *(uint *)(*(long *)(param_1 + 0x40) + 0x102c) = (uVar9 & 0x7ff) * 8 + 1;
        plVar3 = *(long **)(param_1 + 8);
        while (plVar6 = plVar3, plVar6 != (long *)(param_1 + 8)) {
          plVar3 = (long *)*plVar6;
          iVar18 = FUN_1002caf10(param_1);
          if (iVar18 != 0) {
            lVar2 = *plVar6;
            plVar4 = (long *)plVar6[1];
            *(long **)(lVar2 + 8) = plVar4;
            *plVar4 = lVar2;
            *plVar6 = (long)plVar6;
            plVar6[1] = (long)plVar6;
          }
        }
        if (uVar19 == 1) break;
        uVar11 = uVar11 + 1;
        local_114 = 0;
      } while (uVar11 < 5);
      uVar11 = *(uint *)(*(long *)(param_1 + 0x40) + 0x102c) >> 3 & uVar15;
      uVar19 = 0;
      do {
        uVar13 = (ulong)((uVar12 == uVar11) + uVar11 + uVar19 & uVar15);
        uVar14 = *(uint *)(local_48 + uVar13 * 4);
        iVar18 = -1;
        while ((uVar14 & 1) == 0) {
          uVar16 = uVar14 & 0xffffffe0;
          uVar17 = (ulong)uVar16;
          uVar9 = 0;
          if (uVar16 == 0) {
LAB_1002ccef3:
            if (0 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"[EHC] invalid link %08x (forward)",uVar9);
            }
            break;
          }
          uVar10 = DAT_1011c5640;
          if (0xb0000000 < DAT_1011c5640) {
            uVar10 = 0xb0000000;
          }
          uVar9 = uVar16;
          if (uVar10 <= uVar17) goto LAB_1002ccef3;
          iVar18 = iVar18 + 1;
          if (0x7f < iVar18) {
            if (0 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"[EHC] too many elements in periodic schedule (forward)",0);
            }
            break;
          }
          if ((uVar14 & 6) == 0) {
            local_c8 = 0;
            uStack_c0 = 0;
            local_b8 = 0;
            FUN_10008d2d0(&local_c8,uVar17,0x40);
            if (((*(byte *)(local_c8 + 0x29) & 8) != 0) &&
               ((((*(int *)(local_c8 + 4) < 0 || (*(int *)(local_c8 + 8) < 0)) ||
                 (*(int *)(local_c8 + 0xc) < 0)) ||
                (((*(int *)(local_c8 + 0x10) < 0 || (*(int *)(local_c8 + 0x14) < 0)) ||
                 ((*(int *)(local_c8 + 0x18) < 0 ||
                  ((*(int *)(local_c8 + 0x1c) < 0 || (*(int *)(local_c8 + 0x20) < 0)))))))))) {
              FUN_1002ce350(param_1,&local_c8,uVar13);
            }
            FUN_10008d3f0(&local_c8);
          }
          else {
            cVar7 = FUN_1002c78a0(piVar1,uVar17);
            if (cVar7 != '\0') break;
            if ((long)*piVar1 < 0x400) {
              *(uint *)(param_1 + 0x478 + (long)*piVar1 * 4) = uVar16;
              *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + 1;
            }
          }
          local_e8 = (uint *)0x0;
          uStack_e0 = 0;
          local_d8 = 0;
          FUN_10008d2d0(&local_e8,uVar17,4);
          uVar14 = *local_e8;
          FUN_10008d3f0(&local_e8);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < 8);
      uVar11 = *(uint *)(*(long *)(param_1 + 0x40) + 0x102c);
      if ((uVar11 & 7) != 7) {
        *(uint *)(*(long *)(param_1 + 0x40) + 0x102c) = uVar11 + 1;
      }
      FUN_10008d3f0(&local_48);
    }
  }
  return;
}

