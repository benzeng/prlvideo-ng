
undefined8 FUN_100379f20(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  char cVar8;
  uint uVar9;
  char *pcVar10;
  undefined8 extraout_RDX;
  char *extraout_RDX_00;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 local_68;
  long local_58;
  long *local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  if (*(long *)(param_2 + 0x1c8) != 0) {
    FUN_10038e8e0(param_4,"flat out int RT_ArrayIndex;\n");
  }
  uVar5 = *(int *)(param_2 + 0x1d8) - 1;
  uVar12 = 2;
  if ((((uVar5 < 7) && ((0x67U >> (uVar5 & 0x1f) & 1) != 0)) &&
      (uVar9 = *(int *)(param_2 + 0x1dc) - 1, uVar9 < 0xd)) &&
     ((0x1e1fU >> (uVar9 & 0x1f) & 1) != 0)) {
    FUN_10038e8e0(param_4,"layout (%s) in;\nlayout (%s, max_vertices = %d) out;\n\n",
                  (&PTR_s_points_100bbc3c0)[(int)uVar5],(&PTR_s_points_100bbc400)[(int)uVar9],
                  *(undefined4 *)(param_2 + 0x1d4));
    lVar11 = *(long *)(param_2 + 0x1c0);
    if (lVar11 != 0) {
      lVar2 = *(long *)(lVar11 + 8);
      cVar8 = '\b';
      if (lVar2 != 0) {
        pcVar10 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
        if (*(long *)(lVar2 + 0x80) == 0) {
          pcVar10 = (char *)(lVar2 + 0x7c);
        }
        cVar8 = *pcVar10;
      }
      if (cVar8 == '\b') {
        pcVar10 = "I2F";
      }
      else if (cVar8 == '\x02') {
        pcVar10 = "";
      }
      else if (cVar8 == '\x01') {
        pcVar10 = (char *)FUN_1003a78b0(1,*(undefined1 *)(lVar11 + 0x29));
      }
      else {
        pcVar10 = (char *)0x0;
      }
      FUN_10038e8e0(param_4,"#define vPrim %s(gl_PrimitiveIDIn)\n\n",pcVar10);
    }
    plVar14 = *(long **)(param_2 + 0x10);
    if (plVar14 != (long *)0x0) {
      do {
        if ((((*(byte *)((long)plVar14 + 0x2d) & 2) == 0) &&
            (((*(byte *)((long)plVar14 + 0x2d) & 4) == 0 || ((char)plVar14[5] == '\x02')))) &&
           (FUN_10037d3f0(&local_38,*(undefined8 *)(param_3 + 0x618),
                          *(undefined1 *)((long)plVar14 + 0x2a),
                          *(undefined1 *)((long)plVar14 + 0x29)), local_38 != 0)) {
          lVar11 = plVar14[1];
          uVar4 = 8;
          if (lVar11 != 0) {
            puVar7 = (undefined1 *)(*(long *)(lVar11 + 0x80) + 0x48);
            if (*(long *)(lVar11 + 0x80) == 0) {
              puVar7 = (undefined1 *)(lVar11 + 0x7c);
            }
            uVar4 = *puVar7;
          }
          uVar12 = FUN_1003a78b0(uVar4,*(undefined1 *)((long)plVar14 + 0x29),extraout_RDX,uVar4);
          FUN_10038e8e0(param_4,"in %s vs_out%d%s[];\n",uVar12,*(undefined1 *)((long)plVar14 + 0x2a)
                        ,(&PTR_s__100bbc2c0)[*(byte *)((long)plVar14 + 0x29)]);
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    FUN_10038e8e0(param_4,"\n");
    lVar11 = *(long *)(param_3 + 0x628);
    if (lVar11 != 0) {
      puVar13 = *(undefined8 **)(param_2 + 0x18);
      do {
        if (puVar13 == (undefined8 *)0x0) break;
        FUN_10037d360(&local_40,lVar11,*(undefined1 *)((long)puVar13 + 0x2a),
                      *(undefined1 *)((long)puVar13 + 0x29));
        lVar11 = local_40;
        if (local_40 == 0) goto LAB_10037a234;
        pcVar10 = "centroid";
        switch(*(undefined1 *)(local_40 + 0x2c)) {
        case 1:
          pcVar10 = "flat";
          break;
        default:
          goto switchD_10037a184_caseD_2;
        case 3:
          break;
        case 4:
          pcVar10 = "noperspective";
          if (*(char *)(DAT_1011c8478 + 0x65) == '\0') break;
          goto switchD_10037a184_caseD_2;
        case 5:
          pcVar10 = "centroid";
          if (*(char *)(DAT_1011c8478 + 0x65) == '\0') {
            pcVar10 = "noperspective centroid";
          }
        }
        FUN_10038e8e0(param_4,"%s ",pcVar10);
        pcVar10 = extraout_RDX_00;
switchD_10037a184_caseD_2:
        lVar2 = *(long *)(lVar11 + 8);
        uVar4 = 8;
        if (lVar2 != 0) {
          puVar7 = (undefined1 *)(*(long *)(lVar2 + 0x80) + 0x48);
          if (*(long *)(lVar2 + 0x80) == 0) {
            puVar7 = (undefined1 *)(lVar2 + 0x7c);
          }
          uVar4 = *puVar7;
        }
        uVar12 = FUN_1003a78b0(uVar4,*(undefined1 *)(lVar11 + 0x29),pcVar10,uVar4);
        FUN_10038e8e0(param_4,"out %s gs_out%d%s;\n",uVar12,*(undefined1 *)(lVar11 + 0x2a),
                      (&PTR_s__100bbc2c0)[*(byte *)(lVar11 + 0x29)]);
LAB_10037a234:
        puVar13 = (undefined8 *)*puVar13;
        lVar11 = *(long *)(param_3 + 0x628);
      } while (lVar11 != 0);
    }
    if (*(int *)(param_3 + 0x2748) != 0) {
      FUN_10037b280(param_2,*(undefined8 *)(param_3 + 0x2750),param_4);
    }
    FUN_10038e8e0(param_4,"\n\nvoid init_input_registers()\n{\nint i = 0;\n");
    if (1 < *(uint *)(param_2 + 0x1d0)) {
      FUN_10038e8e0(param_4,"for(; i < %d; i++) {\n");
    }
    plVar14 = *(long **)(param_2 + 0x10);
    local_48 = plVar14;
    if (plVar14 != (long *)0x0) {
      local_68 = 0;
      do {
        lVar11 = plVar14[1];
        uVar4 = 8;
        if (lVar11 != 0) {
          puVar7 = (undefined1 *)(*(long *)(lVar11 + 0x80) + 0x48);
          if (*(long *)(lVar11 + 0x80) == 0) {
            puVar7 = (undefined1 *)(lVar11 + 0x7c);
          }
          uVar4 = *puVar7;
        }
        local_48 = plVar14;
        uVar12 = FUN_1003a7a00(uVar4);
        uVar4 = 0;
        uVar6 = 0;
        if (plVar14 != (long *)0x0) {
          uVar4 = *(undefined1 *)((long)plVar14 + 0x2a);
          uVar6 = (ulong)*(byte *)((long)plVar14 + 0x29);
        }
        FUN_10038e8e0(param_4,"%sV[i * %d + %d]%s = ",uVar12,*(undefined4 *)(param_2 + 0x17c),uVar4,
                      (&PTR_s__100bbc340)[uVar6]);
        uVar4 = 0;
        uVar6 = 0;
        if (plVar14 == (long *)0x0) {
LAB_10037a36e:
          FUN_10038e8e0(param_4,"vs_out%d%s[i];\n",uVar4,(&PTR_s__100bbc2c0)[uVar6]);
        }
        else {
          uVar12 = 3;
          switch((char)plVar14[5]) {
          case '\0':
            uVar4 = 0;
            uVar6 = 0;
            if (plVar14 != (long *)0x0) {
              uVar4 = *(undefined1 *)((long)plVar14 + 0x2a);
              uVar6 = (ulong)*(byte *)((long)plVar14 + 0x29);
            }
            goto LAB_10037a36e;
          case '\x01':
            uVar6 = 0;
            if (plVar14 != (long *)0x0) {
              uVar6 = (ulong)*(byte *)((long)plVar14 + 0x29);
            }
            FUN_10038e8e0(param_4,"gl_in[i].gl_Position%s;\n",(&PTR_s__100bbc340)[uVar6]);
            break;
          case '\x02':
            local_68 = FUN_10037b990(param_2,&local_48,local_68,param_4);
            break;
          case '\x03':
            break;
          default:
            goto switchD_10037a356_default;
          }
        }
        if (plVar14 == (long *)0x0) {
          local_48 = (long *)0x0;
          goto LAB_10037a3e9;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      local_48 = (long *)0x0;
    }
LAB_10037a3e9:
    if (1 < *(uint *)(param_2 + 0x1d0)) {
      FUN_10038e8e0(param_4,"}\n");
    }
    FUN_10038e8e0(param_4,"}\n\nvoid init_output_registers()\n{\n");
    plVar14 = *(long **)(param_2 + 0x18);
    local_50 = plVar14;
    if (plVar14 != (long *)0x0) {
      local_68 = 0;
      do {
        uVar12 = 4;
        local_50 = plVar14;
        switch((char)plVar14[5]) {
        case '\0':
          if (*(long *)(param_3 + 0x628) != 0) {
            uVar4 = 0;
            uVar3 = 0;
            if (plVar14 != (long *)0x0) {
              uVar4 = *(undefined1 *)((long)plVar14 + 0x2a);
              uVar3 = *(undefined1 *)((long)plVar14 + 0x29);
            }
            FUN_10037d360(&local_58,*(long *)(param_3 + 0x628),uVar4,uVar3);
            lVar11 = local_58;
            if (local_58 != 0) {
              uVar4 = *(undefined1 *)(local_58 + 0x2a);
              bVar1 = *(byte *)(local_58 + 0x29);
              lVar2 = *(long *)(local_58 + 8);
              uVar3 = 8;
              if (lVar2 != 0) {
                puVar7 = (undefined1 *)(*(long *)(lVar2 + 0x80) + 0x48);
                if (*(long *)(lVar2 + 0x80) == 0) {
                  puVar7 = (undefined1 *)(lVar2 + 0x7c);
                }
                uVar3 = *puVar7;
              }
              uVar12 = FUN_1003a7a00(uVar3);
              FUN_10038e8e0(param_4,"gs_out%d%s = %sO[%d]%s;\n",uVar4,(&PTR_s__100bbc2c0)[bVar1],
                            uVar12,*(undefined1 *)(lVar11 + 0x2a),
                            (&PTR_s__100bbc340)[*(byte *)(lVar11 + 0x29)]);
            }
          }
          break;
        case '\x01':
          FUN_10037b420(&local_50,param_4);
          break;
        case '\x02':
          local_68 = FUN_10037b630(&local_50,local_68,param_4);
          break;
        default:
          goto switchD_10037a356_default;
        case '\x04':
          if (plVar14 == (long *)0x0) {
LAB_10037a5fa:
            pcVar10 = (char *)0x0;
          }
          else {
            lVar11 = plVar14[1];
            cVar8 = '\b';
            if (lVar11 != 0) {
              pcVar10 = (char *)(*(long *)(lVar11 + 0x80) + 0x48);
              if (*(long *)(lVar11 + 0x80) == 0) {
                pcVar10 = (char *)(lVar11 + 0x7c);
              }
              cVar8 = *pcVar10;
            }
            if (plVar14 == (long *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined1 *)((long)plVar14 + 0x29);
            }
            if (cVar8 == '\b') {
              pcVar10 = "F2I";
            }
            else {
              pcVar10 = "";
              if (cVar8 != '\x02') {
                if (cVar8 != '\x01') goto LAB_10037a5fa;
                pcVar10 = (char *)FUN_1003a78b0(2,uVar4);
              }
            }
          }
          if (plVar14 == (long *)0x0) {
            uVar4 = 0;
          }
          else {
            lVar11 = plVar14[1];
            uVar4 = 8;
            if (lVar11 != 0) {
              puVar7 = (undefined1 *)(*(long *)(lVar11 + 0x80) + 0x48);
              if (*(long *)(lVar11 + 0x80) == 0) {
                puVar7 = (undefined1 *)(lVar11 + 0x7c);
              }
              uVar4 = *puVar7;
            }
          }
          uVar12 = FUN_1003a7a00(uVar4);
          uVar4 = 0;
          uVar6 = 0;
          if (plVar14 != (long *)0x0) {
            uVar4 = *(undefined1 *)((long)plVar14 + 0x2a);
            uVar6 = (ulong)*(byte *)((long)plVar14 + 0x29);
          }
          FUN_10038e8e0(param_4,"gl_Layer = RT_ArrayIndex = %s(%sO[%d]%s);\n",pcVar10,uVar12,uVar4,
                        (&PTR_s__100bbc340)[uVar6]);
          break;
        case '\x05':
          if (1 < *(uint *)(DAT_1011c8478 + 0x1c)) {
            if (plVar14 == (long *)0x0) {
LAB_10037a6a2:
              pcVar10 = (char *)0x0;
            }
            else {
              lVar11 = plVar14[1];
              cVar8 = '\b';
              if (lVar11 != 0) {
                pcVar10 = (char *)(*(long *)(lVar11 + 0x80) + 0x48);
                if (*(long *)(lVar11 + 0x80) == 0) {
                  pcVar10 = (char *)(lVar11 + 0x7c);
                }
                cVar8 = *pcVar10;
              }
              if (plVar14 == (long *)0x0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined1 *)((long)plVar14 + 0x29);
              }
              if (cVar8 == '\b') {
                pcVar10 = "F2I";
              }
              else {
                pcVar10 = "";
                if (cVar8 != '\x02') {
                  if (cVar8 != '\x01') goto LAB_10037a6a2;
                  pcVar10 = (char *)FUN_1003a78b0(2,uVar4);
                }
              }
            }
            if (plVar14 == (long *)0x0) {
              uVar4 = 0;
            }
            else {
              lVar11 = plVar14[1];
              uVar4 = 8;
              if (lVar11 != 0) {
                puVar7 = (undefined1 *)(*(long *)(lVar11 + 0x80) + 0x48);
                if (*(long *)(lVar11 + 0x80) == 0) {
                  puVar7 = (undefined1 *)(lVar11 + 0x7c);
                }
                uVar4 = *puVar7;
              }
            }
            uVar12 = FUN_1003a7a00(uVar4);
            uVar4 = 0;
            uVar6 = 0;
            if (plVar14 != (long *)0x0) {
              uVar4 = *(undefined1 *)((long)plVar14 + 0x2a);
              uVar6 = (ulong)*(byte *)((long)plVar14 + 0x29);
            }
            FUN_10038e8e0(param_4,"gl_ViewportIndex = %s(%sO[%d]%s);\n",pcVar10,uVar12,uVar4,
                          (&PTR_s__100bbc340)[uVar6]);
          }
        }
        if (plVar14 == (long *)0x0) {
          local_50 = (long *)0x0;
          goto LAB_10037a73b;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      local_50 = (long *)0x0;
    }
LAB_10037a73b:
    if (*(int *)(param_3 + 0x2748) != 0) {
      FUN_10037b790(param_2,*(undefined8 *)(param_3 + 0x2750),param_4);
    }
    uVar12 = 0;
    FUN_10038e8e0(param_4,"}\n\n");
  }
switchD_10037a356_default:
  return uVar12;
}

