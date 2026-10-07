
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004074e0(long *param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  bool bVar23;
  double dVar24;
  ulong *in_stack_ffffffffffffeb20;
  undefined4 uVar26;
  ulong *puVar25;
  ulong *in_stack_ffffffffffffeb28;
  undefined4 uVar28;
  ulong *puVar27;
  timeval *local_14b8;
  undefined8 **local_14b0;
  char local_1488 [4096];
  uint local_488;
  uint local_484;
  uint local_480;
  uint local_47c;
  uint local_478;
  uint auStack_474 [64];
  uint local_374;
  undefined4 local_370;
  undefined4 local_368 [3];
  int local_35c;
  int local_358;
  int local_34c;
  int local_348;
  uint local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  uint local_234 [67];
  timeval local_128 [12];
  char *local_68;
  long *local_60;
  ulong local_58;
  ulong local_50;
  undefined8 *local_48;
  int local_3c [3];
  
  lVar2 = *param_1;
  lVar12 = lVar2;
  if (DAT_0061d788 == 0) {
    local_48 = (undefined8 *)0x0;
    local_3c[0] = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = (long *)0x0;
    if (DAT_0061d78c == 0) {
      DAT_0061d788 = 1;
      lVar12 = (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x68))(lVar2,"_NET_SUPPORTING_WM_CHECK",1)
      ;
      puVar5 = PTR_prl_xfunctions_0061bd60;
      if (lVar12 != 0) {
        puVar27 = &local_58;
        puVar25 = &local_50;
        in_stack_ffffffffffffeb20 = puVar25;
        in_stack_ffffffffffffeb28 = puVar27;
        iVar6 = (**(code **)(PTR_prl_xfunctions_0061bd60 + 0xb8))
                          (lVar2,*(undefined8 *)
                                  ((long)*(int *)(*param_1 + 0xe0) * 0x80 + 0x10 +
                                  *(long *)(*param_1 + 0xe8)),lVar12,0,1,0,0x21,&local_48,local_3c,
                           puVar25,puVar27,&local_60);
        if ((iVar6 == 0) && (local_60 != (long *)0x0)) {
          if ((local_50 == 0) || ((local_48 != (undefined8 *)0x21 || (local_3c[0] != 0x20)))) {
            (**(code **)(PTR_prl_xfunctions_0061bd60 + 0xa8))();
          }
          else {
            lVar12 = *local_60;
            (**(code **)(puVar5 + 0xa8))();
            if (lVar12 != 0) {
              lVar22 = (**(code **)(puVar5 + 0x68))(lVar2,"_NET_WM_NAME",1);
              puVar17 = (undefined8 *)
                        (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x68))(lVar2,"UTF8_STRING",1);
              if (((lVar22 != 0) && (puVar17 != (undefined8 *)0x0)) &&
                 (iVar6 = (**(code **)(PTR_prl_xfunctions_0061bd60 + 0xb8))
                                    (*param_1,lVar12,lVar22,0,0xffffffffffffffff,0,puVar17,&local_48
                                     ,local_3c,puVar25,puVar27,&local_68),
                 in_stack_ffffffffffffeb20 = puVar25, in_stack_ffffffffffffeb28 = puVar27,
                 iVar6 == 0)) {
                if (((local_68 == (char *)0x0) || (puVar17 != local_48)) || (local_3c[0] != 8)) {
                  pcVar11 = local_68;
                  if (1 < *(int *)PTR___log_level_0061bd30) {
                    FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                                 "Dynamic Resolution: can\'t detect Window Manager name");
                    pcVar11 = local_68;
                  }
                }
                else {
                  if (1 < *(int *)PTR___log_level_0061bd30) {
                    FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                                 "Dynamic Resolution: Window Manager name \'%s\'",local_68);
                  }
                  pcVar11 = local_68;
                  pcVar14 = strstr(local_68,"Mutter");
                  if (pcVar14 == (char *)0x0) {
                    pcVar14 = strstr(pcVar11,"Compiz");
                    if (pcVar14 == (char *)0x0) {
                      pcVar14 = strstr(pcVar11,"KWin");
                      if (pcVar14 == (char *)0x0) {
                        pcVar14 = strstr(pcVar11,"Metacity");
                        if (pcVar14 == (char *)0x0) {
                          pcVar14 = strstr(pcVar11,"GNOME Shell");
                          if (pcVar14 != (char *)0x0) {
                            DAT_0061d78c = 5;
                          }
                        }
                        else {
                          DAT_0061d78c = 4;
                        }
                      }
                      else {
                        DAT_0061d78c = 2;
                      }
                    }
                    else {
                      DAT_0061d78c = 1;
                    }
                  }
                  else {
                    DAT_0061d78c = 3;
                  }
                }
                in_stack_ffffffffffffeb20 = puVar25;
                in_stack_ffffffffffffeb28 = puVar27;
                if (pcVar11 != (char *)0x0) {
                  (**(code **)(PTR_prl_xfunctions_0061bd60 + 0xa8))(pcVar11);
                  in_stack_ffffffffffffeb20 = puVar25;
                  in_stack_ffffffffffffeb28 = puVar27;
                }
                if (DAT_0061d78c == 0) {
                  if (1 < *(int *)PTR___log_level_0061bd30) {
                    FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                                 "Dynamic Resolution: unknown Window Manager");
                  }
                }
                else if (DAT_0061d78c == 3) {
                  if (1 < *(int *)PTR___log_level_0061bd30) {
                    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: will wait for WM init"
                                );
                  }
                  DAT_0061d788 = 0;
                  goto LAB_00407558;
                }
              }
            }
          }
        }
      }
      if (DAT_0061d788 == 0) goto LAB_00407558;
LAB_004080b0:
      if (*(int *)PTR___log_level_0061bd30 < 2) {
        lVar12 = *param_1;
        goto LAB_0040757e;
      }
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: allow changing resolutions");
    }
    else {
LAB_00407558:
      if (DAT_0061d78c != 0) {
        lVar12 = (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x68))(lVar2,"_NET_CLIENT_LIST",1);
        if (lVar12 != 0) {
          in_stack_ffffffffffffeb28 = &local_58;
          in_stack_ffffffffffffeb20 = &local_50;
          iVar6 = (**(code **)(PTR_prl_xfunctions_0061bd60 + 0xb8))
                            (lVar2,*(undefined8 *)
                                    ((long)*(int *)(lVar2 + 0xe0) * 0x80 + 0x10 +
                                    *(long *)(lVar2 + 0xe8)),lVar12,0,1,0,0x21,&local_48,local_3c,
                             in_stack_ffffffffffffeb20,in_stack_ffffffffffffeb28,&local_60);
          if ((iVar6 == 0) && (local_60 != (long *)0x0)) {
            if ((local_50 != 0) && ((local_48 == (undefined8 *)0x21 && (local_3c[0] == 0x20)))) {
              if (*(int *)PTR___log_level_0061bd30 < 2) {
                DAT_0061d788 = 1;
              }
              else {
                FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: WM init done");
                DAT_0061d788 = 1;
                if (local_60 == (long *)0x0) goto LAB_004080b0;
              }
            }
            (**(code **)(PTR_prl_xfunctions_0061bd60 + 0xa8))();
          }
        }
        if (DAT_0061d788 == 0) {
          iVar6 = FUN_0040c2e0(param_1);
          if (iVar6 == 0) {
            if (DAT_0061d788 == 0) {
              return;
            }
          }
          else {
            if (1 < *(int *)PTR___log_level_0061bd30) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: composite WM detected");
            }
            DAT_0061d788 = 1;
          }
        }
        goto LAB_004080b0;
      }
    }
    if (DAT_0061d788 == 0) {
      return;
    }
    lVar12 = *param_1;
  }
LAB_0040757e:
  puVar9 = (undefined4 *)FUN_004089a0(lVar12);
  puVar5 = PTR_g_PrlXLibAPI_0061bcf0;
  if (puVar9 == (undefined4 *)0x0) {
LAB_00407748:
    local_248 = 0;
  }
  else {
    lVar22 = (long)*(int *)(lVar12 + 0xe0) * 0x80;
    uVar3 = *(undefined8 *)(*(long *)(lVar12 + 0xe8) + 0x10 + lVar22);
    if (((int)puVar9[0xe] < 1) || (lVar13 = *(long *)(puVar9 + 0xc), *(int *)(lVar13 + 0x14) == 0))
    {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      do {
        uVar21 = uVar21 + 1;
        if (uVar21 == puVar9[0xe]) break;
        piVar1 = (int *)(lVar13 + 0x2c);
        lVar13 = lVar13 + 0x18;
      } while (*piVar1 != 0);
    }
    (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 0x48))(lVar12,uVar3,1);
    (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x1c0))(lVar12,0);
    while (iVar6 = (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x1c8))(lVar12,*puVar9,local_128),
          iVar6 != 0) {
      (**(code **)(*(long *)(puVar5 + 0x10) + 0x50))(local_128);
    }
    (**(code **)(*(long *)(puVar5 + 0x10) + 0x48))(lVar12,uVar3,0);
    lVar22 = lVar22 + *(long *)(lVar12 + 0xe8);
    local_23c = *(undefined4 *)(lVar22 + 0x18);
    local_238 = *(undefined4 *)(lVar22 + 0x1c);
    local_248 = 0x10;
    if (uVar21 < 0x11) {
      local_248 = uVar21;
    }
    local_244 = 0;
    local_240 = 0;
    if (0 < (int)local_248) {
      if (((*(int *)(*(long *)(puVar9 + 0xc) + 0x10) != -1) &&
          (lVar12 = *(long *)(*(long *)(puVar9 + 8) +
                             (long)*(int *)(*(long *)(puVar9 + 0xc) + 0x10) * 0x18), lVar12 != 0))
         && (*(long *)(lVar12 + 0x18) != 0)) {
        puVar10 = &local_248;
        iVar6 = 0;
        lVar22 = 0x18;
        do {
          iVar6 = iVar6 + 1;
          puVar10[5] = *(uint *)(lVar12 + 8);
          puVar10[6] = *(uint *)(lVar12 + 0xc);
          puVar10[7] = *(uint *)(lVar12 + 0x10);
          puVar10[8] = *(uint *)(lVar12 + 0x14);
          if ((int)local_248 <= iVar6) goto LAB_00407736;
          iVar8 = *(int *)(*(long *)(puVar9 + 0xc) + 0x10 + lVar22);
          if ((iVar8 == -1) ||
             (lVar12 = *(long *)(*(long *)(puVar9 + 8) + (long)iVar8 * 0x18), lVar12 == 0)) break;
          puVar10 = puVar10 + 4;
          lVar22 = lVar22 + 0x18;
        } while (*(long *)(lVar12 + 0x18) != 0);
      }
      FUN_004088e0(puVar9);
      goto LAB_00407748;
    }
LAB_00407736:
    FUN_004088e0(puVar9);
  }
  uVar26 = (undefined4)((ulong)in_stack_ffffffffffffeb20 >> 0x20);
  uVar28 = (undefined4)((ulong)in_stack_ffffffffffffeb28 >> 0x20);
  local_14b8 = local_128;
  bVar4 = false;
  if (DAT_0061d790 == 0) {
    local_68 = (char *)0x0;
    local_3c[0] = 0;
    local_58 = local_58 & 0xffffffff00000000;
    FUN_00404d30(lVar2,&local_68,0,0,0,local_3c,&local_58,1);
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                   "Dynamic Resolution: detected Output {name=%s, width=%d, height=%d}",local_68,
                   local_3c[0],local_58 & 0xffffffff);
    }
    pcVar11 = getenv("HOME");
    snprintf(local_1488,0x1000,"%s/.config/monitors.xml",pcVar11);
    lVar12 = FUN_00415300(local_1488);
    uVar26 = (undefined4)((ulong)in_stack_ffffffffffffeb20 >> 0x20);
    uVar28 = (undefined4)((ulong)in_stack_ffffffffffffeb28 >> 0x20);
    if (lVar12 == 0) {
LAB_004080f3:
      bVar4 = false;
    }
    else {
      lVar22 = FUN_004108e0(lVar12);
      if (1 < *(int *)PTR___log_level_0061bd30) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: parse %s ...",local_1488);
      }
      uVar26 = (undefined4)((ulong)in_stack_ffffffffffffeb20 >> 0x20);
      uVar28 = (undefined4)((ulong)in_stack_ffffffffffffeb28 >> 0x20);
      if (lVar22 == 0) {
        FUN_00411200(lVar12);
        bVar4 = false;
      }
      else {
        iVar6 = 0;
        iVar8 = 0;
        do {
          bVar4 = false;
          lVar13 = FUN_004108e0(lVar22);
          if (lVar13 != 0) {
            do {
              local_14b0 = &local_48;
              lVar15 = FUN_004108e0(lVar13,"width");
              lVar16 = FUN_004108e0(lVar13);
              if ((lVar15 == 0) || (lVar16 == 0)) {
LAB_00407ce3:
                lVar13 = *(long *)(lVar13 + 0x20);
                bVar4 = false;
              }
              else {
                local_50 = local_50 & 0xffffffff00000000;
                local_48 = (undefined8 *)((ulong)local_48 & 0xffffffff00000000);
                iVar7 = sscanf(*(char **)(lVar15 + 0x10),"%d",&local_50);
                if (iVar7 != 1) {
                  local_50 = local_50 & 0xffffffff00000000;
                }
                iVar7 = sscanf(*(char **)(lVar16 + 0x10),"%d",local_14b0);
                if (iVar7 != 1) {
                  local_48 = (undefined8 *)((ulong)local_48 & 0xffffffff00000000);
                }
                if (((int)local_50 < 1) || ((int)local_48 < 1)) goto LAB_00407ce3;
                pcVar14 = (char *)FUN_004107b0(lVar13);
                pcVar11 = local_68;
                if ((local_68 == (char *)0x0) || (pcVar14 == (char *)0x0)) {
                  bVar4 = false;
                  bVar23 = false;
                  if (0 < iVar6) goto LAB_00407bb3;
LAB_004081a2:
                  iVar6 = (int)local_50;
                  iVar8 = (int)local_48;
                  if (bVar4) {
LAB_00407bd1:
                    bVar4 = true;
                    if (1 < *(int *)PTR___log_level_0061bd30) {
                      FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                                   "Dynamic Resolution: found user resolution for \'%s\' {%dx%d}",
                                   pcVar11,iVar6,iVar8);
                    }
                  }
                  else {
                    bVar4 = false;
                    if (1 < *(int *)PTR___log_level_0061bd30) {
                      FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                                   "Dynamic Resolution: found user resolution {%dx%d}",
                                   local_50 & 0xffffffff,(ulong)local_48 & 0xffffffff);
                    }
                  }
                }
                else {
                  iVar7 = strcmp(local_68,pcVar14);
                  bVar23 = iVar7 == 0;
                  bVar4 = bVar23;
                  if (iVar6 < 1) goto LAB_004081a2;
LAB_00407bb3:
                  bVar4 = bVar23;
                  if (iVar8 < 1) goto LAB_004081a2;
                  bVar4 = false;
                  if (bVar23) {
                    iVar6 = (int)local_50;
                    iVar8 = (int)local_48;
                    goto LAB_00407bd1;
                  }
                }
                lVar13 = *(long *)(lVar13 + 0x20);
              }
            } while ((lVar13 != 0) && (!bVar4));
          }
          uVar26 = (undefined4)((ulong)in_stack_ffffffffffffeb20 >> 0x20);
          uVar28 = (undefined4)((ulong)in_stack_ffffffffffffeb28 >> 0x20);
          lVar22 = *(long *)(lVar22 + 0x20);
        } while ((lVar22 != 0) && (!bVar4));
        FUN_00411200(lVar12);
        if (((iVar6 < 1) || (iVar8 < 1)) || ((iVar6 == local_3c[0] && (iVar8 == (int)local_58))))
        goto LAB_004080f3;
        if (1 < *(int *)PTR___log_level_0061bd30) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: apply user resolution {%dx%d}",
                       iVar6,iVar8);
        }
        memset(local_368,0,0x114);
        local_368[0] = 1;
        local_35c = iVar6;
        local_358 = iVar8;
        local_34c = iVar6;
        local_348 = iVar8;
        iVar7 = FUN_004070d0(param_1,local_368,1);
        bVar4 = true;
        if (iVar7 == 0) {
          FUN_00405ce0(param_1,iVar6,iVar8);
          bVar4 = false;
        }
      }
    }
    DAT_0061d790 = 1;
    if (local_68 != (char *)0x0) {
      free(local_68);
    }
    memset(&DAT_0061d540,0,0x114);
    DAT_0061d654 = 0xffffffff;
    DAT_0061d658 = 1;
    DAT_0061c6a0 = -1;
  }
  local_14b0 = &local_48;
  memset(&local_488,0,0x11c);
  puVar5 = PTR_g_OTGLink_0061bd00;
  local_374 = 0xffffffff;
  local_370 = 1;
  local_128[0].tv_sec._0_4_ = 0xb;
  local_128[0].tv_usec._0_4_ = 1;
  local_128[0].tv_usec._4_4_ = 0;
  local_128[0].tv_sec._4_4_ = 0;
  iVar6 = FUN_0040e870(PTR_g_OTGLink_0061bd00,local_14b8,0x10,0x10,local_14b0);
  if (iVar6 == 0) {
    if ((int)local_48 != 0) {
      uVar20 = local_128[0].tv_usec._4_4_ & 0x1fff;
      uVar21 = local_128[0].tv_usec._4_4_ >> 0xd & 0x1fff;
      if (1 < *(int *)PTR___log_level_0061bd30) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: ---->> NEW DYN RES: %ux%ux%u",
                     uVar21,uVar20,local_128[0].tv_usec._4_4_ >> 0x1a);
      }
      memset(&local_488,0,0x114);
      local_488 = 1;
      local_47c = uVar21;
      local_478 = uVar20;
      auStack_474[2] = uVar21;
      auStack_474[3] = uVar20;
      puVar10 = malloc(0x210);
      if (puVar10 != (uint *)0x0) {
        memset(puVar10,0,0x210);
        *puVar10 = 0xb;
        puVar10[2] = 2;
        puVar10[3] = 0x210;
        puVar10[1] = 0;
        iVar8 = FUN_0040e870(puVar5,puVar10,0x10,0x210);
        if (iVar8 == 0) {
          if ((int)local_48 == 0) {
LAB_00408156:
            iVar6 = iVar8;
            if (1 < *(int *)PTR___log_level_0061bd30) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                           "Dynamic Resolution: could not get display configuration: %d",iVar8);
            }
          }
          else {
            uVar21 = *puVar10;
            uVar20 = 0x10;
            if ((0x10 < (int)uVar21) || (uVar20 = uVar21, iVar6 = iVar8, 0 < (int)uVar21)) {
              local_370 = 0;
              local_47c = 0;
              local_478 = 0;
              local_484 = 0x7fffffff;
              local_374 = puVar10[1];
              local_480 = 0x7fffffff;
              if (uVar20 != 0) {
                uVar19 = 0;
                do {
                  uVar21 = puVar10[uVar19 * 8 + 10];
                  auStack_474[uVar19 * 4] = uVar21;
                  uVar18 = puVar10[uVar19 * 8 + 0xb];
                  auStack_474[uVar19 * 4 + 1] = uVar18;
                  auStack_474[uVar19 * 4 + 2] = (uint)(ushort)puVar10[uVar19 * 8 + 5];
                  auStack_474[uVar19 * 4 + 3] =
                       (uint)*(ushort *)((long)puVar10 + uVar19 * 0x20 + 0x16);
                  if ((int)uVar21 < (int)local_484) {
                    local_484 = uVar21;
                  }
                  if ((int)uVar18 < (int)local_480) {
                    local_480 = uVar18;
                  }
                  uVar21 = (int)uVar19 + 1;
                  uVar19 = (ulong)uVar21;
                } while (uVar21 < uVar20);
                if (uVar20 != 0) {
                  uVar19 = 0;
                  do {
                    uVar21 = ((ushort)puVar10[uVar19 * 8 + 5] - local_484) +
                             puVar10[uVar19 * 8 + 10];
                    uVar18 = (*(ushort *)((long)puVar10 + uVar19 * 0x20 + 0x16) - local_480) +
                             puVar10[uVar19 * 8 + 0xb];
                    if ((int)local_47c < (int)uVar21) {
                      local_47c = uVar21;
                    }
                    if ((int)local_478 < (int)uVar18) {
                      local_478 = uVar18;
                    }
                    uVar21 = (int)uVar19 + 1;
                    uVar19 = (ulong)uVar21;
                  } while (uVar21 < uVar20);
                }
              }
              local_488 = uVar20;
              if (1 < *(int *)PTR___log_level_0061bd30) {
                FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                             "Dynamic Resolution: new heads config (id=%d(%X),  heads_count=%d, ext_width=%d, ext_height=%d, shiftx=%d, shifty=%d)"
                             ,local_374,local_374,uVar20,local_47c,local_478,
                             CONCAT44(uVar26,local_484),CONCAT44(uVar28,local_480));
              }
              iVar6 = iVar8;
              if (local_488 != 0) {
                uVar19 = 0;
                do {
                  if (1 < *(int *)PTR___log_level_0061bd30) {
                    FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                                 "Dynamic Resolution:  head %d) width=%d, height=%d, x=%d, y=%d",
                                 uVar19,auStack_474[uVar19 * 4 + 2],auStack_474[uVar19 * 4 + 3],
                                 auStack_474[uVar19 * 4],auStack_474[uVar19 * 4 + 1]);
                  }
                  uVar21 = (int)uVar19 + 1;
                  uVar19 = (ulong)uVar21;
                } while (uVar21 < local_488);
              }
            }
          }
        }
        else if ((iVar8 != -8) || (*(int *)(puVar5 + 4) != -2)) goto LAB_00408156;
        free(puVar10);
        goto LAB_004079f2;
      }
      goto LAB_004078de;
    }
joined_r0x00407a01:
    if (!bVar4) goto LAB_00407816;
  }
  else {
    FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                 "Error: Dynamic Resolution: could not get screen resolution: %d",iVar6);
LAB_004079f2:
    if (iVar6 != 0) goto joined_r0x00407a01;
LAB_004078de:
    memcpy(&DAT_0061d540,&local_488,0x11c);
    DAT_0061c6a0 = -1;
    if ((local_488 == 0) || (DAT_0061c6a0 = FUN_004070d0(param_1,&local_488,1), DAT_0061c6a0 == 0))
    goto joined_r0x00407a01;
  }
  if (local_248 != 0) {
    memcpy(local_368,&DAT_0061d660,0x114);
    puVar5 = PTR___log_level_0061bd30;
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                   "Dynamic Resolution: !!! can not set config, resetting...");
    }
    iVar6 = FUN_004070d0(param_1,&local_248,1);
    if (iVar6 != 0) {
      if (*(int *)puVar5 < 2) {
        return;
      }
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: FAILED to reset heads config");
      return;
    }
    memcpy(&DAT_0061d660,local_368,0x114);
    return;
  }
LAB_00407816:
  if ((1 < DAT_0061d780) ||
     (dVar24 = (double)*(uint *)PTR_g_DynResConfirmationTimeMs_0061bd28 / _DAT_004169f0 +
               DAT_0061d778, gettimeofday(local_14b8,(__timezone_ptr_t)0x0),
     dVar24 <= (double)CONCAT44(local_128[0].tv_sec._4_4_,(undefined4)local_128[0].tv_sec) +
               (double)CONCAT44(local_128[0].tv_usec._4_4_,(undefined4)local_128[0].tv_usec) *
               _DAT_004169e0)) {
    FUN_00406df0(lVar2);
  }
  else {
    iVar6 = FUN_00406bd0(lVar2,&DAT_0061d660);
    dVar24 = DAT_0061d778;
    puVar5 = PTR___log_level_0061bd30;
    DAT_0061d778 = dVar24;
    if (iVar6 == 0) {
      if (1 < *(int *)PTR___log_level_0061bd30) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                     "Dynamic Resolution: !!! heads config changes detected, resetting (try %d)...",
                     DAT_0061d780);
      }
      iVar6 = FUN_004070d0(param_1,&DAT_0061d660,0);
      if (iVar6 == 0) {
        DAT_0061d780 = DAT_0061d780 + 1;
        DAT_0061d778 = dVar24;
      }
      else {
        if (1 < *(int *)puVar5) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: FAILED to reset heads config");
        }
        DAT_0061d780 = 2;
      }
    }
  }
  return;
}

