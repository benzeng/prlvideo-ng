
undefined8 FUN_1003797e0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  char cVar10;
  char *pcVar11;
  char *extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar12;
  long *plVar13;
  char *pcVar14;
  undefined1 auVar15 [16];
  undefined8 local_68;
  long local_48;
  long *local_40;
  long local_38;
  
  FUN_10038e8e0(param_4,"uniform int vs_basevertex;\n");
  if (*(int *)(param_1 + 0x1c) == -1) {
    FUN_10038e8e0(param_4,"in float a_vDummy;\n");
  }
  for (puVar2 = *(undefined8 **)(param_2 + 0x10); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    if ((*(byte *)((long)puVar2 + 0x2d) & 2) == 0) {
      lVar7 = puVar2[1];
      uVar5 = 8;
      if (lVar7 != 0) {
        puVar8 = (undefined1 *)(*(long *)(lVar7 + 0x80) + 0x48);
        if (*(long *)(lVar7 + 0x80) == 0) {
          puVar8 = (undefined1 *)(lVar7 + 0x7c);
        }
        uVar5 = *puVar8;
      }
      uVar6 = FUN_1003a7a00(uVar5);
      FUN_10038e8e0(param_4,"in %svec4 a_v%d;\n",uVar6,*(undefined1 *)((long)puVar2 + 0x2a));
    }
  }
  FUN_10038e8e0(param_4,"\n");
  plVar12 = *(long **)(param_3 + 0x620);
  if (plVar12 == (long *)0x0) {
    plVar12 = *(long **)(param_3 + 0x628);
  }
  if ((plVar12 != (long *)0x0) && (plVar13 = *(long **)(param_2 + 0x18), plVar13 != (long *)0x0)) {
    do {
      FUN_10037d360(&local_38,plVar12,*(undefined1 *)((long)plVar13 + 0x2a),
                    *(undefined1 *)((long)plVar13 + 0x29));
      lVar7 = local_38;
      if (local_38 == 0) goto LAB_1003799e1;
      auVar15 = (**(code **)(*plVar12 + 0x20))(plVar12);
      pcVar11 = auVar15._8_8_;
      if (auVar15._0_8_ == 0) goto switchD_100379935_caseD_2;
      pcVar11 = "centroid";
      switch(*(undefined1 *)(lVar7 + 0x2c)) {
      case 1:
        pcVar11 = "flat";
        break;
      default:
        goto switchD_100379935_caseD_2;
      case 3:
        break;
      case 4:
        pcVar11 = "noperspective";
        if (*(char *)(DAT_1011c8478 + 0x65) == '\0') break;
        goto switchD_100379935_caseD_2;
      case 5:
        pcVar11 = "centroid";
        if (*(char *)(DAT_1011c8478 + 0x65) == '\0') {
          pcVar11 = "noperspective centroid";
        }
      }
      FUN_10038e8e0(param_4,"%s ",pcVar11);
      pcVar11 = extraout_RDX;
switchD_100379935_caseD_2:
      lVar3 = *(long *)(lVar7 + 8);
      uVar5 = 8;
      if (lVar3 != 0) {
        puVar8 = (undefined1 *)(*(long *)(lVar3 + 0x80) + 0x48);
        if (*(long *)(lVar3 + 0x80) == 0) {
          puVar8 = (undefined1 *)(lVar3 + 0x7c);
        }
        uVar5 = *puVar8;
      }
      uVar6 = FUN_1003a78b0(uVar5,*(undefined1 *)(lVar7 + 0x29),pcVar11,uVar5);
      FUN_10038e8e0(param_4,"out %s vs_out%d%s;\n",uVar6,*(undefined1 *)(lVar7 + 0x2a),
                    (&PTR_s__100bbc2c0)[*(byte *)(lVar7 + 0x29)]);
LAB_1003799e1:
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  if ((*(long *)(param_3 + 0x620) == 0) && (*(int *)(param_3 + 0x2748) != 0)) {
    FUN_10037b280(param_2,*(undefined8 *)(param_3 + 0x2750),param_4);
  }
  FUN_10038e8e0(param_4,"\n\nvoid init_input_registers()\n{\n");
  for (puVar2 = *(undefined8 **)(param_2 + 0x10); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    lVar7 = puVar2[1];
    uVar5 = 8;
    if (lVar7 != 0) {
      puVar8 = (undefined1 *)(*(long *)(lVar7 + 0x80) + 0x48);
      if (*(long *)(lVar7 + 0x80) == 0) {
        puVar8 = (undefined1 *)(lVar7 + 0x7c);
      }
      uVar5 = *puVar8;
    }
    uVar6 = FUN_1003a7a00(uVar5);
    FUN_10038e8e0(param_4,"%sV[%d]",uVar6,*(undefined1 *)((long)puVar2 + 0x2a));
    if ((*(byte *)((long)puVar2 + 0x2d) & 2) == 0) {
      FUN_10038e8e0(param_4," = a_v%d;\n",*(undefined1 *)((long)puVar2 + 0x2a));
    }
    else {
      bVar1 = *(byte *)((long)puVar2 + 0x29);
      lVar7 = puVar2[1];
      cVar10 = '\b';
      if (lVar7 != 0) {
        pcVar11 = (char *)(*(long *)(lVar7 + 0x80) + 0x48);
        if (*(long *)(lVar7 + 0x80) == 0) {
          pcVar11 = (char *)(lVar7 + 0x7c);
        }
        cVar10 = *pcVar11;
      }
      if (cVar10 == '\b') {
        pcVar11 = "I2F";
      }
      else {
        pcVar11 = "";
        if (cVar10 != '\x02') {
          if (cVar10 == '\x01') {
            pcVar11 = (char *)FUN_1003a78b0(1,(ulong)bVar1,extraout_RDX_00,"");
          }
          else {
            pcVar11 = (char *)0x0;
          }
        }
      }
      FUN_10038e8e0(param_4,"%s = %s(",(&PTR_s__100bbc340)[bVar1],pcVar11);
      if (*(char *)(puVar2 + 5) == '\x06') {
        if (*(char *)(param_1 + 0x19) == '\0') {
          if (*(char *)(DAT_1011c8478 + 0x86) == '\0') {
            FUN_10038e8e0(param_4,"gl_VertexID);\n");
          }
          else {
            FUN_10038e8e0(param_4,"gl_VertexID - vs_basevertex);\n");
          }
        }
        else {
          FUN_10038e8e0(param_4,"0);\n");
        }
      }
      else {
        if (*(char *)(puVar2 + 5) != '\b') {
          return 3;
        }
        FUN_10038e8e0(param_4,"gl_InstanceID);\n");
      }
    }
  }
  FUN_10038e8e0(param_4,"}\n\nvoid init_output_registers()\n{\n");
  if (*(int *)(param_1 + 0x1c) == -1) {
    FUN_10038e8e0(param_4,"gl_Position = vec4(a_vDummy);\n");
  }
  plVar13 = *(long **)(param_2 + 0x18);
  local_40 = plVar13;
  if (plVar13 != (long *)0x0) {
    local_68 = 0;
    do {
      uVar6 = 4;
      local_40 = plVar13;
      switch((char)plVar13[5]) {
      case '\0':
        if (plVar12 != (long *)0x0) {
          uVar5 = 0;
          uVar4 = 0;
          if (plVar13 != (long *)0x0) {
            uVar5 = *(undefined1 *)((long)plVar13 + 0x2a);
            uVar4 = *(undefined1 *)((long)plVar13 + 0x29);
          }
          FUN_10037d360(&local_48,plVar12,uVar5,uVar4);
          lVar7 = local_48;
          if (local_48 != 0) {
            uVar5 = *(undefined1 *)(local_48 + 0x2a);
            bVar1 = *(byte *)(local_48 + 0x29);
            if (plVar13 == (long *)0x0) {
              uVar4 = 0;
            }
            else {
              lVar3 = plVar13[1];
              uVar4 = 8;
              if (lVar3 != 0) {
                puVar8 = (undefined1 *)(*(long *)(lVar3 + 0x80) + 0x48);
                if (*(long *)(lVar3 + 0x80) == 0) {
                  puVar8 = (undefined1 *)(lVar3 + 0x7c);
                }
                uVar4 = *puVar8;
              }
            }
            uVar6 = FUN_1003a7a00(uVar4);
            FUN_10038e8e0(param_4,"vs_out%d%s = %sO[%d]%s;\n",uVar5,(&PTR_s__100bbc2c0)[bVar1],uVar6
                          ,*(undefined1 *)(lVar7 + 0x2a),
                          (&PTR_s__100bbc340)[*(byte *)(lVar7 + 0x29)]);
          }
        }
        break;
      case '\x01':
        if ((plVar12 == (long *)0x0) ||
           (lVar7 = (**(code **)(*plVar12 + 0x20))(plVar12), lVar7 != 0)) {
          FUN_10037b420(&local_40,param_4);
        }
        else {
          if (plVar13 == (long *)0x0) {
            cVar10 = '\0';
            pcVar11 = "";
          }
          else {
            pcVar11 = (&PTR_s__100bbc340)[*(byte *)((long)plVar13 + 0x29)];
            lVar7 = plVar13[1];
            cVar10 = '\b';
            if (lVar7 != 0) {
              pcVar14 = (char *)(*(long *)(lVar7 + 0x80) + 0x48);
              if (*(long *)(lVar7 + 0x80) == 0) {
                pcVar14 = (char *)(lVar7 + 0x7c);
              }
              cVar10 = *pcVar14;
            }
          }
          if (cVar10 == '\b') {
            pcVar14 = "";
          }
          else {
            pcVar14 = "I2F";
            if (cVar10 != '\x02') {
              if (cVar10 == '\x01') {
                pcVar14 = "U2F";
              }
              else {
                pcVar14 = (char *)0x0;
              }
            }
          }
          if (plVar13 == (long *)0x0) {
            uVar5 = 0;
          }
          else {
            lVar7 = plVar13[1];
            uVar5 = 8;
            if (lVar7 != 0) {
              puVar8 = (undefined1 *)(*(long *)(lVar7 + 0x80) + 0x48);
              if (*(long *)(lVar7 + 0x80) == 0) {
                puVar8 = (undefined1 *)(lVar7 + 0x7c);
              }
              uVar5 = *puVar8;
            }
          }
          uVar6 = FUN_1003a7a00(uVar5);
          uVar5 = 0;
          uVar9 = 0;
          if (plVar13 != (long *)0x0) {
            uVar5 = *(undefined1 *)((long)plVar13 + 0x2a);
            uVar9 = (ulong)*(byte *)((long)plVar13 + 0x29);
          }
          FUN_10038e8e0(param_4,"gl_Position%s = %s(%sO[%d])%s;\n",pcVar11,pcVar14,uVar6,uVar5,
                        (&PTR_s__100bbc340)[uVar9]);
        }
        break;
      case '\x02':
        local_68 = FUN_10037b630(&local_40,local_68,param_4);
        break;
      case '\x03':
        break;
      default:
        goto switchD_100379c4c_default;
      }
      if (plVar13 == (long *)0x0) {
        local_40 = (long *)0x0;
        goto LAB_100379e7f;
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
    local_40 = (long *)0x0;
  }
LAB_100379e7f:
  if ((*(long *)(param_3 + 0x620) == 0) && (*(int *)(param_3 + 0x2748) != 0)) {
    FUN_10037b790(param_2,*(undefined8 *)(param_3 + 0x2750),param_4);
  }
  uVar6 = 0;
  FUN_10038e8e0(param_4,"}\n\n");
switchD_100379c4c_default:
  return uVar6;
}

