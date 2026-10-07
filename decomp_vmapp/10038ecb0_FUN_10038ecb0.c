
void FUN_10038ecb0(uint *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  int local_c8;
  uint local_c4;
  byte local_c0 [4];
  uint local_bc;
  uint local_b8 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = 0;
  param_1[1] = 0xd2;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0x800;
  param_1[6] = 4;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = 2;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x2a) = 1;
  *(undefined2 *)((long)param_1 + 0x33) = 0;
  *(undefined8 *)((long)param_1 + 0x2b) = 0;
  *(undefined2 *)((long)param_1 + 0x39) = 0x101;
  *(undefined4 *)((long)param_1 + 0x35) = 0x1010101;
  *(undefined1 *)((long)param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x3d) = 1;
  *(undefined1 *)((long)param_1 + 0x3e) = 1;
  *(undefined1 *)((long)param_1 + 0x3f) = 1;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((long)param_1 + 0x45) = 0;
  *(undefined1 *)((long)param_1 + 0x46) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 1;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1e] = 2;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((long)param_1 + 0x7d) = 0;
  param_1[0x20] = 1;
  param_1[0x21] = 0x10000;
  *(undefined2 *)(param_1 + 0x22) = 0;
  _Gestalt(0x73797331,local_b8);
  _Gestalt(0x73797332,&local_bc);
  _Gestalt(0x73797333,local_c0);
  uVar13 = (uint)local_c0[0] | (local_bc & 0xff) << 8 | (local_b8[0] & 0xff) << 0x10;
  local_c4 = 0;
  puVar10 = local_b8;
  iVar1 = FUN_1002afda0(param_2,puVar10,0x20,&local_c4);
  uVar3 = 0;
  uVar8 = 0;
  if (iVar1 != 0) {
    uVar8 = local_b8[local_c4] & 0x7ff00;
  }
  *param_1 = uVar8;
  uVar8 = *(uint *)(param_2 + 0x85c);
  param_1[1] = uVar8;
  param_1[2] = 0;
  if ((0xa04ff < uVar13) && (iVar1 != 0)) {
    do {
      uVar12 = *puVar10 & 0x7ff00;
      uVar9 = 0;
      if (uVar12 < 0x31000) {
        if (uVar12 != 0x20900) {
          if (uVar12 == 0x23000) {
            uVar9 = 5;
          }
          else {
LAB_10038ef20:
            uVar9 = (0x13f < uVar8) + 7 + (uint)(0x13f < uVar8);
          }
        }
      }
      else if (uVar12 != 0x31000) {
        if (uVar12 != 0x45000) goto LAB_10038ef20;
        uVar9 = 6;
      }
      uVar12 = uVar9;
      if ((uVar3 != 0) && (uVar12 = uVar3, uVar9 <= uVar3)) {
        uVar12 = uVar9;
      }
      puVar10 = puVar10 + 1;
      iVar1 = iVar1 + -1;
      uVar3 = uVar12;
    } while (iVar1 != 0);
    param_1[2] = uVar12;
  }
  (*DAT_1011c6048)(0xd33,param_1 + 5);
  if (param_1[1] < 0x140) {
    pcVar4 = (char *)(*DAT_1011c61a8)(0x1f03);
    if (pcVar4 != (char *)0x0) {
      pcVar5 = _strstr(pcVar4,"GL_ARB_vertex_array_bgra");
      *(bool *)((long)param_1 + 0x49) = pcVar5 == (char *)0x0;
      pcVar5 = _strstr(pcVar4,"GL_EXT_gpu_shader4");
      if (pcVar5 == (char *)0x0) {
        bVar15 = false;
      }
      else {
        pcVar5 = _strstr(pcVar4,"GL_EXT_provoking_vertex");
        bVar15 = pcVar5 != (char *)0x0;
      }
      *(byte *)((long)param_1 + 0x4a) = bVar15 ^ 1;
      pcVar5 = _strstr(pcVar4,"GL_EXT_framebuffer_blit");
      *(bool *)((long)param_1 + 0x3f) = pcVar5 != (char *)0x0;
      pcVar5 = _strstr(pcVar4,"GL_EXT_bindable_uniform");
      *(bool *)((long)param_1 + 0x4b) = pcVar5 != (char *)0x0;
      pcVar5 = _strstr(pcVar4,"GL_EXT_gpu_shader4");
      *(bool *)(param_1 + 0xe) = pcVar5 != (char *)0x0;
      pcVar5 = _strstr(pcVar4,"ARB_framebuffer_sRGB");
      if (pcVar5 == (char *)0x0) {
        *(undefined1 *)((long)param_1 + 0x36) = 0;
      }
      else {
        pcVar4 = _strstr(pcVar4,"GL_EXT_texture_sRGB_decode");
        *(bool *)((long)param_1 + 0x36) = pcVar4 != (char *)0x0;
      }
    }
  }
  else {
    (*DAT_1011c6048)(0x821d,&local_c8);
    *(undefined1 *)((long)param_1 + 0x36) = 0;
    if (0 < local_c8) {
      iVar1 = 0;
      do {
        pcVar4 = (char *)(*DAT_1011c7670)(0x1f03,iVar1);
        iVar2 = _strcmp("GL_EXT_texture_sRGB_decode",pcVar4);
        if (iVar2 == 0) {
          *(undefined1 *)((long)param_1 + 0x36) = 1;
        }
        else {
          iVar2 = _strcmp("GL_ARB_sampler_objects",pcVar4);
          if (iVar2 == 0) {
            *(undefined1 *)(param_1 + 0x21) = 1;
          }
          else {
            iVar2 = _strcmp("GL_ARB_texture_storage",pcVar4);
            if (iVar2 == 0) {
              *(undefined1 *)((long)param_1 + 0x85) = 1;
            }
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_c8);
    }
  }
  uVar3 = param_1[2];
  if (param_1[5] < 0x1000) {
    if (4 < uVar3) {
      uVar3 = 5;
    }
    param_1[2] = uVar3;
  }
  uVar8 = *(uint *)(param_2 + 0x11930);
  if (uVar3 < *(uint *)(param_2 + 0x11930)) {
    uVar8 = uVar3;
  }
  param_1[2] = uVar8;
  uVar3 = FUN_1007da300("video.dx_profile");
  param_1[2] = uVar3;
  if (param_1[1] < 0x140) {
    uVar8 = 7;
    if (uVar3 < 7) {
      uVar8 = uVar3;
    }
    param_1[2] = uVar8;
  }
  uVar3 = *param_1;
  if (uVar3 == 0x20900) {
LAB_10038f195:
    param_1[3] = 1;
  }
  else if (uVar3 == 0x31000) {
    param_1[3] = 4;
  }
  else {
    if (uVar3 == 0x45000) goto LAB_10038f195;
    param_1[3] = 8;
  }
  iVar1 = FUN_1007da300("video.dx_intz",1);
  if (iVar1 == 0) {
    bVar15 = false;
  }
  else {
    bVar15 = 4 < param_1[3];
  }
  *(bool *)((long)param_1 + 0x3b) = bVar15;
  *(bool *)(param_1 + 10) = *param_1 == 0x32000;
  *(bool *)((long)param_1 + 0x29) = *param_1 == 0x45000;
  if ((char)param_1[0xe] != '\0') {
    iVar1 = FUN_1007da300("video.fast_vs_const_clamping",1);
    *(bool *)(param_1 + 0xe) = iVar1 != 0;
  }
  iVar1 = FUN_1007da300("video.fast_vs_const_access",*(undefined1 *)((long)param_1 + 0x39));
  *(bool *)((long)param_1 + 0x39) = iVar1 != 0;
  *(bool *)(param_1 + 0x12) = *param_1 == 0x2a000;
  iVar1 = FUN_1007da300("video.fast_ps_const_access",*(undefined1 *)((long)param_1 + 0x3a));
  *(bool *)((long)param_1 + 0x3a) = iVar1 != 0;
  uVar3 = *param_1;
  uVar6 = 1;
  if ((int)uVar3 < 0x4a600) {
    if ((int)uVar3 < 0x48000) {
      if ((int)uVar3 < 0x2a500) {
        if ((uVar3 != 0x2a000) && (uVar3 != 0x2a400)) {
LAB_10038f288:
          uVar6 = 0;
        }
      }
      else if ((uVar3 != 0x2a500) && (uVar3 != 0x45000)) goto LAB_10038f288;
    }
    else if (uVar3 != 0x48000) goto LAB_10038f288;
  }
  else if (uVar3 != 0x4a600) goto LAB_10038f288;
  *(undefined1 *)(param_1 + 0xb) = uVar6;
  uVar6 = 1;
  if (((uVar3 != 0x32000) && (uVar3 != 0x36000)) && (uVar3 != 0x37000)) {
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar6;
  *(bool *)((long)param_1 + 0x2d) = uVar3 == 0x20900 || uVar3 == 0x23000;
  uVar3 = FUN_1007da300("video.dx_zblit",2);
  param_1[9] = uVar3;
  uVar3 = *param_1;
  if (*(char *)((long)param_1 + 0x3f) == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if ((int)uVar3 < 0x2a000) {
      if ((uVar3 != 0x20900) && (uVar3 != 0x23000)) {
LAB_10038f30b:
        uVar6 = 1;
      }
    }
    else if ((uVar3 != 0x2a000) && (uVar3 != 0x2a400)) goto LAB_10038f30b;
  }
  *(undefined1 *)((long)param_1 + 0x3f) = uVar6;
  if ((int)uVar3 < 0x31000) {
    if ((uVar3 != 0x20900) && (uVar3 != 0x23000)) {
LAB_10038f34a:
      *(undefined2 *)((long)param_1 + 0x2e) = 0;
      goto LAB_10038f351;
    }
LAB_10038f33f:
    *(undefined2 *)((long)param_1 + 0x2e) = 0x101;
    uVar6 = 0;
  }
  else {
    if (uVar3 != 0x31000) {
      if (uVar3 == 0x45000) goto LAB_10038f33f;
      goto LAB_10038f34a;
    }
    *(undefined2 *)((long)param_1 + 0x2e) = 1;
LAB_10038f351:
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = uVar6;
  uVar8 = param_1[1];
  *(bool *)(param_1 + 0x10) = 0x199 < uVar8;
  *(bool *)((long)param_1 + 0x41) = 0x199 < uVar8;
  *(bool *)((long)param_1 + 0x42) = uVar3 == 0x2a000;
  *(bool *)(param_1 + 0xc) = uVar8 < 0x140;
  iVar1 = FUN_1007da300("video.emulate_rgb10a2",-(uVar13 < 0xa0800) & 1);
  *(bool *)((long)param_1 + 0x31) = iVar1 != 0;
  *(bool *)((long)param_1 + 0x32) = *param_1 == 0x23000;
  if (*(char *)((long)param_1 + 0x2f) == '\0') {
    iVar1 = FUN_1007da300("video.emulate_texture_rg",0);
    *(bool *)((long)param_1 + 0x2f) = iVar1 != 0;
  }
  uVar11 = 2;
  if (*(char *)((long)param_1 + 0x35) == '\0') {
    uVar11 = 0;
  }
  uVar3 = FUN_1007da300("video.fast_srgb",uVar11);
  if (uVar3 < 2) {
    *(undefined1 *)((long)param_1 + 0x36) = 0;
  }
  *(bool *)((long)param_1 + 0x35) = uVar3 != 0;
  iVar1 = FUN_1007da300("video.hardware_clip_planes",*(undefined1 *)((long)param_1 + 0x37));
  *(bool *)((long)param_1 + 0x37) = param_1[1] < 0x140 && iVar1 != 0;
  uVar3 = *param_1;
  if ((int)uVar3 < 0x31000) {
    if ((uVar3 == 0x20900) || (uVar3 == 0x23000)) {
LAB_10038f446:
      *(undefined1 *)((long)param_1 + 0x37) = 0;
    }
  }
  else if ((uVar3 == 0x31000) || (uVar3 == 0x45000)) goto LAB_10038f446;
  *(bool *)((long)param_1 + 0x2a) = uVar3 != 0x20900;
  if (param_1[1] < 0x140) {
    uVar6 = 1;
    if ((int)uVar3 < 0x2a000) {
      if ((uVar3 != 0x20900) && (uVar3 != 0x23000)) goto LAB_10038f484;
    }
    else if ((uVar3 != 0x2a000) && (uVar3 != 0x2a400)) goto LAB_10038f484;
  }
  else {
LAB_10038f484:
    uVar6 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x2b) = uVar6;
  uVar3 = FUN_1007da300("video.dx_multisample",param_1[6]);
  param_1[6] = uVar3;
  iVar1 = FUN_1007da300("video.dx_occlusion",*(undefined1 *)((long)param_1 + 0x43));
  *(bool *)((long)param_1 + 0x43) = iVar1 != 0;
  iVar1 = FUN_1007da300("video.wddm_1_2",*(undefined1 *)((long)param_1 + 0x45));
  *(bool *)((long)param_1 + 0x45) = iVar1 != 0;
  bVar14 = true;
  bVar15 = true;
  if (iVar1 == 0) {
    iVar1 = FUN_1007da300("video.wddm_1_1",7 < param_1[2]);
    bVar15 = iVar1 != 0;
  }
  *(bool *)(param_1 + 0x11) = bVar15;
  iVar1 = FUN_1007da300("video.wddm_overlay",*(undefined1 *)((long)param_1 + 0x46));
  *(bool *)((long)param_1 + 0x46) = iVar1 != 0;
  uVar3 = *param_1;
  if ((int)uVar3 < 0x45000) {
    if ((int)uVar3 < 0x2a000) {
      if ((uVar3 != 0x20900) && (uVar3 != 0x23000)) goto LAB_10038f55b;
    }
    else if ((int)uVar3 < 0x32000) {
      if ((uVar3 != 0x2a000) && (uVar3 != 0x31000)) {
LAB_10038f55b:
        bVar14 = uVar13 < 0xa0800;
      }
    }
    else if ((uVar3 != 0x32000) && (uVar3 != 0x36000)) goto LAB_10038f55b;
  }
  else if (uVar3 != 0x45000) goto LAB_10038f55b;
  *(bool *)((long)param_1 + 0x3e) = bVar14;
  *(bool *)((long)param_1 + 0x3d) = bVar14;
  iVar1 = FUN_1007da300("video.16_textures",bVar14);
  *(bool *)((long)param_1 + 0x3d) = iVar1 != 0;
  iVar1 = FUN_1007da300("video.16_textures",*(undefined1 *)((long)param_1 + 0x3e));
  *(bool *)((long)param_1 + 0x3e) = iVar1 != 0;
  uVar3 = *param_1;
  uVar6 = 1;
  if ((int)uVar3 < 0x2a000) {
    if ((uVar3 != 0x20900) && (uVar3 != 0x23000)) {
LAB_10038f5c4:
      uVar6 = 0;
    }
  }
  else if ((uVar3 != 0x2a000) && (uVar3 != 0x31000)) goto LAB_10038f5c4;
  *(undefined1 *)((long)param_1 + 0x47) = uVar6;
  if ((int)uVar3 < 0x36000) {
    if ((uVar3 != 0x31000) && (uVar3 != 0x32000)) goto LAB_10038f5fe;
LAB_10038f5ef:
    param_1[8] = 1;
    uVar3 = 1;
  }
  else {
    if ((uVar3 == 0x36000) || (uVar3 == 0x37000)) goto LAB_10038f5ef;
LAB_10038f5fe:
    uVar3 = param_1[8];
  }
  uVar3 = FUN_1007da300("video.dx_cmp",uVar3);
  param_1[8] = uVar3;
  uVar3 = *param_1;
  uVar6 = 1;
  if ((int)uVar3 < 0x2a000) {
    if ((uVar3 != 0x20900) && (uVar3 != 0x23000)) {
LAB_10038f641:
      uVar6 = 0;
    }
  }
  else if ((uVar3 != 0x2a000) && (uVar3 != 0x2a400)) goto LAB_10038f641;
  *(undefined1 *)((long)param_1 + 0x33) = uVar6;
  iVar1 = FUN_1007da300("video.reset_on_wakeup",uVar6);
  *(bool *)((long)param_1 + 0x33) = iVar1 != 0;
  uVar3 = *param_1;
  if ((param_1[1] < 0x140) || (((uVar3 != 0x32000 && (uVar3 != 0x36000)) && (uVar3 != 0x37000)))) {
    *(undefined1 *)(param_1 + 0x19) = 0;
    bVar7 = 1;
    if (uVar3 != 0x2a500) goto LAB_10038f694;
  }
  else {
    *(undefined1 *)(param_1 + 0x19) = 1;
LAB_10038f694:
    bVar7 = -(uVar13 < 0xa0804) & uVar3 == 0x2a400;
  }
  *(byte *)((long)param_1 + 0x65) = bVar7;
  iVar1 = FUN_1007da300("video.dx_safe_math",*(undefined1 *)((long)param_1 + 0x66));
  *(bool *)((long)param_1 + 0x66) = iVar1 != 0;
  uVar3 = *param_1;
  uVar6 = 1;
  if ((int)uVar3 < 0x2a000) {
    if ((uVar3 != 0x20900) && (uVar3 != 0x23000)) {
LAB_10038f6ed:
      uVar6 = 0;
    }
  }
  else if ((uVar3 != 0x2a000) && (uVar3 != 0x2a400)) goto LAB_10038f6ed;
  *(undefined1 *)((long)param_1 + 0x67) = uVar6;
  *(bool *)(param_1 + 0x1a) = uVar3 == 0x4a600 || uVar3 == 0x48000;
  *(bool *)((long)param_1 + 0x69) = 0xa07ff < uVar13 && uVar3 == 0x48000;
  iVar1 = FUN_1007da300("video.no_depth_load",uVar3 == 0x4a600);
  *(bool *)((long)param_1 + 0x6a) = iVar1 != 0;
  iVar1 = FUN_1007da300("video.compute_shaders",7 < param_1[2]);
  *(bool *)((long)param_1 + 0x6b) = iVar1 != 0;
  uVar3 = *param_1;
  uVar6 = 1;
  if (((uVar3 != 0x45000) && (uVar3 != 0x48000)) && (uVar3 != 0x4a600)) {
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0x1b) = uVar6;
  if ((int)uVar3 < 0x36000) {
    if ((int)uVar3 < 0x23000) {
      if (uVar3 != 0x20900) goto LAB_10038f7b9;
      goto LAB_10038f7c7;
    }
    if (0x2a3ff < (int)uVar3) {
      if ((uVar3 != 0x2a400) && (uVar3 != 0x2a500)) goto LAB_10038f7b9;
      goto LAB_10038f7c7;
    }
    if ((uVar3 == 0x23000) || (uVar3 == 0x2a000)) goto LAB_10038f7c7;
LAB_10038f7b9:
    if (param_1[1] < 0x19a) goto LAB_10038f7c7;
    param_1[0x1e] = 2;
    uVar11 = 2;
  }
  else {
    if ((uVar3 != 0x36000) && (uVar3 != 0x37000)) goto LAB_10038f7b9;
LAB_10038f7c7:
    param_1[0x1e] = 0;
    uVar11 = 0;
  }
  uVar3 = FUN_1007da300("video.draw_auto_mode",uVar11);
  param_1[0x1e] = uVar3;
  uVar3 = *param_1;
  uVar8 = 1;
  if ((int)uVar3 < 0x2a000) {
    if ((uVar3 != 0x20900) && (uVar3 != 0x23000)) {
LAB_10038f813:
      uVar8 = 0;
    }
  }
  else if ((uVar3 != 0x2a000) && (uVar3 != 0x2a400)) goto LAB_10038f813;
  param_1[0x1c] = uVar8;
  if (0x199 < param_1[1]) {
    (*DAT_1011c6048)(0x88fc,param_1 + 4);
    (*DAT_1011c6048)(0x825b,param_1 + 7);
  }
  puVar10 = param_1 + 0x20;
  *(char *)(param_1 + 0x1d) = *param_1 == 0x2a500 & -(uVar13 < 0xa0805);
  *(bool *)((long)param_1 + 0x7d) = *param_1 == 0x4a600;
  if (0x13f < param_1[1]) {
    (*DAT_1011c6048)(0x8d57,puVar10);
    uVar3 = *param_1;
    if ((int)uVar3 < 0x45000) {
      if ((int)uVar3 < 0x2a500) {
        if ((uVar3 == 0x2a000) || (uVar3 == 0x2a400)) {
LAB_10038f8e1:
          *puVar10 = 1;
        }
      }
      else if ((uVar3 == 0x2a500) || (uVar3 == 0x32000)) goto LAB_10038f8e1;
    }
    else if (((uVar3 == 0x45000) || (uVar3 == 0x48000)) || (uVar3 == 0x4a600)) {
      *puVar10 = 4;
    }
  }
  uVar3 = FUN_1007da300("video.max_samples_dx10",*puVar10);
  *puVar10 = uVar3;
  if (uVar3 < 2) {
    bVar15 = false;
  }
  else {
    bVar15 = 0x199 < param_1[1];
  }
  *(bool *)(param_1 + 0x1f) = bVar15;
  if (uVar13 < 0xa0a00) {
    *(undefined1 *)(param_1 + 0x21) = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = (undefined1)param_1[0x21];
  }
  iVar1 = FUN_1007da300("video.sampler_object",uVar6);
  *(bool *)(param_1 + 0x21) = iVar1 != 0;
  bVar15 = true;
  if (*(char *)((long)param_1 + 0x85) == '\0') {
    bVar15 = 0x1a3 < param_1[1];
  }
  *(bool *)((long)param_1 + 0x85) = bVar15;
  uVar3 = *param_1;
  uVar6 = 0;
  if (((uVar3 != 0x32000) && (uVar3 != 0x36000)) && (uVar6 = 0, uVar3 != 0x37000)) {
    uVar6 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x86) = uVar6;
  iVar1 = FUN_1007da300("video.subtract_base_vertex",uVar6);
  *(bool *)((long)param_1 + 0x86) = iVar1 != 0;
  iVar1 = FUN_1007da300("video.shader_cache",*(undefined1 *)((long)param_1 + 0x87));
  *(bool *)((long)param_1 + 0x87) = iVar1 != 0;
  (*DAT_1011c6048)(0x8b4a,param_1 + 0x17);
  (*DAT_1011c6048)(0x8b49,param_1 + 0x16);
  (*DAT_1011c6048)(0x8ddf,param_1 + 0x18);
  if (*param_1 == 0x4a600) {
    param_1[0x17] = 0x663;
    param_1[0x18] = 0x67f;
  }
  iVar1 = FUN_1007da300("video.cb_range_check",(char)param_1[0x15]);
  *(bool *)(param_1 + 0x15) = iVar1 != 0;
  iVar1 = FUN_1007da300("video.match_patterns",(char)param_1[0x22]);
  *(bool *)(param_1 + 0x22) = iVar1 != 0;
  uVar3 = *param_1;
  uVar6 = 1;
  if ((int)uVar3 < 0x36000) {
    if ((uVar3 == 0x31000) || (uVar3 == 0x32000)) goto LAB_10038fa6a;
  }
  else if ((uVar3 == 0x36000) || (uVar3 == 0x37000)) goto LAB_10038fa6a;
  uVar6 = 0;
LAB_10038fa6a:
  *(undefined1 *)((long)param_1 + 0x89) = uVar6;
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

