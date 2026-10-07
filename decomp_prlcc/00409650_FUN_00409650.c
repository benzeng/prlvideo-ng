
void FUN_00409650(long param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                 char param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar15;
  char *local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  long local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  uVar12 = *(undefined8 *)((long)*(int *)(param_1 + 0xe0) * 0x80 + 0x10 + *(long *)(param_1 + 0xe8))
  ;
  lVar4 = FUN_004089a0();
  if (lVar4 == 0) {
    return;
  }
  if (1 < *(int *)PTR___log_level_0061bd30) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                 "Dynamic Resolution: query output configuration via RandR12...");
  }
  (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 0x10))
            (param_1,uVar12,&local_34,&local_38,&local_3c,&local_40);
  if (((param_5 == '\0') || (*(int *)PTR___log_level_0061bd30 < 2)) ||
     (FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                   "Dynamic Resolution:  RandR12 screen size min={%dx%d}, max={%dx%d}",local_34,
                   local_38,CONCAT44(uVar15,local_3c),local_40),
     *(int *)PTR___log_level_0061bd30 < 2)) {
    iVar13 = *(int *)(lVar4 + 0x38);
  }
  else {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2);
    iVar13 = *(int *)(lVar4 + 0x38);
  }
  if (iVar13 < 1) {
    local_60 = (char *)0x0;
    local_58 = 0;
    local_54 = 0;
  }
  else {
    local_60 = (char *)0x0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
    do {
      plVar5 = (long *)(local_48 + *(long *)(lVar4 + 0x30));
      lVar11 = 0;
      lVar14 = *plVar5;
      iVar13 = (int)plVar5[2];
      if (iVar13 != -1) {
        lVar11 = *(long *)(*(long *)(lVar4 + 0x20) + (long)iVar13 * 0x18);
      }
      if (((*(char **)(lVar14 + 0x10) == (char *)0x0) || (param_2 == (undefined8 *)0x0)) ||
         (local_60 != (char *)0x0)) {
        bVar3 = false;
      }
      else {
        local_60 = strdup(*(char **)(lVar14 + 0x10));
        bVar3 = true;
      }
      if ((param_5 != '\0') && (1 < *(int *)PTR___log_level_0061bd30)) {
        lVar6 = local_48 + *(long *)(lVar4 + 0x30);
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                     "Dynamic Resolution:   output %d {id=%d, name=%s, crtc_id=%d, connected=%d}",
                     local_50,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar14 + 0x10),
                     (int)*(undefined8 *)(lVar14 + 8),*(undefined4 *)(lVar6 + 0x14));
      }
      iVar13 = 0;
      lVar6 = 0;
      if (0 < *(int *)(lVar14 + 0x50)) {
LAB_004097e7:
        do {
          iVar7 = 0;
          lVar8 = 0;
          iVar9 = *(int *)(*(long *)(lVar4 + 0x40) + 0x30);
          if (0 < iVar9) {
            do {
              puVar10 = (ulong *)(lVar8 + *(long *)(*(long *)(lVar4 + 0x40) + 0x38));
              lVar8 = lVar8 + 0x50;
              uVar2 = *(ulong *)(*(long *)(lVar14 + 0x58) + lVar6);
              if (uVar2 == *puVar10) {
                if ((param_5 != '\0') && (1 < *(int *)PTR___log_level_0061bd30)) {
                  if ((lVar11 == 0) || (uVar12 = 0x2a, uVar2 != *(ulong *)(lVar11 + 0x18))) {
                    uVar12 = 0x20;
                  }
                  FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                               "Dynamic Resolution:    %cmode %d {id=%d width=%d, height=%d, name=\'%s\'}"
                               ,uVar12,iVar13,uVar2 & 0xffffffff,(int)puVar10[1],
                               *(undefined4 *)((long)puVar10 + 0xc),puVar10[7]);
                }
                if (((bVar3) && (lVar11 != 0)) && (*puVar10 == *(ulong *)(lVar11 + 0x18))) {
                  if (param_3 != (undefined4 *)0x0) {
                    local_58 = (undefined4)puVar10[1];
                  }
                  if (param_4 != (undefined4 *)0x0) {
                    local_54 = *(undefined4 *)((long)puVar10 + 0xc);
                    iVar13 = iVar13 + 1;
                    lVar6 = lVar6 + 8;
                    if (*(int *)(lVar14 + 0x50) <= iVar13) goto LAB_0040982e;
                    goto LAB_004097e7;
                  }
                }
                break;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar9);
          }
          iVar13 = iVar13 + 1;
          lVar6 = lVar6 + 8;
        } while (iVar13 < *(int *)(lVar14 + 0x50));
      }
LAB_0040982e:
      local_50 = local_50 + 1;
      local_48 = local_48 + 0x18;
    } while (local_50 < *(int *)(lVar4 + 0x38));
  }
  if (param_5 != '\0') {
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution:  RandR12 modes list:");
    }
    lVar14 = *(long *)(lVar4 + 0x40);
    if (0 < *(int *)(lVar14 + 0x30)) {
      iVar13 = 0;
      lVar11 = 0;
      do {
        if (1 < *(int *)PTR___log_level_0061bd30) {
          puVar1 = (undefined8 *)(*(long *)(lVar14 + 0x38) + lVar11);
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                       "Dynamic Resolution:    mode %d {id=%d width=%d, height=%d, name=\'%s\'}",
                       iVar13,*puVar1,*(undefined4 *)(puVar1 + 1),
                       *(undefined4 *)((long)puVar1 + 0xc),puVar1[7]);
          lVar14 = *(long *)(lVar4 + 0x40);
        }
        iVar13 = iVar13 + 1;
        lVar11 = lVar11 + 0x50;
      } while (iVar13 < *(int *)(lVar14 + 0x30));
    }
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution:  RandR12 crtcs list:");
    }
    if (0 < *(int *)(lVar4 + 0x28)) {
      iVar13 = 0;
      lVar14 = 0;
      do {
        plVar5 = (long *)(lVar14 + *(long *)(lVar4 + 0x20));
        lVar11 = *plVar5;
        if (1 < *(int *)PTR___log_level_0061bd30) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                       "Dynamic Resolution:   crtc %d {id=%d, x=%d, y=%d, width=%d, height=%d, mode_id=%d}"
                       ,iVar13,plVar5[1],*(undefined4 *)(lVar11 + 8),*(undefined4 *)(lVar11 + 0xc),
                       *(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                       (int)*(undefined8 *)(lVar11 + 0x18));
        }
        if (0 < *(int *)(lVar11 + 0x24)) {
          iVar9 = 0;
          lVar6 = 0;
          do {
            if (1 < *(int *)PTR___log_level_0061bd30) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                           "Dynamic Resolution:    crtc %d output %d {output_id=%d}",iVar13,iVar9,
                           *(ulong *)(lVar6 + *(long *)(lVar11 + 0x28)) & 0xffffffff);
            }
            iVar9 = iVar9 + 1;
            lVar6 = lVar6 + 8;
          } while (iVar9 < *(int *)(lVar11 + 0x24));
        }
        iVar13 = iVar13 + 1;
        lVar14 = lVar14 + 0x18;
      } while (iVar13 < *(int *)(lVar4 + 0x28));
    }
  }
  FUN_004088e0(lVar4);
  if (param_2 == (undefined8 *)0x0) {
    if (local_60 != (char *)0x0) {
      free(local_60);
    }
  }
  else {
    *param_2 = local_60;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_58;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_54;
  }
  return;
}

