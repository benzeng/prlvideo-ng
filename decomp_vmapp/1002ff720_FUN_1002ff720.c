
undefined4 FUN_1002ff720(long param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  short *psVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined8 uStack_70;
  undefined2 auStack_68 [4];
  long local_60;
  long local_58;
  long local_50;
  undefined1 *local_48;
  void *local_40;
  long local_38;
  
  puVar18 = auStack_68;
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0xf0);
  *plVar1 = *plVar1 + 1;
  uVar7 = 0;
  puVar17 = auStack_68;
  local_38 = lVar9;
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0x8130:
    uVar7 = 0xf0000003;
    puVar17 = auStack_68;
    if (3 < *(ushort *)(param_2 + 0x14)) {
      uStack_70 = 0x1002ff8a3;
      psVar10 = (short *)FUN_1002a6010(param_2);
      uVar7 = 0;
      puVar17 = auStack_68;
      if (*psVar10 != 3) {
        uVar7 = 0xf000001f;
        puVar17 = auStack_68;
      }
    }
    break;
  default:
    uVar7 = 0xf0000002;
    puVar17 = auStack_68;
    break;
  case 0x8133:
    uVar7 = 0xf0000003;
    puVar17 = auStack_68;
    if (*(ushort *)(param_2 + 0x14) < 0x80) break;
    uStack_70 = 0x1002ff8db;
    lVar9 = FUN_1002a6010(param_2);
    uStack_70 = 0x1002ff8e7;
    uVar7 = FUN_1002adb60(*(undefined8 *)(param_1 + 0x10));
    local_40 = (void *)CONCAT44(local_40._4_4_,uVar7);
    uStack_70 = 0x1002ff8f4;
    pvVar13 = operator_new(0xa6b0);
    uStack_70 = 0x1002ff90c;
    FUN_10030ba70(pvVar13,*(undefined8 *)(param_1 + 0x10),lVar9 + 8,0x3c);
    *(undefined4 *)(lVar9 + 4) = *(undefined4 *)((long)pvVar13 + 0xa6a8);
    puVar18 = auStack_68;
    if (*(short *)(param_2 + 0x16) != 0) {
      uStack_70 = 0x1002ff92f;
      lVar9 = FUN_1002a6120(param_2,0,0);
      puVar18 = auStack_68;
      if (lVar9 != 0) {
        uVar5 = *(uint *)(lVar9 + 8);
        uVar14 = uVar5 >> 1;
        uVar15 = (ulong)uVar14;
        lVar11 = -((ulong)(uVar14 + 1) * 2 + 0xf & 0xfffffffffffffff0);
        puVar18 = (undefined2 *)((long)auStack_68 + lVar11);
        local_48 = (undefined1 *)puVar18;
        *(undefined2 *)((long)puVar18 + uVar15 * 2) = 0;
        *(undefined8 *)((long)auStack_68 + lVar11 + -8) = 0x1002ff971;
        uVar6 = FUN_1002a5990(lVar9,0,puVar18,uVar15 * 2);
        if ((uVar14 != 0) && ((ulong)uVar6 == uVar15 * 2)) {
          puVar19 = local_48;
          if (uVar15 != 1) {
            lVar9 = (ulong)(uVar5 & 0xfffffffe) - 2;
            do {
              if ((*(short *)(local_48 + lVar9) == 0x2f) || (*(short *)(local_48 + lVar9) == 0x5c))
              {
                puVar19 = local_48 + lVar9 + 2;
                break;
              }
              lVar9 = lVar9 + -2;
            } while (lVar9 != 0);
          }
          lVar9 = 0;
          if (puVar19 < local_48 + uVar15 * 2) {
            lVar11 = 0;
            do {
              uVar2 = *(ushort *)(puVar19 + lVar9 * 2);
              uVar5 = (uint)uVar2;
              if ((ushort)(uVar2 - 0x41) < 0x1a) {
                uVar5 = uVar2 >> 1 & 0x20 | (uint)uVar2;
              }
              if (uVar5 - 0x61 < 0x1a) {
                iVar8 = -0xd;
                if (uVar5 < 0x6e) {
                  iVar8 = 0xd;
                }
                uVar5 = iVar8 + uVar5;
              }
              if (uVar5 != (int)"pbzcvm"[lVar9]) {
                lVar9 = 0;
                goto LAB_1002ffd2d;
              }
              lVar9 = lVar9 + 1;
            } while (uVar5 != 0 || uVar2 != 0);
            *(byte *)((long)pvVar13 + 0x2630) = *(byte *)((long)pvVar13 + 0x2630) | 2;
          }
        }
      }
    }
    goto LAB_1002ffdce;
  case 0x8134:
    uVar7 = 0xf0000003;
    puVar17 = auStack_68;
    if (*(ushort *)(param_2 + 0x14) < 8) break;
    uStack_70 = 0x1002ff9e1;
    lVar11 = FUN_1002a6010(param_2);
    uVar5 = *(int *)(lVar11 + 4) - DAT_1011c80f0;
    puVar17 = auStack_68;
    if ((DAT_1011c8100 <= uVar5) ||
       (pvVar13 = *(void **)(DAT_1011c80f8 + (ulong)uVar5 * 8), puVar17 = auStack_68,
       pvVar13 == (void *)0x0)) break;
    uStack_70 = 0x1002ffa17;
    FUN_10030bd20(pvVar13);
    goto LAB_1002ffab5;
  case 0x8135:
  case 0x8136:
    uVar7 = 0xf0000003;
    puVar17 = auStack_68;
    if (0xf < *(ushort *)(param_2 + 0x14)) {
      uStack_70 = 0x1002ff78d;
      lVar12 = FUN_1002a6010(param_2);
      uVar5 = *(int *)(lVar12 + 4) - DAT_1011c80f0;
      lVar11 = 0;
      if (uVar5 < DAT_1011c8100) {
        lVar11 = *(long *)(DAT_1011c80f8 + (ulong)uVar5 * 8);
      }
      uVar5 = *(int *)(lVar12 + 8) - DAT_1011c80f0;
      puVar17 = auStack_68;
      if (((uVar5 < DAT_1011c8100) && (puVar17 = auStack_68, lVar11 != 0)) &&
         (lVar16 = *(long *)(DAT_1011c80f8 + (ulong)uVar5 * 8), puVar17 = auStack_68, lVar16 != 0))
      {
        if (*(int *)(param_2 + 8) == 0x8135) {
          uStack_70 = 0x1002ff7e6;
          cVar4 = FUN_100310ff0(lVar16,lVar11,*(undefined4 *)(lVar12 + 0xc));
        }
        else {
          uStack_70 = 0x1002ffc88;
          cVar4 = FUN_100311010();
        }
        puVar17 = auStack_68;
        if (cVar4 != '\0') {
          uVar7 = 0;
          puVar17 = auStack_68;
        }
      }
    }
    break;
  case 0x8137:
  case 0x813b:
    uVar7 = 0xf0000003;
    puVar17 = auStack_68;
    if (*(ushort *)(param_2 + 0x14) < 0x80) break;
    uStack_70 = 0x1002ff827;
    lVar9 = FUN_1002a6010(param_2);
    if (*(int *)(param_2 + 8) == 0x813b) {
      uVar5 = *(int *)(lVar9 + 4) - DAT_1011c80d8;
      if (uVar5 < DAT_1011c80e8) {
        lVar11 = *(long *)(DAT_1011c80e0 + (ulong)uVar5 * 8);
        if (lVar11 == 0) {
          lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
          puVar17 = auStack_68;
        }
        else {
          uStack_70 = 0x1002ff878;
          FUN_10030b0f0(lVar11,lVar9 + 8,0x3c);
          lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
          puVar17 = auStack_68;
        }
      }
      else {
        lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
        puVar17 = auStack_68;
      }
      break;
    }
    uStack_70 = 0x1002ffc4c;
    pvVar13 = operator_new(0x68);
    uStack_70 = 0x1002ffc67;
    FUN_10030b400(pvVar13,*(undefined8 *)(param_1 + 0x10),lVar9 + 8,0x3c);
    *(undefined4 *)(lVar9 + 4) = *(undefined4 *)((long)pvVar13 + 100);
    goto LAB_1002ffe9b;
  case 0x8138:
    uVar7 = 0xf0000003;
    puVar17 = auStack_68;
    if (*(ushort *)(param_2 + 0x14) < 8) break;
    uStack_70 = 0x1002ffa3b;
    lVar11 = FUN_1002a6010(param_2);
    uVar5 = *(int *)(lVar11 + 4) - DAT_1011c80d8;
    puVar17 = auStack_68;
    if ((DAT_1011c80e8 <= uVar5) ||
       (pvVar13 = *(void **)(DAT_1011c80e0 + (ulong)uVar5 * 8), puVar17 = auStack_68,
       pvVar13 == (void *)0x0)) break;
    uVar15 = 0;
    uVar5 = DAT_1011c8100;
    if (DAT_1011c8100 != 0) {
      do {
        lVar11 = *(long *)(DAT_1011c80f8 + uVar15 * 8);
        if ((lVar11 != 0) && (*(void **)(lVar11 + 0x20) == pvVar13)) {
          uStack_70 = 0x1002ffa99;
          FUN_10030bca0(lVar11,1);
          uVar5 = DAT_1011c8100;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar5);
    }
    uStack_70 = 0x1002ffaaf;
    FUN_10030b4a0(pvVar13);
LAB_1002ffab5:
    uStack_70 = 0x1002ffaba;
    operator_delete(pvVar13);
    uVar7 = 0;
    puVar17 = auStack_68;
    break;
  case 0x8139:
    uVar7 = 0xf0000003;
    puVar17 = auStack_68;
    if (0x1f < *(ushort *)(param_2 + 0x14)) {
      uStack_70 = 0x1002ffade;
      lVar11 = FUN_1002a6010(param_2);
      lVar12 = 0;
      if (0x3f < *(ushort *)(param_2 + 0x14)) {
        uStack_70 = 0x1002ffaf5;
        lVar12 = FUN_1002a6010(param_2);
      }
      uVar5 = *(int *)(lVar11 + 4) - DAT_1011c80f0;
      lVar16 = 0;
      if (uVar5 < DAT_1011c8100) {
        lVar16 = *(long *)(DAT_1011c80f8 + (ulong)uVar5 * 8);
      }
      uVar5 = *(int *)(lVar11 + 8) - DAT_1011c80d8;
      puVar17 = auStack_68;
      if (((uVar5 < DAT_1011c80e8) && (puVar17 = auStack_68, lVar16 != 0)) &&
         (lVar3 = *(long *)(DAT_1011c80e0 + (ulong)uVar5 * 8), puVar17 = auStack_68, lVar3 != 0)) {
        uStack_70 = 0x1002ffb65;
        local_58 = lVar3;
        local_50 = lVar12;
        FUN_10030b4b0(lVar3,lVar11 + 0x10);
        local_40 = (void *)0x0;
        uStack_70 = 0x1002ffb7a;
        lVar9 = FUN_1002a6120(param_2,3,0);
        local_48 = (undefined1 *)0x0;
        if (lVar9 != 0) {
          uVar5 = *(uint *)(lVar9 + 8) >> 4;
          uVar15 = (ulong)(uVar5 << 4);
          uStack_70 = 0x1002ffba9;
          local_60 = lVar16;
          local_48 = (undefined1 *)lVar9;
          local_40 = operator_new__(uVar15);
          uStack_70 = 0x1002ffbbd;
          uVar6 = FUN_1002a5990(local_48,0,local_40,uVar15);
          if (uVar6 != uVar15) {
            uVar5 = 0;
          }
          local_48 = (undefined1 *)(ulong)uVar5;
          lVar16 = local_60;
        }
        uStack_70 = 0x1002ffbdf;
        lVar12 = FUN_1002a6120(param_2,0,0);
        pvVar13 = local_40;
        lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
        puVar17 = auStack_68;
        if (lVar12 != 0) {
          uVar20 = 0;
          if (local_50 != 0) {
            uVar20 = *(undefined8 *)(local_50 + 0x20);
          }
          uVar7 = FUN_100312c60(lVar16,local_58,*(undefined4 *)(lVar11 + 0xc),local_40,local_48,
                                uVar20,param_2);
          puVar17 = auStack_68;
          if (pvVar13 != (void *)0x0) {
            uStack_70 = 0x1002ffc3d;
            operator_delete__(pvVar13);
            puVar17 = auStack_68;
          }
        }
      }
    }
    break;
  case 0x813a:
    break;
  }
  goto switchD_1002ff773_caseD_813a;
  while (lVar11 = lVar11 + 1, uVar5 != 0 || uVar2 != 0) {
LAB_1002ffd2d:
    uVar2 = *(ushort *)(puVar19 + lVar11 * 2);
    uVar5 = (uint)uVar2;
    if ((ushort)(uVar2 - 0x41) < 0x1a) {
      uVar5 = uVar2 >> 1 & 0x20 | (uint)uVar2;
    }
    if (uVar5 - 0x61 < 0x1a) {
      iVar8 = -0xd;
      if (uVar5 < 0x6e) {
        iVar8 = 0xd;
      }
      uVar5 = iVar8 + uVar5;
    }
    if (uVar5 != (int)"tabzr-furyy"[lVar11]) {
      lVar11 = 0;
      goto LAB_1002ffd80;
    }
  }
  goto LAB_1002ffdc6;
  while (lVar11 = lVar11 + 1, uVar5 != 0 || uVar2 != 0) {
LAB_1002ffeba:
    uVar2 = *(ushort *)(puVar19 + lVar11 * 2);
    uVar5 = (uint)uVar2;
    if ((ushort)(uVar2 - 0x41) < 0x1a) {
      uVar5 = uVar2 >> 1 & 0x20 | (uint)uVar2;
    }
    if (uVar5 - 0x61 < 0x1a) {
      iVar8 = -0xd;
      if (uVar5 < 0x6e) {
        iVar8 = 0xd;
      }
      uVar5 = iVar8 + uVar5;
    }
    if (uVar5 != (int)"zhqobk.rkr"[lVar11]) goto LAB_1002ffdce;
  }
  *(byte *)((long)pvVar13 + 0x2630) = *(byte *)((long)pvVar13 + 0x2630) | 0x20;
  goto LAB_1002ffdce;
  while (lVar9 = lVar9 + 1, uVar5 != 0 || uVar2 != 0) {
LAB_1002ffd80:
    uVar2 = *(ushort *)(puVar19 + lVar9 * 2);
    uVar5 = (uint)uVar2;
    if ((ushort)(uVar2 - 0x41) < 0x1a) {
      uVar5 = uVar2 >> 1 & 0x20 | (uint)uVar2;
    }
    if (uVar5 - 0x61 < 0x1a) {
      iVar8 = -0xd;
      if (uVar5 < 0x6e) {
        iVar8 = 0xd;
      }
      uVar5 = iVar8 + uVar5;
    }
    if (uVar5 != (int)"xjva"[lVar9]) goto LAB_1002ffeba;
  }
LAB_1002ffdc6:
  *(byte *)((long)pvVar13 + 0x2630) = *(byte *)((long)pvVar13 + 0x2630) | 1;
LAB_1002ffdce:
  uVar5 = (uint)local_40 & 0x7ff00;
  *(undefined8 *)((long)puVar18 + -8) = 0x1002ffded;
  iVar8 = FUN_1007da300("video.no_depth_load",uVar5 == 0x4a600);
  *(uint *)((long)pvVar13 + 0x2630) =
       (uint)(iVar8 != 0) << 2 | *(uint *)((long)pvVar13 + 0x2630) & 0xfffffffb;
  *(undefined8 *)((long)puVar18 + -8) = 0x1002ffe1c;
  iVar8 = FUN_1007da300("video.gl_swap_copy",1);
  *(uint *)((long)pvVar13 + 0x2630) =
       (uint)(iVar8 != 0) << 3 | *(uint *)((long)pvVar13 + 0x2630) & 0xfffffff7;
  *(undefined8 *)((long)puVar18 + -8) = 0x1002ffe4b;
  iVar8 = FUN_1007da300("video.gl_shader_blit",1);
  uVar5 = *(uint *)((long)pvVar13 + 0x2630);
  *(uint *)((long)pvVar13 + 0x2630) = (uint)(iVar8 != 0) << 4 | uVar5 & 0xffffffef;
  *(undefined8 *)((long)puVar18 + -8) = 0x1002ffe7d;
  iVar8 = FUN_1007da300("video.gl_native_vendor_and_renderer",uVar5 >> 5 & 1);
  *(uint *)((long)pvVar13 + 0x2630) =
       (uint)(iVar8 != 0) << 5 | *(uint *)((long)pvVar13 + 0x2630) & 0xffffffdf;
LAB_1002ffe9b:
  uVar7 = 0;
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar17 = puVar18;
switchD_1002ff773_caseD_813a:
  if (lVar9 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)puVar17 + -8) = &UNK_1002fff11;
  ___stack_chk_fail();
}

