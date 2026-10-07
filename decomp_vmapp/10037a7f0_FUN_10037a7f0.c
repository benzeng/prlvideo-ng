
undefined8 FUN_10037a7f0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  char cVar11;
  char *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  char *extraout_RDX_03;
  char *extraout_RDX_04;
  long *plVar12;
  char *pcVar13;
  undefined4 local_64;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar2 = *(long *)(param_2 + 0x1d0);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    uVar6 = 8;
    if (lVar3 != 0) {
      puVar10 = (undefined1 *)(*(long *)(lVar3 + 0x80) + 0x48);
      if (*(long *)(lVar3 + 0x80) == 0) {
        puVar10 = (undefined1 *)(lVar3 + 0x7c);
      }
      uVar6 = *puVar10;
    }
    uVar7 = FUN_1003a78b0(uVar6,*(undefined1 *)(lVar2 + 0x29),uVar6);
    FUN_10038e8e0(param_4,"%s oMask;\n\n",uVar7);
  }
  lVar2 = *(long *)(param_2 + 0x1e0);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    uVar6 = 8;
    if (lVar3 != 0) {
      puVar10 = (undefined1 *)(*(long *)(lVar3 + 0x80) + 0x48);
      if (*(long *)(lVar3 + 0x80) == 0) {
        puVar10 = (undefined1 *)(lVar3 + 0x7c);
      }
      uVar6 = *puVar10;
    }
    uVar7 = FUN_1003a78b0(uVar6,*(undefined1 *)(lVar2 + 0x29),uVar6);
    FUN_10038e8e0(param_4,"%s vCoverageMask;\n\n",uVar7);
  }
  if (*(long *)(param_2 + 0x1c8) != 0) {
    FUN_10038e8e0(param_4,"#define oDepth gl_FragDepth\n\n");
  }
  if (*(long *)(param_2 + 0x1e8) != 0) {
    if ((*(long *)(param_3 + 0x620) == 0) || (*(long *)(*(long *)(param_3 + 0x620) + 0x1c8) == 0)) {
      pcVar13 = "#define RT_ArrayIndex 0\n";
    }
    else {
      pcVar13 = "flat in int RT_ArrayIndex;\n";
    }
    FUN_10038e8e0(param_4,pcVar13);
  }
  local_50 = *(long *)(param_3 + 0x620);
  if (local_50 == 0) {
    local_50 = *(long *)(param_3 + 0x618);
  }
  plVar12 = *(long **)(param_2 + 0x10);
  if (plVar12 != (long *)0x0) {
    do {
      if (((*(byte *)((long)plVar12 + 0x2d) & 6) != 0) ||
         (FUN_10037d3f0(&local_38,local_50,*(undefined1 *)((long)plVar12 + 0x2a),
                        *(undefined1 *)((long)plVar12 + 0x29)), local_38 == 0)) goto LAB_10037aa3b;
      pcVar13 = "centroid";
      switch(*(undefined1 *)((long)plVar12 + 0x2c)) {
      case 1:
        pcVar13 = "flat";
        break;
      default:
        goto switchD_10037a982_caseD_2;
      case 3:
        break;
      case 4:
        pcVar13 = "noperspective";
        if (*(char *)(DAT_1011c8478 + 0x65) == '\0') break;
        goto switchD_10037a982_caseD_2;
      case 5:
        pcVar13 = "centroid";
        if (*(char *)(DAT_1011c8478 + 0x65) == '\0') {
          pcVar13 = "noperspective centroid";
        }
      }
      FUN_10038e8e0(param_4,"%s ",pcVar13);
      pcVar13 = extraout_RDX;
switchD_10037a982_caseD_2:
      lVar2 = plVar12[1];
      uVar6 = 8;
      if (lVar2 != 0) {
        puVar10 = (undefined1 *)(*(long *)(lVar2 + 0x80) + 0x48);
        if (*(long *)(lVar2 + 0x80) == 0) {
          puVar10 = (undefined1 *)(lVar2 + 0x7c);
        }
        uVar6 = *puVar10;
      }
      uVar7 = FUN_1003a78b0(uVar6,*(undefined1 *)((long)plVar12 + 0x29),pcVar13,uVar6);
      uVar8 = FUN_1003ac5c0(local_50);
      FUN_10038e8e0(param_4,"in %s %s_out%d%s;\n",uVar7,uVar8,*(undefined1 *)((long)plVar12 + 0x2a),
                    (&PTR_s__100bbc2c0)[*(byte *)((long)plVar12 + 0x29)]);
LAB_10037aa3b:
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  FUN_10038e8e0(param_4,"\n");
  uVar7 = extraout_RDX_00;
  for (puVar4 = *(undefined8 **)(param_2 + 0x18); puVar4 != (undefined8 *)0x0;
      puVar4 = (undefined8 *)*puVar4) {
    lVar2 = puVar4[1];
    uVar6 = 8;
    if (lVar2 != 0) {
      puVar10 = (undefined1 *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        puVar10 = (undefined1 *)(lVar2 + 0x7c);
      }
      uVar6 = *puVar10;
    }
    uVar7 = FUN_1003a78b0(uVar6,*(undefined1 *)((long)puVar4 + 0x29),uVar7,uVar6);
    FUN_10038e8e0(param_4,"out %s ps_out%d%s;\n",uVar7,*(undefined1 *)((long)puVar4 + 0x2a),
                  (&PTR_s__100bbc2c0)[*(byte *)((long)puVar4 + 0x29)]);
    uVar7 = extraout_RDX_01;
  }
  FUN_10038e8e0(param_4,"\n\nvoid init_input_registers()\n{\n");
  if ((*(long *)(param_2 + 0x1e0) != 0) && (*(char *)(DAT_1011c8478 + 0x7c) != '\0')) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x1e0) + 8);
    cVar11 = '\b';
    if (lVar2 != 0) {
      pcVar13 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar13 = (char *)(lVar2 + 0x7c);
      }
      cVar11 = *pcVar13;
    }
    if (cVar11 == '\b') {
      pcVar13 = "F2I";
    }
    else if (cVar11 == '\x02') {
      pcVar13 = "";
    }
    else if (cVar11 == '\x01') {
      pcVar13 = (char *)FUN_1003a78b0(2,1);
    }
    else {
      pcVar13 = (char *)0x0;
    }
    FUN_10038e8e0(param_4,"vCoverageMask = %s(gl_SampleMaskIn[0]);\n",pcVar13);
  }
  plVar12 = *(long **)(param_2 + 0x10);
  local_40 = plVar12;
  if (plVar12 != (long *)0x0) {
    local_64 = 0;
    do {
      local_40 = plVar12;
      if ((*(byte *)((long)plVar12 + 0x2d) & 2) == 0) {
        uVar6 = 0;
        uVar5 = 0;
        if (plVar12 != (long *)0x0) {
          if ((*(byte *)((long)plVar12 + 0x2d) & 4) != 0) goto LAB_10037abea;
          uVar6 = 0;
          uVar5 = 0;
          if (plVar12 != (long *)0x0) {
            uVar6 = *(undefined1 *)((long)plVar12 + 0x2a);
            uVar5 = *(undefined1 *)((long)plVar12 + 0x29);
          }
        }
        FUN_10037d3f0(&local_48,local_50,uVar6,uVar5);
        if (local_48 != 0) goto LAB_10037abea;
        goto LAB_10037af70;
      }
LAB_10037abea:
      if (plVar12 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        lVar2 = plVar12[1];
        uVar6 = 8;
        if (lVar2 != 0) {
          puVar10 = (undefined1 *)(*(long *)(lVar2 + 0x80) + 0x48);
          if (*(long *)(lVar2 + 0x80) == 0) {
            puVar10 = (undefined1 *)(lVar2 + 0x7c);
          }
          uVar6 = *puVar10;
        }
      }
      uVar7 = FUN_1003a7a00(uVar6);
      uVar6 = 0;
      uVar9 = 0;
      if (plVar12 != (long *)0x0) {
        uVar6 = *(undefined1 *)((long)plVar12 + 0x2a);
        uVar9 = (ulong)*(byte *)((long)plVar12 + 0x29);
      }
      FUN_10038e8e0(param_4,"%sV[%d]%s = ",uVar7,uVar6,(&PTR_s__100bbc340)[uVar9]);
      if (plVar12 == (long *)0x0) {
switchD_10037ac80_caseD_0:
        uVar7 = FUN_1003ac5c0(local_50);
        uVar6 = 0;
        uVar9 = 0;
        if (plVar12 != (long *)0x0) {
          uVar6 = *(undefined1 *)((long)plVar12 + 0x2a);
          uVar9 = (ulong)*(byte *)((long)plVar12 + 0x29);
        }
        FUN_10038e8e0(param_4,"%s_out%d%s;\n",uVar7,uVar6,(&PTR_s__100bbc2c0)[uVar9]);
      }
      else {
        uVar7 = 3;
        switch((char)plVar12[5]) {
        case '\0':
          goto switchD_10037ac80_caseD_0;
        case '\x01':
          if (plVar12 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined1 *)((long)plVar12 + 0x29);
          }
          uVar7 = FUN_1003a78b0(8,uVar6);
          FUN_10038e8e0(param_4,"%s(",uVar7);
          pcVar13 = extraout_RDX_03;
          if (plVar12 != (long *)0x0) {
            pcVar13 = "";
            if ((*(byte *)((long)plVar12 + 0x29) & 1) != 0) {
              FUN_10038e8e0(param_4,"%s%sgl_FragCoord%s","","",".x");
              pcVar13 = ", ";
            }
            if ((*(byte *)((long)plVar12 + 0x29) & 2) != 0) {
              FUN_10038e8e0(param_4,"%s%sgl_FragCoord%s",pcVar13,"",".y");
              pcVar13 = ", ";
            }
            if ((*(byte *)((long)plVar12 + 0x29) & 4) != 0) {
              FUN_10038e8e0(param_4,"%s%sgl_FragCoord%s",pcVar13,"",".z");
              pcVar13 = ", ";
            }
            if ((*(byte *)((long)plVar12 + 0x29) & 8) != 0) {
              FUN_10038e8e0(param_4,"%s%sgl_FragCoord%s",pcVar13,"1.0/",".w");
              pcVar13 = extraout_RDX_04;
            }
          }
          FUN_10038e8e0(param_4,");\n",pcVar13);
          break;
        case '\x02':
          local_64 = FUN_10037b990(param_2,&local_40,local_64);
          break;
        case '\x03':
        case '\n':
          uVar6 = 0;
          uVar5 = 0;
          if (plVar12 != (long *)0x0) {
            lVar2 = plVar12[1];
            uVar6 = 8;
            if (lVar2 != 0) {
              puVar10 = (undefined1 *)(*(long *)(lVar2 + 0x80) + 0x48);
              if (*(long *)(lVar2 + 0x80) == 0) {
                puVar10 = (undefined1 *)(lVar2 + 0x7c);
              }
              uVar6 = *puVar10;
            }
            if (plVar12 == (long *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined1 *)((long)plVar12 + 0x29);
            }
          }
          uVar7 = FUN_1003a78b0(uVar6,uVar5);
          FUN_10038e8e0(param_4,"%s(0);\n",uVar7);
          break;
        case '\x04':
          if (plVar12 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            lVar2 = plVar12[1];
            uVar6 = 8;
            if (lVar2 != 0) {
              puVar10 = (undefined1 *)(*(long *)(lVar2 + 0x80) + 0x48);
              if (*(long *)(lVar2 + 0x80) == 0) {
                puVar10 = (undefined1 *)(lVar2 + 0x7c);
              }
              uVar6 = *puVar10;
            }
          }
          uVar7 = FUN_1003a78b0(uVar6,1,extraout_RDX_02,uVar6);
          FUN_10038e8e0(param_4,"%s(RT_ArrayIndex);\n",uVar7);
          break;
        default:
          goto switchD_10037ac80_caseD_5;
        case '\t':
          if (plVar12 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            lVar2 = plVar12[1];
            if (lVar2 != 0) {
              pcVar13 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
              if (*(long *)(lVar2 + 0x80) == 0) {
                pcVar13 = (char *)(lVar2 + 0x7c);
              }
              if (*pcVar13 == '\x04') {
                FUN_10038e8e0(param_4,"gl_FrontFacing");
                break;
              }
            }
            if (plVar12 == (long *)0x0) {
              uVar6 = 0;
            }
            else {
              lVar2 = plVar12[1];
              uVar6 = 8;
              if (lVar2 != 0) {
                puVar10 = (undefined1 *)(*(long *)(lVar2 + 0x80) + 0x48);
                if (*(long *)(lVar2 + 0x80) == 0) {
                  puVar10 = (undefined1 *)(lVar2 + 0x7c);
                }
                uVar6 = *puVar10;
              }
            }
          }
          uVar7 = FUN_1003a78b0(uVar6,1);
          FUN_10038e8e0(param_4,"%s(gl_FrontFacing ? 0xFFFFFFFF : 0);\n",uVar7);
        }
      }
LAB_10037af70:
      if (plVar12 == (long *)0x0) {
        local_40 = (long *)0x0;
        goto LAB_10037af8f;
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
    local_40 = (long *)0x0;
  }
LAB_10037af8f:
  FUN_10038e8e0(param_4,"}\n\nvoid init_output_registers()\n{\n");
  lVar2 = *(long *)(param_2 + 0x1d0);
  if (lVar2 == 0) goto LAB_10037b064;
  lVar3 = *(long *)(lVar2 + 8);
  if (*(char *)(DAT_1011c8478 + 0x7c) == '\0') {
    if (lVar3 == 0) {
LAB_10037b04c:
      pcVar13 = "F2I";
    }
    else {
      pcVar13 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
      if (*(long *)(lVar3 + 0x80) == 0) {
        pcVar13 = (char *)(lVar3 + 0x7c);
      }
      cVar11 = *pcVar13;
      if (cVar11 == '\b') goto LAB_10037b04c;
      if (cVar11 == '\x02') {
        pcVar13 = "";
      }
      else if (cVar11 == '\x01') {
        pcVar13 = (char *)FUN_1003a78b0(2,*(undefined1 *)(lVar2 + 0x29));
      }
      else {
        pcVar13 = (char *)0x0;
      }
    }
    FUN_10038e8e0(param_4,"if(%s(oMask) == 0) discard;\n",pcVar13);
    goto LAB_10037b064;
  }
  if (lVar3 == 0) {
LAB_10037b032:
    pcVar13 = "F2I";
  }
  else {
    pcVar13 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
    if (*(long *)(lVar3 + 0x80) == 0) {
      pcVar13 = (char *)(lVar3 + 0x7c);
    }
    cVar11 = *pcVar13;
    if (cVar11 == '\b') goto LAB_10037b032;
    if (cVar11 == '\x02') {
      pcVar13 = "";
    }
    else if (cVar11 == '\x01') {
      pcVar13 = (char *)FUN_1003a78b0(2,*(undefined1 *)(lVar2 + 0x29));
    }
    else {
      pcVar13 = (char *)0x0;
    }
  }
  FUN_10038e8e0(param_4,"gl_SampleMask[0] = %s(oMask);\n",pcVar13);
LAB_10037b064:
  for (puVar4 = *(undefined8 **)(param_2 + 0x18); puVar4 != (undefined8 *)0x0;
      puVar4 = (undefined8 *)*puVar4) {
    if (*(char *)(puVar4 + 5) != '\0') {
      return 4;
    }
    uVar6 = *(undefined1 *)((long)puVar4 + 0x2a);
    bVar1 = *(byte *)((long)puVar4 + 0x29);
    lVar2 = puVar4[1];
    uVar5 = 8;
    if (lVar2 != 0) {
      puVar10 = (undefined1 *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        puVar10 = (undefined1 *)(lVar2 + 0x7c);
      }
      uVar5 = *puVar10;
    }
    uVar7 = FUN_1003a7a00(uVar5);
    FUN_10038e8e0(param_4,"ps_out%d%s = %sO[%d]%s;\n",uVar6,(&PTR_s__100bbc2c0)[bVar1],uVar7,
                  *(undefined1 *)((long)puVar4 + 0x2a),
                  (&PTR_s__100bbc340)[*(byte *)((long)puVar4 + 0x29)]);
    if ((*(char *)(param_1 + 0x18) != '\0') && (*(char *)((long)puVar4 + 0x2a) == '\0')) {
      lVar2 = puVar4[1];
      cVar11 = '\b';
      if (lVar2 != 0) {
        pcVar13 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
        if (*(long *)(lVar2 + 0x80) == 0) {
          pcVar13 = (char *)(lVar2 + 0x7c);
        }
        cVar11 = *pcVar13;
      }
      if (cVar11 == '\b') {
        pcVar13 = "";
      }
      else {
        pcVar13 = "I2F";
        if (cVar11 != '\x02') {
          if (cVar11 == '\x01') {
            pcVar13 = "U2F";
          }
          else {
            pcVar13 = (char *)0x0;
          }
        }
      }
      FUN_10038e8e0(param_4,"if (%s(ps_out0%s.a) < 0.5) discard;\n",pcVar13,
                    (&PTR_s__100bbc2c0)[*(byte *)((long)puVar4 + 0x29)]);
    }
  }
  uVar7 = 0;
  FUN_10038e8e0(param_4,"}\n\n");
switchD_10037ac80_caseD_5:
  return uVar7;
}

