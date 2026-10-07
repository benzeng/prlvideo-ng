
void FUN_100399e10(long param_1,uint param_2,undefined8 param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,char *param_8,char *param_9,undefined8 param_10,
                  undefined8 param_11)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  char *pcVar7;
  undefined **ppuVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 local_a0 [8];
  long local_98;
  long local_88;
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = (ulong)param_2;
  iVar2 = *(int *)(param_1 + 8 + uVar5 * 0xc);
  FUN_10038e870(local_a0,local_78,0x40);
  if (4 < param_4) goto LAB_10039a342;
  piVar1 = (int *)(param_1 + 8 + uVar5 * 0xc);
  uVar4 = *(uint *)(DAT_1011c8478 + 4);
  switch(param_4) {
  case 0:
    if ((iVar2 == 4) &&
       (FUN_10038e8e0(local_a0,"vec4(%s.xy, 0.0, 1.0)",param_7), param_7 = local_98, local_98 == 0))
    {
      param_7 = local_88;
    }
    break;
  case 1:
    FUN_10038e8e0(param_3,"%s = ",param_5);
    if ((iVar2 == 4) && (0x13f < uVar4)) {
      FUN_10038e8e0(param_3,"vec4(");
    }
    iVar3 = *piVar1;
    if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
      pcVar13 = ".xyz";
      pcVar7 = "texture2DLod";
      pcVar9 = "texture3DLod";
      pcVar12 = (char *)0x0;
      switch(iVar3) {
      case 2:
        break;
      case 3:
        pcVar9 = "textureCubeLod";
        break;
      case 4:
        pcVar7 = "shadow2DLod";
      case 1:
switchD_10039a046_caseD_1:
        pcVar13 = ".xy";
        pcVar9 = pcVar7;
        if (iVar3 == 4) {
          pcVar13 = ".xyz";
        }
        break;
      default:
        goto switchD_10039a046_default;
      }
    }
    else {
      pcVar12 = "textureLod";
switchD_10039a046_default:
      pcVar7 = pcVar12;
      pcVar9 = pcVar7;
      if (iVar3 - 2U < 2) {
        pcVar13 = ".xyz";
      }
      else {
        if ((iVar3 == 1) || (iVar3 == 4)) goto switchD_10039a046_caseD_1;
        pcVar13 = (char *)0x0;
      }
    }
    if (*(char *)(param_1 + 0x11 + uVar5 * 0xc) == '\0') {
      param_9 = "0.0";
    }
    FUN_10038e8e0(param_3,"%s(%s, %s%s, %s)",pcVar9,param_6,param_7,pcVar13,param_9);
    if (iVar2 == 4) {
      if (0x13f < uVar4) {
        FUN_10038e8e0(param_3,")");
      }
      FUN_10038e8e0(param_3,".xxxx");
    }
    FUN_10038e8e0(param_3,";\n");
    goto LAB_10039a342;
  case 2:
    if (uVar4 < 0x140) {
      pcVar12 = (char *)0x0;
      if (*piVar1 - 1U < 3) {
        pcVar12 = (&PTR_s_texture2DGradARB_100bbd5f0)[(int)(*piVar1 - 1U)];
      }
    }
    else {
      pcVar12 = "textureGrad";
    }
    uVar4 = *piVar1 - 1;
    puVar11 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
    if (uVar4 < 4) {
      puVar10 = (&PTR_s__xy_100bbd5d0)[(int)uVar4];
      puVar11 = (undefined *)0x0;
      if (uVar4 < 3) {
        puVar11 = (&PTR_s__xy_100bbd390)[(int)uVar4];
      }
    }
    FUN_10038e8e0(param_3,"%s = %s(%s, %s%s, %s%s, %s%s);\n",param_5,pcVar12,param_6,param_7,puVar10
                  ,param_10,puVar11,param_11,puVar11);
    goto LAB_10039a342;
  }
  FUN_10038e8e0(param_3,"%s = ",param_5);
  if ((iVar2 == 4) && (0x13f < uVar4)) {
    FUN_10038e8e0(param_3,"vec4(");
  }
  iVar3 = *piVar1;
  if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
    puVar10 = (undefined *)0x0;
    switch(iVar3) {
    case 1:
      puVar10 = (undefined *)0x0;
      if (param_4 < 5) {
        ppuVar8 = &PTR_s_texture2D_100bbd3b0;
LAB_10039a192:
        puVar10 = ppuVar8[(int)param_4];
      }
      break;
    case 2:
      puVar10 = (undefined *)0x0;
      if (param_4 < 5) {
        puVar10 = (&PTR_s_texture3D_100bbd410)[(int)param_4];
      }
      goto switchD_100399fbb_caseD_2;
    case 3:
      pcVar12 = ".xyz";
      puVar10 = (undefined *)0x0;
      if (param_4 < 5) {
        puVar10 = (&PTR_s_textureCube_100bbd440)[(int)param_4];
      }
      goto switchD_100399fbb_caseD_3;
    case 4:
      puVar10 = (undefined *)0x0;
      if (param_4 < 5) {
        ppuVar8 = &PTR_s_shadow2D_100bbd3e0;
        goto LAB_10039a192;
      }
      break;
    default:
      goto switchD_100399f57_default;
    }
switchD_100399fbb_caseD_1:
    if (param_4 == 4) {
      pcVar12 = "";
    }
    else if (param_4 == 3) {
      pcVar12 = ".xyz";
    }
    else {
      if (2 < param_4) goto switchD_100399fbb_default;
      pcVar12 = ".xy";
      if (iVar3 == 4) {
        pcVar12 = ".xyz";
      }
    }
  }
  else {
    puVar10 = (undefined *)0x0;
    uVar6 = param_4;
    if (iVar3 == 3) {
      uVar6 = 0;
    }
    if (param_4 != 4) {
      uVar6 = param_4;
    }
    if (uVar6 < 5) {
      puVar10 = (&PTR_s_texture_100bbd470)[(int)uVar6];
    }
switchD_100399f57_default:
    pcVar12 = ".xyz";
    switch(iVar3) {
    case 1:
    case 4:
      goto switchD_100399fbb_caseD_1;
    case 2:
switchD_100399fbb_caseD_2:
      pcVar12 = ".xyz";
      if (param_4 == 4) {
        pcVar12 = "";
      }
      break;
    case 3:
      break;
    default:
switchD_100399fbb_default:
      pcVar12 = (char *)0x0;
    }
  }
switchD_100399fbb_caseD_3:
  FUN_10038e8e0(param_3,"%s(%s, %s%s",puVar10,param_6,param_7,pcVar12);
  if ((param_8 != (char *)0x0) && (*param_8 != '\0')) {
    FUN_10038e8e0(param_3,", %s");
  }
  FUN_10038e8e0(param_3,")");
  if (iVar2 == 4) {
    if (0x13f < uVar4) {
      FUN_10038e8e0(param_3,")");
    }
    FUN_10038e8e0(param_3,".xxxx");
  }
  FUN_10038e8e0(param_3,";\n");
LAB_10039a342:
  switch(*(undefined4 *)(param_1 + 0xc + uVar5 * 0xc)) {
  case 1:
    FUN_10038e8e0(param_3,"%s.xy = %s.xy * 2.0 - 256.0/255.0;\n",param_5,param_5);
    FUN_10038e8e0(param_3,"%s.zw = vec2(1.0, 1.0);\n",param_5);
    break;
  case 2:
    FUN_10038e8e0(param_3,"%s.xy = %s.xy * 2.0 - 65536.0/65535.0;\n",param_5,param_5);
    FUN_10038e8e0(param_3,"%s.zw = vec2(1.0, 1.0);\n",param_5);
    break;
  case 3:
    FUN_10038e8e0(param_3,"%s.xy = %s.xy * 2.0 - 256.0/255.0;\n",param_5,param_5);
    break;
  case 4:
    FUN_10038e8e0(param_3,"%s = %s * 2.0 - 256.0/255.0;\n",param_5,param_5);
    break;
  case 5:
    if (*(char *)(DAT_1011c8478 + 0x35) == '\0') {
      FUN_10038e8e0(param_3,"%s = lessThanEqual(%s.rgb, vec3(0.04045)); \n","gamma_cmp",param_5,
                    param_5,param_5);
      FUN_10038e8e0(param_3,
                    "%s.rgb = vec3(%s) * %s.rgb / 12.92 + vec3( not(%s) ) * pow((%s.rgb + 0.055) / 1.055, vec3(2.4)); \n"
                    ,param_5,"gamma_cmp",param_5,"gamma_cmp",param_5);
    }
    else {
      FUN_10038e8e0(param_3,
                    "%s.rgb = %s.rgb*(vec3(0.04575050)+%s.rgb*(vec3(0.49404687)+%s.rgb*(vec3(0.61583805)+vec3(-0.15612379)*%s.rgb))); \n"
                    ,param_5,param_5,param_5,param_5,param_5);
    }
    break;
  case 6:
    FUN_10038e8e0(param_3,"%s.yzw = vec3(1.0, 1.0, 1.0);\n",param_5);
    break;
  case 7:
    FUN_10038e8e0(param_3,"%s.zw = vec2(1.0, 1.0);\n",param_5);
    break;
  case 8:
    FUN_10038e8e0(param_3,"%s = vec4(0.0, 0.0, 0.0, %s.x);\n",param_5,param_5);
    break;
  case 9:
    FUN_10038e8e0(param_3,"%s.yzw = vec3(%s.xx, 1.0);\n",param_5,param_5);
    break;
  case 10:
    FUN_10038e8e0(param_3,"%s.w = %s.y;\n%s.yz = %s.xx;\n",param_5,param_5,param_5,param_5);
    break;
  case 0xb:
    FUN_10038e8e0(param_3,"%s.yzw = %s.xxx;\n",param_5,param_5);
    break;
  case 0xc:
    FUN_10038e8e0(param_3,"%s = vec4(%s.yx, 1.0, 1.0);\n",param_5,param_5);
  }
  if (*(char *)(param_1 + 0x10 + uVar5 * 0xc) != '\0') {
    FUN_10038e8e0(param_3,
                  "if(all(greaterThanEqual(%s, c_ps[OFF_COLOR_KEY + %u] - COLOR_KEY_EPS)) && all(lessThan(%s, c_ps[OFF_COLOR_KEY + %u] + COLOR_KEY_EPS))) discard; \n"
                  ,param_5,param_2,param_5,param_2);
  }
  FUN_10038e8c0(local_a0);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

