
void FUN_1003952f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  char cVar11;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  char cVar15;
  ulong uVar16;
  char *pcVar17;
  char cVar18;
  long lVar19;
  char *pcVar20;
  byte bVar21;
  bool bVar22;
  undefined4 local_34;
  
  lVar19 = *(long *)(param_1 + 0xa8);
  iVar1 = *(int *)(lVar19 + 4);
  iVar2 = *(int *)(lVar19 + 8);
  iVar3 = *(int *)(lVar19 + 0xc);
  cVar11 = FUN_1003964e0();
  if ((iVar3 != 0) && (FUN_10038e8e0(param_2,"vec3 gD;\n"), *(char *)(param_1 + 0x80) != '\0')) {
    FUN_10038e8e0(param_2,"vec3 gS;\n");
  }
  FUN_10038e8e0(param_2,"vec3 gA;\n");
  if (cVar11 != '\0') {
    FUN_10038e8e0(param_2,"vec4 gV;\n");
    if (*(int *)(*(long *)(param_1 + 0xa8) + 0x88) == 0) {
      FUN_10038e8e0(param_2,
                    "gV.x = dot(c[OFF_MAT_MVIEW + 0], position);\ngV.y = dot(c[OFF_MAT_MVIEW + 1], position);\ngV.z = dot(c[OFF_MAT_MVIEW + 2], position);\ngV.w = dot(c[OFF_MAT_MVIEW + 3], position);\n"
                   );
    }
    else {
      FUN_100396740(param_1,param_2,0);
      lVar19 = *(long *)(param_1 + 0xb0);
      local_34 = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x88);
      puVar9 = *(undefined4 **)(lVar19 + 0x98);
      if (puVar9 == *(undefined4 **)(lVar19 + 0xa0)) {
        FUN_10027f110(lVar19 + 0x90,&local_34);
        lVar19 = *(long *)(param_1 + 0xb0);
      }
      else {
        *puVar9 = local_34;
        *(undefined4 **)(lVar19 + 0x98) = puVar9 + 1;
      }
      lVar10 = *(long *)(lVar19 + 0x68);
      uVar16 = lVar10 - *(long *)(lVar19 + 0x60) >> 2;
      if (uVar16 == 0) {
        FUN_10032f560(lVar19 + 0x60,1);
      }
      else if ((1 < uVar16) && (lVar13 = *(long *)(lVar19 + 0x60) + 4, lVar10 != lVar13)) {
        *(ulong *)(lVar19 + 0x68) = (~((lVar10 + -4) - lVar13) & 0xfffffffffffffffcU) + lVar10;
      }
    }
    lVar19 = *(long *)(param_1 + 0xb0);
    lVar10 = *(long *)(lVar19 + 0x50);
    uVar16 = lVar10 - *(long *)(lVar19 + 0x48) >> 2;
    if (uVar16 == 0) {
      FUN_10032f560(lVar19 + 0x48,1);
    }
    else if ((1 < uVar16) && (lVar13 = *(long *)(lVar19 + 0x48) + 4, lVar10 != lVar13)) {
      *(ulong *)(lVar19 + 0x50) = (~((lVar10 + -4) - lVar13) & 0xfffffffffffffffcU) + lVar10;
    }
  }
  if (*(int *)(*(long *)(param_1 + 0xa8) + 0x88) == 0) {
    FUN_10038e8e0(param_2,
                  "gl_Position.x = dot(c[OFF_MAT_MVP + 0], position);\ngl_Position.y = dot(c[OFF_MAT_MVP + 1], position);\ngl_Position.z = dot(c[OFF_MAT_MVP + 2], position);\ngl_Position.w = dot(c[OFF_MAT_MVP + 3], position);\n"
                 );
    lVar19 = *(long *)(param_1 + 0xb0);
    lVar10 = *(long *)(lVar19 + 0x38);
    uVar16 = lVar10 - *(long *)(lVar19 + 0x30) >> 2;
    if (uVar16 == 0) {
      lVar19 = lVar19 + 0x30;
      goto LAB_10039556e;
    }
    if ((1 < uVar16) && (lVar13 = *(long *)(lVar19 + 0x30) + 4, lVar10 != lVar13)) {
      *(ulong *)(lVar19 + 0x38) = (~((lVar10 + -4) - lVar13) & 0xfffffffffffffffcU) + lVar10;
    }
  }
  else {
    FUN_10038e8e0(param_2,
                  "gl_Position.x = dot(c[OFF_MAT_PROJ + 0], gV);\ngl_Position.y = dot(c[OFF_MAT_PROJ + 1], gV);\ngl_Position.z = dot(c[OFF_MAT_PROJ + 2], gV);\ngl_Position.w = dot(c[OFF_MAT_PROJ + 3], gV);\n"
                 );
    lVar19 = *(long *)(param_1 + 0xb0);
    lVar10 = *(long *)(lVar19 + 0x80);
    uVar16 = lVar10 - *(long *)(lVar19 + 0x78) >> 2;
    if (uVar16 == 0) {
      lVar19 = lVar19 + 0x78;
LAB_10039556e:
      FUN_10032f560(lVar19,1);
    }
    else if ((1 < uVar16) && (lVar13 = *(long *)(lVar19 + 0x78) + 4, lVar10 != lVar13)) {
      *(ulong *)(lVar19 + 0x80) = (~((lVar10 + -4) - lVar13) & 0xfffffffffffffffcU) + lVar10;
    }
  }
  if ((*(char *)(DAT_1011c8478 + 0x37) != '\0') || (*(int *)(*(long *)(param_1 + 0xa8) + 0x8c) != 0)
     ) {
    if (*(char *)(DAT_1011c8478 + 0x37) == '\0') {
      if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
        pcVar17 = "varying";
      }
      else {
        pcVar17 = "out";
      }
      FUN_10038e8e0(param_3,"%s vec4 v_clipVertex;\n",pcVar17);
      pcVar17 = "v_clipVertex";
    }
    else {
      pcVar17 = "gl_ClipVertex";
    }
    if (cVar11 == '\0') {
      FUN_10038e8e0(param_2,
                    "%s.x = dot(c[OFF_MAT_MVIEW + 0], position);\n%s.y = dot(c[OFF_MAT_MVIEW + 1], position);\n%s.z = dot(c[OFF_MAT_MVIEW + 2], position);\n%s.w = dot(c[OFF_MAT_MVIEW + 3], position);\n"
                    ,pcVar17,pcVar17,pcVar17,pcVar17);
      lVar19 = *(long *)(param_1 + 0xb0);
      lVar10 = *(long *)(lVar19 + 0x50);
      uVar16 = lVar10 - *(long *)(lVar19 + 0x48) >> 2;
      if (uVar16 == 0) {
        FUN_10032f560(lVar19 + 0x48,1);
      }
      else if ((1 < uVar16) && (lVar13 = *(long *)(lVar19 + 0x48) + 4, lVar10 != lVar13)) {
        *(ulong *)(lVar19 + 0x50) = (~((lVar10 + -4) - lVar13) & 0xfffffffffffffffcU) + lVar10;
      }
    }
    else {
      FUN_10038e8e0(param_2,"%s = gV;\n");
    }
  }
  if (iVar3 != 0) {
    FUN_100396940(param_1,param_2);
  }
  lVar19 = *(long *)(param_1 + 0xa8);
  if (*(int *)(lVar19 + 0x34) == 0) {
    if (iVar1 == 0) {
      pcVar17 = "vec4(1.0)";
    }
    else {
      pcVar17 = *(char **)(param_1 + 0x28);
      if (pcVar17 == (char *)0x0) {
        pcVar17 = *(char **)(param_1 + 0x38);
      }
    }
    FUN_10038e8e0(param_2,"vec4 out_color_0 = %s;\n",pcVar17);
    if (*(char *)(param_1 + 0x80) == '\0') goto LAB_100395a18;
    if (iVar2 == 0) {
      pcVar17 = "vec4(0.0)";
    }
    else {
      pcVar17 = *(char **)(param_1 + 0x50);
      if (pcVar17 == (char *)0x0) {
        pcVar17 = *(char **)(param_1 + 0x60);
      }
    }
    pcVar20 = "vec4 out_color_1 = %s;\n";
    goto LAB_100395a0e;
  }
  iVar4 = *(int *)(lVar19 + 0x3c);
  iVar5 = *(int *)(lVar19 + 0x40);
  iVar6 = *(int *)(lVar19 + 0x44);
  iVar7 = *(int *)(lVar19 + 0x48);
  iVar8 = *(int *)(lVar19 + 0x4c);
  lVar19 = *(long *)(param_1 + 0xb0);
  lVar10 = *(long *)(lVar19 + 0x20);
  uVar16 = lVar10 - *(long *)(lVar19 + 0x18) >> 2;
  if (uVar16 == 0) {
    FUN_10032f560(lVar19 + 0x18,1);
  }
  else if ((1 < uVar16) && (lVar13 = *(long *)(lVar19 + 0x18) + 4, lVar10 != lVar13)) {
    *(ulong *)(lVar19 + 0x20) = (~((lVar10 + -4) - lVar13) & 0xfffffffffffffffcU) + lVar10;
  }
  FUN_100396b30(param_1,param_2,param_3);
  cVar11 = '\b';
  if (iVar4 == 0) {
    bVar21 = 7;
    cVar15 = '\x04';
    cVar18 = '\x03';
  }
  else {
    bVar22 = iVar1 != 0;
    if (((iVar5 != 1) || (cVar18 = '\x05', !bVar22)) && (cVar18 = '\x03', iVar5 == 2)) {
      cVar18 = (iVar2 != 0) * '\x03' + '\x03';
    }
    cVar15 = '\x04';
    if (((*(char *)(param_1 + 0x80) != '\0') && (iVar3 != 0)) &&
       ((cVar15 = '\x05', iVar6 != 1 || !bVar22 && (cVar15 = '\x04', iVar6 == 2)))) {
      cVar15 = (iVar2 != 0) * '\x02' + '\x04';
    }
    bVar21 = 5;
    if ((iVar7 != 1 || !bVar22) && (bVar21 = 7, iVar7 == 2)) {
      bVar21 = iVar2 == 0 | 6;
    }
    if (iVar8 == 1 && bVar22) {
      cVar11 = '\x05';
    }
    else if (iVar8 == 2) {
      cVar11 = (iVar2 == 0) * '\x02' + '\x06';
    }
  }
  FUN_10038e8e0(param_2,"vec4 out_color_0;\nout_color_0.rgb = ");
  if (iVar3 != 0) {
    pcVar17 = "vec4(1.0)";
    switch(cVar18) {
    case '\x01':
      break;
    case '\x02':
      pcVar17 = "vec4(0.0)";
      break;
    case '\x03':
      pcVar17 = "c[OFF_MTRL_DIFF]";
      break;
    case '\x04':
      pcVar17 = "c[OFF_MTRL_SPEC]";
      break;
    case '\x05':
      pcVar17 = *(char **)(param_1 + 0x28);
      if (pcVar17 == (char *)0x0) {
        pcVar17 = *(char **)(param_1 + 0x38);
      }
      break;
    case '\x06':
      pcVar17 = *(char **)(param_1 + 0x50);
      if (pcVar17 == (char *)0x0) {
        pcVar17 = *(char **)(param_1 + 0x60);
      }
      break;
    case '\a':
      pcVar17 = "c[OFF_MTRL_AMB]";
      break;
    default:
      pcVar17 = "";
    }
    FUN_10038e8e0(param_2,"gD * %s.rgb + ",pcVar17);
  }
  pcVar20 = "vec4(1.0)";
  pcVar17 = pcVar20;
  switch(bVar21) {
  case 1:
    break;
  case 2:
    pcVar17 = "vec4(0.0)";
    break;
  case 3:
    pcVar17 = "c[OFF_MTRL_DIFF]";
    break;
  case 4:
    pcVar17 = "c[OFF_MTRL_SPEC]";
    break;
  case 5:
    pcVar17 = *(char **)(param_1 + 0x28);
    if (pcVar17 == (char *)0x0) {
      pcVar17 = *(char **)(param_1 + 0x38);
    }
    break;
  case 6:
    pcVar17 = *(char **)(param_1 + 0x50);
    if (pcVar17 == (char *)0x0) {
      pcVar17 = *(char **)(param_1 + 0x60);
    }
    break;
  case 7:
    pcVar17 = "c[OFF_MTRL_AMB]";
    break;
  default:
    pcVar17 = "";
  }
  pcVar14 = pcVar20;
  switch(cVar11) {
  case '\x01':
    break;
  case '\x02':
    pcVar14 = "vec4(0.0)";
    break;
  case '\x03':
    pcVar14 = "c[OFF_MTRL_DIFF]";
    break;
  case '\x04':
    pcVar14 = "c[OFF_MTRL_SPEC]";
    break;
  case '\x05':
    pcVar14 = *(char **)(param_1 + 0x28);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = *(char **)(param_1 + 0x38);
    }
    break;
  case '\x06':
    pcVar14 = *(char **)(param_1 + 0x50);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = *(char **)(param_1 + 0x60);
    }
    break;
  case '\a':
    pcVar14 = "c[OFF_MTRL_AMB]";
    break;
  case '\b':
    pcVar14 = "c[OFF_MTRL_EMS]";
    break;
  default:
    pcVar14 = "";
  }
  FUN_10038e8e0(param_2,"(gA + c[OFF_SCENE_AMB].rgb) * %s.rgb + %s.rgb;\n",pcVar17,pcVar14);
  switch(cVar18) {
  case '\x01':
    break;
  case '\x02':
    pcVar20 = "vec4(0.0)";
    break;
  case '\x03':
    pcVar20 = "c[OFF_MTRL_DIFF]";
    break;
  case '\x04':
    pcVar20 = "c[OFF_MTRL_SPEC]";
    break;
  case '\x05':
    pcVar20 = *(char **)(param_1 + 0x28);
    if (pcVar20 == (char *)0x0) {
      pcVar20 = *(char **)(param_1 + 0x38);
    }
    break;
  case '\x06':
    pcVar20 = *(char **)(param_1 + 0x50);
    if (pcVar20 == (char *)0x0) {
      pcVar20 = *(char **)(param_1 + 0x60);
    }
    break;
  case '\a':
    pcVar20 = "c[OFF_MTRL_AMB]";
    break;
  default:
    pcVar20 = "";
  }
  FUN_10038e8e0(param_2,"out_color_0.a = %s.a;\n",pcVar20);
  if (*(char *)(param_1 + 0x80) == '\0') goto LAB_100395a18;
  FUN_10038e8e0(param_2,"vec4 out_color_1 = ");
  if (iVar3 == 0) {
    FUN_10038e8e0(param_2,"vec4(0.0, 0.0, 0.0, 1.0);\n");
    goto LAB_100395a18;
  }
  pcVar17 = "vec4(1.0)";
  switch(cVar15) {
  case '\x02':
    pcVar17 = "vec4(0.0)";
    pcVar20 = "vec4(gS, 1.0) * %s;\n";
    break;
  case '\x03':
    pcVar17 = "c[OFF_MTRL_DIFF]";
    pcVar20 = "vec4(gS, 1.0) * %s;\n";
    break;
  case '\x04':
    pcVar17 = "c[OFF_MTRL_SPEC]";
    pcVar20 = "vec4(gS, 1.0) * %s;\n";
    break;
  case '\x05':
    pcVar17 = *(char **)(param_1 + 0x28);
    if (pcVar17 != (char *)0x0) goto switchD_1003959ee_caseD_1;
    pcVar17 = *(char **)(param_1 + 0x38);
    pcVar20 = "vec4(gS, 1.0) * %s;\n";
    break;
  case '\x06':
    pcVar17 = *(char **)(param_1 + 0x50);
    if (pcVar17 != (char *)0x0) goto switchD_1003959ee_caseD_1;
    pcVar17 = *(char **)(param_1 + 0x60);
    pcVar20 = "vec4(gS, 1.0) * %s;\n";
    break;
  case '\a':
    pcVar17 = "c[OFF_MTRL_AMB]";
    pcVar20 = "vec4(gS, 1.0) * %s;\n";
    break;
  case '\b':
    pcVar17 = "c[OFF_MTRL_EMS]";
    pcVar20 = "vec4(gS, 1.0) * %s;\n";
    break;
  default:
    pcVar17 = "";
  case '\x01':
switchD_1003959ee_caseD_1:
    pcVar20 = "vec4(gS, 1.0) * %s;\n";
  }
LAB_100395a0e:
  FUN_10038e8e0(param_2,pcVar20,pcVar17);
LAB_100395a18:
  if (*(char *)(param_1 + 0x81) != '\0') {
    FUN_100396290(param_1,param_2,"gV");
  }
  if (*(int *)(*(long *)(param_1 + 0xa8) + 0x60) == 0) {
    FUN_10038e8e0(param_3,"#define REFLECT(I, N) ((I) - 2.0 * dot((I),(N)) * (N))\n\n");
    uVar12 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
    if (uVar12 != 0) {
      if ((uVar12 & 1) != 0) {
        FUN_100396e20(param_1,param_2,0);
        uVar12 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
      }
      if ((int)uVar12 >> 1 != 0) {
        if (((int)uVar12 >> 1 & 1U) != 0) {
          FUN_100396e20(param_1,param_2,1);
          uVar12 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
        }
        if ((int)uVar12 >> 2 != 0) {
          if (((int)uVar12 >> 2 & 1U) != 0) {
            FUN_100396e20(param_1,param_2,2);
            uVar12 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
          }
          if ((int)uVar12 >> 3 != 0) {
            if (((int)uVar12 >> 3 & 1U) != 0) {
              FUN_100396e20(param_1,param_2,3);
              uVar12 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
            }
            if ((int)uVar12 >> 4 != 0) {
              if (((int)uVar12 >> 4 & 1U) != 0) {
                FUN_100396e20(param_1,param_2,4);
                uVar12 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
              }
              if ((int)uVar12 >> 5 != 0) {
                if (((int)uVar12 >> 5 & 1U) != 0) {
                  FUN_100396e20(param_1,param_2,5);
                  uVar12 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
                }
                if ((int)uVar12 >> 6 != 0) {
                  if (((int)uVar12 >> 6 & 1U) != 0) {
                    FUN_100396e20(param_1,param_2,6);
                    uVar12 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
                  }
                  if ((uVar12 & 0x80) != 0) {
                    FUN_100396e20(param_1,param_2,7);
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_10038e8e0(param_2,"\n");
    return;
  }
  return;
}

