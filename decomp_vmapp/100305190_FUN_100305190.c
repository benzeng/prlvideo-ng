
void FUN_100305190(undefined8 param_1,char *param_2,ulong param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int local_c4;
  char *local_c0;
  char *local_b0;
  ulong local_a8;
  char *local_98 [6];
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_c0 = "GL_APPLE_vertex_array_object";
  local_98[0] = "GL_APPLE_vertex_array_object";
  local_98[1] = "GL_ARB_vertex_array_object";
  local_98[2] = "GL_ARB_map_range_buffer";
  local_98[3] = "";
  local_98[4] = "GL_NV_primitive_restart";
  local_98[5] = "";
  pcVar10 = "GL_ARB_color_buffer_float";
  local_68 = "GL_ARB_color_buffer_float";
  pcVar4 = _strstr((char *)param_4,"GL_APPLE_float_pixels");
  if (pcVar4 == (char *)0x0) {
    pcVar10 = "";
  }
  local_58 = "GL_ARB_get_program_binary";
  local_50 = "";
  local_48 = 0;
  uStack_40 = 0;
  local_b0 = param_2;
  local_a8 = param_3;
  local_60 = pcVar10;
  if (0x10 < param_3) {
    builtin_strncpy(param_2,"GL_EXT_texture3D",0x10);
    local_b0 = param_2 + 0x10;
    local_c4 = 1;
    local_a8 = param_3 - 0x11;
LAB_1003052de:
    do {
      pbVar11 = param_4;
      bVar1 = *pbVar11;
      sVar5 = 0;
      param_4 = pbVar11 + 1;
    } while (bVar1 == 0x20);
    while ((bVar1 | 0x20) != 0x20) {
      lVar12 = sVar5 + 1;
      sVar5 = sVar5 + 1;
      bVar1 = pbVar11[lVar12];
    }
    if (sVar5 != 0) {
      param_4 = pbVar11 + sVar5;
      uVar8 = 1;
      uVar14 = 0;
      pcVar4 = local_c0;
      if (local_c0 != (char *)0x0) goto LAB_100305340;
      goto LAB_10030538a;
    }
  }
LAB_10030544a:
  *local_b0 = '\0';
  local_b0 = local_b0 + 1;
  lVar12 = 0;
  do {
    pcVar4 = *(char **)((long)&PTR_s_GL_ARB_texture_env_combine_100bbb960 + lVar12);
    pcVar10 = *(char **)((long)&PTR_s_GL_EXT_texture_env_combine_100bbb968 + lVar12);
    sVar5 = _strlen(pcVar10);
    pcVar6 = _strstr(param_2,pcVar4);
    if (((pcVar6 != (char *)0x0) && (sVar7 = _strlen(pcVar4), (byte)(pcVar6[sVar7] | 0x20U) == 0x20)
        ) && ((int)pcVar6 - (int)param_2 != -1)) {
      pcVar4 = _strstr(param_2,pcVar10);
      iVar13 = -1;
      if ((pcVar4 != (char *)0x0) &&
         (sVar7 = _strlen(pcVar10), (byte)(pcVar4[sVar7] | 0x20U) == 0x20)) {
        iVar13 = (int)pcVar4 - (int)param_2;
      }
      if ((sVar5 < local_a8) && (iVar13 == -1)) {
        local_b0[-1] = ' ';
        _memcpy(local_b0,pcVar10,sVar5);
        local_a8 = local_a8 - (sVar5 + 1);
        local_b0[sVar5] = '\0';
        local_b0 = local_b0 + sVar5 + 1;
      }
    }
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x40);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100305340:
  do {
    iVar13 = _strncmp((char *)pbVar11,pcVar4,sVar5);
    if (iVar13 == 0) {
      pbVar11 = (byte *)local_98[uVar14 * 2 + 1];
      sVar5 = _strlen((char *)pbVar11);
      break;
    }
    uVar14 = (ulong)uVar8;
    pcVar4 = local_98[uVar14 * 2];
    uVar8 = uVar8 + 1;
  } while (pcVar4 != (char *)0x0);
  if (sVar5 != 0) {
LAB_10030538a:
    iVar13 = 0;
    iVar9 = 0xcb;
    do {
      iVar15 = (iVar9 + iVar13) / 2;
      iVar3 = _strncmp((char *)pbVar11,(&PTR_s_GL_ARB_color_buffer_float_1011172e0)[iVar15],sVar5);
      if (iVar3 == 0) {
        if (local_a8 < sVar5 + 1) goto LAB_10030544a;
        if (0 < local_c4) {
          *local_b0 = ' ';
          local_b0 = local_b0 + 1;
          local_c0 = local_98[0];
        }
        local_c4 = local_c4 + 1;
        _memcpy(local_b0,pbVar11,sVar5);
        local_b0 = local_b0 + sVar5;
        local_a8 = local_a8 - (sVar5 + 1);
        break;
      }
      iVar2 = iVar15 + 1;
      if (iVar3 < 0) {
        iVar9 = iVar15;
        iVar2 = iVar13;
      }
      iVar13 = iVar2;
    } while (iVar13 < iVar9);
  }
  goto LAB_1003052de;
}

