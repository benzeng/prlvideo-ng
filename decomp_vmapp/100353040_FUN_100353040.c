
void FUN_100353040(long param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  long *plVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [8];
  long local_1d8;
  long local_1c8;
  undefined1 local_1b8 [384];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_10038e870(local_1e0,local_1b8,0x180);
  local_1f4 = 0;
  if (*(char *)(DAT_1011c8478 + 0x37) == '\0') {
    local_1f4 = param_2;
  }
  pcVar7 = "varying";
  if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
    if (*(char *)(param_1 + 0x9c) == '\0') {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"#version 110\n");
    }
    else {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"#version 120\n");
    }
    if (*(char *)(*(long *)(param_1 + 0x38) + 0xec) != '\0') {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),
                    "#extension GL_ARB_shader_texture_lod : enable\n\n");
    }
    if (param_3 != '\0') {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"#extension GL_EXT_gpu_shader4: enable\n");
    }
  }
  else {
    pcVar7 = "in";
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"#version 150\n");
  }
  plVar8 = (long *)(param_1 + 0x38);
  lVar4 = *plVar8;
  if (*(int *)(lVar4 + 0x84) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"#define i ps_i\n");
    lVar4 = *plVar8;
  }
  if (*(int *)(lVar4 + 0xa0) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"#define b ps_b\n");
    lVar4 = *plVar8;
  }
  if (*(int *)(lVar4 + 0x8c) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"#define oDepth gl_FragDepth\n");
    lVar4 = *plVar8;
  }
  if (*(int *)(lVar4 + 0xac) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),
                  "#define vPos (vec4(gl_FragCoord.x - 0.5, gl_FragCoord.y - 0.5, gl_FragCoord.zw))\n"
                 );
  }
  if (*(int *)(DAT_1011c8478 + 0x20) == 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),
                  "vec4 CMP(vec4 x1, vec4 x2, vec4 a)\n{\n\tif (a.x < 0.0) x1.x = x2.x;\n\tif (a.y < 0.0) x1.y = x2.y;\n\tif (a.z < 0.0) x1.z = x2.z;\n\tif (a.w < 0.0) x1.w = x2.w;\n\treturn x1;\n}\n\n"
                 );
  }
  else {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),
                  "vec4 CMP(vec4 x1, vec4 x2, vec4 a)\n{\n\treturn vec4(a.x < 0.0 ? x2.x : x1.x,\n\t\ta.y < 0.0 ? x2.y : x1.y,\n\t\ta.z < 0.0 ? x2.z : x1.z,\n\t\ta.w < 0.0 ? x2.w : x1.w);\n}\n\n"
                 );
  }
  if (local_1f4 != 0) {
    FUN_10036bfb0(*(undefined8 *)(param_1 + 0x30),local_1e0,local_1f4,pcVar7);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10036c290(*(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x70),pcVar7,param_3,
                  *(undefined1 *)(param_1 + 0x9c));
    if (*(int *)(param_1 + 0x40) == 7) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"%s float v_fogCoord;\n",pcVar7);
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"\n");
  }
  if (*(int *)(*plVar8 + 0x70) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"#define c ps_c\n");
  }
  bVar9 = true;
  if ((param_2 == 0) && (*(int *)(param_1 + 0x98) == 0)) {
    bVar9 = *(int *)(param_1 + 0x40) != 0;
  }
  FUN_100355410(param_1,bVar9);
  if (*(int *)(*plVar8 + 0x70) != 0) {
    if (*(char *)(DAT_1011c8478 + 0x3a) == '\0') {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"vec4 C(int N) { return ps_c[N]; }\n");
    }
    else {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"#define C(N) ps_c[N]\n");
    }
  }
  if (*(char *)(DAT_1011c8478 + 0x3a) != '\0') {
    puVar5 = (undefined8 *)*plVar8;
    puVar6 = (undefined4 *)puVar5[4];
    puVar1 = (undefined4 *)puVar5[5];
    if (puVar1 != puVar6) {
      while( true ) {
        uVar2 = *(undefined8 *)(puVar6 + 1);
        uVar3 = *(undefined8 *)(puVar6 + 3);
        local_1f0._0_4_ = (float)uVar2;
        local_1f0._4_4_ = (float)((ulong)uVar2 >> 0x20);
        local_1e8._0_4_ = (float)uVar3;
        local_1e8._4_4_ = (float)((ulong)uVar3 >> 0x20);
        fVar10 = (float)local_1f0;
        fVar11 = (float)local_1e8;
        fVar12 = local_1e8._4_4_;
        if (*(uint *)*puVar5 < 0xffff0200) {
          if ((float)local_1f0 <= DAT_100b39678) {
            if ((float)local_1f0 < DAT_100b39674) {
              local_1f0 = CONCAT44(local_1f0._4_4_,0xbf800000);
              fVar10 = DAT_100b39674;
              uVar2 = local_1f0;
            }
          }
          else {
            local_1f0 = CONCAT44(local_1f0._4_4_,0x3f800000);
            fVar10 = DAT_100b39678;
            uVar2 = local_1f0;
          }
          local_1f0 = uVar2;
          fVar12 = DAT_100b39678;
          if ((local_1f0._4_4_ <= DAT_100b39678) &&
             (fVar12 = local_1f0._4_4_, local_1f0._4_4_ < DAT_100b39674)) {
            fVar12 = DAT_100b39674;
          }
          local_1f0._4_4_ = fVar12;
          if ((float)local_1e8 <= DAT_100b39678) {
            if ((float)local_1e8 < DAT_100b39674) {
              local_1e8 = CONCAT44(local_1e8._4_4_,0xbf800000);
              fVar11 = DAT_100b39674;
              uVar3 = local_1e8;
            }
          }
          else {
            local_1e8 = CONCAT44(local_1e8._4_4_,0x3f800000);
            fVar11 = DAT_100b39678;
            uVar3 = local_1e8;
          }
          local_1e8 = uVar3;
          fVar12 = DAT_100b39678;
          if ((local_1e8._4_4_ <= DAT_100b39678) &&
             (fVar12 = local_1e8._4_4_, local_1e8._4_4_ < DAT_100b39674)) {
            fVar12 = DAT_100b39674;
          }
        }
        FUN_10038e8e0((double)fVar10,(double)local_1f0._4_4_,(double)fVar11,(double)fVar12,
                      *(undefined8 *)(param_1 + 0x30),
                      "const vec4 C%d = vec4(%#.10g, %#.10g, %#.10g, %#.10g);\n",*puVar6);
        puVar6 = puVar6 + 5;
        if (puVar1 == puVar6) break;
        puVar5 = (undefined8 *)*plVar8;
      }
    }
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),
                "\nvoid main()\n{\nvec4 dst, src0, src1, src2;\nbvec3 gamma_cmp;\n");
  if (*(int *)(param_1 + 0x40) == 7) {
    if (*(long *)(param_1 + 0x70) == 0) {
      pcVar7 = "gl_FogFragCoord";
    }
    else {
      pcVar7 = "v_fogCoord";
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"float fogCoord = %s;\n",pcVar7);
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"bvec4 bdst;\n\n");
  FUN_100355900(param_1);
  if (local_1f4 != 0) {
    if (local_1d8 == 0) {
      local_1d8 = local_1c8;
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),local_1d8);
  }
  FUN_10038e8c0(local_1e0);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

