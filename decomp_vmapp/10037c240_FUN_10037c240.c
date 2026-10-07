
void FUN_10037c240(undefined8 *param_1,undefined4 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  ulong uVar22;
  int local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  int local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  int local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  int local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  int iStack_f4;
  undefined1 local_f0 [8];
  long local_e8;
  long local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0 [2];
  undefined1 *local_a8;
  undefined1 *local_98;
  undefined1 local_88 [32];
  long local_68 [4];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = &PTR_FUN_100bbc220;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 1;
  FUN_10036d070();
  *param_1 = &PTR_FUN_100bbc290;
  puVar4 = param_1 + 5;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = param_1;
  param_1[6] = puVar4;
  param_1[7] = puVar4;
  puVar5 = param_1 + 8;
  param_1[8] = param_1;
  param_1[9] = puVar5;
  param_1[10] = puVar5;
  puVar1 = param_1 + 0xb;
  param_1[0xb] = param_1;
  param_1[0xc] = puVar1;
  param_1[0xd] = puVar1;
  puVar2 = param_1 + 0xe;
  param_1[0xe] = param_1;
  param_1[0xf] = puVar2;
  param_1[0x10] = puVar2;
  ___bzero(param_1 + 0x11,0x90);
  param_1[0x23] = 0xffffffffffffffff;
  lVar14 = *(long *)(param_3 + 0x620);
  lVar10 = lVar14;
  if ((lVar14 == 0) && (lVar10 = *(long *)(param_3 + 0x628), *(long *)(param_3 + 0x628) == 0)) {
    lVar10 = *(long *)(param_3 + 0x618);
  }
  param_1[0x10] = lVar10 + 0x1a0;
  param_1[0xf] = *(undefined8 *)(lVar10 + 0x1a8);
  *(undefined8 **)(*(long *)(lVar10 + 0x1a8) + 0x10) = puVar2;
  *(undefined8 **)(lVar10 + 0x1a8) = puVar2;
  if (*(long *)(param_3 + 0x618) != 0) {
    lVar10 = **(long **)(*(long *)(param_3 + 0x618) + 400);
    param_1[2] = lVar10;
    param_1[7] = lVar10 + 0x18;
    param_1[6] = *(undefined8 *)(lVar10 + 0x20);
    *(undefined8 **)(*(long *)(lVar10 + 0x20) + 0x10) = puVar4;
    *(undefined8 **)(lVar10 + 0x20) = puVar4;
  }
  if (lVar14 != 0) {
    lVar14 = **(long **)(lVar14 + 400);
    param_1[3] = lVar14;
    param_1[10] = lVar14 + 0x18;
    param_1[9] = *(undefined8 *)(lVar14 + 0x20);
    *(undefined8 **)(*(long *)(lVar14 + 0x20) + 0x10) = puVar5;
    *(undefined8 **)(lVar14 + 0x20) = puVar5;
  }
  if (*(long *)(param_3 + 0x628) != 0) {
    lVar14 = **(long **)(*(long *)(param_3 + 0x628) + 400);
    param_1[4] = lVar14;
    param_1[0xd] = lVar14 + 0x18;
    param_1[0xc] = *(undefined8 *)(lVar14 + 0x20);
    *(undefined8 **)(*(long *)(lVar14 + 0x20) + 0x10) = puVar1;
    *(undefined8 **)(lVar14 + 0x20) = puVar1;
  }
  FUN_10038e870(local_b0,local_48,0x10);
  plVar16 = *(long **)(*(long *)(param_1[2] + 0x58) + 0x10);
  if (plVar16 != (long *)0x0) {
    do {
      bVar3 = *(byte *)((long)plVar16 + 0x2a);
      puVar13 = local_a8;
      if (local_a8 == (undefined1 *)0x0) {
        puVar13 = local_98;
      }
      *puVar13 = 0;
      local_b0[0] = 0;
      uVar19 = (uint)bVar3;
      FUN_10038e8e0(local_b0,"a_v%d",bVar3);
      puVar13 = local_a8;
      if (local_a8 == (undefined1 *)0x0) {
        puVar13 = local_98;
      }
      iVar6 = (*DAT_1011c5f00)(param_2,puVar13);
      if (iVar6 != -1) {
        local_b8 = uVar19;
        iStack_b4 = iVar6;
        if ((undefined8 *)param_1[0x12] == (undefined8 *)param_1[0x13]) {
          FUN_10037d480(param_1 + 0x11,&local_b8);
        }
        else {
          *(undefined8 *)param_1[0x12] = CONCAT44(iVar6,uVar19);
          param_1[0x12] = param_1[0x12] + 8;
        }
      }
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
  lVar14 = 0;
  if (param_1[4] != 0) {
    lVar14 = *(long *)(param_1[4] + 0x58);
  }
  local_68[0] = lVar14;
  lVar10 = param_1[2];
  local_68[1] = 0;
  if (lVar10 != 0) {
    local_68[1] = *(undefined8 *)(lVar10 + 0x58);
  }
  local_68[2] = 0;
  if (param_1[3] != 0) {
    local_68[2] = *(undefined8 *)(param_1[3] + 0x58);
  }
  uVar17 = 0;
  lVar10 = lVar14;
  do {
    if (lVar10 != 0) {
      for (puVar4 = *(undefined8 **)(lVar10 + 0x30); puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)*puVar4) {
        puVar13 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar13 = local_98;
        }
        *puVar13 = 0;
        local_b0[0] = 0;
        uVar9 = FUN_1003ac5c0(lVar10);
        FUN_10038e8e0(local_b0,"%s_ubo%d",uVar9,*(undefined4 *)((long)puVar4 + 0xc));
        puVar13 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar13 = local_98;
        }
        iVar6 = (*DAT_1011c6218)(param_2,puVar13);
        uVar8 = (undefined4)uVar17;
        if (iVar6 == -1) {
          puVar13 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar13 = local_98;
          }
          *puVar13 = 0;
          local_b0[0] = 0;
          uVar9 = FUN_1003ac5c0(lVar10);
          FUN_10038e8e0(local_b0,"%s_cb%d",uVar9,*(undefined4 *)((long)puVar4 + 0xc));
          puVar13 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar13 = local_98;
          }
          iVar6 = (*DAT_1011c6230)(param_2,puVar13);
          if (iVar6 != -1) {
            iVar15 = *(int *)(puVar4 + 1);
            do {
              if (iVar15 == 0) break;
              FUN_10038e870(local_f0,local_88,0x20);
              puVar13 = local_a8;
              if (local_a8 == (undefined1 *)0x0) {
                puVar13 = local_98;
              }
              FUN_10038e8e0(local_f0,"%s[%d]",puVar13,iVar15 + -1);
              lVar18 = local_e8;
              if (local_e8 == 0) {
                lVar18 = local_d8;
              }
              iVar7 = (*DAT_1011c6230)(param_2,lVar18);
              iVar20 = 0;
              if (iVar7 != -1) {
                local_f8 = *(undefined4 *)((long)puVar4 + 0xc);
                puVar5 = (undefined8 *)param_1[0x15];
                local_100 = iVar6;
                uStack_fc = uVar8;
                iStack_f4 = iVar15;
                if (puVar5 == (undefined8 *)param_1[0x16]) {
                  iVar20 = 0x11;
                  FUN_10037d740(param_1 + 0x14,&local_100);
                }
                else {
                  puVar5[1] = CONCAT44(iVar15,local_f8);
                  *puVar5 = CONCAT44(uVar8,iVar6);
                  param_1[0x15] = param_1[0x15] + 0x10;
                  iVar20 = 0x11;
                }
              }
              FUN_10038e8c0(local_f0);
              iVar15 = iVar15 + -1;
            } while (iVar20 == 0);
          }
        }
        else {
          (*DAT_1011c6e58)(param_2,iVar6,iVar6);
          uStack_c4 = *(undefined4 *)((long)puVar4 + 0xc);
          puVar5 = (undefined8 *)param_1[0x18];
          local_c8 = uVar8;
          local_c0 = iVar6;
          if (puVar5 == (undefined8 *)param_1[0x19]) {
            FUN_10037d5b0(param_1 + 0x17,&local_c8);
          }
          else {
            *(int *)(puVar5 + 1) = iVar6;
            *puVar5 = CONCAT44(uStack_c4,uVar8);
            param_1[0x18] = param_1[0x18] + 0xc;
          }
        }
      }
    }
    if (2 < uVar17 + 1) {
      uVar17 = 1;
      lVar10 = lVar14;
      while( true ) {
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x148) != 0)) {
          puVar13 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar13 = local_98;
          }
          *puVar13 = 0;
          local_b0[0] = 0;
          uVar9 = FUN_1003ac5c0(lVar10);
          FUN_10038e8e0(local_b0,"%s_ICB",uVar9);
          puVar13 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar13 = local_98;
          }
          iVar6 = (*DAT_1011c6230)(param_2,puVar13);
          if (iVar6 != -1) {
            (*DAT_1011c6e18)(iVar6,*(undefined4 *)(lVar10 + 0x150),*(undefined8 *)(lVar10 + 0x148));
          }
          puVar13 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar13 = local_98;
          }
          *puVar13 = 0;
          local_b0[0] = 0;
          uVar9 = FUN_1003ac5c0(lVar10);
          FUN_10038e8e0(local_b0,"%s_iICB",uVar9);
          puVar13 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar13 = local_98;
          }
          iVar6 = (*DAT_1011c6230)(param_2,puVar13);
          if (iVar6 != -1) {
            (*DAT_1011c6e38)(iVar6,*(undefined4 *)(lVar10 + 0x150),*(undefined8 *)(lVar10 + 0x148));
          }
        }
        if (2 < uVar17) break;
        lVar10 = local_68[uVar17];
        uVar17 = uVar17 + 1;
      }
      if (((param_1[4] != 0) &&
          (lVar10 = (**(code **)(**(long **)(param_1[4] + 0x58) + 0x20))(), lVar10 != 0)) &&
         ((*(byte *)(lVar10 + 0x1f0) & 6) != 0)) {
        uVar8 = (*DAT_1011c6230)(param_2,"ps_rasterinfo");
        *(undefined4 *)(param_1 + 0x23) = uVar8;
      }
      uVar8 = (*DAT_1011c6230)(param_2,"vs_basevertex");
      *(undefined4 *)((long)param_1 + 0x11c) = uVar8;
      uVar17 = 0;
LAB_10037ca75:
      lVar11 = uVar17 * 0x20;
      lVar10 = *(long *)(param_4 + 0x3020 + lVar11);
      lVar18 = *(long *)(param_4 + 0x3030 + lVar11);
      do {
        do {
          if ((lVar18 == 0) && (lVar10 == *(long *)(param_4 + 0x3020 + lVar11))) {
            if (2 < uVar17 + 1) {
              FUN_10038e8c0(local_b0);
              if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
              }
              return;
            }
            lVar14 = local_68[uVar17 + 1];
            uVar17 = uVar17 + 1;
            goto LAB_10037ca75;
          }
          uVar22 = (ulong)(lVar18 - lVar10) >> 5 & 0xffffffff;
          if (lVar18 == 0) {
            uVar22 = 0;
          }
          uVar21 = (undefined4)uVar22;
          uVar8 = (undefined4)uVar17;
          if ((*(byte *)(lVar18 + 2) & 4) != 0) {
            puVar13 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar13 = local_98;
            }
            *puVar13 = 0;
            local_b0[0] = 0;
            uVar9 = FUN_1003ac5c0(lVar14);
            FUN_10038e8e0(local_b0,"%s_resinfo%u",uVar9,uVar22);
            puVar13 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar13 = local_98;
            }
            iVar6 = (*DAT_1011c6230)(param_2,puVar13);
            if (iVar6 != -1) {
              puVar4 = (undefined8 *)param_1[0x1b];
              local_110 = iVar6;
              uStack_10c = uVar8;
              local_108 = uVar21;
              if (puVar4 == (undefined8 *)param_1[0x1c]) {
                FUN_10037d870(param_1 + 0x1a,&local_110);
              }
              else {
                *(undefined4 *)(puVar4 + 1) = uVar21;
                *puVar4 = CONCAT44(uVar8,iVar6);
                param_1[0x1b] = param_1[0x1b] + 0xc;
              }
            }
          }
          if ((*(byte *)(lVar18 + 2) & 0x10) != 0) {
            puVar13 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar13 = local_98;
            }
            *puVar13 = 0;
            local_b0[0] = 0;
            uVar9 = FUN_1003ac5c0(lVar14);
            FUN_10038e8e0(local_b0,"%s_resdata%u",uVar9,uVar22);
            puVar13 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar13 = local_98;
            }
            iVar6 = (*DAT_1011c6230)(param_2,puVar13);
            if (iVar6 != -1) {
              puVar4 = (undefined8 *)param_1[0x1e];
              local_120 = iVar6;
              uStack_11c = uVar8;
              local_118 = uVar21;
              if (puVar4 == (undefined8 *)param_1[0x1f]) {
                FUN_10037d870(param_1 + 0x1d,&local_120);
              }
              else {
                *(undefined4 *)(puVar4 + 1) = uVar21;
                *puVar4 = CONCAT44(uVar8,iVar6);
                param_1[0x1e] = param_1[0x1e] + 0xc;
              }
            }
          }
          if ((*(byte *)(lVar18 + 2) & 8) != 0) {
            puVar13 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar13 = local_98;
            }
            *puVar13 = 0;
            local_b0[0] = 0;
            uVar9 = FUN_1003ac5c0(lVar14);
            FUN_10038e8e0(local_b0,"%s_lodinfo%u",uVar9,uVar22);
            puVar13 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar13 = local_98;
            }
            iVar6 = (*DAT_1011c6230)(param_2,puVar13);
            if (iVar6 != -1) {
              puVar4 = (undefined8 *)param_1[0x21];
              local_130 = iVar6;
              uStack_12c = uVar8;
              local_128 = uVar21;
              if (puVar4 == (undefined8 *)param_1[0x22]) {
                FUN_10037d870(param_1 + 0x20,&local_130);
              }
              else {
                *(undefined4 *)(puVar4 + 1) = uVar21;
                *puVar4 = CONCAT44(uVar8,iVar6);
                param_1[0x21] = param_1[0x21] + 0xc;
              }
            }
          }
          if ((*(byte *)(lVar18 + 2) & 1) != 0) {
            puVar13 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar13 = local_98;
            }
            *puVar13 = 0;
            local_b0[0] = 0;
            uVar9 = FUN_1003ac5c0(lVar14);
            uVar12 = FUN_10039b830(param_4,0);
            FUN_10038e8e0(local_b0,"%s_%stex%u",uVar9,uVar12,uVar22);
            iVar6 = (*DAT_1011c6230)(param_2);
            if (iVar6 != -1) {
              (*DAT_1011c6d38)(iVar6);
            }
          }
          if ((*(byte *)(lVar18 + 2) & 2) != 0) {
            puVar13 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar13 = local_98;
            }
            *puVar13 = 0;
            local_b0[0] = 0;
            uVar9 = FUN_1003ac5c0(lVar14);
            uVar12 = FUN_10039b830(param_4,1);
            FUN_10038e8e0(local_b0,"%s_%stex%u",uVar9,uVar12,uVar22);
            iVar6 = (*DAT_1011c6230)(param_2);
            if (iVar6 != -1) {
              (*DAT_1011c6d38)(iVar6);
            }
          }
        } while (lVar18 == 0);
        lVar18 = *(long *)(lVar18 + 0x18);
      } while( true );
    }
    lVar10 = local_68[uVar17 + 1];
    uVar17 = uVar17 + 1;
  } while( true );
}

