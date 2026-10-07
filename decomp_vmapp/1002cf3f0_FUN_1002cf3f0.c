
void FUN_1002cf3f0(long param_1,long *param_2,long param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  bool bVar21;
  uint local_990;
  long local_978;
  undefined8 uStack_970;
  undefined4 local_968;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar6 = *(long *)(param_3 + 0x458);
  uVar3 = *(uint *)(param_3 + 0x440);
  uVar4 = *(uint *)(param_3 + 0x454);
  if ((((*(int *)(param_3 + 0x460) == 0) && (uVar4 != 0)) && (uVar3 == 0)) &&
     (*(int *)(param_3 + 0x450) == 0x69)) {
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] Control Response %u",lVar6 + 0xcf,uVar4);
      if (0 < DAT_1011c568c) {
        uVar15 = 0x400;
        if (*(uint *)(param_3 + 0x454) < 0x400) {
          uVar15 = *(uint *)(param_3 + 0x454);
        }
        FUN_1002da020(&local_978,0x940,param_3 + 0x4d8,uVar15);
        FUN_1008e3970("","USB",0,"[%s] Control Response:%s",lVar6 + 0xcf,&local_978);
        goto LAB_1002cf528;
      }
    }
  }
  else {
LAB_1002cf528:
    if (1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] Complete_QH %p %u@%u of %u %d",lVar6 + 0xcf,param_3,
                    *(undefined4 *)(param_3 + 0x454),*(undefined4 *)(param_3 + 0x440),
                    *(undefined4 *)(param_3 + 0x43c),*(undefined4 *)(param_3 + 0x468));
    }
  }
  lVar12 = *param_2;
  uVar15 = *(uint *)(lVar12 + 0x18);
  uVar10 = *(uint *)(lVar12 + 0x1c);
  local_990 = uVar10 & 0xfff;
  uVar2 = *(ushort *)(lVar12 + 6);
  uVar18 = uVar2 & 0x7ff;
  uVar9 = uVar15 >> 0x10 & 0x7fff;
  uVar16 = *(int *)(param_3 + 0x454) - *(int *)(param_3 + 0x440);
  if (uVar9 < uVar16) {
    uVar16 = uVar9;
  }
  if ((*(int *)(param_3 + 0x450) == 0x69) && (uVar16 != 0)) {
    uVar20 = 0;
    if ((uVar15 >> 0xc & 7) < 5) {
      uVar19 = (ulong)(uVar15 >> 0xc) & 7;
      uVar20 = 0;
      uVar14 = local_990;
      do {
        uVar17 = 0x1000 - uVar14;
        if (uVar16 - uVar20 < 0x1000 - uVar14) {
          uVar17 = uVar16 - uVar20;
        }
        if ((uVar17 != 0) &&
           (uVar14 = *(uint *)(lVar12 + 0x1c + uVar19 * 4) & 0xfffff000 | uVar14, uVar14 != 0)) {
          FUN_10008c9b0(DAT_1011c3688,uVar14,
                        param_3 + 0x4d8 + (ulong)uVar20 + (ulong)*(uint *)(param_3 + 0x440),uVar17);
        }
        uVar20 = uVar20 + uVar17;
        if (4 < (int)uVar19 + 1U) break;
        uVar19 = uVar19 + 1;
        uVar14 = 0;
      } while (uVar20 < uVar16);
      if ((uVar16 <= uVar20) && ((*(uint *)(lVar12 + 0x18) & 0x7fff0000) < 0x50000001))
      goto LAB_1002cf76f;
    }
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,
                    "[EHC] invalid USB qTD descriptor fixup2. Too much BytesToTransfer %u/%u",uVar20
                    ,uVar16);
    }
  }
LAB_1002cf76f:
  *(int *)(param_3 + 0x440) = *(int *)(param_3 + 0x440) + uVar16;
  *(uint *)(*param_2 + 0x1c) = *(uint *)(*param_2 + 0x1c) & 0xfffff000 | uVar10 + uVar16 & 0xfff;
  *(uint *)(*param_2 + 0x18) =
       *(uint *)(*param_2 + 0x18) & 0xffff8fff | (local_990 | uVar15 & 0x7000) + uVar16 & 0x7000;
  *(uint *)(*param_2 + 0x18) =
       *(uint *)(*param_2 + 0x18) & 0x8000ffff | ((uVar15 >> 0x10) - uVar16 & 0x7fff) << 0x10;
  uVar10 = 1;
  if (((uVar2 & 0x7ff) != 0) && (uVar16 != 0)) {
    uVar10 = uVar16 / uVar18;
  }
  *(uint *)(*param_2 + 0x18) =
       *(uint *)(*param_2 + 0x18) & 0x7fffffff | uVar10 * -0x80000000 + uVar15 & 0x80000000;
  if (*(int *)(param_3 + 0x468) == 0) {
    if (uVar9 == uVar16) {
      if ((*(uint *)(param_3 + 0x440) < *(uint *)(param_3 + 0x454)) &&
         (bVar21 = false, *(uint *)(param_3 + 0x440) % uVar18 != 0)) {
        *(uint *)(*param_2 + 0x18) = *(uint *)(*param_2 + 0x18) | 0x40;
        uVar15 = *(uint *)(*param_2 + 0x18);
        uVar10 = 0x20;
        if ((uVar15 & 0x300) == 0x100) {
          uVar10 = 0x10;
        }
        *(uint *)(*param_2 + 0x18) = uVar10 | uVar15;
        *(undefined4 *)(param_3 + 0x468) = 8;
        bVar8 = true;
      }
      else {
        lVar12 = *param_2;
        bVar8 = false;
        if ((*(uint *)(lVar12 + 0x18) & 0x300) != 0x100) {
          *(undefined8 *)(param_3 + 0x430) = 0;
          uVar15 = *(uint *)(lVar12 + 0x10);
          *(undefined4 *)(param_3 + 0x430) = 1;
          *(ulong *)(param_3 + 0x10) = (ulong)uVar15;
        }
        bVar21 = false;
      }
      goto LAB_1002cfa58;
    }
    bVar21 = false;
    bVar8 = true;
    if ((*(int *)(param_3 + 0x454) != *(int *)(param_3 + 0x43c)) ||
       (bVar21 = false, *(uint *)(param_3 + 0x440) % uVar18 != 0)) goto LAB_1002cfa58;
    uVar11 = FUN_1007d87f0();
    *(undefined8 *)(lVar6 + 0xa8) = uVar11;
    uVar15 = *(uint *)(*param_2 + 0xc) & 0xffffffe0;
    if (uVar15 != 0) {
      uVar19 = DAT_1011c5640;
      if (0xb0000000 < DAT_1011c5640) {
        uVar19 = 0xb0000000;
      }
      if (uVar15 < uVar19) {
        local_978 = 0;
        uStack_970 = 0;
        local_968 = 0;
        FUN_10008d2d0(&local_978,(ulong)uVar15,0x20);
        *(uint *)(local_978 + 0xc) =
             *(uint *)(local_978 + 0xc) & 0xfffff000 | *(uint *)(*param_2 + 0x1c) & 0xfff;
        *(undefined4 *)(local_978 + 8) = *(undefined4 *)(*param_2 + 0x18);
        FUN_10008d3f0(&local_978);
      }
    }
    bVar8 = true;
    bVar21 = false;
  }
  else {
    *(uint *)(*param_2 + 0x18) = *(uint *)(*param_2 + 0x18) | 0x40;
    switch(*(undefined4 *)(param_3 + 0x468)) {
    case 4:
    case 6:
    case 10:
    case 0xb:
      *(uint *)(*param_2 + 0x18) = *(uint *)(*param_2 + 0x18) | 0x20;
      break;
    case 7:
      if (*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) != 0) {
        *(undefined4 *)(lVar6 + 0xbc) = 1;
      }
      break;
    case 8:
      *(uint *)(*param_2 + 0x18) = *(uint *)(*param_2 + 0x18) | 0x10;
      break;
    case 9:
      *(uint *)(*param_2 + 0x18) = *(uint *)(*param_2 + 0x18) & 0xfffff3ff;
    }
    bVar21 = (*(uint *)(*param_2 + 0x18) & 0x300) == 0x100;
    bVar8 = true;
LAB_1002cfa58:
    *(uint *)(*param_2 + 0x18) = *(uint *)(*param_2 + 0x18) & 0xffffff7f;
    lVar12 = *param_2;
    uVar15 = *(uint *)(lVar12 + 0xc) & 0xffffffe0;
    if (uVar15 != 0) {
      uVar19 = DAT_1011c5640;
      if (0xb0000000 < DAT_1011c5640) {
        uVar19 = 0xb0000000;
      }
      if (uVar15 < uVar19) {
        local_978 = 0;
        uStack_970 = 0;
        local_968 = 0;
        FUN_10008d2d0(&local_978,(ulong)uVar15,0x20);
        *(uint *)(local_978 + 0xc) =
             *(uint *)(local_978 + 0xc) & 0xfffff000 | *(uint *)(*param_2 + 0x1c) & 0xfff;
        *(undefined4 *)(local_978 + 8) = *(undefined4 *)(*param_2 + 0x18);
        FUN_10008d3f0(&local_978);
        lVar12 = *param_2;
      }
    }
    if ((*(byte *)(lVar12 + 0x19) & 0x80) != 0) {
      *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 2;
    }
  }
  iVar5 = *(int *)(param_3 + 0x468);
  if (iVar5 == 0) {
    if (((*(uint *)(*param_2 + 0x18) & 0x300) == 0x100) && ((uVar16 == 0 || (uVar16 % uVar18 != 0)))
       ) {
      *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 4;
      bVar8 = true;
    }
  }
  else {
    *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 8;
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] EHC ERROR %u/0x%x %u",lVar6 + 0xcf,iVar5,
                    *(undefined4 *)(param_3 + 0x46c),uVar16);
    }
  }
  if ((((((*(int *)(param_3 + 0x454) == 0x1f) && (*(int *)(param_3 + 0x450) == 0xe1)) &&
        ((ulong)*(byte *)(lVar6 + 0xb4) != 0)) &&
       ((*(int *)(param_3 + 0x43c) == 0x1f && (*(int *)(param_3 + 0x440) == 0x1f)))) &&
      (*(int *)(param_3 + 0x468) == 0)) &&
     ((*(char *)(lVar6 + 0xff) == '\b' &&
      (lVar12 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x40 + (ulong)*(byte *)(lVar6 + 0xb4) * 8),
      lVar12 != 0)))) {
    if (((*(int *)(param_3 + 0x4d8) == 0x43425355) &&
        (((*(char *)(param_3 + 0x4e4) < '\0' && (uVar15 = *(uint *)(param_3 + 0x4e0), uVar15 != 0))
         && ((uVar15 & 0x1ff) == 0)))) &&
       (((cVar1 = *(char *)(param_3 + 0x4e7), cVar1 == -0x58 || (cVar1 == '\b')) || (cVar1 == '(')))
       ) {
      uVar10 = 0;
      for (puVar7 = *(undefined8 **)(lVar12 + 0x18); puVar7 != (undefined8 *)(lVar12 + 0x18);
          puVar7 = (undefined8 *)*puVar7) {
        uVar10 = uVar10 + *(int *)((long)puVar7 + 0x43c);
      }
      if (uVar10 < uVar15) {
        do {
          lVar13 = FUN_1002c8da0(1);
          if (lVar13 == 0) break;
          *(undefined4 *)(lVar13 + 0x448) = *(undefined4 *)(param_3 + 0x448);
          *(undefined4 *)(lVar13 + 0x450) = 0x69;
          *(uint *)(lVar13 + 0x44c) = (uint)*(byte *)(lVar6 + 0xb4);
          *(long *)(lVar13 + 0x458) = lVar12;
          *(uint *)(lVar13 + 0x460) = *(byte *)(lVar12 + 0xcb) & 3;
          uVar15 = *(int *)(param_3 + 0x4e0) - uVar10;
          if (*(uint *)(lVar13 + 0x438) < uVar15) {
            uVar15 = *(uint *)(lVar13 + 0x438);
          }
          *(uint *)(lVar13 + 0x43c) = uVar15;
          FUN_1002c8590(param_1,lVar13);
          uVar10 = uVar10 + *(int *)(lVar13 + 0x43c);
        } while (uVar10 < *(uint *)(param_3 + 0x4e0));
      }
      lVar13 = FUN_1002c8da0(1);
      if (lVar13 != 0) {
        *(undefined8 *)(lVar13 + 0x480) = 0;
        *(undefined4 *)(lVar13 + 0x448) = *(undefined4 *)(param_3 + 0x448);
        *(undefined4 *)(lVar13 + 0x450) = 0x69;
        *(uint *)(lVar13 + 0x44c) = (uint)*(byte *)(lVar6 + 0xb4);
        *(long *)(lVar13 + 0x458) = lVar12;
        *(uint *)(lVar13 + 0x460) = *(byte *)(lVar12 + 0xcb) & 3;
        *(undefined4 *)(lVar13 + 0x43c) = 0x200;
        FUN_1002c8590(param_1,lVar13);
      }
      *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(param_1 + 0x1488);
    }
    else if ((((*(long *)(lVar12 + 0x18) == lVar12 + 0x18) &&
              (*(int *)(param_3 + 0x4d8) == 0x43425355)) &&
             ((-1 < *(char *)(param_3 + 0x4e4) &&
              ((uVar15 = *(uint *)(param_3 + 0x4e0), uVar15 != 0 && ((uVar15 & 0x1ff) == 0)))))) &&
            (((cVar1 = *(char *)(param_3 + 0x4e7), cVar1 == -0x56 ||
              ((cVar1 == '\n' || (cVar1 == '*')))) && ((*(byte *)(lVar6 + 0x91) & 1) != 0)))) {
      *(uint *)(lVar6 + 0xb8) = uVar15;
    }
  }
  if (!bVar8) {
    if (*(uint *)(param_3 + 0x440) < *(uint *)(param_3 + 0x454)) goto LAB_1002cff2a;
    if (((uVar3 < uVar4) && ((*(uint *)(*param_2 + 0x18) & 0x300) == 0x100)) &&
       (*(uint *)(param_3 + 0x454) < *(uint *)(param_3 + 0x43c))) {
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] insert zero frame",lVar6 + 0xcf);
      }
      goto LAB_1002cff2a;
    }
  }
  FUN_1002c8620(param_1,lVar6);
  FUN_1002c8930(param_3);
LAB_1002cff2a:
  if ((bVar21) && (*(long *)(lVar6 + 0x18) != lVar6 + 0x18)) {
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] clear queue %d",lVar6 + 0xcf,*(undefined4 *)(lVar6 + 0x28));
    }
    FUN_1002d94a0(lVar6);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

