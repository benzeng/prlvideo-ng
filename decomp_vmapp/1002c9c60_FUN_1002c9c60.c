
undefined4 FUN_1002c9c60(long param_1)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint *local_c8;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  uint *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_10008d2d0(&local_48,*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x2008),0x1000);
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x40) + 0x2006);
  *(undefined4 *)(param_1 + 0x474) = 0;
  if (((*(uint *)(param_1 + 0x1484) ^ (uint)uVar1) & 0x7ff) != 0) {
    *(undefined8 *)(param_1 + 0x1478) = 0;
    *(uint *)(param_1 + 0x1484) = uVar1 & 0x7ff;
    *(undefined4 *)(param_1 + 0x48) = 0xffff;
  }
  local_c8 = (uint *)(param_1 + 0x48);
  iVar17 = 0;
  do {
    uVar15 = iVar17 + (uint)uVar1 & 0x3ff;
    uVar10 = 0;
    bVar4 = false;
    if (uVar15 != *local_c8) {
      if (3 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[UHC] ProcessFrame, fr %04X",uVar15);
      }
      uVar19 = *(uint *)(local_48 + (ulong)uVar15 * 4);
      *local_c8 = uVar15;
      uVar10 = 0;
      iVar16 = -1;
      bVar4 = false;
      while ((uVar19 & 3) == 0) {
        uVar19 = uVar19 & 0xfffffff0;
        uVar7 = 0;
        if (uVar19 == 0) {
LAB_1002c9f80:
          if (0 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[UHC] Invalid TD link %x",uVar7);
          }
          goto LAB_1002ca160;
        }
        uVar12 = DAT_1011c5640;
        if (0xb0000000 < DAT_1011c5640) {
          uVar12 = 0xb0000000;
        }
        uVar7 = uVar19;
        if (uVar12 <= uVar19) goto LAB_1002c9f80;
        iVar16 = iVar16 + 1;
        if (0x7f < iVar16) {
          if (0 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[UHC] too long TD list",uVar19);
          }
          goto LAB_1002ca160;
        }
        local_68 = (uint *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        FUN_10008d2d0(&local_68,(ulong)uVar19,0x20);
        uVar19 = *local_68;
        uVar7 = local_68[1];
        if ((uVar7 & 0x800000) == 0) {
          uVar10 = uVar7 >> 0x18 & 1;
        }
        else if ((uVar7 & 0x2000000) == 0) {
          if (0 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[UHC] BADNESS !IOS as bare TD");
            uVar7 = local_68[1];
          }
          local_68[1] = uVar7 | 0x7ff;
          local_68[1] = local_68[1] | 0x400000;
          uVar7 = *(uint *)(param_1 + 0x470);
          if ((*(byte *)((long)local_68 + 7) & 1) != 0) {
            uVar7 = uVar7 | 4;
            *(uint *)(param_1 + 0x470) = uVar7;
          }
          *(uint *)(param_1 + 0x470) = uVar7 | 0x10;
          local_68[1] = local_68[1] & 0xff7fffff;
        }
        else {
          *(undefined4 *)(param_1 + 0x148c) = *(undefined4 *)(param_1 + 0x1488);
          if ((char)local_68[2] == 'i') {
            iVar8 = FUN_1002ca810(param_1,&local_68,uVar15);
            if (iVar8 == 0) {
              bVar4 = true;
            }
          }
          else if ((char)local_68[2] == -0x1f) {
            FUN_1002ca4d0(param_1,&local_68,uVar15);
          }
          else if (0 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[UHC] BADNESS ISO frame with PID=%02x?");
          }
        }
        FUN_10008d3f0(&local_68);
      }
      while ((uVar19 & 3) == 2) {
        uVar18 = uVar19 & 0xfffffff0;
        uVar7 = 0;
        if (uVar18 == 0) {
LAB_1002ca10e:
          if (0 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[UHC] Invalid QH link %x",uVar7);
          }
          break;
        }
        uVar12 = DAT_1011c5640;
        if (0xb0000000 < DAT_1011c5640) {
          uVar12 = 0xb0000000;
        }
        uVar7 = uVar18;
        if (uVar12 <= uVar18) goto LAB_1002ca10e;
        cVar6 = FUN_1002c78a0((int *)(param_1 + 0x474),uVar19);
        if (cVar6 != '\0') break;
        lVar13 = (long)*(int *)(param_1 + 0x474);
        if (lVar13 < 0x400) {
          *(uint *)(param_1 + 0x478 + lVar13 * 4) = uVar19;
          *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + 1;
        }
        local_88 = (uint *)0x0;
        uStack_80 = 0;
        local_78 = 0;
        FUN_10008d2d0(&local_88,(ulong)uVar18,0x20);
        uVar19 = local_88[1];
        if ((uVar19 & 1) == 0) {
          if ((uVar19 & 2) == 0) {
            if ((uVar19 & 0xfffffff0) != 0) {
              uVar12 = DAT_1011c5640;
              if (0xb0000000 < DAT_1011c5640) {
                uVar12 = 0xb0000000;
              }
              if ((uVar19 & 0xfffffff0) < uVar12) {
                FUN_1002cab80(param_1,&local_88);
              }
            }
            goto LAB_1002ca0b0;
          }
        }
        else {
LAB_1002ca0b0:
          uVar19 = *local_88;
        }
        FUN_10008d3f0(&local_88);
      }
    }
LAB_1002ca160:
    iVar16 = FUN_1002c8970(param_1,0);
    if (iVar16 == 0) break;
    iVar8 = *(int *)(param_1 + 0x1488) + 1;
    *(int *)(param_1 + 0x1488) = iVar8;
    if (bVar4) break;
    iVar9 = *(int *)(param_1 + 0x1484) + 1;
    *(int *)(param_1 + 0x1484) = iVar9;
    *(ushort *)(*(long *)(param_1 + 0x40) + 0x2006) = (ushort)iVar9 & 0x7ff;
    if (uVar10 != 0) {
      if (2 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%8d][%08x] IOC on Inactive TD",iVar8,uVar15);
      }
      *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 4;
    }
    plVar2 = *(long **)(param_1 + 8);
    while (plVar5 = plVar2, plVar5 != (long *)(param_1 + 8)) {
      plVar2 = (long *)*plVar5;
      iVar8 = FUN_1002caf10();
      if (iVar8 != 0) {
        lVar13 = *plVar5;
        plVar3 = (long *)plVar5[1];
        *(long **)(lVar13 + 8) = plVar3;
        *plVar3 = lVar13;
        *plVar5 = (long)plVar5;
        plVar5[1] = (long)plVar5;
      }
    }
    iVar17 = iVar17 + 1;
  } while (iVar16 != 1);
  uVar10 = (uint)*(ushort *)(*(long *)(param_1 + 0x40) + 0x2006);
  uVar19 = 0;
  do {
    uVar12 = (ulong)((uVar15 == (uVar10 & 0x3ff)) + uVar10 + uVar19 & 0x3ff);
    uVar7 = *(uint *)(local_48 + uVar12 * 4);
    iVar17 = -1;
    while ((uVar7 & 3) == 0) {
      uVar7 = uVar7 & 0xfffffff0;
      uVar18 = 0;
      if (uVar7 == 0) {
LAB_1002ca380:
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[UHC] Invalid TD link %x (forward)",uVar18);
        }
        break;
      }
      uVar14 = DAT_1011c5640;
      if (0xb0000000 < DAT_1011c5640) {
        uVar14 = 0xb0000000;
      }
      uVar18 = uVar7;
      if (uVar14 <= uVar7) goto LAB_1002ca380;
      iVar17 = iVar17 + 1;
      if (0x7f < iVar17) {
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[UHC] too long TD list (forward)",uVar7);
        }
        break;
      }
      local_a8 = (uint *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      FUN_10008d2d0(&local_a8,(ulong)uVar7,0x20);
      uVar7 = *local_a8;
      if (((local_a8[1] & 0x2800000) == 0x2800000) &&
         (*(undefined4 *)(param_1 + 0x148c) = *(undefined4 *)(param_1 + 0x1488),
         (char)local_a8[2] == 'i')) {
        FUN_1002cb140(param_1,&local_a8,uVar12);
      }
      FUN_10008d3f0(&local_a8);
    }
    uVar19 = uVar19 + 1;
    if (7 < uVar19) {
      uVar11 = FUN_1002c8690(param_1);
      FUN_10008d3f0(&local_48);
      return uVar11;
    }
  } while( true );
}

