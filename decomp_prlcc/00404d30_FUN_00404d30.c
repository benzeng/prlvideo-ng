
void FUN_00404d30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined4 *param_6,undefined4 *param_7,char param_8)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  undefined4 uVar14;
  char *local_158;
  char *local_150;
  char *local_148;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  int local_f8 [2];
  undefined1 auStack_f0 [8];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 auStack_dc [4];
  uint local_d8;
  undefined4 local_c8 [2];
  undefined1 auStack_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined1 auStack_a0 [8];
  int local_98 [4];
  char *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  void *local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c [3];
  
  local_58 = (void *)0x0;
  local_3c[0] = 0;
  local_40 = 0;
  if ((DAT_0061d784 != 0) || (cVar2 = FUN_00403a50(6), cVar2 == '\0')) {
    local_158 = (char *)0x0;
    local_150 = (char *)0x0;
    local_148 = (char *)0x0;
    goto LAB_00404dc8;
  }
  local_60 = 0;
  lVar6 = (*(code *)**(undefined8 **)(PTR_g_PrlGLibAPI_0061bd78 + 0x130))
                    (2,0,0,"org.gnome.Mutter.DisplayConfig","/org/gnome/Mutter/DisplayConfig",
                     "org.gnome.Mutter.DisplayConfig",0,&local_60);
  if (lVar6 == 0) {
LAB_00405036:
    local_158 = (char *)0x0;
    local_150 = (char *)0x0;
    local_148 = (char *)0x0;
LAB_0040505a:
    if (local_60 != 0) goto LAB_00404f3b;
  }
  else {
    if (local_60 == 0) {
      if (1 < *(int *)PTR___log_level_0061bd30) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: query screen modes via GDBus...");
      }
      pcVar1 = *(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x130) + 8);
      uVar7 = (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x18))(&DAT_004177a5);
      lVar8 = (*pcVar1)(lVar6,"GetResources",uVar7,0,3000,0,&local_60);
      if ((lVar8 == 0) || (local_60 != 0)) {
        if (0 < *(int *)PTR___log_level_0061bd30) {
          pcVar10 = "unknown error";
          if (local_60 != 0) {
            pcVar10 = *(char **)(local_60 + 8);
          }
          FUN_0040fffa(&DAT_0041913e,"prlcc",1,
                       "Warning: Dynamic Resolution:  can\'t execute GDBus method GetResources: %s",
                       pcVar10);
          if (0 < *(int *)PTR___log_level_0061bd30) {
            FUN_0040fffa(&DAT_0041913e,"prlcc",1,"Warning: Dynamic Resolution:  disable GDBus usage"
                        );
          }
        }
        DAT_0061d784 = 1;
        if (lVar8 == 0) goto LAB_00405036;
LAB_004051aa:
        local_158 = (char *)0x0;
        local_150 = (char *)0x0;
        local_148 = (char *)0x0;
      }
      else {
        pcVar10 = (char *)(**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x70))(lVar8);
        bVar13 = pcVar10 == (char *)0x0;
        if (!bVar13) {
          lVar9 = 0x32;
          pcVar11 = pcVar10;
          pcVar12 = "(ua(uxiiiiiuaua{sv})a(uxiausauaua{sv})a(uxuud)ii)";
          do {
            if (lVar9 == 0) break;
            lVar9 = lVar9 + -1;
            bVar13 = *pcVar11 == *pcVar12;
            pcVar11 = pcVar11 + 1;
            pcVar12 = pcVar12 + 1;
          } while (bVar13);
          if (bVar13) {
            if (DAT_0061d784 != 0) goto LAB_004051aa;
            local_68 = 0;
            local_70 = 0;
            local_78 = 0;
            (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x20))
                      (lVar8,"(u@a(uxiiiiiuaua{sv})@a(uxiausauaua{sv})@a(uxuud)ii)",local_44,
                       &local_68,&local_70,&local_78,&local_48,&local_4c);
            if ((param_8 != '\0') && (1 < *(int *)PTR___log_level_0061bd30)) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution:  screen max {%dx%d}",
                           local_48,local_4c);
            }
            iVar3 = (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x38))(local_68);
            iVar4 = (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x38))(local_70);
            iVar5 = (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x38))(local_78);
            if ((param_8 != '\0') && (1 < *(int *)PTR___log_level_0061bd30)) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution:  outputs list:");
            }
            if (iVar4 == 0) {
              local_158 = (char *)0x0;
              local_150 = (char *)0x0;
              local_148 = (char *)0x0;
            }
            else {
              local_158 = (char *)0x0;
              local_150 = (char *)0x0;
              local_148 = (char *)0x0;
              local_100 = 0;
              do {
                local_80 = 0;
                uVar14 = 0;
                (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x40))
                          (local_70,local_100 & 0xffffffff,"(uxiausauau@a{sv})",local_a8,auStack_a0,
                           local_98,0,0,0,0,&local_80);
                if (local_80 != 0) {
                  if (local_158 == (char *)0x0) {
                    local_88 = (char *)0x0;
                    (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x48))
                              (local_80,"vendor","s",&local_88);
                    if (local_88 != (char *)0x0) {
                      local_158 = strdup(local_88);
                      (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x10) + 8))(local_88);
                    }
                  }
                  if (local_148 == (char *)0x0) {
                    local_88 = (char *)0x0;
                    (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x48))
                              (local_80,"product","s",&local_88);
                    if (local_88 != (char *)0x0) {
                      local_148 = strdup(local_88);
                      (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x10) + 8))(local_88);
                    }
                  }
                  if (local_150 == (char *)0x0) {
                    local_88 = (char *)0x0;
                    (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x48))
                              (local_80,"serial","s",&local_88);
                    if (local_88 != (char *)0x0) {
                      local_150 = strdup(local_88);
                      (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x10) + 8))(local_88);
                    }
                  }
                }
                if ((param_8 != '\0') && (1 < *(int *)PTR___log_level_0061bd30)) {
                  FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                               "Dynamic Resolution:   output %d {id=%d, crtc_id=%d, vendor=%s, serial=%s, product=%s}"
                               ,(undefined4)local_100,local_a8[0],CONCAT44(uVar14,local_98[0]),
                               local_158,local_150,local_148);
                }
                if (local_80 != 0) {
                  (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x10))();
                }
                local_100 = local_100 + 1;
              } while (local_100 != (ulong)(iVar4 - 1) + 1);
            }
            if ((param_8 != '\0') && (1 < *(int *)PTR___log_level_0061bd30)) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution:  modes list:");
            }
            if (iVar5 != 0) {
              local_108 = 0;
              do {
                (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x40))
                          (local_78,local_108 & 0xffffffff,"(uxuud)",local_c8,auStack_c0,&local_b8,
                           &local_b4,&local_b0);
                if ((param_8 != '\0') && (1 < *(int *)PTR___log_level_0061bd30)) {
                  FUN_0040fffa(local_b0,&DAT_0041913e,"prlcc",2,
                               "Dynamic Resolution:    mode {id=%d width=%d, height=%d, freq=%.1f}",
                               local_c8[0],local_b8,local_b4);
                }
                local_108 = local_108 + 1;
              } while (local_108 != (ulong)(iVar5 - 1) + 1);
            }
            if ((param_8 != '\0') && (1 < *(int *)PTR___log_level_0061bd30)) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution:  crtcs list:");
            }
            if (iVar3 != 0) {
              local_110 = 0;
              do {
                (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x40))
                          (local_68,local_110 & 0xffffffff,"(uxiiiiiuau@a{sv})",local_f8,auStack_f0,
                           &local_e8,&local_e4,0,0,&local_e0,auStack_dc,&local_88,0);
                while (iVar5 = (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x60))
                                         (local_88,"u",&local_80), iVar5 != 0) {
                  local_d8 = local_d8 | 1 << ((byte)local_80 & 0x1f);
                }
                if ((param_8 != '\0') && (1 < *(int *)PTR___log_level_0061bd30)) {
                  FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                               "Dynamic Resolution:   crtc %d {id=%d, x=%d, y=%d, mode_id=%d}",
                               (undefined4)local_110,local_f8[0],local_e8,local_e4,local_e0);
                }
                if (iVar4 != 0) {
                  local_118 = 0;
                  do {
                    (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x40))
                              (local_70,local_118 & 0xffffffff,"(uxiausauau@a{sv})",local_a8,
                               auStack_a0,local_98,0,0,0,0,0);
                    if (((param_8 != '\0') && (local_98[0] == local_f8[0])) &&
                       (1 < *(int *)PTR___log_level_0061bd30)) {
                      FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                                   "Dynamic Resolution:    crtc output {id=%d}",local_a8[0]);
                    }
                    local_118 = local_118 + 1;
                  } while (local_118 != (ulong)(iVar4 - 1) + 1);
                }
                local_110 = local_110 + 1;
              } while (local_110 != (ulong)(iVar3 - 1) + 1);
            }
            if (local_68 != 0) {
              (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x10))();
            }
            if (local_70 != 0) {
              (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x10))();
            }
            if (local_78 != 0) {
              (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x10))();
            }
            goto LAB_004051ce;
          }
        }
        if ((0 < *(int *)PTR___log_level_0061bd30) &&
           (FUN_0040fffa(&DAT_0041913e,"prlcc",1,
                         "Warning: Dynamic Resolution:  can\'t execute GDBus method GetResources: incorrect actual type %s"
                         ,pcVar10), 0 < *(int *)PTR___log_level_0061bd30)) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",1,"Warning: Dynamic Resolution:  disable GDBus usage");
        }
        DAT_0061d784 = 1;
        local_158 = (char *)0x0;
        local_150 = (char *)0x0;
        local_148 = (char *)0x0;
      }
LAB_004051ce:
      (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xa0) + 0x10))(lVar8);
      goto LAB_0040505a;
    }
    local_158 = (char *)0x0;
    local_150 = (char *)0x0;
    local_148 = (char *)0x0;
LAB_00404f3b:
    (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x100) + 8))();
  }
  if (lVar6 != 0) {
    (*(code *)**(undefined8 **)(PTR_g_PrlGLibAPI_0061bd78 + 0x40))(lVar6);
  }
LAB_00404dc8:
  cVar2 = FUN_004033d0(0);
  if (cVar2 != '\0') {
    FUN_00409650(param_1,&local_58,local_3c,&local_40,param_8);
  }
  if (param_2 == (undefined8 *)0x0) {
    if (local_58 != (void *)0x0) {
      free(local_58);
    }
  }
  else {
    *param_2 = local_58;
  }
  if (param_3 == (undefined8 *)0x0) {
    if (local_158 != (char *)0x0) {
      free(local_158);
    }
  }
  else {
    *param_3 = local_158;
  }
  if (param_4 == (undefined8 *)0x0) {
    if (local_150 != (char *)0x0) {
      free(local_150);
    }
  }
  else {
    *param_4 = local_150;
  }
  if (param_5 == (undefined8 *)0x0) {
    if (local_148 != (char *)0x0) {
      free(local_148);
    }
  }
  else {
    *param_5 = local_148;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_3c[0];
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = local_40;
  }
  return;
}

