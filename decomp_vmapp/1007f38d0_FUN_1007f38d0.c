
ulong FUN_1007f38d0(uint *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  char *local_138;
  int *local_128;
  long local_120;
  long local_108;
  long local_100;
  uint local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [48];
  undefined1 local_b8 [128];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar8;
  FUN_10088a650(local_e8);
  uVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x60))
                    (param_1,0x1140,0x1141,0xffffffff,*(undefined8 *)(param_1 + 0x6e),&local_f0);
  if (local_f0 == 0) goto LAB_1007f4b7a;
  lVar9 = *(long *)(param_1 + 0x20);
  uVar13 = *(ulong *)(*(long *)(lVar9 + 0x3a8) + 0x18);
  if (*(int *)(lVar9 + 0x3a0) == 0xc) {
    pcVar3 = *(char **)(param_1 + 0x16);
    lVar8 = *(long *)(*(long *)(param_1 + 0x4c) + 0xa8);
    if (lVar8 == 0) {
      uVar11 = FUN_1008123f0();
      *(undefined8 *)(*(long *)(param_1 + 0x4c) + 0xa8) = uVar11;
    }
    else {
      if (*(long *)(lVar8 + 0xd8) != 0) {
        FUN_10086c430();
        lVar8 = *(long *)(*(long *)(param_1 + 0x4c) + 0xa8);
        *(undefined8 *)(lVar8 + 0xd8) = 0;
      }
      if (*(long *)(lVar8 + 0xe0) != 0) {
        FUN_100876b00();
        lVar8 = *(long *)(*(long *)(param_1 + 0x4c) + 0xa8);
        *(undefined8 *)(lVar8 + 0xe0) = 0;
      }
      if (*(long *)(lVar8 + 0xe8) != 0) {
        FUN_100863f80();
        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0xe8) = 0;
      }
    }
    uVar4 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x20);
    local_ec = 0x32;
    if ((uVar13 & 0x100) != 0) {
      if ((long)uVar7 < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x56a;
      }
      else {
        uVar13 = (ulong)CONCAT11(*pcVar3,pcVar3[1]);
        if (uVar13 < 0x81) {
          lVar8 = uVar7 - 2;
          uVar7 = lVar8 - uVar13;
          if (lVar8 < (long)uVar13) {
            uVar11 = 0x13c;
            uVar14 = 0x57c;
          }
          else {
            lVar8 = FUN_10087d0e0(pcVar3 + 2);
            *(long *)(*(long *)(param_1 + 0x4c) + 0x90) = lVar8;
            if (lVar8 == 0) {
              local_ec = 0x28;
              uVar11 = 0x41;
              uVar14 = 0x584;
            }
            else {
LAB_1007f4aac:
              local_128 = (int *)0x0;
              if (uVar7 == 0) goto LAB_1007f5045;
              uVar11 = 0x99;
              uVar14 = 0x797;
            }
          }
        }
        else {
          local_ec = 0x28;
          uVar11 = 0x92;
          uVar14 = 0x577;
        }
      }
LAB_1007f4ad3:
      FUN_100887ce0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
      goto LAB_1007f4ad8;
    }
    if ((uVar13 & 0x400) != 0) {
      if ((long)uVar7 < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x590;
      }
      else {
        uVar13 = (ulong)CONCAT11(*pcVar3,pcVar3[1]);
        if ((long)(uVar7 - 2) < (long)uVar13) {
          uVar11 = 0x15e;
          uVar14 = 0x596;
        }
        else {
          lVar8 = FUN_10084bc20(pcVar3 + 2,CONCAT11(*pcVar3,pcVar3[1]),0);
          *(long *)(param_1 + 0xb4) = lVar8;
          if (lVar8 == 0) {
            uVar11 = 3;
            uVar14 = 0x59c;
LAB_1007f3e0e:
            FUN_100887ce0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
            local_128 = (int *)0x0;
            local_100 = 0;
            local_108 = 0;
            lVar8 = 0;
            goto LAB_1007f3e1d;
          }
          if ((long)(uVar7 - (uVar13 + 2)) < 2) {
            uVar11 = 0xa0;
            uVar14 = 0x5a2;
          }
          else {
            lVar8 = uVar13 + 4;
            uVar12 = (ulong)CONCAT11(pcVar3[uVar13 + 2],pcVar3[uVar13 + 3]);
            if ((long)(uVar7 - lVar8) < (long)uVar12) {
              uVar11 = 0x15d;
              uVar14 = 0x5aa;
            }
            else {
              lVar9 = FUN_10084bc20(pcVar3 + lVar8,CONCAT11(pcVar3[uVar13 + 2],pcVar3[uVar13 + 3]),0
                                   );
              *(long *)(param_1 + 0xb6) = lVar9;
              if (lVar9 == 0) {
                uVar11 = 3;
                uVar14 = 0x5b0;
                goto LAB_1007f3e0e;
              }
              lVar8 = uVar12 + lVar8;
              if (lVar8 < (long)uVar7) {
                uVar13 = (ulong)(byte)pcVar3[lVar8];
                lVar8 = lVar8 + 1;
                if ((long)(uVar7 - lVar8) < (long)uVar13) {
                  uVar11 = 0x15f;
                  uVar14 = 0x5bf;
                }
                else {
                  lVar9 = FUN_10084bc20(pcVar3 + lVar8,uVar13,0);
                  *(long *)(param_1 + 0xb8) = lVar9;
                  if (lVar9 == 0) {
                    uVar11 = 3;
                    uVar14 = 0x5c5;
                    goto LAB_1007f3e0e;
                  }
                  lVar8 = uVar13 + lVar8;
                  if ((long)(uVar7 - lVar8) < 2) {
                    uVar11 = 0xa0;
                    uVar14 = 0x5cb;
                  }
                  else {
                    local_120 = lVar8 + 2;
                    uVar13 = (ulong)CONCAT11(pcVar3[lVar8],pcVar3[lVar8 + 1]);
                    if ((long)(uVar7 - local_120) < (long)uVar13) {
                      uVar11 = 0x15c;
                      uVar14 = 0x5d3;
                    }
                    else {
                      lVar8 = FUN_10084bc20(pcVar3 + local_120,uVar13,0);
                      *(long *)(param_1 + 0xba) = lVar8;
                      if (lVar8 == 0) {
                        uVar11 = 3;
                        uVar14 = 0x5d9;
                        goto LAB_1007f3e0e;
                      }
                      iVar5 = FUN_10081c640(param_1,&local_ec);
                      if (iVar5 != 0) {
                        local_120 = uVar13 + local_120;
                        local_138 = pcVar3 + local_120;
                        uVar7 = uVar7 - local_120;
                        if ((uVar4 & 1) == 0) {
                          if ((uVar4 & 2) == 0) goto LAB_1007f4aa0;
                          uVar11 = *(undefined8 *)
                                    (*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x48);
                        }
                        else {
                          uVar11 = *(undefined8 *)
                                    (*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x18);
                        }
                        local_128 = (int *)FUN_1008b7420(uVar11);
                        goto LAB_1007f4a45;
                      }
                      uVar11 = 0x173;
                      uVar14 = 0x5e0;
                    }
                  }
                }
              }
              else {
                uVar11 = 0xa0;
                uVar14 = 0x5b6;
              }
            }
          }
        }
      }
      goto LAB_1007f4ad3;
    }
    if ((uVar13 & 1) != 0) {
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x40) & 2) == 0) {
        local_ec = 10;
        uVar11 = 0xf4;
        uVar14 = 0x5fb;
        goto LAB_1007f4ad3;
      }
      lVar9 = FUN_10086c160();
      if (lVar9 == 0) {
        uVar11 = 0x41;
        uVar14 = 0x5ff;
        goto LAB_1007f3e0e;
      }
      if ((long)uVar7 < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x605;
LAB_1007f4239:
        FUN_100887ce0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
        goto LAB_1007f4add;
      }
      uVar13 = (ulong)CONCAT11(*pcVar3,pcVar3[1]);
      if ((long)(uVar7 - 2) < (long)uVar13) {
        uVar11 = 0x79;
        uVar14 = 0x60b;
        goto LAB_1007f4239;
      }
      lVar8 = FUN_10084bc20(pcVar3 + 2,CONCAT11(*pcVar3,pcVar3[1]),*(undefined8 *)(lVar9 + 0x20));
      *(long *)(lVar9 + 0x20) = lVar8;
      if (lVar8 == 0) {
        uVar11 = 3;
        uVar14 = 0x611;
        goto LAB_1007f41b0;
      }
      if ((long)(uVar7 - (uVar13 + 2)) < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x617;
        goto LAB_1007f4239;
      }
      local_120 = uVar13 + 4;
      uVar13 = (ulong)CONCAT11(pcVar3[uVar13 + 2],pcVar3[uVar13 + 3]);
      if ((long)(uVar7 - local_120) < (long)uVar13) {
        uVar11 = 0x78;
        uVar14 = 0x61f;
        goto LAB_1007f4239;
      }
      lVar8 = FUN_10084bc20(pcVar3 + local_120,uVar13,*(undefined8 *)(lVar9 + 0x28));
      *(long *)(lVar9 + 0x28) = lVar8;
      if (lVar8 != 0) {
        if ((uVar4 & 1) == 0) {
          uVar11 = 0x44;
          uVar14 = 0x631;
          goto LAB_1007f41b0;
        }
        local_128 = (int *)FUN_1008b7420(*(undefined8 *)
                                          (*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x18));
        iVar5 = FUN_100891d50(local_128);
        if ((int)((~(*(int *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x40) << 6) & 0x200U) +
                 0x200) < iVar5) {
          local_120 = uVar13 + local_120;
          local_138 = pcVar3 + local_120;
          uVar7 = uVar7 - local_120;
          *(long *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0xd8) = lVar9;
          goto LAB_1007f4a45;
        }
        local_ec = 10;
        FUN_100887ce0(0x14,0x8d,0xf4,"s3_clnt.c",0x637);
        local_100 = 0;
        local_108 = 0;
        lVar10 = 0;
        lVar8 = 0;
        goto LAB_1007f4af5;
      }
      uVar11 = 3;
      uVar14 = 0x625;
LAB_1007f41b0:
      FUN_100887ce0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
      lVar8 = 0;
      FUN_1008924e0(0);
      lVar10 = 0;
      local_108 = 0;
      local_100 = 0;
      goto LAB_1007f4b26;
    }
    if ((uVar13 & 8) != 0) {
      local_100 = FUN_1008768f0();
      if (local_100 == 0) {
        uVar11 = 5;
        uVar14 = 0x644;
        goto LAB_1007f3e0e;
      }
      if ((long)uVar7 < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x64a;
      }
      else {
        uVar13 = (ulong)CONCAT11(*pcVar3,pcVar3[1]);
        if ((long)(uVar7 - 2) < (long)uVar13) {
          uVar11 = 0x6e;
          uVar14 = 0x650;
        }
        else {
          lVar8 = FUN_10084bc20(pcVar3 + 2,CONCAT11(*pcVar3,pcVar3[1]),0);
          *(long *)(local_100 + 8) = lVar8;
          if (lVar8 == 0) {
            uVar11 = 0x656;
LAB_1007f417b:
            FUN_100887ce0(0x14,0x8d,3,"s3_clnt.c",uVar11);
            local_128 = (int *)0x0;
            local_108 = 0;
            lVar8 = 0;
            goto LAB_1007f3e1d;
          }
          if (*(int *)(lVar8 + 8) == 0) {
            uVar11 = 0x18b;
            uVar14 = 0x65c;
          }
          else if ((long)(uVar7 - (uVar13 + 2)) < 2) {
            uVar11 = 0xa0;
            uVar14 = 0x662;
          }
          else {
            lVar8 = uVar13 + 4;
            uVar12 = (ulong)CONCAT11(pcVar3[uVar13 + 2],pcVar3[uVar13 + 3]);
            if ((long)(uVar7 - lVar8) < (long)uVar12) {
              uVar11 = 0x6c;
              uVar14 = 0x66a;
            }
            else {
              lVar9 = FUN_10084bc20(pcVar3 + lVar8,CONCAT11(pcVar3[uVar13 + 2],pcVar3[uVar13 + 3]),0
                                   );
              *(long *)(local_100 + 0x10) = lVar9;
              if (lVar9 == 0) {
                uVar11 = 0x670;
                goto LAB_1007f417b;
              }
              if (*(int *)(lVar9 + 8) == 0) {
                uVar11 = 0x177;
                uVar14 = 0x676;
              }
              else {
                lVar8 = uVar12 + lVar8;
                if ((long)(uVar7 - lVar8) < 2) {
                  uVar11 = 0xa0;
                  uVar14 = 0x67b;
                }
                else {
                  local_120 = lVar8 + 2;
                  uVar13 = (ulong)CONCAT11(pcVar3[lVar8],pcVar3[lVar8 + 1]);
                  if ((long)uVar13 <= (long)(uVar7 - local_120)) {
                    lVar8 = FUN_10084bc20(pcVar3 + local_120,
                                          CONCAT11(pcVar3[lVar8],pcVar3[lVar8 + 1]),0);
                    *(long *)(local_100 + 0x20) = lVar8;
                    if (lVar8 == 0) {
                      uVar11 = 0x689;
                      goto LAB_1007f417b;
                    }
                    if (*(int *)(lVar8 + 8) == 0) {
                      uVar11 = 0x189;
                      uVar14 = 0x690;
                      goto LAB_1007f4964;
                    }
                    local_120 = uVar13 + local_120;
                    if ((uVar4 & 1) == 0) {
                      local_128 = (int *)0x0;
                      if ((uVar4 & 2) != 0) {
                        uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x48)
                        ;
                        goto LAB_1007f4a00;
                      }
                    }
                    else {
                      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x18);
LAB_1007f4a00:
                      local_128 = (int *)FUN_1008b7420(uVar11);
                    }
                    local_138 = pcVar3 + local_120;
                    uVar7 = uVar7 - local_120;
                    *(long *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0xe0) = local_100;
                    goto LAB_1007f4a45;
                  }
                  uVar11 = 0x6d;
                  uVar14 = 0x683;
                }
              }
            }
          }
        }
      }
LAB_1007f4964:
      FUN_100887ce0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
      lVar9 = 0;
      goto LAB_1007f4ae6;
    }
    if ((uVar13 & 6) != 0) {
      local_ec = 0x2f;
      uVar11 = 0xeb;
      uVar14 = 0x6aa;
      goto LAB_1007f4ad3;
    }
    if ((uVar13 & 0x80) == 0) {
      if (uVar13 != 0) {
        local_ec = 10;
        uVar11 = 0xf4;
        uVar14 = 0x71a;
        goto LAB_1007f4ad3;
      }
LAB_1007f4aa0:
      if ((uVar4 & 0x404) != 0) goto LAB_1007f4aac;
      uVar11 = 0x44;
      uVar14 = 0x792;
      goto LAB_1007f3e0e;
    }
    local_108 = FUN_100863e40();
    if (local_108 == 0) {
      uVar11 = 0x41;
      uVar14 = 0x6b5;
      goto LAB_1007f3e0e;
    }
    if ((long)uVar7 < 4) {
      uVar11 = 0xa0;
      uVar14 = 0x6c6;
LAB_1007f428c:
      FUN_100887ce0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
      lVar9 = 0;
      local_100 = 0;
      goto LAB_1007f4aef;
    }
    if ((*pcVar3 != '\x03') || (iVar5 = FUN_100801b00(pcVar3[2]), iVar5 == 0)) {
      local_ec = 0x50;
      uVar11 = 0x13a;
      uVar14 = 0x6ce;
      goto LAB_1007f428c;
    }
    lVar8 = FUN_1008610e0(iVar5);
    if (lVar8 == 0) {
      FUN_100887ce0(0x14,0x8d,0x10,"s3_clnt.c",0x6d4);
      local_128 = (int *)0x0;
      local_100 = 0;
      lVar8 = 0;
LAB_1007f3e1d:
      FUN_1008924e0(local_128);
      lVar10 = 0;
      goto LAB_1007f4b2b;
    }
    iVar5 = FUN_1008648e0(local_108,lVar8);
    if (iVar5 == 0) {
      FUN_100887ce0(0x14,0x8d,0x10,"s3_clnt.c",0x6d8);
      local_128 = (int *)0x0;
      local_100 = 0;
      lVar8 = 0;
      goto LAB_1007f3e1d;
    }
    FUN_10085af70(lVar8);
    uVar11 = FUN_1008648d0(local_108);
    if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x40) & 2) != 0) &&
       (iVar5 = FUN_10085bc50(uVar11), 0xa3 < iVar5)) {
      local_ec = 0x3c;
      uVar11 = 0x136;
      uVar14 = 0x6e3;
      goto LAB_1007f428c;
    }
    lVar8 = FUN_10085b6e0(uVar11);
    if ((lVar8 == 0) || (lVar10 = FUN_10084c820(), lVar10 == 0)) {
      FUN_100887ce0(0x14,0x8d,0x41,"s3_clnt.c",0x6ec);
      local_128 = (int *)0x0;
      local_100 = 0;
      goto LAB_1007f3e1d;
    }
    uVar13 = (ulong)(byte)pcVar3[3];
    if (((long)(uVar7 - 4) < (long)uVar13) ||
       (iVar5 = FUN_10086a2a0(uVar11,lVar8,pcVar3 + 4,uVar13,lVar10), iVar5 == 0)) {
      FUN_100887ce0(0x14,0x8d,0x132,"s3_clnt.c",0x6f6);
      local_128 = (int *)0x0;
      lVar9 = 0;
      local_100 = 0;
      goto LAB_1007f4af5;
    }
    local_120 = uVar13 + 4;
    if ((uVar4 & 1) == 0) {
      local_128 = (int *)0x0;
      if ((uVar4 & 0x40) != 0) {
        uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x90);
        goto LAB_1007f4986;
      }
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x18);
LAB_1007f4986:
      local_128 = (int *)FUN_1008b7420(uVar11);
    }
    uVar7 = uVar7 - local_120;
    local_138 = pcVar3 + uVar13 + 4;
    FUN_100864890(local_108,lVar8);
    *(long *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0xe8) = local_108;
    FUN_10084c8b0(lVar10);
    FUN_10085b080(lVar8);
LAB_1007f4a45:
    if (local_128 == (int *)0x0) goto LAB_1007f4aa0;
    if ((0x302 < (int)*param_1) && ((*param_1 & 0xffffff00) == 0x300)) {
      if ((long)uVar7 < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x726;
      }
      else {
        uVar6 = FUN_100804c20(local_128);
        if (uVar6 == 0xffffffff) {
          FUN_100887ce0(0x14,0x8d,0x44,"s3_clnt.c",0x72d);
          local_100 = 0;
          local_108 = 0;
          lVar8 = 0;
          goto LAB_1007f3e1d;
        }
        if (uVar6 != (byte)local_138[1]) {
          FUN_100887ce0(0x14,0x8d,0x172,"s3_clnt.c",0x733);
          local_ec = 0x32;
          goto LAB_1007f4e4f;
        }
        lVar8 = FUN_100804c60(*local_138);
        if (lVar8 != 0) {
          local_138 = local_138 + 2;
          uVar7 = uVar7 - 2;
          goto LAB_1007f4bc2;
        }
        uVar11 = 0x170;
        uVar14 = 0x739;
      }
LAB_1007f4e4a:
      FUN_100887ce0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
LAB_1007f4e4f:
      lVar9 = 0;
      local_100 = 0;
      local_108 = 0;
      lVar10 = 0;
      lVar8 = 0;
      goto LAB_1007f4af5;
    }
    lVar8 = FUN_100891760();
LAB_1007f4bc2:
    if ((long)uVar7 < 2) {
      uVar11 = 0xa0;
      uVar14 = 0x745;
      goto LAB_1007f4e4a;
    }
    cVar1 = *local_138;
    cVar2 = local_138[1];
    uVar13 = (ulong)CONCAT11(cVar1,cVar2);
    iVar5 = FUN_100891d80(local_128);
    if (((uVar13 != uVar7 - 2) || (uVar13 == 0)) || ((long)iVar5 < (long)uVar13)) {
      uVar11 = 0x108;
      uVar14 = 0x751;
      goto LAB_1007f4e4a;
    }
    if ((*local_128 == 6) && (((int)*param_1 < 0x303 || ((*param_1 & 0xffffff00) != 0x300)))) {
      FUN_100894730(local_e8,8);
      iVar5 = FUN_10088a720(local_e8,*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0xe8),0);
      if ((((0 < iVar5) &&
           (iVar5 = FUN_10088a910(local_e8,*(long *)(param_1 + 0x20) + 0xc4,0x20), 0 < iVar5)) &&
          (iVar5 = FUN_10088a910(local_e8,*(long *)(param_1 + 0x20) + 0xa4,0x20), 0 < iVar5)) &&
         ((iVar5 = FUN_10088a910(local_e8,pcVar3,local_120), 0 < iVar5 &&
          (iVar5 = FUN_10088a9c0(local_e8,local_b8,&local_f4), uVar6 = local_f4, 0 < iVar5)))) {
        uVar7 = (ulong)local_f4;
        FUN_100894730(local_e8,8);
        iVar5 = FUN_10088a720(local_e8,*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0xf0),0);
        if ((((0 < iVar5) &&
             ((iVar5 = FUN_10088a910(local_e8,*(long *)(param_1 + 0x20) + 0xc4,0x20), 0 < iVar5 &&
              (iVar5 = FUN_10088a910(local_e8,*(long *)(param_1 + 0x20) + 0xa4,0x20), 0 < iVar5))))
            && (iVar5 = FUN_10088a910(local_e8,pcVar3,local_120), 0 < iVar5)) &&
           (iVar5 = FUN_10088a9c0(local_e8,local_b8 + uVar7,&local_f4), 0 < iVar5)) {
          iVar5 = FUN_10086ce40(0x72,local_b8,uVar6 + local_f4,local_138 + 2,CONCAT11(cVar1,cVar2),
                                *(undefined8 *)(local_128 + 8));
          if (iVar5 < 0) {
            local_ec = 0x33;
            uVar11 = 0x76;
            uVar14 = 0x772;
          }
          else {
            if (iVar5 != 0) goto LAB_1007f5045;
            local_ec = 0x33;
            uVar11 = 0x7b;
            uVar14 = 0x778;
          }
          goto LAB_1007f4e4a;
        }
      }
      FUN_100887ce0(0x14,0x8d,0x44,"s3_clnt.c",0x768);
      local_ec = 0x50;
      goto LAB_1007f4e4f;
    }
    iVar5 = FUN_10088a720(local_e8,lVar8,0);
    if ((iVar5 < 1) ||
       (((iVar5 = FUN_10088a910(local_e8,*(long *)(param_1 + 0x20) + 0xc4,0x20), iVar5 < 1 ||
         (iVar5 = FUN_10088a910(local_e8,*(long *)(param_1 + 0x20) + 0xa4,0x20), iVar5 < 1)) ||
        (iVar5 = FUN_10088a910(local_e8,pcVar3,local_120), iVar5 < 1)))) {
      local_ec = 0x50;
      uVar11 = 6;
      uVar14 = 0x785;
      goto LAB_1007f4e4a;
    }
    iVar5 = FUN_100891b50(local_e8,local_138 + 2,CONCAT11(cVar1,cVar2),local_128);
    if (iVar5 < 1) {
      local_ec = 0x33;
      uVar11 = 0x7b;
      uVar14 = 0x78b;
      goto LAB_1007f4e4a;
    }
LAB_1007f5045:
    FUN_1008924e0(local_128);
    FUN_10088aa50(local_e8);
    uVar7 = 1;
  }
  else {
    if ((uVar13 & 0x88) == 0) {
      if ((uVar13 & 0x100) != 0) {
        uVar11 = FUN_1008123f0();
        *(undefined8 *)(*(long *)(param_1 + 0x4c) + 0xa8) = uVar11;
        lVar9 = *(long *)(param_1 + 0x5c);
        if (*(long *)(lVar9 + 0x208) != 0) {
          FUN_10081e1a0();
          lVar9 = *(long *)(param_1 + 0x5c);
        }
        *(undefined8 *)(lVar9 + 0x208) = 0;
        lVar9 = *(long *)(param_1 + 0x20);
      }
      *(undefined4 *)(lVar9 + 0x3c4) = 1;
      uVar7 = 1;
      goto LAB_1007f4b7a;
    }
    FUN_100887ce0(0x14,0x8d,0xf4,"s3_clnt.c",0x532);
    local_ec = 10;
LAB_1007f4ad8:
    lVar9 = 0;
LAB_1007f4add:
    local_100 = 0;
LAB_1007f4ae6:
    local_108 = 0;
LAB_1007f4aef:
    local_128 = (int *)0x0;
    lVar10 = 0;
    lVar8 = 0;
LAB_1007f4af5:
    FUN_1007fd650(param_1,2,local_ec);
    FUN_1008924e0(local_128);
    if (lVar9 != 0) {
LAB_1007f4b26:
      FUN_10086c430(lVar9);
    }
LAB_1007f4b2b:
    if (local_100 != 0) {
      FUN_100876b00(local_100);
    }
    FUN_10084c8b0(lVar10);
    FUN_10085b080(lVar8);
    if (local_108 != 0) {
      FUN_100863f80(local_108);
    }
    FUN_10088aa50(local_e8);
    param_1[0x12] = 5;
    uVar7 = 0xffffffff;
  }
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1007f4b7a:
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}

