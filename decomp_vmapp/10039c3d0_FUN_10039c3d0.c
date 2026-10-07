
undefined8 FUN_10039c3d0(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  undefined *puVar18;
  char cVar19;
  byte *pbVar20;
  byte bVar21;
  char *pcVar22;
  byte *pbVar23;
  undefined **ppuVar24;
  uint *puVar25;
  bool bVar26;
  bool bVar27;
  char *in_stack_fffffffffffffab8;
  undefined4 uVar28;
  undefined8 in_stack_fffffffffffffac0;
  uint local_47c;
  long local_478;
  undefined8 local_470;
  int local_468;
  undefined1 local_460 [8];
  long local_458;
  long local_448;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_10038e870(local_460,local_438,0x400);
  lVar6 = (**(code **)(*param_2 + 0x20))(param_2);
  if (lVar6 != 0) {
    bVar21 = *(byte *)(lVar6 + 0x1f0);
    if ((bVar21 & 1) != 0) {
      FUN_10038e8e0(local_460,
                    "\nvec4 ps_samplepos_rasterizer(ivec4 SampleIndex) { return vec4(0); }\n");
      bVar21 = *(byte *)(lVar6 + 0x1f0);
    }
    if ((bVar21 & 6) != 0) {
      FUN_10038e8e0(param_3,"uniform uvec4 ps_rasterinfo;\n");
      bVar21 = *(byte *)(lVar6 + 0x1f0);
    }
    if ((bVar21 & 2) != 0) {
      FUN_10038e8e0(local_460,
                    "\nvec4 ps_sampleinfo_rasterizer() { return vec4(ps_rasterinfo.wwww); }\n");
      bVar21 = *(byte *)(lVar6 + 0x1f0);
    }
    if ((bVar21 & 4) != 0) {
      FUN_10038e8e0(local_460,
                    "\nuvec4 ps_sampleinfo_uint_rasterizer() { return ps_rasterinfo.wwww; }\n");
    }
  }
  uVar4 = FUN_1003ac660(param_2);
  lVar7 = (ulong)uVar4 * 0x20;
  lVar6 = *(long *)(param_1 + 0x3020 + lVar7);
  pbVar20 = *(byte **)(param_1 + 0x3030 + lVar7);
  do {
    do {
      uVar28 = (undefined4)((ulong)in_stack_fffffffffffffab8 >> 0x20);
      if ((pbVar20 == (byte *)0x0) && (lVar6 == *(long *)(param_1 + 0x3020 + lVar7))) {
        if (local_458 == 0) {
          local_458 = local_448;
        }
        FUN_10038e8e0(param_3,"%s\n",local_458);
        FUN_10038e8c0(local_460);
        if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      uVar4 = (uint)((ulong)((long)pbVar20 - lVar6) >> 5);
      if (pbVar20 == (byte *)0x0) {
        uVar4 = 0;
      }
      bVar21 = pbVar20[2];
      if ((bVar21 & 1) != 0) {
        pcVar17 = "";
        if (pbVar20[1] == 1) {
          pcVar17 = "i";
        }
        if (pbVar20[1] == 2) {
          pcVar17 = "u";
        }
        uVar14 = *pbVar20 - 1;
        uVar5 = uVar14;
        if (pbVar20[3] == 1) {
          uVar5 = 2;
        }
        if (*pbVar20 != 1) {
          uVar5 = uVar14;
        }
        pcVar22 = "";
        if (uVar5 < 10) {
          pcVar22 = (&PTR_s_samplerBuffer_100bbd610)[(int)uVar5];
        }
        uVar8 = FUN_1003ac5c0(param_2);
        in_stack_fffffffffffffab8 = (char *)CONCAT44(uVar28,uVar4);
        FUN_10038e8e0(param_3,"uniform %s%s %s_%stex%u;\n",pcVar17,pcVar22,uVar8,"",
                      in_stack_fffffffffffffab8);
        bVar21 = pbVar20[2];
      }
      uVar28 = (undefined4)((ulong)in_stack_fffffffffffffab8 >> 0x20);
      if ((bVar21 & 2) != 0) {
        pcVar17 = "";
        if (pbVar20[1] == 1) {
          pcVar17 = "i";
        }
        if (pbVar20[1] == 2) {
          pcVar17 = "u";
        }
        uVar14 = *pbVar20 - 1;
        uVar5 = uVar14;
        if (pbVar20[3] == 1) {
          uVar5 = 2;
        }
        if (*pbVar20 != 1) {
          uVar5 = uVar14;
        }
        pcVar22 = "";
        if (uVar5 < 10) {
          pcVar22 = (&PTR_s_samplerBuffer_100bbd660)[(int)uVar5];
        }
        uVar8 = FUN_1003ac5c0(param_2);
        in_stack_fffffffffffffab8 = (char *)CONCAT44(uVar28,uVar4);
        FUN_10038e8e0(param_3,"uniform %s%s %s_%stex%u;\n",pcVar17,pcVar22,uVar8,"c",
                      in_stack_fffffffffffffab8);
        bVar21 = pbVar20[2];
      }
      if ((bVar21 & 4) != 0) {
        uVar8 = FUN_1003ac5c0(param_2);
        FUN_10038e8e0(param_3,"uniform uvec4 %s_resinfo%u;\n",uVar8,uVar4);
        bVar21 = pbVar20[2];
      }
      if ((bVar21 & 8) != 0) {
        uVar8 = FUN_1003ac5c0(param_2);
        FUN_10038e8e0(param_3,"uniform vec4 %s_lodinfo%u;\n",uVar8,uVar4);
        bVar21 = pbVar20[2];
      }
      if ((bVar21 & 0x10) != 0) {
        uVar8 = FUN_1003ac5c0(param_2);
        FUN_10038e8e0(param_3,"uniform vec4 %s_resdata%u[%u];\n",uVar8,uVar4,4);
      }
      lVar2 = *(long *)(param_2[0xe] + (ulong)uVar4 * 8);
      pbVar3 = *(byte **)(lVar2 + 0x10);
      for (pbVar23 = *(byte **)(lVar2 + 8); pbVar23 != pbVar3; pbVar23 = pbVar23 + 2) {
        bVar21 = *pbVar23;
        pcVar17 = "";
        if (pbVar20[5] == 1) {
          pcVar17 = "i";
        }
        if (pbVar20[5] == 2) {
          pcVar17 = "u";
        }
        uVar8 = FUN_1003ac5c0(param_2);
        uVar14 = bVar21 & 0xef;
        uVar5 = uVar14 - 1;
        pcVar22 = "";
        if (uVar5 < 10) {
          pcVar22 = (&PTR_s_ld_100bbd4a0)[(int)uVar5];
        }
        FUN_10038e8e0(local_460,"\n%svec4 %s_%s",pcVar17,uVar8,pcVar22);
        if ((bVar21 & 0x10) != 0) {
          FUN_10038e8e0(local_460,"_offset");
        }
        FUN_10038e8e0(local_460,"_t%u",uVar4);
        if (1 < uVar5) {
          FUN_10038e8e0(local_460,"_s%u",pbVar23[1]);
        }
        pcVar17 = "";
        if (uVar5 < 10) {
          pcVar17 = (&PTR_s_ivec4_tc_100bbd4f0)[(int)uVar5];
        }
        FUN_10038e8e0(local_460,"(%s",pcVar17);
        if ((bVar21 & 0x10) != 0) {
          FUN_10038e8e0(local_460,", ivec3 offset");
        }
        FUN_10038e8e0(local_460);
        if ((bVar21 & 0x10) != 0) {
          if (uVar5 < 2) {
            FUN_10038e8e0(local_460);
          }
          else if ((pbVar20[2] & 4) != 0) {
            uVar8 = FUN_1003ac5c0(param_2);
            FUN_10038e8e0(local_460,"\ttc.xyz += vec3(offset)/vec3(%s_resinfo%u);\n",uVar8,uVar4);
          }
        }
        bVar21 = pbVar20[3];
        if (bVar21 == 3) {
          FUN_10038e8e0(local_460);
        }
        else if (bVar21 == 2) {
          FUN_10038e8e0(local_460);
        }
        else if (bVar21 == 1) {
          uVar28 = *(undefined4 *)(DAT_1011c8478 + 0x14);
          FUN_10038e8e0(local_460,"\ttc.y = tc.x / %u;\n",uVar28);
          FUN_10038e8e0(local_460,"\ttc.x -= tc.y * %u;\n",uVar28);
          FUN_10038e8e0(local_460);
        }
        uVar28 = (undefined4)((ulong)in_stack_fffffffffffffac0 >> 0x20);
        bVar27 = false;
        switch(uVar14) {
        case 2:
          uVar14 = 1;
          if (1 < *(uint *)(DAT_1011c8478 + 0x80)) {
            uVar14 = 2;
          }
          bVar27 = false;
          break;
        case 5:
          bVar26 = pbVar20[6] == 0;
          bVar27 = !bVar26;
          uVar14 = bVar26 + 3 + (uint)bVar26;
          break;
        case 8:
          if (pbVar20[6] != 0) {
            FUN_10038e8e0(local_460);
            bVar27 = true;
            uVar14 = 7;
            goto LAB_10039cab0;
          }
          uVar14 = 8;
          bVar27 = false;
          goto LAB_10039cbf2;
        case 9:
          if (*(char *)(param_1 + 0x3081) == '\0') {
            uVar14 = 9;
            cVar19 = '\0';
            bVar27 = false;
            bVar21 = 1;
          }
          else {
            FUN_10038e8e0(local_460,"\tfloat lod = 0.0;\n");
            cVar19 = '\x01';
            uVar14 = 7;
            bVar27 = false;
            bVar21 = 1;
          }
          goto LAB_10039cc00;
        case 10:
          if ((pbVar20[2] & 8) == 0) {
            bVar27 = false;
            goto LAB_10039cafe;
          }
          uVar8 = FUN_1003ac5c0(param_2);
          FUN_10038e8e0(local_460,"\tvec2 px = dFdx(tc.xy) * %s_resinfo%u.xy;\n",uVar8,uVar4);
          uVar8 = FUN_1003ac5c0(param_2);
          FUN_10038e8e0(local_460,"\tvec2 py = dFdy(tc.xy) * %s_resinfo%u.xy;\n",uVar8,uVar4);
          FUN_10038e8e0(local_460,"\tfloat lod = 0.5 * log2(max(dot(px, px), dot(py, py)));\n");
          uVar8 = FUN_1003ac5c0(param_2);
          uVar9 = FUN_1003ac5c0(param_2);
          in_stack_fffffffffffffab8 = (char *)FUN_1003ac5c0(param_2);
          in_stack_fffffffffffffac0 = CONCAT44(uVar28,uVar4);
          FUN_10038e8e0(local_460,
                        "\treturn vec4(clamp(lod + %s_lodinfo%u.z, %s_lodinfo%u.x, %s_lodinfo%u.y), lod, 0, 0);\n}\n"
                        ,uVar8,uVar4,uVar9,uVar4,in_stack_fffffffffffffab8,in_stack_fffffffffffffac0
                       );
          goto LAB_10039d0f0;
        }
        cVar19 = '\0';
        if (uVar14 < 0xb) {
          if ((0x2deU >> (uVar14 & 0x1f) & 1) == 0) {
            if ((0x120U >> (uVar14 & 0x1f) & 1) == 0) {
              bVar21 = 0;
              if (uVar14 != 10) goto LAB_10039cc00;
LAB_10039cafe:
              bVar21 = 1;
              if (*(char *)(param_1 + 0x3080) != '\0') {
                bVar21 = 0xc;
              }
              uVar14 = 10;
            }
            else {
LAB_10039cbf2:
              bVar21 = 2;
            }
            cVar19 = '\0';
          }
          else {
LAB_10039cab0:
            cVar19 = '\0';
            bVar21 = 1;
          }
        }
        else {
          bVar21 = 0;
        }
LAB_10039cc00:
        if (bVar21 == (pbVar20[2] & bVar21)) {
          if (*pbVar20 != 0) {
            FUN_10039bae0(&local_478,cVar19,*pbVar20,uVar14,pbVar20[5],pbVar20[3]);
            iVar12 = local_468;
            uVar8 = local_470;
            lVar11 = local_478;
            uVar28 = (undefined4)((ulong)in_stack_fffffffffffffab8 >> 0x20);
            if (local_478 != 0) {
              bVar1 = pbVar20[1];
              uVar5 = (uint)bVar1;
              pcVar17 = "";
              if (bVar1 == 1) {
                pcVar17 = "i";
              }
              if (bVar1 == 2) {
                pcVar17 = "u";
              }
              FUN_10038e8e0(local_460,"\t%svec4 ret = ",pcVar17);
              if ((bVar21 & 2) != 0) {
                FUN_10038e8e0(local_460,"%svec4",pcVar17);
              }
              pcVar17 = "";
              if (uVar14 - 6 < 3) {
                pcVar17 = (&PTR_s_Grad_100bbd560)[(int)(uVar14 - 6)];
              }
              uVar9 = FUN_1003ac5c0(param_2);
              bVar21 = (bVar21 & 2) >> 1;
              pcVar22 = "";
              if (bVar21 == 1) {
                pcVar22 = "c";
              }
              if (bVar21 == 0) {
                pcVar22 = "";
              }
              pcVar10 = "";
              switch(uVar14) {
              case 2:
                pcVar10 = ", SampleIndex";
                break;
              case 4:
                pcVar10 = ", bias";
                break;
              case 6:
                pcVar10 = "";
                if (*pbVar20 - 2 < 9) {
                  pcVar10 = (&PTR_s_Lod_100bbd570)[*pbVar20];
                }
                break;
              case 7:
                pcVar10 = ", lod";
                break;
              case 8:
                pcVar10 = ", 0.0";
              }
              in_stack_fffffffffffffab8 = (char *)CONCAT44(uVar28,uVar4);
              FUN_10038e8e0(local_460,"(%s%s(%s_%stex%u, %s%s));\n",lVar11,pcVar17,uVar9,pcVar22,
                            in_stack_fffffffffffffab8,uVar8,pcVar10);
              if (pbVar20[7] == 1) {
LAB_10039cf23:
                in_stack_fffffffffffffab8 = "ret";
                FUN_10038e8e0(local_460,"\t%s.w = %s.x; %s.x = %s.y = %s.z = 0;\n","ret","ret","ret"
                              ,"ret","ret",uVar8,pcVar10);
              }
              else {
                if (cVar19 != '\0') {
                  iVar12 = 1;
                }
                if (iVar12 == 3) goto LAB_10039cf23;
                if (iVar12 == 2) {
                  FUN_10038e8e0(local_460,"\t%s.z = %s.w = 0;\n","ret","ret");
                }
                else if (iVar12 == 1) {
                  FUN_10038e8e0(local_460,"\t%s = %s.xxxx;\n","ret","ret");
                }
              }
              in_stack_fffffffffffffac0 = uVar8;
              if (bVar27) {
                FUN_10039bee0();
                in_stack_fffffffffffffac0 = uVar8;
              }
              lVar11 = 0;
              if (pbVar20[4] != 0) {
                FUN_10039c020();
                uVar5 = pbVar20[4] & 3;
                uVar14 = uVar5 + bVar1;
                uVar5 = (uVar5 - 3) + (uint)bVar1;
                if (uVar14 < 3) {
                  uVar5 = uVar14;
                }
                lVar11 = 1;
              }
              bVar21 = pbVar20[5];
              if (uVar5 == bVar21) {
                puVar18 = (&PTR_s_ret_100bbd350)[lVar11];
              }
              else {
                pcVar17 = "";
                if (bVar21 == 1) {
                  pcVar17 = "i";
                }
                if (bVar21 == 2) {
                  pcVar17 = "u";
                }
                puVar18 = (&PTR_s_ret_100bbd350)[(int)lVar11 + 1];
                if (uVar5 == 2) {
                  bVar27 = bVar21 == 0;
                  pcVar22 = "ivec4";
                  pcVar13 = "U2F";
LAB_10039d0a8:
                  if (bVar27) {
                    pcVar22 = pcVar13;
                  }
                }
                else {
                  if (uVar5 == 1) {
                    bVar27 = bVar21 == 0;
                    pcVar22 = "uvec4";
                    pcVar13 = "I2F";
                    goto LAB_10039d0a8;
                  }
                  pcVar22 = "";
                  if (uVar5 == 0) {
                    bVar27 = bVar21 == 1;
                    pcVar22 = "F2U";
                    pcVar13 = "F2I";
                    goto LAB_10039d0a8;
                  }
                }
                FUN_10038e8e0(local_460,"\t%svec4 %s = %s(%s);\n",pcVar17,puVar18,pcVar22,
                              (&PTR_s_ret_100bbd350)[lVar11],in_stack_fffffffffffffab8,
                              in_stack_fffffffffffffac0,pcVar10);
              }
              FUN_10038e8e0(local_460,"\treturn %s;\n}\n",puVar18);
              goto LAB_10039d0f0;
            }
          }
LAB_10039cd64:
          pcVar17 = "";
          if (pbVar20[5] == 1) {
            pcVar17 = "i";
          }
          if (pbVar20[5] == 2) {
            pcVar17 = "u";
          }
          FUN_10038e8e0(local_460,"\treturn %svec4(0.0, 0.0, 0.0, 0.0);\n}\n",pcVar17);
        }
        else {
          if ((pbVar20[2] & 0x10) == 0) goto LAB_10039cd64;
          uVar8 = FUN_1003ac5c0(param_2);
          pcVar17 = "";
          if (pbVar20[5] == 1) {
            pcVar17 = "i";
          }
          if (pbVar20[5] == 2) {
            pcVar17 = "u";
          }
          FUN_10038e8e0(local_460,
                        "\tif (tc.y != 0 || tc.z != 0 || tc.x < 0 || tc.x >= int(%s_resinfo%u.x))\n\t\treturn %svec4(0.0, 0.0, 0.0, 0.0);\n"
                        ,uVar8,uVar4,pcVar17);
          uVar8 = FUN_1003ac5c0(param_2);
          FUN_10038e8e0(local_460,"\treturn %s_resdata%u[tc.x];\n}\n",uVar8,uVar4);
        }
LAB_10039d0f0:
      }
      bVar21 = *(byte *)(lVar2 + 0x23);
      if ((bVar21 & 7) != 0) {
        pcVar17 = "";
        if ((bVar21 & 2) != 0) {
          pcVar17 = "u";
        }
        uVar8 = FUN_1003ac5c0(param_2);
        pcVar22 = "uint_";
        if (((*(byte *)(lVar2 + 0x23) & 2) == 0) &&
           (pcVar22 = "", (*(byte *)(lVar2 + 0x23) & 4) != 0)) {
          pcVar22 = "rcpFloat_";
        }
        FUN_10038e8e0(local_460,"\n%svec4 %s_resinfo_%st%u(int lod)\n{\n",pcVar17,uVar8,pcVar22,
                      uVar4);
        FUN_10038e8e0(local_460,"\treturn ");
        if ((*(byte *)(lVar2 + 0x23) & 4) != 0) {
          FUN_10038e8e0(local_460,"%svec4(1)/",pcVar17);
        }
        if ((pbVar20[2] & 4) == 0) {
          FUN_10038e8e0(local_460,"%svec4(0)",pcVar17);
        }
        else {
          FUN_10038e8e0(local_460,"%svec4(",pcVar17);
          bVar21 = *pbVar20;
          uVar16 = 0;
          uVar14 = 0;
          uVar5 = 0;
          uVar15 = 0;
          bVar27 = bVar21 - 2 < 9;
          if (bVar27) {
            uVar5 = (uint)(byte)(&DAT_100b3f2f2)[bVar21] << 0x10;
            uVar15 = (uint)(byte)(&DAT_100b3f2fb)[bVar21] << 8;
            uVar14 = 0x2000000;
          }
          local_47c = uVar14 | uVar5 | uVar15 | (uint)bVar27;
          ppuVar24 = &PTR_s_vec4_tc_100bbd538;
          puVar25 = &local_47c;
          do {
            switch((char)*puVar25) {
            case '\0':
              FUN_10038e8e0(local_460,"0");
              break;
            case '\x01':
              uVar8 = FUN_1003ac5c0(param_2);
              pcVar17 = "x";
              if (uVar16 - 1 < 3) {
                pcVar17 = *ppuVar24;
              }
              FUN_10038e8e0(local_460,"max(1, %s_resinfo%u.%s >> lod)",uVar8,uVar4,pcVar17);
              break;
            case '\x02':
              uVar8 = FUN_1003ac5c0(param_2);
              pcVar17 = "x";
              if (uVar16 - 1 < 3) {
                pcVar17 = *ppuVar24;
              }
              FUN_10038e8e0(local_460,"%s_resinfo%u.%s",uVar8,uVar4,pcVar17);
              break;
            case '\x03':
              uVar8 = FUN_1003ac5c0(param_2);
              pcVar17 = "x";
              if (uVar16 - 1 < 3) {
                pcVar17 = *ppuVar24;
              }
              FUN_10038e8e0(local_460,"%s_resinfo%u.%s / 6",uVar8,uVar4,pcVar17);
            }
            if (uVar16 < 3) {
              FUN_10038e8e0(local_460,", ");
            }
            else {
              FUN_10038e8e0(local_460,")");
            }
            puVar25 = (uint *)((long)puVar25 + 1);
            uVar16 = uVar16 + 1;
            ppuVar24 = ppuVar24 + 1;
          } while (uVar16 < 4);
        }
        FUN_10038e8e0(local_460,";\n}\n");
        bVar21 = *(byte *)(lVar2 + 0x23);
      }
      if ((bVar21 & 8) != 0) {
        uVar8 = FUN_1003ac5c0(param_2);
        FUN_10038e8e0(local_460,"\nvec4 %s_samplepos_t%u(ivec4 SampleIndex) { return vec4(0); }\n",
                      uVar8,uVar4);
        bVar21 = *(byte *)(lVar2 + 0x23);
      }
      if ((bVar21 & 0x30) != 0) {
        uVar8 = FUN_1003ac5c0(param_2);
        pcVar17 = "";
        if ((bVar21 & 0x20) != 0) {
          pcVar17 = "u";
        }
        bVar27 = (*(byte *)(lVar2 + 0x23) & 0x20) != 0;
        pcVar22 = "";
        if (bVar27) {
          pcVar22 = "uint_";
        }
        in_stack_fffffffffffffab8 = "";
        if (bVar27) {
          in_stack_fffffffffffffab8 = "u";
        }
        FUN_10038e8e0(local_460,"\n%svec4 %s_sampleinfo_%st%u() { return %svec4",pcVar17,uVar8,
                      pcVar22,uVar4,in_stack_fffffffffffffab8);
        if ((pbVar20[2] & 4) == 0) {
          FUN_10038e8e0(local_460,"(0); }\n");
        }
        else {
          uVar8 = FUN_1003ac5c0(param_2);
          FUN_10038e8e0(local_460,"(%s_resinfo%u.wwww); }\n",uVar8,uVar4);
        }
      }
    } while (pbVar20 == (byte *)0x0);
    pbVar20 = *(byte **)(pbVar20 + 0x18);
  } while( true );
}

