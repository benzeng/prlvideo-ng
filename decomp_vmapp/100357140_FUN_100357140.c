
undefined8
FUN_100357140(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,char param_5,
             undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  char *pcVar15;
  undefined1 local_728 [8];
  long local_720;
  long local_710;
  undefined1 local_700 [8];
  long local_6f8;
  long local_6e8;
  undefined1 local_6d8 [8];
  long local_6d0;
  long local_6c0;
  undefined1 local_6b0 [8];
  long local_6a8;
  long local_698;
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  undefined1 local_668 [560];
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_1[7] = param_2;
  param_1[8] = param_3;
  param_1[9] = param_7;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x78);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(param_3 + 0x7c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x84);
  *(bool *)(param_1 + 6) = *(int *)(param_3 + 0x94) == 7;
  uVar1 = *(uint *)(param_3 + 0x74);
  uVar12 = *(uint *)(DAT_1011c8478 + 4);
  pcVar15 = "varying";
  if (0x13f < uVar12) {
    pcVar15 = "in";
  }
  FUN_10038e870(local_6b0,local_438,0x400);
  if (uVar12 < 0x140) {
    if (*(int *)(param_1[8] + 0x60) == 0) {
      FUN_10038e8e0(param_6,"#version 110\n\n");
    }
    else {
      FUN_10038e8e0(param_6,"#version 120\n\n");
    }
    FUN_10038e8e0(param_6,"#define ps_out0 gl_FragData[0]\n");
    if (param_5 != '\0') {
      FUN_10038e8e0(param_6,"#define ps_out1 gl_FragData[1]\n");
    }
  }
  else {
    FUN_10038e8e0(param_6,"#version 150\n\nout vec4 ps_out0;\n");
    if (param_5 != '\0') {
      FUN_10038e8e0(param_6,"out vec4 ps_out1;\n");
    }
  }
  FUN_10038e8e0(param_6,"\n");
  if (param_4 != 0) {
    lVar7 = param_1[8];
    iVar8 = 0;
    if (*(int *)(lVar7 + 0x5c) != 0) {
      FUN_10038e8e0(param_6,"#extension GL_EXT_gpu_shader4: enable\n");
      lVar7 = param_1[8];
      iVar8 = *(int *)(lVar7 + 0x5c);
    }
    FUN_10036c290(param_6,param_4,pcVar15,iVar8 != 0,*(int *)(lVar7 + 0x60) != 0);
    if (*(char *)(param_1 + 6) != '\0') {
      FUN_10038e8e0(param_6,"%s float v_fogCoord;\n",pcVar15);
    }
    FUN_10038e8e0(param_6,"\n");
  }
  uVar5 = FUN_10036b910();
  FUN_10038e8e0(param_6,"%s\n",uVar5);
  FUN_10038e8e0(local_6b0,"\nvoid main(void)\n{\n");
  if (uVar1 != 0) {
    FUN_10038e8e0(local_6b0,"vec4 in_tex_coord[%u];\n",(ulong)uVar1);
  }
  if (*(char *)(param_1 + 6) != '\0') {
    pcVar9 = "gl_FogFragCoord";
    if (param_4 != 0) {
      pcVar9 = "v_fogCoord";
    }
    FUN_10038e8e0(local_6b0,"float fogCoord = %s;\n",pcVar9);
  }
  FUN_10038e8e0(local_6b0,"bvec3 gamma_cmp;\n\n");
  if ((*(char *)(DAT_1011c8478 + 0x37) == '\0') && (*(int *)(param_1[8] + 0x8c) != 0)) {
    FUN_10036bfb0(param_6,local_6b0,*(int *)(param_1[8] + 0x8c),pcVar15);
  }
  FUN_100357970(param_1,local_6b0,param_4);
  FUN_10038e8e0(local_6b0,"vec4 out_color = in_color;\n");
  if (uVar1 != 0) {
    FUN_10038e870(local_6d8,local_668,0x230);
    uVar13 = 0;
    bVar2 = false;
    bVar4 = false;
    do {
      uVar12 = (uint)uVar13;
      if (bVar2) {
        uVar10 = 1 << ((byte)uVar13 & 0x1f);
      }
      else {
        uVar10 = 1 << ((byte)uVar13 & 0x1f);
        if ((*(uint *)(param_1 + 2) >> (uVar12 & 0x1f) & 1) != 0) {
          bVar2 = true;
          FUN_10038e8e0(local_6b0,"vec4 temp_color = vec4(0.0, 0.0, 0.0, 1.0);\n");
        }
      }
      if ((*(uint *)(param_1 + 1) & uVar10) != 0) {
        FUN_10038e870(local_700,local_678,0x10);
        FUN_10038e8e0(local_700,"tex_colors%d",uVar13 & 0xffffffff);
        uVar10 = *(uint *)(param_1[7] + (ulong)(uVar12 * 0x40 + 0x118) * 4);
        cVar3 = FUN_100399b30(*param_1,uVar13 & 0xffffffff);
        if (cVar3 == '\0') {
          uVar5 = FUN_100399b00(*param_1,uVar13 & 0xffffffff);
          uVar6 = FUN_10036bd80(uVar13 & 0xffffffff);
          FUN_10038e8e0(param_6,"uniform %s %s;\n",uVar5,uVar6);
        }
        cVar3 = FUN_100399b30(*param_1,uVar13 & 0xffffffff);
        if (cVar3 == '\0') {
          if ((uVar13 == 0) ||
             (uVar14 = uVar12 - 1, (*(uint *)((long)param_1 + 0xc) >> (uVar14 & 0x1f) & 1) == 0)) {
            FUN_10038e870(local_728,local_688,0x10);
            FUN_10038e8e0(local_728,"in_tex_coord[%d]",uVar13 & 0xffffffff);
            FUN_10038e8e0(local_6b0,"vec4 ");
            lVar11 = local_6e8;
            lVar7 = local_6f8;
            uVar5 = *param_1;
            uVar6 = FUN_10036bd80(uVar13 & 0xffffffff);
            if (lVar7 != 0) {
              lVar11 = lVar7;
            }
            lVar7 = local_720;
            if (local_720 == 0) {
              lVar7 = local_710;
            }
            FUN_100399db0(uVar5,uVar13 & 0xffffffff,local_6b0,uVar10,lVar11,uVar6,lVar7);
            FUN_10038e8c0(local_728);
          }
          else {
            if (!bVar4) {
              bVar4 = true;
              FUN_10038e8e0(local_6b0,"vec4 ");
            }
            FUN_10038e8e0(local_6b0,"bump_coord = in_tex_coord[%u];\n",uVar13 & 0xffffffff);
            if ((uVar10 & 0x100) != 0) {
              if ((uVar10 & 0xfffffeff) == 4) {
                FUN_10038e8e0(local_6b0,"bump_coord.xyz /= bump_coord.w;\n");
              }
              else if ((uVar10 & 0xfffffeff) == 3) {
                FUN_10038e8e0(local_6b0,"bump_coord.xy /= bump_coord.z;\n");
              }
            }
            FUN_10038e8e0(local_6b0,
                          "bump_coord.x += dot(tex_colors%u.rg, c_ps[%u * BUMP_STRIDE + OFF_BUMP_MAT].xy);\nbump_coord.y += dot(tex_colors%u.rg, c_ps[%u * BUMP_STRIDE + OFF_BUMP_MAT].zw);\n"
                          ,uVar14,uVar14,uVar14,uVar14);
            FUN_10038e8e0(local_6b0,"vec4 ");
            lVar11 = local_6e8;
            lVar7 = local_6f8;
            uVar5 = *param_1;
            uVar6 = FUN_10036bd80(uVar13 & 0xffffffff);
            if (lVar7 != 0) {
              lVar11 = lVar7;
            }
            FUN_100399db0(uVar5,uVar13 & 0xffffffff,local_6b0,0,lVar11,uVar6,"bump_coord");
          }
        }
        else {
          lVar7 = local_6f8;
          if (local_6f8 == 0) {
            lVar7 = local_6e8;
          }
          FUN_10038e8e0(local_6b0,"vec4 %s = vec4(0.0, 0.0, 0.0, 1.0);\n",lVar7);
        }
        FUN_10038e8c0(local_700);
      }
      FUN_100357d40(param_1,local_6d8,uVar13 & 0xffffffff,0);
      if (*(int *)(param_1[7] + (ulong)(uVar12 * 0x40 + 0x101) * 4) != 0x18) {
        FUN_100357d40(param_1,local_6d8,uVar13 & 0xffffffff,1);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar1);
    if (local_6d0 == 0) {
      local_6d0 = local_6c0;
    }
    FUN_10038e8e0(local_6b0,local_6d0);
    FUN_10038e8c0(local_6d8);
  }
  if (*(int *)(param_1[7] + 0x74) != 0) {
    FUN_10038e8e0(local_6b0,"out_color.rgb = clamp(out_color.rgb + in_specular.rgb, 0.0, 1.0);\n");
  }
  lVar7 = param_1[8];
  if (*(int *)(lVar7 + 0xa4) != 0) {
    FUN_10036c060(local_6b0,"out_color");
    lVar7 = param_1[8];
  }
  if (*(int *)(lVar7 + 0x94) != 0) {
    FUN_10036c1a0(local_6b0,"out_color");
    lVar7 = param_1[8];
  }
  if (*(int *)(lVar7 + 0xb4) != 0) {
    FUN_10036c110(local_6b0,"out_color");
  }
  FUN_10038e8e0(local_6b0,"ps_out0 = out_color;\n");
  if (param_5 != '\0') {
    FUN_10038e8e0(local_6b0,"ps_out1 = vec4(gl_FragCoord.z, 1.0, 1.0, 1.0);\n");
  }
  FUN_10038e8e0(local_6b0,"}\n");
  if (local_6a8 == 0) {
    local_6a8 = local_698;
  }
  FUN_10038e8e0(param_6,local_6a8);
  FUN_10038e8c0(local_6b0);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

