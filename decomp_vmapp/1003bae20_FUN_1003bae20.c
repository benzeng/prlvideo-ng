
undefined8 FUN_1003bae20(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  char *pcVar8;
  long *plVar9;
  byte bVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  int iVar14;
  
  plVar13 = *(long **)(param_1 + 0x10);
  iVar14 = (int)plVar13[0x2a];
  if (iVar14 != 0) {
    lVar5 = plVar13[0x2c] - plVar13[0x2b];
    if (lVar5 == 0) {
      bVar4 = 0;
    }
    else {
      bVar10 = 0;
      uVar3 = 1;
      uVar11 = 0;
      do {
        uVar7 = uVar3;
        lVar1 = *(long *)(plVar13[0x2b] + uVar11 * 8);
        lVar2 = *(long *)(lVar1 + 0x80);
        pbVar6 = (byte *)(lVar2 + 0x48);
        if (lVar2 == 0) {
          pbVar6 = (byte *)(lVar1 + 0x7c);
        }
        bVar10 = bVar10 | *pbVar6;
        bVar4 = 0xf;
      } while ((bVar10 != 0xf) &&
              (uVar3 = (ulong)((int)uVar7 + 1), uVar11 = uVar7, bVar4 = bVar10,
              uVar7 < (ulong)(lVar5 >> 3)));
    }
    if ((bVar4 & 8) != 0) {
      uVar12 = *(undefined8 *)(param_1 + 8);
      lVar5 = (**(code **)(*plVar13 + 0x20))(plVar13);
      pcVar8 = "ps";
      if (lVar5 == 0) {
        lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13);
        if (lVar5 == 0) {
          lVar5 = (**(code **)(*plVar13 + 0x18))(plVar13);
          if (lVar5 == 0) {
            lVar5 = (**(code **)(*plVar13 + 0x28))(plVar13);
            if (lVar5 == 0) {
              lVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
              if (lVar5 == 0) {
                lVar5 = (**(code **)(*plVar13 + 0x38))(plVar13);
                pcVar8 = "cs";
                if (lVar5 == 0) {
                  pcVar8 = "??";
                }
              }
              else {
                pcVar8 = "ds";
              }
            }
            else {
              pcVar8 = "hs";
            }
          }
          else {
            pcVar8 = "gs";
          }
        }
        else {
          pcVar8 = "vs";
        }
      }
      FUN_10038e8e0(uVar12,"uniform vec4 %s_ICB[%d];\n",pcVar8,iVar14);
      uVar12 = *(undefined8 *)(param_1 + 8);
      plVar13 = *(long **)(param_1 + 0x10);
      lVar5 = (**(code **)(*plVar13 + 0x20))(plVar13);
      pcVar8 = "ps";
      if (lVar5 == 0) {
        lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13);
        if (lVar5 == 0) {
          lVar5 = (**(code **)(*plVar13 + 0x18))(plVar13);
          if (lVar5 == 0) {
            lVar5 = (**(code **)(*plVar13 + 0x28))(plVar13);
            if (lVar5 == 0) {
              lVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
              if (lVar5 == 0) {
                lVar5 = (**(code **)(*plVar13 + 0x38))(plVar13);
                pcVar8 = "cs";
                if (lVar5 == 0) {
                  pcVar8 = "??";
                }
              }
              else {
                pcVar8 = "ds";
              }
            }
            else {
              pcVar8 = "hs";
            }
          }
          else {
            pcVar8 = "gs";
          }
        }
        else {
          pcVar8 = "vs";
        }
      }
      FUN_10038e8e0(uVar12,"#define ICB(N) %s_ICB[N]\n",pcVar8);
    }
    if ((bVar4 & 7) != 0) {
      uVar12 = *(undefined8 *)(param_1 + 8);
      plVar13 = *(long **)(param_1 + 0x10);
      lVar5 = (**(code **)(*plVar13 + 0x20))(plVar13);
      if (lVar5 == 0) {
        lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13);
        if (lVar5 == 0) {
          lVar5 = (**(code **)(*plVar13 + 0x18))(plVar13);
          if (lVar5 == 0) {
            lVar5 = (**(code **)(*plVar13 + 0x28))(plVar13);
            if (lVar5 == 0) {
              lVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
              if (lVar5 == 0) {
                lVar5 = (**(code **)(*plVar13 + 0x38))(plVar13);
                pcVar8 = "cs";
                if (lVar5 == 0) {
                  pcVar8 = "??";
                }
              }
              else {
                pcVar8 = "ds";
              }
            }
            else {
              pcVar8 = "hs";
            }
          }
          else {
            pcVar8 = "gs";
          }
        }
        else {
          pcVar8 = "vs";
        }
      }
      else {
        pcVar8 = "ps";
      }
      FUN_10038e8e0(uVar12,"uniform ivec4 %s_iICB[%d];\n",pcVar8,iVar14);
      if ((bVar4 & 2) != 0) {
        uVar12 = *(undefined8 *)(param_1 + 8);
        plVar13 = *(long **)(param_1 + 0x10);
        lVar5 = (**(code **)(*plVar13 + 0x20))(plVar13);
        if (lVar5 == 0) {
          lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13);
          if (lVar5 == 0) {
            lVar5 = (**(code **)(*plVar13 + 0x18))(plVar13);
            if (lVar5 == 0) {
              lVar5 = (**(code **)(*plVar13 + 0x28))(plVar13);
              if (lVar5 == 0) {
                lVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
                if (lVar5 == 0) {
                  lVar5 = (**(code **)(*plVar13 + 0x38))(plVar13);
                  pcVar8 = "cs";
                  if (lVar5 == 0) {
                    pcVar8 = "??";
                  }
                }
                else {
                  pcVar8 = "ds";
                }
              }
              else {
                pcVar8 = "hs";
              }
            }
            else {
              pcVar8 = "gs";
            }
          }
          else {
            pcVar8 = "vs";
          }
        }
        else {
          pcVar8 = "ps";
        }
        FUN_10038e8e0(uVar12,"#define iICB(N) %s_iICB[N]\n",pcVar8);
      }
      if ((bVar4 & 1) != 0) {
        uVar12 = *(undefined8 *)(param_1 + 8);
        plVar13 = *(long **)(param_1 + 0x10);
        lVar5 = (**(code **)(*plVar13 + 0x20))(plVar13);
        if (lVar5 == 0) {
          lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13);
          if (lVar5 == 0) {
            lVar5 = (**(code **)(*plVar13 + 0x18))(plVar13);
            if (lVar5 == 0) {
              lVar5 = (**(code **)(*plVar13 + 0x28))(plVar13);
              if (lVar5 == 0) {
                lVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
                if (lVar5 == 0) {
                  lVar5 = (**(code **)(*plVar13 + 0x38))(plVar13);
                  pcVar8 = "cs";
                  if (lVar5 == 0) {
                    pcVar8 = "??";
                  }
                }
                else {
                  pcVar8 = "ds";
                }
              }
              else {
                pcVar8 = "hs";
              }
            }
            else {
              pcVar8 = "gs";
            }
          }
          else {
            pcVar8 = "vs";
          }
        }
        else {
          pcVar8 = "ps";
        }
        FUN_10038e8e0(uVar12,"#define uICB(N) uvec4(%s_iICB[N])\n",pcVar8);
      }
      if ((bVar4 & 4) != 0) {
        uVar12 = *(undefined8 *)(param_1 + 8);
        plVar13 = *(long **)(param_1 + 0x10);
        lVar5 = (**(code **)(*plVar13 + 0x20))(plVar13);
        if (lVar5 == 0) {
          lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13);
          if (lVar5 == 0) {
            lVar5 = (**(code **)(*plVar13 + 0x18))(plVar13);
            if (lVar5 == 0) {
              lVar5 = (**(code **)(*plVar13 + 0x28))(plVar13);
              if (lVar5 == 0) {
                lVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
                if (lVar5 == 0) {
                  lVar5 = (**(code **)(*plVar13 + 0x38))(plVar13);
                  pcVar8 = "cs";
                  if (lVar5 == 0) {
                    pcVar8 = "??";
                  }
                }
                else {
                  pcVar8 = "ds";
                }
              }
              else {
                pcVar8 = "hs";
              }
            }
            else {
              pcVar8 = "gs";
            }
          }
          else {
            pcVar8 = "vs";
          }
        }
        else {
          pcVar8 = "ps";
        }
        FUN_10038e8e0(uVar12,"#define bICB(N) bvec4(%s_iICB[N])\n",pcVar8);
      }
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"\n");
    plVar13 = *(long **)(param_1 + 0x10);
  }
  plVar9 = (long *)plVar13[7];
  if (plVar9 != (long *)0x0) {
    do {
      lVar5 = plVar9[3];
      bVar4 = 8;
      if (lVar5 != 0) {
        pbVar6 = (byte *)(*(long *)(lVar5 + 0x80) + 0x48);
        if (*(long *)(lVar5 + 0x80) == 0) {
          pbVar6 = (byte *)(lVar5 + 0x7c);
        }
        bVar4 = *pbVar6;
      }
      if (bVar4 < 0xf) {
        pcVar8 = "i";
        switch(bVar4) {
        case 1:
          pcVar8 = "u";
          break;
        case 2:
          break;
        default:
switchD_1003bb371_caseD_3:
          pcVar8 = "?";
          break;
        case 4:
          pcVar8 = "b";
          break;
        case 8:
          pcVar8 = "";
        }
      }
      else {
        if (bVar4 != 0xf) goto switchD_1003bb371_caseD_3;
        pcVar8 = "a";
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%svec4 %sX%d[%d];\n",pcVar8,pcVar8,
                    *(undefined4 *)((long)plVar9 + 0xc),(int)plVar9[1]);
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
    plVar13 = *(long **)(param_1 + 0x10);
    if (plVar13[7] != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"\n");
      plVar13 = *(long **)(param_1 + 0x10);
    }
  }
  iVar14 = (int)plVar13[0x2e] + *(int *)((long)plVar13 + 0x174);
  if (iVar14 != 0) {
    lVar5 = *(long *)plVar13[0x21];
    bVar4 = 0;
    if (lVar5 == 0) {
      bVar10 = 0;
    }
    else {
      do {
        pbVar6 = (byte *)(*(long *)(lVar5 + 0x80) + 0x48);
        if (*(long *)(lVar5 + 0x80) == 0) {
          pbVar6 = (byte *)(lVar5 + 0x7c);
        }
        bVar4 = bVar4 | *pbVar6;
        bVar10 = 0xf;
      } while ((bVar4 != 0xf) && (lVar5 = **(long **)(lVar5 + 8), bVar10 = bVar4, lVar5 != 0));
    }
    if ((bVar10 & 8) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"vec4 R[%d];\n",iVar14);
    }
    if ((bVar10 & 4) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"bvec4 bR[%d];\n",iVar14);
    }
    if ((bVar10 & 2) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"ivec4 iR[%d];\n",iVar14);
    }
    if ((bVar10 & 1) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"uvec4 uR[%d];\n",iVar14);
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"\n");
    if ((bVar10 & 8) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"vec4 Tmp0, Tmp1, Tmp2;\n");
    }
    if ((bVar10 & 4) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"bvec4 bTmp0, bTmp1, bTmp2;\n");
    }
    if ((bVar10 & 2) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"ivec4 iTmp0, iTmp1, iTmp2;\n");
    }
    if ((bVar10 & 1) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"uvec4 uTmp0, uTmp1, uTmp2;\n");
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"\n");
    plVar13 = *(long **)(param_1 + 0x10);
  }
  lVar5 = plVar13[0x2f];
  if ((int)lVar5 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 8);
    iVar14 = 0;
    do {
      FUN_10038e8e0(uVar12,"void Label%d();\n",iVar14);
      iVar14 = iVar14 + 1;
      uVar12 = *(undefined8 *)(param_1 + 8);
    } while ((int)lVar5 != iVar14);
    FUN_10038e8e0(uVar12,"\n");
  }
  return 0;
}

