
void FUN_100397180(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_1174;
  char local_1173;
  undefined1 local_1172;
  undefined1 local_1171;
  undefined1 local_1170 [8];
  long local_1168;
  long local_1158;
  undefined1 local_1148 [8];
  long local_1140;
  long local_1130;
  char local_1119;
  char local_1118;
  undefined1 local_1117;
  undefined1 local_1116;
  char local_1115 [4];
  undefined1 local_1111;
  undefined1 local_1110 [8];
  long local_1108;
  long local_10f8;
  undefined1 local_10e8 [8];
  long local_10e0;
  long local_10d0;
  undefined1 local_10c0 [8];
  long local_10b8;
  long local_10a8;
  undefined1 local_1098 [8];
  long local_1090;
  long local_1080;
  undefined1 local_1070 [8];
  long local_1068;
  long local_1058;
  undefined1 local_1048 [8];
  long local_1040;
  long local_1030;
  undefined1 local_1020 [8];
  long local_1018;
  long local_1008;
  undefined1 local_ff8 [8];
  long local_ff0;
  long local_fe0;
  undefined1 local_fd0 [8];
  long local_fc8;
  long local_fb8;
  undefined1 local_fa8 [8];
  long local_fa0;
  long local_f90;
  undefined1 local_f80 [8];
  long local_f78;
  long local_f68;
  undefined1 local_f58 [256];
  undefined1 local_e58 [256];
  char local_d58 [4];
  char cStack_d54;
  char cStack_d53;
  char cStack_d52;
  char cStack_d51;
  char acStack_d50 [4];
  char acStack_d4c [4];
  undefined8 local_d48;
  undefined4 local_d40;
  undefined1 local_d38 [256];
  undefined1 local_c38 [256];
  undefined1 local_b38 [256];
  undefined1 local_a38 [256];
  undefined1 local_938 [384];
  undefined1 local_7b8 [256];
  undefined1 local_6b8 [256];
  undefined1 local_5b8 [512];
  undefined1 local_3b8 [384];
  undefined1 local_238 [256];
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar1 = *(int *)(*(long *)(param_1 + 0xa8) + 0xc);
  iVar2 = *(int *)(*(long *)(param_1 + 0xa8) + 0x9c);
  if (param_3 == 0) {
    pcVar4 = "#define lightSpot";
  }
  else if (param_3 == 1) {
    pcVar4 = "#define lightPoint";
  }
  else {
    if (param_3 != 2) goto LAB_1003971f8;
    pcVar4 = "#define lightDirectional";
  }
  FUN_10038e8e0(param_2,pcVar4);
LAB_1003971f8:
  FUN_10038e8e0(param_2,"%u(",param_4);
  FUN_10038e8e0(param_2,"l, V, D");
  if (iVar2 == 2) {
    FUN_10038e8e0(param_2,", power");
  }
  if (param_3 != 2) {
    FUN_10038e8e0(param_2,", A");
  }
  if (iVar1 == 0) {
    FUN_10038e8e0(param_2,") \\\n{ \\\n");
  }
  else {
    FUN_10038e8e0(param_2,", N");
    if (*(char *)(param_1 + 0x80) != '\0') {
      FUN_10038e8e0(param_2,", S");
    }
    FUN_10038e8e0(param_2,") \\\n{ \\\n");
    FUN_10038e870(local_f80,local_138,0x100);
    FUN_10038e870(local_fa8,local_238,0x100);
    FUN_10038e870(local_fd0,local_3b8,0x180);
    FUN_10038e870(local_ff8,local_5b8,0x200);
    FUN_10038e870(local_1020,local_6b8,0x100);
    FUN_10038e870(local_1048,local_7b8,0x100);
    FUN_10038e870(local_1070,local_938,0x180);
    FUN_10038e870(local_1098,local_a38,0x100);
    FUN_10038e870(local_10c0,local_b38,0x100);
    FUN_10038e870(local_10e8,local_c38,0x100);
    FUN_10038e870(local_1110,local_d38,0x100);
    local_1115[0] = 'v';
    local_1115[1] = 'e';
    local_1115[2] = 99;
    local_1115[3] = (char)param_4 + '0';
    local_1111 = 0;
    pcVar4 = local_1115;
    if (param_4 == 1) {
      pcVar4 = "float";
    }
    local_d48 = 0x4f202b2045444952;
    local_d58[0] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[0];
    local_d58[1] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[1];
    local_d58[2] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[2];
    local_d58[3] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[3];
    cStack_d54 = s_c__l____LIGHT_STRIDE___OFF__100a2d110[4];
    cStack_d53 = s_c__l____LIGHT_STRIDE___OFF__100a2d110[5];
    cStack_d52 = s_c__l____LIGHT_STRIDE___OFF__100a2d110[6];
    cStack_d51 = s_c__l____LIGHT_STRIDE___OFF__100a2d110[7];
    acStack_d50[0] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[8];
    acStack_d50[1] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[9];
    acStack_d50[2] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[10];
    acStack_d50[3] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[0xb];
    acStack_d4c[0] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[0xc];
    acStack_d4c[1] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[0xd];
    acStack_d4c[2] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[0xe];
    acStack_d4c[3] = s_c__l____LIGHT_STRIDE___OFF__100a2d110[0xf];
    local_d40 = 0x5f4646;
    if (param_4 != 0) {
      pcVar5 = &local_1119;
      if (param_4 == 1) {
        pcVar5 = "";
      }
      uVar3 = 0;
      do {
        local_1119 = '[';
        local_1118 = (char)uVar3 + '0';
        local_1117 = 0x5d;
        local_1116 = 0;
        cStack_d53 = local_1118;
        if (param_3 == 2) {
          FUN_10038e8e0(local_f80,"\tL%s = %sDIR].xyz; \\\n",pcVar5,local_d58);
        }
        else {
          FUN_10038e8e0(local_f80,"\t\t\tL%s = %sPOS].xyz - V; \\\n",pcVar5,local_d58);
          FUN_10038e8e0(local_fa8,"\t\t\tdd%s = dot(L%s, L%s); \\\n",pcVar5,pcVar5,pcVar5);
          FUN_10038e8e0(local_ff8,
                        "\t\t\tattenuation%s = dot(%sATT].xyz, vec3(1.0, d%s, dd%s)); \\\n",pcVar5,
                        local_d58,pcVar5,pcVar5);
          if (param_3 == 0) {
            FUN_10038e8e0(local_fd0,"\t\t\t\tspot%s = dot(L%s, %sDIR].xyz); \\\n",pcVar5,pcVar5,
                          local_d58);
            if (uVar3 != 0) {
              FUN_10038e8e0(local_10c0,",");
              FUN_10038e8e0(local_10e8,",");
              FUN_10038e8e0(local_1110,",");
            }
            FUN_10038e8e0(local_10c0,"%sSPOT].x",local_d58);
            FUN_10038e8e0(local_10e8,"%sSPOT].y",local_d58);
            FUN_10038e8e0(local_1110,"%sSPOT].z",local_d58);
          }
          FUN_10038e8e0(local_1020,"\t\t\tL%s /= d%s; \\\n",pcVar5,pcVar5);
          FUN_10038e8e0(local_1098,"\tA += %sAMB].rgb / attenuation%s; \\\n",local_d58,pcVar5);
        }
        FUN_10038e8e0(local_1048,"\tdotNL%s = dot(N, L%s); \\\n",pcVar5,pcVar5);
        FUN_10038e8e0(local_1070,"\tD += dotNL%s * %sDIFF].rgb",pcVar5,local_d58);
        if (param_3 != 2) {
          FUN_10038e8e0(local_1070," / attenuation %s",pcVar5);
        }
        FUN_10038e8e0(local_1070,"; \\\n");
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_4);
    }
    if (param_4 == 1) {
      FUN_10038e8e0(param_2,"\tvec3 L; \\\n");
    }
    else {
      FUN_10038e8e0(param_2,"\tvec3 L[%u]; \\\n",param_4);
    }
    if (param_3 != 2) {
      FUN_10038e8e0(param_2,"\t%s attenuation; \\\n\t{ \\\n\t\t%s d; \\\n\t\t{ \\\n",pcVar4,pcVar4);
    }
    if (local_f78 == 0) {
      local_f78 = local_f68;
    }
    FUN_10038e8e0(param_2,local_f78);
    if (param_3 != 2) {
      if (local_fa0 == 0) {
        local_fa0 = local_f90;
      }
      if (local_1018 == 0) {
        local_1018 = local_1008;
      }
      FUN_10038e8e0(param_2,"\t\t\t%s dd; \\\n%s\t\t\td = sqrt(dd); \\\n%s",pcVar4,local_fa0,
                    local_1018);
      if (param_3 == 0) {
        if (local_10b8 == 0) {
          local_10b8 = local_10a8;
        }
        if (local_10e0 == 0) {
          local_10e0 = local_10d0;
        }
        if (local_fc8 == 0) {
          local_fc8 = local_fb8;
        }
        if (local_1108 == 0) {
          local_1108 = local_10f8;
        }
        pcVar5 = "lessThanEqual(spot, cos_theta)";
        if (param_4 == 1) {
          pcVar5 = "spot <= cos_theta";
        }
        FUN_10038e8e0(param_2,
                      "\t\t\t%s spot; \\\n\t\t\t{ \\\n\t\t\t\t%s cos_theta = %s(%s); \\\n\t\t\t\t%s cos_phi = %s(%s); \\\n%s\t\t\t\t%s tmp = max(spot - cos_phi, 0.0) / (cos_theta - cos_phi); \\\n\t\t\t\t%s falloff = %s(%s); \\\n\t\t\t\tfalloff *= %s(%s); \\\n\t\t\t\tspot = pow(tmp, falloff); \\\n\t\t\t} \\\n"
                      ,pcVar4,pcVar4,pcVar4,local_10b8,pcVar4,pcVar4,local_10e0,local_fc8,pcVar4,
                      pcVar4,pcVar4,pcVar5,pcVar4,local_1108);
      }
      if (local_ff0 == 0) {
        local_ff0 = local_fe0;
      }
      FUN_10038e8e0(param_2,local_ff0);
      if (param_3 == 0) {
        FUN_10038e8e0(param_2,"\t\t\tattenuation /= spot; \\\n");
      }
      FUN_10038e8e0(param_2,"\t\t} \\\n\t} \\\n");
    }
    if (local_1040 == 0) {
      local_1040 = local_1030;
    }
    if (local_1068 == 0) {
      local_1068 = local_1058;
    }
    FUN_10038e8e0(param_2,"\t%s dotNL; \\\n%s\tdotNL = max(dotNL, 0.0); \\\n%s",pcVar4,local_1040,
                  local_1068);
    if (param_3 != 2) {
      if (local_1090 == 0) {
        local_1090 = local_1080;
      }
      FUN_10038e8e0(param_2,local_1090);
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      FUN_10038e870(local_1148,local_e58,0x100);
      FUN_10038e870(local_1170,local_f58,0x100);
      if (param_4 != 0) {
        pcVar5 = &local_1174;
        if (param_4 == 1) {
          pcVar5 = "";
        }
        uVar3 = 0;
        do {
          local_1174 = '[';
          local_1173 = (char)uVar3 + '0';
          local_1172 = 0x5d;
          local_1171 = 0;
          cStack_d53 = local_1173;
          FUN_10038e8e0(local_1148,"\t\tdotNH%s = dot(N, normalize(L%s - nV)); \\\n",pcVar5,pcVar5);
          FUN_10038e8e0(local_1170,"\tS += %sSPEC].rgb * specular%s; \\\n",local_d58,pcVar5);
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_4);
      }
      FUN_10038e8e0(param_2,"\t%s specular; \\\n\t{ \\\n\t\t%s dotNH; \\\n",pcVar4,pcVar4);
      if (*(int *)(*(long *)(param_1 + 0xa8) + 0x54) == 0) {
        FUN_10038e8e0(param_2,"\t\tvec3 nV = vec3(0.0,0.0,1.0); \\\n");
      }
      else {
        FUN_10038e8e0(param_2,"\t\tvec3 nV = normalize(V); \\\n");
      }
      if (local_1140 == 0) {
        local_1140 = local_1130;
      }
      FUN_10038e8e0(param_2,local_1140);
      if (param_4 == 1) {
        FUN_10038e8e0(param_2,"\t\tfloat backSideMask = float(dotNL > 0.0); \\\n");
      }
      else {
        FUN_10038e8e0(param_2,"\t\t%s backSideMask = %s( greaterThan(dotNL, %s(0.0)) ); \\\n",pcVar4
                      ,pcVar4,pcVar4);
      }
      FUN_10038e8e0(param_2,"\t\tspecular = backSideMask");
      if (iVar2 == 1) {
        FUN_10038e8e0(param_2," * max(dotNH, %s(0.0))",pcVar4);
      }
      else if (iVar2 == 0) {
        if (param_4 == 1) {
          FUN_10038e8e0(param_2," * float(dotNH > 0.0)");
        }
        else {
          FUN_10038e8e0(param_2," * %s( greaterThan(dotNH, %s(0.0)) )",pcVar4,pcVar4);
        }
      }
      else {
        FUN_10038e8e0(param_2," * pow( max(dotNH, %s(0.0)), %s(power) )",pcVar4,pcVar4);
      }
      if (param_3 != 2) {
        FUN_10038e8e0(param_2," / attenuation");
      }
      if (local_1168 == 0) {
        local_1168 = local_1158;
      }
      FUN_10038e8e0(param_2,"; \\\n\t} \\\n%s",local_1168);
      FUN_10038e8c0(local_1170);
      FUN_10038e8c0(local_1148);
    }
    FUN_10038e8c0(local_1110);
    FUN_10038e8c0(local_10e8);
    FUN_10038e8c0(local_10c0);
    FUN_10038e8c0(local_1098);
    FUN_10038e8c0(local_1070);
    FUN_10038e8c0(local_1048);
    FUN_10038e8c0(local_1020);
    FUN_10038e8c0(local_ff8);
    FUN_10038e8c0(local_fd0);
    FUN_10038e8c0(local_fa8);
    FUN_10038e8c0(local_f80);
  }
  FUN_10038e8e0(param_2,"}\n\n");
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

